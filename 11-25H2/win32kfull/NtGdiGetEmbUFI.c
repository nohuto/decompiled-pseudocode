/*
 * XREFs of NtGdiGetEmbUFI @ 0x140339880
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1401DB460 (-GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoi.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiGetEmbUFI(HDC a1, ULONG64 a2, void *a3, _DWORD *a4, ULONG64 a5, ULONG64 a6, _QWORD *a7)
{
  int v10; // r12d
  unsigned int v11; // r15d
  __int64 v12; // rdx
  int v13; // ecx
  __int64 SessionState; // rax
  unsigned int UFI; // edi
  void *v16; // rax
  _DWORD *v17; // rcx
  ULONG64 v18; // rax
  _DWORD *v19; // rcx
  int v21; // [rsp+40h] [rbp-148h] BYREF
  size_t Size; // [rsp+44h] [rbp-144h] BYREF
  int v23; // [rsp+4Ch] [rbp-13Ch]
  __int64 v24; // [rsp+50h] [rbp-138h] BYREF
  __int64 Src; // [rsp+58h] [rbp-130h] BYREF
  __int64 v26; // [rsp+60h] [rbp-128h]
  ULONG64 v27; // [rsp+68h] [rbp-120h]
  _QWORD v28[10]; // [rsp+70h] [rbp-118h] BYREF
  _BYTE v29[48]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v30[80]; // [rsp+F0h] [rbp-98h] BYREF

  v27 = a2;
  Src = 0LL;
  v10 = 0;
  v21 = 0;
  memset_0(v30, 0, 0x48uLL);
  v11 = 0;
  Size = 0LL;
  v23 = 0;
  v26 = 0LL;
  v24 = 0LL;
  SessionState = W32GetSessionState(v13, v12);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v29,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v28, a1);
  if ( v28[0] )
  {
    UFI = GrepGetUFI((struct UDCOBJ *)v28, &Src, v30, &Size, (_DWORD *)&Size + 1, (__int64)&v21, &v24, 28);
    v10 = v21;
    v11 = Size;
    v23 = HIDWORD(Size);
    v26 = v24;
  }
  else
  {
    UFI = 0;
  }
  if ( UFI )
  {
    v16 = (void *)v27;
    if ( v27 >= MmUserProbeAddress )
      v16 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v16, &Src, 8uLL);
    v17 = (_DWORD *)a6;
    if ( a6 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = v10;
    if ( (unsigned __int64)(a7 + 1) > MmUserProbeAddress || a7 + 1 <= a7 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a7 = v26;
    if ( (v10 & 2) != 0 && a3 )
    {
      v18 = (ULONG64)a3 + v11;
      if ( v18 > MmUserProbeAddress || v18 <= (unsigned __int64)a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, v30, v11);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v11;
      v19 = (_DWORD *)a5;
      if ( a5 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = v23;
    }
  }
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v28);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v29);
  return UFI;
}
