/*
 * XREFs of NtGdiFontIsLinked @ 0x1401DF320
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401DF398 (-GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1, __int64 a2)
{
  __int64 SessionState; // rax
  unsigned int IsLinked; // ebx
  _BYTE v6[48]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v7[11]; // [rsp+50h] [rbp-58h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v6,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v7, a1);
  IsLinked = 0;
  if ( v7[0] )
    IsLinked = GrepFontIsLinked(v7);
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v6);
  return IsLinked;
}
