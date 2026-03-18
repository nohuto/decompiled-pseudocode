/*
 * XREFs of NtGdiSetDIBitsToDeviceInternal @ 0x14017A820
 * Callers:
 *     <none>
 * Callees:
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x140092D1C (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x14009DD74 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x14015E270 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiSetDIBitsToDeviceInternal(
        HDC a1,
        __int64 a2,
        __int64 biSize,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        char *Src,
        char a12,
        unsigned int a13,
        size_t Size,
        int a15,
        __int64 a16)
{
  unsigned int v17; // r13d
  struct tagBITMAPINFO *v18; // rdi
  int v19; // r15d
  int v20; // eax
  unsigned int v21; // esi
  __int64 inited; // rax
  __int64 v24; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  __int16 v27; // [rsp+A8h] [rbp-60h]
  _BYTE v28[24]; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v29; // [rsp+C8h] [rbp-40h]
  unsigned int v31; // [rsp+118h] [rbp+10h]

  v31 = a2;
  v17 = biSize;
  v18 = 0LL;
  memset(v28, 0, sizeof(v28));
  v29 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v19 = a12 & 3;
  if ( (unsigned int)Size >= 4 )
  {
    if ( Src )
    {
      if ( (unsigned int)Size <= 0x2710000 )
      {
        v18 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
        if ( v18 )
        {
          if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v18, Src, (unsigned int)Size);
          biSize = v18->bmiHeader.biSize;
          if ( (unsigned int)biSize >= 0x28
            && (unsigned int)Size >= (unsigned int)biSize
            && (_DWORD)Size == (unsigned int)GreGetBitmapSizeInternal(v18, v19, biSize) )
          {
            v20 = 1;
            goto LABEL_14;
          }
          FreeThreadBufferWithTag(v18, a2, biSize);
          v18 = 0LL;
        }
      }
    }
  }
  v20 = 0;
LABEL_14:
  v21 = v20 != 0;
  if ( v21 == 1 )
  {
    a2 = a10;
    if ( a10 )
    {
      inited = umptr_r<unsigned char>::init_probe((__int64)v28, a10, a13, 4);
      v24 = *(_QWORD *)inited;
      v25 = *(_QWORD *)(inited + 8);
      v26 = *(_QWORD *)(inited + 16);
      v27 = *(_WORD *)(inited + 24);
      a2 = -v24;
      v21 = v24 != 0;
    }
    if ( v21 == 1 )
      v21 = GreSetDIBitsToDeviceInternalImpl(
              a1,
              v31,
              v17,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              (__int64)&v24,
              (__int64)v18,
              v19,
              Size,
              a15,
              a16);
  }
  if ( v18 )
    FreeThreadBufferWithTag(v18, a2, biSize);
  return v21;
}
