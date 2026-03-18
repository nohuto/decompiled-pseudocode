/*
 * XREFs of GreGetTextCharsetInfo @ 0x1403050AC
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1400C2AE4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ?GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x140080588 (-GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextCharsetInfo(HDC a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v4; // r8
  unsigned int TextCharsetInfo; // ebx
  _BYTE v7[48]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v8[11]; // [rsp+50h] [rbp-58h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v7,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v8, a1);
  if ( v8[0] )
  {
    TextCharsetInfo = GrepGetTextCharsetInfo((struct UDCOBJ *)v8, 0LL, v4, 1026);
  }
  else
  {
    EngSetLastError(6u);
    TextCharsetInfo = 1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v7);
  return TextCharsetInfo;
}
