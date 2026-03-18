/*
 * XREFs of NtGdiGetGlyphIndicesWInternal @ 0x1401B6AB0
 * Callers:
 *     NtGdiGetGlyphIndicesW @ 0x1401B6A80 (NtGdiGetGlyphIndicesW.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@@@Z @ 0x140194714 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiGetGlyphIndicesWInternal(HDC a1, char *a2, int a3, char *a4, unsigned int a5, int a6)
{
  __int64 v7; // r12
  _BYTE *v9; // rdi
  int v10; // esi
  int v11; // edx
  __int64 v12; // rax
  unsigned int *GlyphIndicesW; // rax
  unsigned int v14; // ebx
  unsigned int v16; // ecx
  size_t v17; // r15
  __int64 v18; // rdx
  int v19; // ecx
  __int64 SessionState; // rax
  int v21; // [rsp+48h] [rbp-1D0h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-1C8h]
  unsigned int v23; // [rsp+54h] [rbp-1C4h] BYREF
  void *Src; // [rsp+58h] [rbp-1C0h] BYREF
  _BYTE *v25; // [rsp+60h] [rbp-1B8h]
  HDC v26; // [rsp+68h] [rbp-1B0h] BYREF
  HDC v27; // [rsp+70h] [rbp-1A8h]
  char *v28; // [rsp+80h] [rbp-198h]
  unsigned __int16 *v29; // [rsp+88h] [rbp-190h]
  _QWORD v30[10]; // [rsp+90h] [rbp-188h] BYREF
  _QWORD v31[10]; // [rsp+E0h] [rbp-138h] BYREF
  _BYTE v32[48]; // [rsp+130h] [rbp-E8h] BYREF
  _BYTE v33[48]; // [rsp+160h] [rbp-B8h] BYREF
  _BYTE v34[64]; // [rsp+190h] [rbp-88h] BYREF

  v7 = a3;
  Src = a2;
  v27 = a1;
  v26 = a1;
  v21 = a3;
  v28 = a4;
  v9 = 0LL;
  v25 = 0LL;
  v10 = -1;
  if ( a3 < 0 )
  {
    v11 = -1;
    return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v21, v11);
  }
  if ( a3 || a2 || a4 || a5 )
  {
    v16 = 0;
    if ( a5 <= 1 )
      v16 = a5;
    v22 = v16;
    v23 = v16;
    if ( a3 > 16 )
    {
      if ( (unsigned __int64)a3 <= 0x9C4000 )
      {
        v9 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)(4 * a3));
        v25 = v9;
        a2 = (char *)Src;
      }
    }
    else
    {
      v9 = v34;
      v25 = v34;
    }
    if ( v9 )
    {
      v17 = 2 * v7;
      Src = (void *)(2 * v7);
      v29 = (unsigned __int16 *)&v9[2 * v7];
      if ( &a2[2 * v7] < a2 || (unsigned __int64)&a2[2 * v7] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(&v9[v17], a2, v17);
      v10 = v7;
      if ( (_DWORD)v7 != -1 )
      {
        SessionState = W32GetSessionState(v19, v18);
        EUDCCountRegion::EUDCCountRegion(
          (EUDCCountRegion *)v33,
          (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
        UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v31, v27);
        if ( v31[0] )
        {
          v10 = *GrepGetGlyphIndicesW(&v26, (struct UDCOBJ *)v31, v29, v7, (__int64)v9, v22, a6, 7);
        }
        else
        {
          v10 = -1;
          ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&Src, -1);
        }
        UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v31);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v33);
        if ( v10 != -1 )
        {
          if ( (unsigned __int64)&a4[v17] > MmUserProbeAddress || &a4[v17] <= a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(a4, v9, v17);
        }
      }
      if ( v9 != v34 )
        FreeTmpBuffer(v9);
    }
    v11 = v10;
    return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v21, v11);
  }
  v12 = W32GetSessionState((_DWORD)a1, 0LL);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v32,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v12 + 96) + 4872LL));
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v30, a1);
  if ( v30[0] )
    GlyphIndicesW = GrepGetGlyphIndicesW(&v23, (struct UDCOBJ *)v30, 0LL, 0, 0LL, 0, a6, 7);
  else
    GlyphIndicesW = ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v21, -1);
  v14 = *GlyphIndicesW;
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v30);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v32);
  return v14;
}
