/*
 * XREFs of ndisMiniportMessageIsr @ 0x1400426F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMiniportMessageIsr(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  int v8; // r12d
  _PROCESSOR_NUMBER v9; // edx
  unsigned int Number; // ebx
  unsigned __int8 v11; // bp
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v16; // rax
  int v17; // r15d
  unsigned __int64 v18; // rbx
  unsigned int v19; // r12d
  unsigned __int64 v20; // r14
  int v21; // r15d
  __int64 v22; // rbp
  ULONG ProcessorIndexFromNumber; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-44h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h]
  char v27; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int8 v28; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 96);
  v4 = 0;
  v25 = 0;
  v27 = 0;
  v6 = 0LL;
  v7 = a3;
  LOWORD(v8) = 0;
  v9 = *(_PROCESSOR_NUMBER *)(v3 + 48);
  Number = -1;
  ProcNumber = 0;
  if ( *(_DWORD *)&v9 || *(_DWORD *)(v3 + 80) )
  {
    v6 = *(_QWORD *)(v3 + 40);
    v8 = *(_DWORD *)(v3 + 80);
    ProcNumber = v9;
    if ( !v6 )
      v6 = *(_QWORD *)(v3 + 40);
  }
  if ( (v8 & 2) != 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v6 + ndisPcwPerCpuDataStride * Number + 312) = __rdtsc();
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(a2 + 176))(
          *(_QWORD *)(a2 + 8),
          a3,
          &v27,
          &v25);
  v11 = v28;
  if ( (v8 & 2) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v12 = ndisPcwOffsetToPerCpuData;
    v13 = v6 + ndisPcwPerCpuDataStride * Number;
    v14 = __rdtsc();
    *(_QWORD *)(v12 + v13 + 112) += (((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14)
                                  - *(_QWORD *)(v12 + v13 + 312);
    *(_QWORD *)(v12 + v13 + 312) = 0LL;
  }
  if ( v11 && (ProcNumber.Group & 2) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v6 + ndisPcwPerCpuDataStride * Number + 8);
  }
  if ( v27 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc(
           (PRKDPC)(*(_QWORD *)(a2 + 224)
                  + ((unsigned __int64)(ndisMaxNumberOfProcessors + (_DWORD)v7 * (ndisMaxNumberOfProcessors + 1)) << 6)),
           (PVOID)v7,
           0LL) )
    {
      if ( (v8 & 0x1000) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwOffsetToPerCpuData + v6 + ndisPcwPerCpuDataStride * Number + 400) = __rdtsc();
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
    return v11;
  }
  v16 = *(_QWORD *)(a2 + 96);
  v17 = 0;
  v18 = v25;
  v19 = -1;
  v26 = 0LL;
  if ( *(_DWORD *)(v16 + 48) || *(_DWORD *)(v16 + 80) )
  {
    v17 = *(_DWORD *)(v16 + 48);
    v26 = *(_QWORD *)(v16 + 40);
    if ( !v26 )
      v26 = *(_QWORD *)(v16 + 40);
  }
  if ( *(_BYTE *)(a2 + 193) )
    v20 = *(_QWORD *)(a2 + 224) + ((unsigned __int64)((unsigned int)v7 * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v20 = *(_QWORD *)(a2 + 112);
  ProcNumber = 0;
  v21 = v17 & 0x1000000;
  if ( v21 )
    v4 = KeGetPcr()->Prcb.Number;
  if ( !v25 )
    return v11;
  v22 = v26;
  do
  {
    if ( (v18 & 1) != 0 )
    {
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber != -1 )
      {
        if ( ProcessorIndexFromNumber != v4 && v21 )
        {
          if ( v19 == -1 )
            v19 = KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v22 + ndisPcwPerCpuDataStride * v19 + 96);
        }
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
        if ( !KeInsertQueueDpc((PRKDPC)(v20 + ((unsigned __int64)ProcessorIndexFromNumber << 6)), (PVOID)v7, 0LL) )
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
      }
    }
    ++ProcNumber.Number;
    v18 >>= 1;
  }
  while ( v18 );
  return v28;
}
