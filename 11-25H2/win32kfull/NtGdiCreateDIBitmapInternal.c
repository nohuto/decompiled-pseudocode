/*
 * XREFs of NtGdiCreateDIBitmapInternal @ 0x14017F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x14007C874 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x140092D1C (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x14015E270 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     ?GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1401C4344 (-GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiCreateDIBitmapInternal(
        HDC a1,
        __int64 a2,
        __int64 biSize,
        int a4,
        __int64 a5,
        char *Src,
        unsigned int a7,
        size_t Size,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  struct tagBITMAPINFO *v13; // rdi
  __int64 v14; // r14
  unsigned int v15; // esi
  int v16; // eax
  __int64 inited; // rax
  __int64 DIBitmapComp; // rax
  __int64 v20; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v21; // [rsp+78h] [rbp-F0h]
  __int64 v22; // [rsp+80h] [rbp-E8h]
  __int16 v23; // [rsp+88h] [rbp-E0h]
  _BYTE v24[24]; // [rsp+90h] [rbp-D8h] BYREF
  __int16 v25; // [rsp+A8h] [rbp-C0h]
  _BYTE v26[184]; // [rsp+B0h] [rbp-B8h] BYREF
  int v27; // [rsp+178h] [rbp+10h]
  int v28; // [rsp+180h] [rbp+18h]

  v28 = biSize;
  v27 = a2;
  v13 = 0LL;
  v14 = 1LL;
  memset(v24, 0, sizeof(v24));
  v25 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  if ( !Src )
  {
    v15 = Size;
    goto LABEL_19;
  }
  v15 = Size;
  if ( !(_DWORD)Size )
    goto LABEL_19;
  if ( (unsigned int)Size < 4 )
    goto LABEL_14;
  if ( (unsigned int)Size > 0x2710000 )
    goto LABEL_14;
  v13 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
  if ( !v13 )
    goto LABEL_14;
  if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v13, Src, (unsigned int)Size);
  biSize = v13->bmiHeader.biSize;
  if ( (unsigned int)biSize < 0x28
    || (unsigned int)Size < (unsigned int)biSize
    || (_DWORD)Size != (unsigned int)GreGetBitmapSizeInternal(v13, a7, biSize) )
  {
    FreeThreadBufferWithTag(v13, a2, biSize);
    v13 = 0LL;
LABEL_14:
    v16 = 0;
    goto LABEL_15;
  }
  v16 = 1;
LABEL_15:
  v14 = -(__int64)(v16 != 0) & 1;
  if ( v14 )
  {
    a2 = a5;
    if ( a5 )
    {
      inited = umptr_r<unsigned char>::init_probe((__int64)v24, a5, a9, 4);
      v20 = *(_QWORD *)inited;
      v21 = *(_QWORD *)(inited + 8);
      v22 = *(_QWORD *)(inited + 16);
      v23 = *(_WORD *)(inited + 24);
      a2 = -v20;
      v14 &= -(__int64)(v20 != 0);
    }
  }
LABEL_19:
  if ( v14 == 1 )
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v26, a1);
    if ( (a4 & 2) != 0 )
      DIBitmapComp = GrepCreateDIBitmapReal(
                       (struct OPTAPIDCOBJ *)v26,
                       a4,
                       &v20,
                       &v13->bmiHeader.biSize,
                       a7,
                       v15,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    else
      DIBitmapComp = GrepCreateDIBitmapComp(
                       (struct OPTAPIDCOBJ *)v26,
                       v27,
                       v28,
                       (__int64)&v20,
                       (__int64)v13,
                       a7,
                       v15,
                       a11);
    v14 = DIBitmapComp;
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v26);
  }
  if ( v13 )
    FreeThreadBufferWithTag(v13, a2, biSize);
  return v14;
}
