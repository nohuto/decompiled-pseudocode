/*
 * XREFs of ndisMiniportIsr @ 0x140055D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMiniportIsr(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v5; // r12
  char v6; // r13
  int v7; // r15d
  unsigned int Number; // ebx
  unsigned __int8 v9; // bp
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  unsigned __int64 v15; // rbx
  int v16; // r14d
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // r13
  int v20; // r14d
  ULONG ProcessorIndexFromNumber; // eax
  char v23; // [rsp+68h] [rbp+10h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 96);
  v3 = 0;
  v25 = 0;
  v23 = 0;
  v5 = 0LL;
  v6 = 0;
  LOWORD(v7) = 0;
  Number = -1;
  if ( *(_DWORD *)(v2 + 48) || *(_DWORD *)(v2 + 80) )
  {
    v5 = *(_QWORD *)(v2 + 40);
    v6 = *(_DWORD *)(v2 + 48);
    v7 = *(_DWORD *)(v2 + 80);
    if ( !v5 )
      v5 = *(_QWORD *)(v2 + 40);
  }
  if ( (v7 & 2) != 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v5 + ndisPcwPerCpuDataStride * Number + 312) = __rdtsc();
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(a2 + 16))(*(_QWORD *)(a2 + 8), &v23, &v25);
  if ( (v7 & 2) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v10 = ndisPcwOffsetToPerCpuData;
    v11 = v5 + ndisPcwPerCpuDataStride * Number;
    v12 = __rdtsc();
    *(_QWORD *)(v10 + v11 + 112) += (((unsigned __int64)HIDWORD(v12) << 32) | (unsigned int)v12)
                                  - *(_QWORD *)(v10 + v11 + 312);
    *(_QWORD *)(v10 + v11 + 312) = 0LL;
  }
  if ( v9 && (v6 & 2) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v5 + ndisPcwPerCpuDataStride * Number + 8);
  }
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 32), 0LL, 0LL) )
    {
      if ( (v7 & 0x1000) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwOffsetToPerCpuData + v5 + ndisPcwPerCpuDataStride * Number + 400) = __rdtsc();
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 96);
    v14 = 0LL;
    v15 = v25;
    v16 = 0;
    v17 = -1;
    if ( *(_DWORD *)(v13 + 48) || *(_DWORD *)(v13 + 80) )
    {
      v14 = *(_QWORD *)(v13 + 40);
      v16 = *(_DWORD *)(v13 + 48);
      if ( !v14 )
        v14 = *(_QWORD *)(v13 + 40);
    }
    v18 = 224LL;
    if ( !*(_BYTE *)(a2 + 193) )
      v18 = 112LL;
    v19 = *(_QWORD *)(v18 + a2);
    ProcNumber = 0;
    v20 = v16 & 0x1000000;
    if ( v20 )
      v3 = KeGetPcr()->Prcb.Number;
    if ( v25 )
    {
      do
      {
        if ( (v15 & 1) != 0 )
        {
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          if ( ProcessorIndexFromNumber != -1 )
          {
            if ( ProcessorIndexFromNumber != v3 && v20 )
            {
              if ( v17 == -1 )
                v17 = KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v14 + ndisPcwPerCpuDataStride * v17 + 96);
            }
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 104));
            if ( !KeInsertQueueDpc((PRKDPC)(v19 + ((unsigned __int64)ProcessorIndexFromNumber << 6)), 0LL, 0LL) )
              _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          }
        }
        ++ProcNumber.Number;
        v15 >>= 1;
      }
      while ( v15 );
    }
  }
  return v9;
}
