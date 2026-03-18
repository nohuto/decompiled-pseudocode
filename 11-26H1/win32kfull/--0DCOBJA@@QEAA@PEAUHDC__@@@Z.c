/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14004129C
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x14004114C (GreConvertMemToRedirectionDC.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x140041200 (DxgkEngAccumD3DPresentBounds.c)
 *     GreSetPaletteEntries @ 0x14017E780 (GreSetPaletteEntries.c)
 *     DxgkEngGetDC @ 0x1401DD4C0 (DxgkEngGetDC.c)
 *     NtGdiIsDcInXfer @ 0x140239880 (NtGdiIsDcInXfer.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14025958C (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreWatchVisRgnChange @ 0x14032632C (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x140326788 (GreConvertRedirectionToMemDC.c)
 *     DxgkEngIsRedirectionDC @ 0x140348950 (DxgkEngIsRedirectionDC.c)
 * Callees:
 *     <none>
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v4 = Gre::Base::Globals(this);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = v4;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 32,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 32) >> 64),
    UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v5) = 1;
  *(_QWORD *)this = HmgShareLock(*((_QWORD *)this + 2), a2, v5, 1LL);
  return this;
}
