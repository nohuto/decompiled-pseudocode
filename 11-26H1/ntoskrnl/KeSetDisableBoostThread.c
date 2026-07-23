/*
 * XREFs of KeSetDisableBoostThread @ 0x14049D82C
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiSetDisableBoostThread @ 0x14049D8D0 (KiSetDisableBoostThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetDisableBoostThread(struct _KTHREAD *a1)
{
  struct _KTHREAD *v1; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r9
  struct _SINGLE_LIST_ENTRY v7; // [rsp+40h] [rbp+18h] BYREF

  v7.Next = 0LL;
  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v3 = KiSetDisableBoostThread(v1);
  if ( v7.Next )
  {
    LOBYTE(v4) = CurrentIrql;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v7, v4, v5);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v3;
}
