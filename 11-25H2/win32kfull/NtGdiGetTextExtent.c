/*
 * XREFs of NtGdiGetTextExtent @ 0x140203B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BF184 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtent(HDC a1, char *Src, signed int a3, void *a4, unsigned int a5)
{
  void *v5; // r12
  __int64 v6; // r13
  HDC v8; // r15
  __m128i *v10; // rdi
  unsigned int TextExtentW; // ebx
  char *v12; // rcx
  __int64 SessionState; // rax
  struct tagSIZE Srca; // [rsp+50h] [rbp-108h] BYREF
  HDC v16; // [rsp+58h] [rbp-100h]
  HDC v17; // [rsp+60h] [rbp-F8h]
  void *v18; // [rsp+68h] [rbp-F0h]
  _QWORD v19[10]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v20[48]; // [rsp+C0h] [rbp-98h] BYREF
  char v21; // [rsp+F0h] [rbp-68h] BYREF

  v5 = a4;
  v6 = a3;
  v8 = a1;
  v16 = a1;
  v17 = a1;
  v18 = a4;
  Srca = 0LL;
  v10 = 0LL;
  TextExtentW = 0;
  if ( a3 < 0 )
    return TextExtentW;
  if ( !a3 )
  {
    TextExtentW = 1;
LABEL_24:
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v5, &Srca, 8uLL);
    return TextExtentW;
  }
  if ( Src )
  {
    if ( a3 > 16 )
    {
      if ( (unsigned __int64)a3 <= 0x1388000 )
        v10 = (__m128i *)AllocFreeTmpBuffer((unsigned int)(2 * a3));
    }
    else
    {
      v10 = (__m128i *)&v21;
    }
    if ( v10 )
    {
      v12 = &Src[2 * v6];
      if ( v12 < Src || (unsigned __int64)v12 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, Src, 2 * v6);
      TextExtentW = 1;
    }
    v8 = v16;
  }
  if ( TextExtentW )
  {
    SessionState = W32GetSessionState((_DWORD)a1, Src);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v20,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v19, v8);
    if ( v19[0] )
      TextExtentW = GrepGetTextExtentW((struct UDCOBJ *)v19, v10, a3, &Srca, a5, 10);
    else
      TextExtentW = 0;
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v19);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v20);
  }
  if ( (int)v6 > 16 && v10 )
    FreeTmpBuffer(v10);
  if ( TextExtentW )
    goto LABEL_24;
  return TextExtentW;
}
