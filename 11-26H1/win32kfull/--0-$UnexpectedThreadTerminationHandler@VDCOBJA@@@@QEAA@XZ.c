/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14001B5B8
 * Callers:
 *     DxgkEngLockVisRgn @ 0x14001B330 (DxgkEngLockVisRgn.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x14001B3E0 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngGetClientRect @ 0x14001B4E0 (DxgkEngGetClientRect.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x14001B600 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     ??0DCOBJA@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@@Z @ 0x1401AAAF8 (--0DCOBJA@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@@Z.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x140310400 (--0DCOBJA@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(
    a1,
    (unsigned __int64)(a1 - 2) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
    UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
