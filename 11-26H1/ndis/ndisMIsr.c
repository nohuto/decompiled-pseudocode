/*
 * XREFs of ndisMIsr @ 0x14008B280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMIsr(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rsi
  char v4; // r15
  int v5; // r14d
  unsigned int Number; // ebx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int8 v11; // [rsp+58h] [rbp+10h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 104);
  v3 = 0LL;
  v11 = 0;
  v4 = 0;
  v12 = 0;
  LOWORD(v5) = 0;
  Number = -1;
  if ( *(_DWORD *)(v2 + 48) || *(_DWORD *)(v2 + 80) )
  {
    v3 = *(_QWORD *)(v2 + 40);
    v4 = *(_DWORD *)(v2 + 48);
    v5 = *(_DWORD *)(v2 + 80);
    if ( !v3 )
      v3 = *(_QWORD *)(v2 + 40);
  }
  if ( (v5 & 2) != 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v3 + ndisPcwPerCpuDataStride * Number + 312) = __rdtsc();
  }
  if ( (*(_DWORD *)(v2 + 120) & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v2 + 3760) + 128LL))(*(_QWORD *)(v2 + 24));
    v12 = 1;
    v11 = 1;
  }
  else
  {
    (*(void (__fastcall **)(unsigned __int8 *, char *, _QWORD))(a2 + 24))(&v11, &v12, *(_QWORD *)(v2 + 24));
  }
  if ( (v5 & 2) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v8 = ndisPcwOffsetToPerCpuData + v3 + ndisPcwPerCpuDataStride * Number;
    v9 = __rdtsc();
    *(_QWORD *)(v8 + 112) += (((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9) - *(_QWORD *)(v8 + 312);
    *(_QWORD *)(v8 + 312) = 0LL;
  }
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 40), 0LL, 0LL) )
    {
      if ( (v5 & 0x1000) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwOffsetToPerCpuData + v3 + ndisPcwPerCpuDataStride * Number + 400) = __rdtsc();
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
    }
  }
  if ( v11 && (v4 & 2) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v3 + ndisPcwPerCpuDataStride * Number + 8);
  }
  return v11;
}
