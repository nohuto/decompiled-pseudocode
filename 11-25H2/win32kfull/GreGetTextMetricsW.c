/*
 * XREFs of GreGetTextMetricsW @ 0x1400C0230
 * Callers:
 *     _GetTextMetricsW @ 0x1400C00C4 (_GetTextMetricsW.c)
 * Callees:
 *     ?GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x14001709C (-GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextMetricsW(HDC a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  unsigned int TextMetricsW; // ebx
  _BYTE v8[48]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v9[11]; // [rsp+50h] [rbp-58h] BYREF

  SessionState = W32GetSessionState(a1, a2, a3);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v8,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v9, a1);
  TextMetricsW = 0;
  if ( v9[0] )
    TextMetricsW = GrepGetTextMetricsW((struct UDCOBJ *)v9, a2, 1027);
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v8);
  return TextMetricsW;
}
