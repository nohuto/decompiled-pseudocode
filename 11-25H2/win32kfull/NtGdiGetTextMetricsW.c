/*
 * XREFs of NtGdiGetTextMetricsW @ 0x140082190
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x14001709C (-GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiGetTextMetricsW(HDC a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int TextMetricsW; // edi
  __int64 SessionState; // rax
  _OWORD v8[4]; // [rsp+20h] [rbp-D8h] BYREF
  int v9; // [rsp+60h] [rbp-98h]
  _QWORD v10[10]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v11[48]; // [rsp+C0h] [rbp-38h] BYREF

  TextMetricsW = 0;
  if ( a3 >= 0x44 )
  {
    memset_0(v8, 0, 0x44uLL);
    SessionState = W32GetSessionState();
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v11,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v10, a1);
    if ( v10[0] )
      TextMetricsW = GrepGetTextMetricsW((struct UDCOBJ *)v10, (__int64)v8, 20);
    if ( TextMetricsW )
    {
      if ( a2 + 68 > MmUserProbeAddress || a2 + 68 <= a2 || (a2 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a2 = v8[0];
      *(_OWORD *)(a2 + 16) = v8[1];
      *(_OWORD *)(a2 + 32) = v8[2];
      *(_OWORD *)(a2 + 48) = v8[3];
      *(_DWORD *)(a2 + 64) = v9;
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v10);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v11);
  }
  return TextMetricsW;
}
