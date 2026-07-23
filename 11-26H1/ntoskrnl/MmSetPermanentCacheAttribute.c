/*
 * XREFs of MmSetPermanentCacheAttribute @ 0x140870BD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmSetPermanentCacheAttribute(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  void *v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-18h]

  v12 = 0;
  if ( KeGetCurrentIrql() )
    return 3221225485LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225714LL;
  if ( (a1 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v5 = a1 >> 12;
  v6 = a2 >> 12;
  if ( !(a2 >> 12) )
    return 3221225712LL;
  if ( ((a3 - 1) & 0xFFFFFFFD) != 0 )
    return 3221225713LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x30uLL, 1867082061, CurrentProcessorColor | 0x80000000);
  v9 = (void *)PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  *(_QWORD *)(PoolMm + 24) = v5;
  *(_DWORD *)(PoolMm + 40) = 1;
  *(_QWORD *)(PoolMm + 32) = v5 + v6 - 1;
  v10 = PoolMm;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  KeGenericCallDpcEx((__int64)MiMakeIoRangePermanentDpc, (__int64)&v10);
  result = (unsigned int)v11;
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(v9, 0);
    return (unsigned int)v11;
  }
  return result;
}
