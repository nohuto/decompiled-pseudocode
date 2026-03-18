/*
 * XREFs of ?xxxRestoreSlateAutorotationPreferences@CRotationMgr@@UEAAXXZ @ 0x1402730A0
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall CRotationMgr::xxxRestoreSlateAutorotationPreferences(CRotationMgr *this)
{
  if ( *((_DWORD *)this + 3) != *((_DWORD *)this + 2) )
  {
    (*(void (__fastcall **)(CRotationMgr *))(*(_QWORD *)this + 72LL))(this);
    PostShellHookMessagesEx((LastWokenThread *)0x32, *((int *)this + 2));
  }
}
