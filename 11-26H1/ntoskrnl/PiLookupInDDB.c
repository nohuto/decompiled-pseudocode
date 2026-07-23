/*
 * XREFs of PiLookupInDDB @ 0x140A38DF8
 * Callers:
 *     PpCheckInDriverDatabase @ 0x140A391E4 (PpCheckInDriverDatabase.c)
 * Callees:
 *     PiIsDriverBlocked @ 0x140A3814C (PiIsDriverBlocked.c)
 *     PiReleaseDDB @ 0x140A38F24 (PiReleaseDDB.c)
 *     PiInitializeDDB @ 0x140A38F80 (PiInitializeDDB.c)
 */

__int64 __fastcall PiLookupInDDB(__int64 a1, void *a2, unsigned int a3, __int128 *a4)
{
  struct _LIST_ENTRY *Blink; // rdi
  _KTRAP_FRAME *TrapFrame; // rcx
  int IsDriverBlocked; // ebx
  _OWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF

  Blink = PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Blink;
  TrapFrame = PspSiloMonitorLock.TrapFrame;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, sizeof(v13));
  if ( !PspSiloMonitorLock.TrapFrame )
  {
    IsDriverBlocked = PiInitializeDDB(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
    if ( IsDriverBlocked < 0 )
      goto LABEL_3;
    TrapFrame = *(_KTRAP_FRAME **)&v12[0];
  }
  IsDriverBlocked = PiIsDriverBlocked((__int64)TrapFrame, a1, a2, a3, a4);
  if ( IsDriverBlocked >= 0 )
  {
    if ( !PspSiloMonitorLock.TrapFrame )
    {
      IsDriverBlocked = PiInitializeDDB(L"\\SystemRoot\\AppPatch\\drvpatch.sdb");
      if ( IsDriverBlocked < 0 )
      {
        IsDriverBlocked = 0;
        goto LABEL_3;
      }
      Blink = *(struct _LIST_ENTRY **)&v13[0];
    }
    if ( Blink )
      IsDriverBlocked = PiIsDriverBlocked((__int64)Blink, a1, a2, a3, a4);
  }
LABEL_3:
  if ( *(_QWORD *)&v12[0] )
    PiReleaseDDB(v12);
  if ( *(_QWORD *)&v13[0] )
    PiReleaseDDB(v13);
  return (unsigned int)IsDriverBlocked;
}
