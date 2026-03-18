/*
 * XREFs of NtGdiGetFontData @ 0x1400B0BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1400B0E34 (-ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiGetFontData(HDC a1, __int64 a2, __int64 a3, void *a4, unsigned int a5)
{
  unsigned int v6; // r12d
  unsigned int v7; // r13d
  void *v9; // rdi
  unsigned int FontData2; // ebx
  __int64 v11; // rax
  int v12; // eax
  ULONG64 v13; // rax
  EUDCCountRegion *v14; // rcx
  __int64 SessionState; // rax
  int v17; // [rsp+30h] [rbp-128h] BYREF
  int v18; // [rsp+34h] [rbp-124h]
  void *v19; // [rsp+38h] [rbp-120h]
  _QWORD v20[10]; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v21[10]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v22[48]; // [rsp+E0h] [rbp-78h] BYREF
  _BYTE v23[48]; // [rsp+110h] [rbp-48h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 0LL;
  v19 = 0LL;
  FontData2 = -1;
  if ( !a5 )
  {
    SessionState = W32GetSessionState(a1, a2, a3);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v22,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v20, a1);
    if ( v20[0] )
    {
      v17 = 21;
      v18 = *(unsigned __int16 *)(v20[0] + 12LL);
      FontData2 = ulGetFontData2((struct UDCOBJ *)v20, v7, v6, 0LL, 0, (const struct RFONTOBJ::Tag *)&v17);
    }
    else
    {
      EngSetLastError(6u);
      FontData2 = -1;
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v20);
    v14 = (EUDCCountRegion *)v22;
LABEL_16:
    EUDCCountRegion::~EUDCCountRegion(v14);
    return FontData2;
  }
  if ( a5 <= 0x2710000 )
  {
    v9 = (void *)AllocFreeTmpBuffer(a5);
    v19 = v9;
  }
  if ( v9 )
  {
    v11 = W32GetSessionState(a1, a2, a3);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v23,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v11 + 96) + 4872LL));
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v21, a1);
    if ( v21[0] )
    {
      v12 = *(unsigned __int16 *)(v21[0] + 12LL);
      v17 = 21;
      v18 = v12;
      FontData2 = ulGetFontData2((struct UDCOBJ *)v21, v7, v6, v9, a5, (const struct RFONTOBJ::Tag *)&v17);
    }
    else
    {
      EngSetLastError(6u);
      FontData2 = -1;
    }
    if ( FontData2 != -1 )
    {
      if ( FontData2 > a5 )
        FontData2 = -1;
      if ( FontData2 != -1 )
      {
        v13 = (ULONG64)a4 + FontData2;
        if ( v13 <= (unsigned __int64)a4 || v13 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, v9, FontData2);
      }
    }
    FreeTmpBuffer(v9);
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v21);
    v14 = (EUDCCountRegion *)v23;
    goto LABEL_16;
  }
  return FontData2;
}
