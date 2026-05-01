/*
 * XREFs of ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x1802D0AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1801FA000 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x18020F5A0 (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     PremultiplyAlphaChannel @ 0x18022891C (PremultiplyAlphaChannel.c)
 */

__int64 __fastcall CIconLoadingFunctions::ConvertIconToBitmap(
        CIconLoadingFunctions *this,
        HICON a2,
        const struct tagSIZE *a3,
        HBITMAP *a4)
{
  unsigned int v4; // ebx
  int BitmapFromIconWithAlpha; // eax
  unsigned int v7; // edi
  HBITMAP v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HGDIOBJ ho; // [rsp+40h] [rbp+18h] BYREF
  HBITMAP v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0LL;
  ho = 0LL;
  BitmapFromIconWithAlpha = CreateBitmapFromIconWithAlpha(a2, a3->cx, (HBITMAP *)&ho);
  v7 = BitmapFromIconWithAlpha;
  if ( BitmapFromIconWithAlpha >= 0 )
  {
    v9 = (HBITMAP)PremultiplyAlphaChannel((__int64)ho);
    v12 = v9;
    if ( v9 )
    {
      v12 = 0LL;
      *a4 = v9;
    }
    else
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
        (const char *)0x8007000ELL);
    }
    CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release((void **)&v12);
    CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(&ho);
    return v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)BitmapFromIconWithAlpha);
    if ( ho )
      DeleteObject(ho);
    return v7;
  }
}
