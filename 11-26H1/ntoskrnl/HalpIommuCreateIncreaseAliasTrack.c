/*
 * XREFs of HalpIommuCreateIncreaseAliasTrack @ 0x14058FB54
 * Callers:
 *     HalpIommuUnblockDevice @ 0x140505B10 (HalpIommuUnblockDevice.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpIommuCloneDeviceId @ 0x140513FB8 (HalpIommuCloneDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x14071E4B4 (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuCreateIncreaseAliasTrack(void *Src, struct _LIST_ENTRY **a2)
{
  struct _KTHREAD *i; // r11
  __int64 v5; // r11
  __int64 v7; // rax
  struct _LIST_ENTRY *v8; // rbx
  __int64 v9; // rcx
  int v10; // esi
  struct _LIST_ENTRY *v11; // rcx
  __int64 Flink; // rdx

  for ( i = (struct _KTHREAD *)HalpDeviceBlockUnblockPushLock.WaitBlockList;
        i != (struct _KTHREAD *)&HalpDeviceBlockUnblockPushLock.WaitBlockList;
        i = *(struct _KTHREAD **)v5 )
  {
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(i->Header.WaitListHead.Blink, Src) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
        __fastfail(0xEu);
      *a2 = (struct _LIST_ENTRY *)v5;
      return 0LL;
    }
  }
  v7 = HalpMmAllocCtxAlloc((__int64)Src, 32LL);
  v8 = (struct _LIST_ENTRY *)v7;
  if ( !v7 )
    return 3221225626LL;
  *(_OWORD *)v7 = 0LL;
  *(_OWORD *)(v7 + 16) = 0LL;
  v10 = HalpIommuCloneDeviceId(Src, (__int64 *)(v7 + 16));
  if ( v10 < 0 )
  {
    Flink = (__int64)v8[1].Flink;
    if ( Flink )
      HalpMmAllocCtxFree(v9, Flink);
    HalpMmAllocCtxFree(v9, (__int64)v8);
  }
  else
  {
    v8[1].Blink = (struct _LIST_ENTRY *)1;
    v11 = HalpDeviceBlockUnblockPushLock.WaitListEntry.Flink;
    if ( HalpDeviceBlockUnblockPushLock.WaitListEntry.Flink->Flink != (struct _LIST_ENTRY *)&HalpDeviceBlockUnblockPushLock.WaitBlockList )
      __fastfail(3u);
    v8->Flink = (struct _LIST_ENTRY *)&HalpDeviceBlockUnblockPushLock.WaitBlockList;
    v8->Blink = v11;
    v11->Flink = v8;
    HalpDeviceBlockUnblockPushLock.WaitListEntry.Flink = v8;
    *a2 = v8;
  }
  return (unsigned int)v10;
}
