/*
 * XREFs of ?RotationLockTogglePressed@CRotationMgr@@UEAAXXZ @ 0x140299F80
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?QueryAutoRotationState@CRotationMgr@@QEAA?AW4tagAR_STATE@@XZ @ 0x1400F9948 (-QueryAutoRotationState@CRotationMgr@@QEAA-AW4tagAR_STATE@@XZ.c)
 *     ?xxxSetSlateAutoRotationState@CRotationMgr@@QEAAJH@Z @ 0x14029A288 (-xxxSetSlateAutoRotationState@CRotationMgr@@QEAAJH@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall CRotationMgr::RotationLockTogglePressed(CRotationMgr *this)
{
  BOOL v2; // ebx

  if ( (unsigned int)CRotationMgr::QueryAutoRotationState(this) <= 1 )
  {
    v2 = *((_DWORD *)this + 2) == 0;
    (*(void (__fastcall **)(CRotationMgr *, bool))(*(_QWORD *)this + 72LL))(this, *((_DWORD *)this + 2) == 0);
    CRotationMgr::xxxSetSlateAutoRotationState(this, v2);
    PostShellHookMessagesEx((LastWokenThread *)0x32, *((int *)this + 2));
  }
}
