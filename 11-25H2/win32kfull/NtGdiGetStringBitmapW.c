/*
 * XREFs of NtGdiGetStringBitmapW @ 0x1402093C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x14026FC74 (-GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetStringBitmapW(HDC a1, const void *a2, int a3, unsigned int a4, void *a5)
{
  const void *v8; // rsi
  unsigned int StringBitmapW; // edi
  __int64 v10; // rdx
  int v11; // ecx
  __int64 SessionState; // rax
  __int64 v13; // r8
  _QWORD v15[10]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v16[88]; // [rsp+90h] [rbp-58h] BYREF
  __int16 v17; // [rsp+100h] [rbp+18h] BYREF
  unsigned int v18; // [rsp+108h] [rbp+20h]

  v18 = a4;
  v17 = 0;
  v8 = 0LL;
  StringBitmapW = 1;
  if ( a3 == 1 )
  {
    if ( a4 )
    {
      if ( a4 > 0x2710000 || (v8 = (const void *)AllocFreeTmpBuffer(a4)) == 0LL )
        StringBitmapW = 0;
    }
    if ( StringBitmapW )
    {
      GreProbeAndReadFromUntrustedVa(&v17, 2uLL, a2, 2uLL, 1uLL);
      SessionState = W32GetSessionState(v11, v10);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v16,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
      UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v15, a1);
      if ( v15[0] )
      {
        StringBitmapW = GrepGetStringBitmapW(v15, &v17, v13, v8, a4);
      }
      else
      {
        EngSetLastError(6u);
        StringBitmapW = 0;
      }
      UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v15);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v16);
      if ( StringBitmapW )
      {
        if ( StringBitmapW <= a4 )
        {
          if ( !v8 )
            return StringBitmapW;
          GreProbeAndWriteToUntrustedVa(a5, StringBitmapW, v8, StringBitmapW, 1uLL);
        }
      }
    }
    if ( v8 )
      FreeTmpBuffer(v8);
    return StringBitmapW;
  }
  return 0LL;
}
