/*
 * XREFs of NtGdiGetGlyphOutline @ 0x1400AED00
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AEFB4 (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiGetGlyphOutline(
        HDC a1,
        unsigned __int16 a2,
        unsigned int a3,
        void *a4,
        size_t Size,
        char *a6,
        ULONG64 a7,
        int a8)
{
  const void *v9; // r13
  unsigned int GlyphOutline; // edi
  void *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 SessionState; // rax
  char *v16; // rax
  void **v17; // rsi
  _QWORD v22[10]; // [rsp+A0h] [rbp-E8h] BYREF
  _BYTE v23[48]; // [rsp+F0h] [rbp-98h] BYREF
  __int128 Src; // [rsp+120h] [rbp-68h] BYREF
  int v25; // [rsp+130h] [rbp-58h]
  __int128 v26; // [rsp+138h] [rbp-50h] BYREF

  v9 = (const void *)a7;
  GlyphOutline = -1;
  v26 = 0LL;
  Src = 0LL;
  v25 = 0;
  if ( (unsigned int)(Size - 1) <= 0x270FFFF )
    v11 = (void *)AllocFreeTmpBuffer((unsigned int)Size);
  else
    v11 = 0LL;
  if ( v11 || !(_DWORD)Size )
  {
    if ( a7 >= MmUserProbeAddress )
      v9 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v26, v9, 0x10uLL);
    if ( v11 )
      memset_0(v11, 0, (unsigned int)Size);
    SessionState = W32GetSessionState(v13, v12, v14);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v23,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v22, a1);
    if ( v22[0] )
      GlyphOutline = GrepGetGlyphOutline(v22, a2, a3, &Src, Size, v11, &v26, a8);
    else
      GlyphOutline = -1;
    if ( GlyphOutline != -1 )
    {
      if ( v11 )
      {
        v16 = &a6[(unsigned int)Size];
        v17 = (void **)MmUserProbeAddress;
        if ( v16 <= a6 || (unsigned __int64)v16 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v11, (unsigned int)Size);
      }
      else
      {
        v17 = (void **)MmUserProbeAddress;
      }
      if ( a4 >= *v17 )
        a4 = *v17;
      RtlCopyVolatileMemory(a4, &Src, 0x14uLL);
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v22);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v23);
    if ( v11 )
      FreeTmpBuffer(v11);
  }
  return GlyphOutline;
}
