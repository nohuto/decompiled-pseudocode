/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14008B5C0
 * Callers:
 *     GreValidateVisrgn @ 0x1400473D4 (GreValidateVisrgn.c)
 *     GreSelectVisRgnShared @ 0x140089820 (GreSelectVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x140089890 (GreLockVisRgnSharedOrExclusive.c)
 *     GreGetDCOrgEx @ 0x14008A850 (GreGetDCOrgEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetDCOrg @ 0x14008B230 (GreSetDCOrg.c)
 *     GreGetBounds @ 0x14008B330 (GreGetBounds.c)
 *     GreIsRendering @ 0x14008B570 (GreIsRendering.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GreCopyVisRgn @ 0x14017D470 (GreCopyVisRgn.c)
 *     GreIntersectVisRect @ 0x14017D540 (GreIntersectVisRect.c)
 * Callees:
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140016E40 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, __int64 a2)
{
  __int64 SessionState; // rax
  _OWORD *v5; // rcx
  DCOBJA *v6; // rdx

  SessionState = W32GetSessionState(this);
  v5 = (_OWORD *)((char *)this + 40);
  v6 = this;
  *((_QWORD *)this + 2) = *(_QWORD *)(SessionState + 88);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  if ( this == (DCOBJA *)-40LL )
    v6 = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 0;
  *v5 = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  PushThreadGuardedObject(v5, v6, UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  *(_QWORD *)this = HmgShareLockEx(a2, 1, 0);
  return this;
}
