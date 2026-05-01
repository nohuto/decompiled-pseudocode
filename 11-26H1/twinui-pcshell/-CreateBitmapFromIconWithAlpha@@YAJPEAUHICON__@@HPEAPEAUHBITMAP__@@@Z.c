/*
 * XREFs of ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1801EFC84
 * Callers:
 *     ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x1802C7BF0 (-ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z @ 0x18004A344 (-_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z.c)
 *     ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x180128CE0 (-_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z.c)
 *     CreateBitmapFromIcon @ 0x18049F3C0 (CreateBitmapFromIcon.c)
 */

__int64 __fastcall CreateBitmapFromIconWithAlpha(HICON a1, unsigned int a2, HBITMAP *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  signed int HaveAlpha; // ebx
  HBITMAP hbmColor; // rcx
  char v10; // al
  signed int v11; // eax
  ICONINFO piconinfo; // [rsp+30h] [rbp-40h] BYREF
  _OWORD pv[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+A4h] [rbp+34h]

  *a3 = 0LL;
  memset(&piconinfo, 0, sizeof(piconinfo));
  if ( GetIconInfo(a1, &piconinfo) || (HaveAlpha = ResultFromKnownLastError(), HaveAlpha >= 0) )
  {
    hbmColor = piconinfo.hbmColor;
    v10 = 0;
    LOBYTE(v15) = 0;
    if ( piconinfo.hbmColor )
    {
      HaveAlpha = _DoesBitmapHaveAlpha(piconinfo.hbmColor, (bool *)&v15);
      if ( HaveAlpha < 0 )
        goto LABEL_15;
      hbmColor = piconinfo.hbmColor;
      v10 = v15;
    }
    if ( v10 )
    {
      memset(pv, 0, sizeof(pv));
      if ( GetObjectW(hbmColor, 32, pv) )
      {
        HaveAlpha = 0;
      }
      else
      {
        HaveAlpha = ResultFromKnownLastError();
        if ( HaveAlpha < 0 )
          goto LABEL_15;
      }
      if ( __PAIR64__(DWORD1(pv[0]), a2) == *(_QWORD *)((char *)pv + 4) )
      {
        *a3 = piconinfo.hbmColor;
        piconinfo.hbmColor = 0LL;
LABEL_17:
        DeleteObject(piconinfo.hbmMask);
        return (unsigned int)HaveAlpha;
      }
      v11 = _ScaleBitmap(piconinfo.hbmColor, a2, a3);
    }
    else
    {
      v15 = a2;
      v16 = a2;
      v11 = CreateBitmapFromIcon(a1, v6, v7, &v15, a3);
    }
    HaveAlpha = v11;
LABEL_15:
    if ( piconinfo.hbmColor )
      DeleteObject(piconinfo.hbmColor);
    goto LABEL_17;
  }
  return (unsigned int)HaveAlpha;
}
