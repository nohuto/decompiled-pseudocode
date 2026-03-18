/*
 * XREFs of ?GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x140330354
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x140330CF0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140015900 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140082384 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400823D4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140295898 (-bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z.c)
 */

__int64 __fastcall GrepIcmSetBrushBitmap(struct XDCOBJ *a1, HBRUSH a2, struct tagBITMAPINFO *a3, void *a4)
{
  unsigned int v7; // edi
  BRUSH *v8; // rbx
  _QWORD v10[3]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v11; // [rsp+90h] [rbp-78h]
  _BYTE v12[32]; // [rsp+98h] [rbp-70h] BYREF
  HBITMAP *v13; // [rsp+B8h] [rbp-50h]
  _QWORD v14[7]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v15[16]; // [rsp+F8h] [rbp-10h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v16; // [rsp+108h] [rbp+0h]

  v7 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 1) != 0 )
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v14, a2);
    v8 = (BRUSH *)v14[0];
    if ( v14[0] && (*(_DWORD *)(v14[0] + 40LL) & 0x80u) != 0 )
    {
      v10[0] = a4;
      v10[1] = 0x7FFFFFLL;
      v10[2] = 0LL;
      v11 = 0;
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v15, a1);
      GrepCreateDIBitmap(
        (__int64)v12,
        (OPTAPIDCOBJ *)v15,
        6,
        v10,
        &a3->bmiHeader.biSize,
        0,
        0x428u,
        0LL,
        0,
        0LL,
        1,
        0LL,
        0LL);
      if ( v13 )
      {
        v7 = BRUSH::bAddIcmDIB(v8, *(void **)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 248LL), *v13);
        if ( !v7 )
          SURFREF::bDeleteSurface((SURFREF *)v12, v16);
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v12);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v15);
    }
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v14);
  }
  return v7;
}
