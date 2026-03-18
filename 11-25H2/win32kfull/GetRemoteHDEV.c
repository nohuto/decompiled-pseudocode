/*
 * XREFs of GetRemoteHDEV @ 0x14026BD68
 * Callers:
 *     RemoteShadowCleanup @ 0x140124E84 (RemoteShadowCleanup.c)
 *     RemotePassthruDisable @ 0x1402023C8 (RemotePassthruDisable.c)
 *     CtxDisplayIOCtl @ 0x1402B87FC (CtxDisplayIOCtl.c)
 *     RemoteShadowStart @ 0x1402B894C (RemoteShadowStart.c)
 * Callees:
 *     DrvFindRemoteDriverhdevInMDEV @ 0x140323CE4 (DrvFindRemoteDriverhdevInMDEV.c)
 */

__int64 __fastcall GetRemoteHDEV(__int64 a1, __int64 a2)
{
  __int16 v3; // bx
  __int64 v4; // rcx

  v3 = a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
  if ( (unsigned __int16)(v3 - 1) > 0xFFFDu )
    return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, 1LL) + 56968) + 48LL);
  v4 = *(_QWORD *)(v4 + 16);
  if ( *(_DWORD *)(v4 + 20) == 1 )
    return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, 1LL) + 56968) + 48LL);
  else
    return DrvFindRemoteDriverhdevInMDEV(v4, 1LL, a2);
}
