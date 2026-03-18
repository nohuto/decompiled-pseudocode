/*
 * XREFs of NtGdiRectangle @ 0x1400E7030
 * Callers:
 *     NtGdiRoundRect @ 0x1400E6A70 (NtGdiRoundRect.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E7180 (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x14030EAB0 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x14030EAD8 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x14030EB84 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x14032287C (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiRectangle(HDC a1, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // ebx
  int v9; // esi
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v13; // rax
  _QWORD v14[14]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v15[24]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD *v16; // [rsp+B8h] [rbp-80h]

  v6 = 0;
  v9 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v14, a1);
  if ( v14[0] )
  {
    v16 = v14;
    if ( *(_DWORD *)(v14[0] + 492LL)
      && (*(_DWORD *)(v14[0] + 36LL) & 0x4000) != 0
      && !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v15) )
    {
      DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v15);
      if ( (unsigned int)GrepRectangle((struct XDCOBJ *)v14, a2, a3, a4, a5) )
        v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v15);
      DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v15);
    }
    v11 = GrepRectangle((struct XDCOBJ *)v14, a2, a3, a4, a5);
    if ( v9 )
    {
      v13 = UserReferenceDwmApiPort(v10);
      DwmSyncFlushAndWaitForBatch(v13);
    }
    v6 = v11;
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
  return v6;
}
