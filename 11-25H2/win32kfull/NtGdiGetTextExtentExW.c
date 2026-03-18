/*
 * XREFs of NtGdiGetTextExtentExW @ 0x14016C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextExtentExW@@YAHAEAVUDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AB1B4 (-GrepGetTextExtentExW@@YAHAEAVUDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtentExW(
        HDC a1,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        ULONG64 a5,
        char *a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r14
  int v10; // ecx
  _BYTE *v11; // r13
  __int64 v12; // rsi
  int v13; // r15d
  unsigned int TextExtent; // edi
  ULONG64 v15; // rcx
  __int64 SessionState; // rax
  unsigned int v17; // r9d
  unsigned int v18; // r13d
  void *v19; // rax
  _DWORD *v20; // rdx
  size_t v21; // r8
  unsigned int v23; // [rsp+58h] [rbp-190h]
  unsigned int v24; // [rsp+5Ch] [rbp-18Ch] BYREF
  unsigned int v25; // [rsp+60h] [rbp-188h]
  _BYTE *v26; // [rsp+68h] [rbp-180h]
  unsigned int v27; // [rsp+70h] [rbp-178h]
  int v28; // [rsp+78h] [rbp-170h]
  _BYTE *v29; // [rsp+80h] [rbp-168h]
  HDC v30; // [rsp+88h] [rbp-160h]
  ULONG64 v31; // [rsp+90h] [rbp-158h]
  __int64 v32; // [rsp+98h] [rbp-150h] BYREF
  void *Src; // [rsp+A0h] [rbp-148h]
  HDC v34; // [rsp+A8h] [rbp-140h]
  char *v35; // [rsp+B0h] [rbp-138h]
  __int64 v36; // [rsp+B8h] [rbp-130h]
  _QWORD v37[10]; // [rsp+C0h] [rbp-128h] BYREF
  _BYTE v38[48]; // [rsp+110h] [rbp-D8h] BYREF
  _BYTE v39[64]; // [rsp+140h] [rbp-A8h] BYREF
  _BYTE v40[32]; // [rsp+180h] [rbp-68h] BYREF

  v25 = a4;
  v8 = a3;
  Src = a2;
  v30 = a1;
  v10 = a7;
  v31 = a7;
  v27 = a4;
  v34 = a1;
  v28 = v8;
  v35 = a6;
  v36 = a7;
  v32 = 0LL;
  v23 = 0;
  v24 = 0;
  v11 = 0LL;
  v29 = 0LL;
  v12 = 0LL;
  v26 = 0LL;
  v13 = 0;
  TextExtent = 0;
  if ( !a7 )
    return TextExtent;
  if ( (_DWORD)v8 )
  {
    LOBYTE(v13) = (unsigned int)v8 <= 0x10;
    if ( a2 )
    {
      if ( (unsigned int)v8 > 0x10 )
      {
        if ( (unsigned int)v8 <= 0x682AAA )
        {
          v12 = AllocFreeTmpBuffer((unsigned int)(6 * v8));
          v26 = (_BYTE *)v12;
          a2 = Src;
        }
        v11 = (_BYTE *)(v12 + 4 * v8);
        v29 = v11;
      }
      else
      {
        v11 = v40;
        v29 = v40;
        v12 = (__int64)v39;
        v26 = v39;
      }
      if ( v12 )
      {
        v15 = (ULONG64)a2 + 2 * v8;
        if ( v15 < (unsigned __int64)a2 || v15 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, a2, 2 * v8);
        TextExtent = 1;
      }
    }
    if ( !TextExtent )
      goto LABEL_26;
    SessionState = W32GetSessionState(v10, a2);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v38,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v37, v30);
    if ( v37[0] )
    {
      v17 = v25;
      if ( !a5 )
        v17 = -1;
      TextExtent = GrepGetTextExtentExW(
                     (struct UDCOBJ *)v37,
                     (const unsigned __int16 *)v11,
                     v8,
                     v17,
                     &v24,
                     (int *)(v12 & -(__int64)(a6 != 0LL)),
                     &v32,
                     a8,
                     9);
      v23 = v24;
    }
    else
    {
      EngSetLastError(6u);
      TextExtent = 0;
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v37);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v38);
  }
  else
  {
    TextExtent = 1;
  }
  if ( TextExtent )
  {
    v18 = v23;
    if ( v23 > (unsigned int)v8 )
      TextExtent = 0;
    goto LABEL_27;
  }
LABEL_26:
  v18 = v23;
LABEL_27:
  if ( TextExtent )
  {
    v19 = (void *)v31;
    if ( v31 >= MmUserProbeAddress )
      v19 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v19, &v32, 8uLL);
    v20 = (_DWORD *)a5;
    if ( a5 )
    {
      if ( a5 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = v18;
    }
    if ( v18 && a6 && v12 )
    {
      v21 = 4LL * v18;
      if ( (unsigned __int64)&a6[v21] > MmUserProbeAddress || &a6[v21] <= a6 || ((unsigned __int8)a6 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a6, (const void *)v12, v21);
    }
  }
  if ( !v13 && v12 )
    FreeTmpBuffer(v12);
  return TextExtent;
}
