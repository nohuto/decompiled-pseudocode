/*
 * XREFs of NtGdiLineTo @ 0x140083430
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400790D8 (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x14030EAB0 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x14030EAD8 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x14030EB84 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x14032287C (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiLineTo(HDC a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // esi
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // rax
  _QWORD v11[14]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v12[24]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v13; // [rsp+A8h] [rbp-60h]

  v4 = 0;
  v6 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v13 = v11;
    if ( *(_DWORD *)(v11[0] + 492LL)
      && (*(_DWORD *)(v11[0] + 36LL) & 0x4000) != 0
      && !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v12) )
    {
      DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v12);
      if ( (unsigned int)GrepLineTo((struct XDCOBJ *)v11, a2, a3) )
        v6 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v12);
      DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v12);
    }
    v8 = GrepLineTo((struct XDCOBJ *)v11, a2, a3);
    if ( v6 )
    {
      v10 = UserReferenceDwmApiPort(v7);
      DwmSyncFlushAndWaitForBatch(v10);
    }
    v4 = v8;
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return v4;
}
