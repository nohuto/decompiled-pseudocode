/*
 * XREFs of EmonInitializeProfiling @ 0x140BF33D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     EmonFreeCounter @ 0x140597DD8 (EmonFreeCounter.c)
 *     EmonInitializeProfilingBSP @ 0x140597F64 (EmonInitializeProfilingBSP.c)
 *     EmonSetAllocatedCounters @ 0x1405990E0 (EmonSetAllocatedCounters.c)
 */

__int64 EmonInitializeProfiling()
{
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int Number; // r13d
  char v3; // si
  unsigned int v13; // r8d
  unsigned int v14; // edi
  unsigned int v15; // r12d
  int v16; // r14d
  char v22; // r9
  int v28; // r10d
  unsigned __int64 v39; // rsi
  unsigned __int16 *v40; // rbx
  __int64 v41; // r15
  __int64 result; // rax
  unsigned int v43; // r9d
  int v44; // edx
  __int64 i; // rbx
  int v46; // r9d
  unsigned int v47; // r11d
  unsigned __int64 v48; // r10
  unsigned int j; // r9d
  int v50; // edx
  __int64 k; // rbx
  int v52; // r9d
  int v53; // [rsp+70h] [rbp+40h]
  unsigned __int64 v54; // [rsp+78h] [rbp+48h]

  CurrentPrcb = KeGetCurrentPrcb();
  Number = KeGetPcr()->Prcb.Number;
  _RAX = 7LL;
  v3 = 0;
  __asm { cpuid }
  if ( (_DWORD)_RAX )
  {
    _RAX = 7LL;
    __asm { cpuid }
    v3 = (_RAX & 0x100) != 0;
  }
  if ( !Number )
    EmonInitializeProfilingBSP(v3);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( v3 )
  {
    _RAX = 35LL;
    __asm { cpuid }
    v22 = _RAX;
    if ( (_RAX & 2) != 0 )
    {
      _RAX = 35LL;
      __asm { cpuid }
      v14 = _RBX;
      v13 = _RAX;
    }
    v28 = __popcnt(v13);
    v15 = __popcnt(v14);
    v53 = v28;
    if ( (v22 & 8) != 0 )
    {
      _RAX = 35LL;
      __asm { cpuid }
      v16 = _RAX;
    }
  }
  else
  {
    _RAX = 10LL;
    __asm { cpuid }
    LODWORD(_RAX) = (unsigned int)_RAX >> 8;
    v28 = (unsigned __int8)_RAX;
    v13 = (1 << _RAX) - 1;
    v53 = (unsigned __int8)_RAX;
    if ( *(_DWORD *)IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts >= 2u )
    {
      v15 = _RDX & 0xF;
      v14 = (1 << (_RDX & 0xF)) - 1;
    }
    v16 = ~(_DWORD)_RBX;
  }
  v39 = CurrentPrcb->HalReserved[2];
  *(_DWORD *)(v39 + 4) = v28;
  v54 = v13 | ((unsigned __int64)v14 << 32);
  *(_DWORD *)(v39 + 28) = v15;
  EmonSetAllocatedCounters((int *)v39, v13);
  EmonSetAllocatedCounters((int *)(v39 + 24), v14);
  v40 = (unsigned __int16 *)&unk_140E02764;
  v41 = 18LL;
  do
  {
    result = *(unsigned __int8 *)v40;
    if ( *((_BYTE *)v40 + 8) )
    {
      if ( _bittest((const int *)&v14, result) )
        goto LABEL_21;
    }
    else if ( (_BYTE)result != 0xFF && _bittest(&v16, result) || *((_DWORD *)v40 - 77) == 32 && byte_140F87A20 )
    {
LABEL_21:
      result = KeAddProcessorAffinityEx(v40 - 138, Number);
    }
    v40 += 160;
    --v41;
  }
  while ( v41 );
  v43 = 0;
  if ( v53 )
  {
    do
    {
      if ( v43 < *(_DWORD *)(v39 + 4) )
      {
        v44 = 0;
        for ( i = 0LL; (unsigned int)i <= *(_DWORD *)(v39 + 8); i = (unsigned int)(i + 1) )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v39 + 16) + 48 * i + 28) != 3 && ++v44 > v43 )
            goto LABEL_31;
        }
      }
      LODWORD(i) = -1;
LABEL_31:
      __writemsr(i + 390, 0LL);
      result = EmonFreeCounter(i, 0);
      v43 = v46 + 1;
    }
    while ( v43 < v47 );
  }
  if ( v15 )
  {
    __writemsr(0x38Du, 0LL);
    v48 = __readmsr(0x38Fu);
    for ( j = 0; j < v15; j = v52 + 1 )
    {
      if ( j < *(_DWORD *)(v39 + 28) )
      {
        v50 = 0;
        for ( k = 0LL; (unsigned int)k <= *(_DWORD *)(v39 + 32); k = (unsigned int)(k + 1) )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v39 + 40) + 48 * k + 28) != 3 && ++v50 > j )
            goto LABEL_41;
        }
      }
      LODWORD(k) = -1;
LABEL_41:
      _bittestandreset64((__int64 *)&v48, (unsigned int)(k + 32));
      EmonFreeCounter(k, 1);
    }
    result = v48;
    __writemsr(0x38Fu, v48);
  }
  if ( *(_DWORD *)IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts >= 2u )
  {
    result = v54;
    __writemsr(0x390u, v54);
  }
  return result;
}
