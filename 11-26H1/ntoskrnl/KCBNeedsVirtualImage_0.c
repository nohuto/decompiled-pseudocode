/*
 * XREFs of KCBNeedsVirtualImage_0 @ 0x1404CD70C
 * Callers:
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x1408F40F0 (CmpIsKcbInsideVirtualizedHive.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 */

bool __fastcall KCBNeedsVirtualImage_0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx

  if ( !CmpVEEnabled || (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 || !(unsigned __int8)CmpIsKcbInsideVirtualizedHive() )
    return 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(CurrentThread) == 0;
}
