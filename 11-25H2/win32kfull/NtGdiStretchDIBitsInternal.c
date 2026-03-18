/*
 * XREFs of NtGdiStretchDIBitsInternal @ 0x14018B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x140092D1C (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400962F4 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x14015E270 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiStretchDIBitsInternal(
        Gre::Base *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        char *Src,
        unsigned int a12,
        unsigned int a13,
        size_t Size,
        unsigned int a15,
        __int64 a16)
{
  struct tagBITMAPINFO *v17; // rdi
  unsigned int v18; // esi
  unsigned int v19; // r14d
  __int64 v20; // rdx
  __int64 biSize; // r8
  int v22; // eax
  __int64 inited; // rax
  __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  __int16 v28; // [rsp+A8h] [rbp-60h]
  _BYTE v29[24]; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v30; // [rsp+C8h] [rbp-40h]
  HDC v31; // [rsp+110h] [rbp+8h]
  unsigned int v32; // [rsp+118h] [rbp+10h]
  unsigned int v33; // [rsp+120h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  v31 = (HDC)a1;
  v17 = 0LL;
  v18 = 1;
  memset(v29, 0, sizeof(v29));
  v30 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  if ( !a10 || !Src )
  {
    v19 = Size;
    goto LABEL_21;
  }
  v19 = Size;
  if ( !(_DWORD)Size )
    goto LABEL_21;
  if ( (unsigned int)Size >= 4 && (unsigned int)Size <= 0x2710000 )
  {
    v17 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
    if ( v17 )
    {
      if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v17, Src, (unsigned int)Size);
      biSize = v17->bmiHeader.biSize;
      if ( (unsigned int)biSize >= 0x28
        && (unsigned int)Size >= (unsigned int)biSize
        && (_DWORD)Size == (unsigned int)GreGetBitmapSizeInternal(v17, a12, biSize) )
      {
        v22 = 1;
        goto LABEL_16;
      }
      FreeThreadBufferWithTag(v17, v20, biSize);
      v17 = 0LL;
    }
  }
  v22 = 0;
LABEL_16:
  v18 = v22 != 0;
  if ( v18 )
  {
    inited = umptr_r<unsigned char>::init_probe((__int64)v29, a10, a15, 4);
    v25 = *(_QWORD *)inited;
    v26 = *(_QWORD *)(inited + 8);
    v27 = *(_QWORD *)(inited + 16);
    v28 = *(_WORD *)(inited + 24);
    a3 = v33;
    a1 = (Gre::Base *)v31;
    a2 = v32;
    if ( !v25 )
      v18 = 0;
  }
  else
  {
    a3 = v33;
    a2 = v32;
    a1 = (Gre::Base *)v31;
  }
LABEL_21:
  if ( v18 )
    v18 = GreStretchDIBitsInternalImpl(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            (__int64)&v25,
            &v17->bmiHeader.biSize,
            a12,
            a13,
            v19,
            a16);
  if ( v17 )
    FreeThreadBufferWithTag(v17, a2, a3);
  return v18;
}
