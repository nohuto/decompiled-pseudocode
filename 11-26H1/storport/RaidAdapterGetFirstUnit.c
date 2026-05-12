/*
 * XREFs of RaidAdapterGetFirstUnit @ 0x140061318
 * Callers:
 *     StorEtwMiniportLogError @ 0x140052C80 (StorEtwMiniportLogError.c)
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 *     StorEtwMiniportLogByteStream @ 0x1400B1628 (StorEtwMiniportLogByteStream.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x14000EDE0 (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterGetFirstUnit(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int CurrentIrql; // esi
  unsigned int i; // ebp
  _QWORD **v5; // r15
  _QWORD *j; // r14
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  v8 = 0LL;
  v9 = RaidpAdapterEnumerateUnit;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < *(_DWORD *)(a1 + 872) )
    LOBYTE(CurrentIrql) = RaidAdapterAcquireInterruptLock(a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 172); ++i )
  {
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 184) + 16LL * i);
    for ( j = *v5; j != v5; j = (_QWORD *)*j )
    {
      if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v9)(&v8, j) )
        goto LABEL_9;
    }
  }
LABEL_9:
  if ( (unsigned int)(unsigned __int8)CurrentIrql < *(_DWORD *)(a1 + 872) )
    RaidAdapterReleaseInterruptLock(a1, CurrentIrql);
  if ( v8 )
    return v8 - 80;
  return v1;
}
