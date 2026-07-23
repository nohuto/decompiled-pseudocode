/*
 * XREFs of HalpIommuDecreaseAliasTrack @ 0x14058FC60
 * Callers:
 *     HalpIommuBlockDevice @ 0x1404F8D00 (HalpIommuBlockDevice.c)
 * Callees:
 *     IidAreIdsStrictlyEqual @ 0x14071E4B4 (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuDecreaseAliasTrack(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *WaitBlockList; // r11
  __int64 v5; // r11
  struct _KTHREAD *v6; // rcx
  struct _KTHREAD **v7; // rax

  WaitBlockList = (struct _KTHREAD *)HalpDeviceBlockUnblockPushLock.WaitBlockList;
  *a2 = 0LL;
  while ( 1 )
  {
    if ( WaitBlockList == (struct _KTHREAD *)&HalpDeviceBlockUnblockPushLock.WaitBlockList )
      return 3221226021LL;
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(WaitBlockList->Header.WaitListHead.Blink, a1) )
      break;
    WaitBlockList = *(struct _KTHREAD **)v5;
  }
  if ( _InterlockedDecrement64((volatile signed __int64 *)(v5 + 24)) <= -1 )
    __fastfail(0xEu);
  if ( !*(_QWORD *)(v5 + 24) )
  {
    v6 = *(struct _KTHREAD **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(struct _KTHREAD ***)(v5 + 8), *v7 != (struct _KTHREAD *)v5) )
      __fastfail(3u);
    *v7 = v6;
    v6->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v7;
  }
  *a2 = v5;
  return 0LL;
}
