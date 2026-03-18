/*
 * XREFs of ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x140164D38
 * Callers:
 *     NtGdiCreateSessionMappedDIBSection @ 0x140164920 (NtGdiCreateSessionMappedDIBSection.c)
 * Callees:
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x14015E270 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall bCaptureBitmapInfo(struct tagBITMAPINFO *Src, int a2, size_t Size, const struct tagBITMAPINFO **a4)
{
  __int64 v4; // rbx
  struct tagBITMAPINFO *v8; // rax
  __int64 v9; // rdx
  const struct tagBITMAPINFO *v10; // rdi
  __int64 biSize; // r8

  v4 = (unsigned int)Size;
  if ( (unsigned int)Size >= 4 )
  {
    if ( Src )
    {
      if ( (unsigned int)Size <= 0x2710000 )
      {
        v8 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
        *a4 = v8;
        if ( v8 )
        {
          if ( (struct tagBITMAPINFO *)((char *)Src + v4) < Src || (unsigned __int64)Src + v4 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v8, Src, (unsigned int)v4);
          v10 = *a4;
          biSize = (*a4)->bmiHeader.biSize;
          if ( (unsigned int)biSize >= 0x28
            && (unsigned int)v4 >= (unsigned int)biSize
            && (_DWORD)v4 == (unsigned int)GreGetBitmapSizeInternal(*a4, a2, biSize) )
          {
            return 1LL;
          }
          FreeThreadBufferWithTag(v10, v9, biSize);
          *a4 = 0LL;
        }
      }
    }
  }
  return 0LL;
}
