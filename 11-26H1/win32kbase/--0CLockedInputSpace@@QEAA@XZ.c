/*
 * XREFs of ??0CLockedInputSpace@@QEAA@XZ @ 0x14012DBD0
 * Callers:
 *     ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F33C (-ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401C62DC (RIMSetPointerDeviceInputSpace.c)
 *     NtInputSpaceRegionFromPoint @ 0x1401E07D0 (NtInputSpaceRegionFromPoint.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x140217920 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x140217B84 (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

CLockedInputSpace *__fastcall CLockedInputSpace::CLockedInputSpace(CLockedInputSpace *this, int a2, int a3)
{
  __int64 UserSessionState; // rax

  *(_QWORD *)this = 0LL;
  UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
  *((_QWORD *)this + 1) = UserSessionState + 18688;
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  return this;
}
