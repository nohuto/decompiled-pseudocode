/*
 * XREFs of ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E7680
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x140037B68 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400CF43C (-ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     NtInputSpaceRegionFromPoint @ 0x1401BA120 (NtInputSpaceRegionFromPoint.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401E54C8 (RIMSetPointerDeviceInputSpace.c)
 * Callees:
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

CLockedInputSpace *__fastcall CLockedInputSpace::CLockedInputSpace(CLockedInputSpace *this, __int64 a2)
{
  __int64 UserSessionState; // rax

  *(_QWORD *)this = 0LL;
  UserSessionState = W32GetUserSessionState(this, a2);
  CEResourceLockShared::CEResourceLockShared(
    (CLockedInputSpace *)((char *)this + 8),
    (struct CEResourceLock *)(UserSessionState + 18640));
  return this;
}
