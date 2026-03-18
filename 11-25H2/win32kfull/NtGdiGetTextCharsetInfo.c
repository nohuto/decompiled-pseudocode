/*
 * XREFs of NtGdiGetTextCharsetInfo @ 0x140080680
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x140080588 (-GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiGetTextCharsetInfo(HDC a1, void *a2)
{
  __int64 SessionState; // rax
  __int64 v5; // r8
  unsigned int TextCharsetInfo; // ebx
  _QWORD v8[10]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v9[48]; // [rsp+70h] [rbp-58h] BYREF
  __int128 Src; // [rsp+A0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+B0h] [rbp-18h]

  v11 = 0LL;
  Src = 0LL;
  SessionState = W32GetSessionState();
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v9,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v8, a1);
  if ( v8[0] )
  {
    TextCharsetInfo = GrepGetTextCharsetInfo(
                        (struct UDCOBJ *)v8,
                        (unsigned __int64)&Src & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                        v5,
                        14);
  }
  else
  {
    EngSetLastError(6u);
    TextCharsetInfo = 1;
  }
  if ( TextCharsetInfo != -1 && a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 0x18uLL);
  }
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v8);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v9);
  return TextCharsetInfo;
}
