/*
 * XREFs of GreGetDIBitsInternal @ 0x14007C00C
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14022553C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1402DB8BC (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14008952C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        HDC a1,
        HSURF a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        int a7,
        unsigned int a8,
        int a9)
{
  unsigned int DIBits; // ebx
  __int64 v12[3]; // [rsp+50h] [rbp-A8h] BYREF
  __int16 v13; // [rsp+68h] [rbp-90h]
  _BYTE v14[128]; // [rsp+70h] [rbp-88h] BYREF

  v12[2] = 0LL;
  v13 = 0;
  v12[0] = a5;
  v12[1] = a8;
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v14, a1);
  DIBits = GrepGetDIBits((struct OPTAPIDCOBJ *)v14, a2, (__int64)v12, a6, 0, a8, a9);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v14);
  return DIBits;
}
