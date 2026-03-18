/*
 * XREFs of NtGdiGetCharacterPlacementW @ 0x140339260
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x14031172C (-GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtGdiGetCharacterPlacementW(
        HDC a1,
        const void *a2,
        signed int a3,
        signed int a4,
        ULONG64 a5,
        int a6)
{
  signed int v7; // r12d
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rsi
  const void *v11; // r10
  _BYTE *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  char *v16; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // r8
  ULONG64 v25; // rcx
  __int64 v26; // rdx
  int v27; // ecx
  void *v28; // r9
  ULONG64 v29; // rcx
  __int64 SessionState; // rax
  int CharacterPlacementW; // eax
  size_t v32; // r12
  __int64 v33; // rcx
  __int64 v34; // r13
  _BYTE **v35; // rdi
  size_t v36; // r8
  const void *v37; // rdx
  char *v38; // rcx
  const void *v39; // rdx
  const void *v40; // rdx
  const void *v41; // rdx
  const void *v42; // rdx
  const void *v43; // rdx
  char *v44; // rcx
  int v45; // eax
  int v46; // [rsp+30h] [rbp-148h]
  int v47; // [rsp+44h] [rbp-134h]
  unsigned int v48; // [rsp+48h] [rbp-130h]
  unsigned int v49; // [rsp+4Ch] [rbp-12Ch]
  unsigned int v50; // [rsp+50h] [rbp-128h]
  unsigned int v51; // [rsp+54h] [rbp-124h]
  unsigned int v52; // [rsp+58h] [rbp-120h]
  unsigned int v53; // [rsp+5Ch] [rbp-11Ch]
  void *v54[2]; // [rsp+70h] [rbp-108h] BYREF
  void *v55[2]; // [rsp+80h] [rbp-F8h]
  void *v56[2]; // [rsp+90h] [rbp-E8h]
  void *v57[2]; // [rsp+A0h] [rbp-D8h]
  __int64 v58; // [rsp+B0h] [rbp-C8h]
  __m128i *v59; // [rsp+B8h] [rbp-C0h]
  _QWORD v60[10]; // [rsp+C0h] [rbp-B8h] BYREF
  _BYTE v61[104]; // [rsp+110h] [rbp-68h] BYREF

  v7 = a3;
  v47 = 0;
  v8 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v9 = 0LL;
  v58 = 0LL;
  v10 = 0LL;
  memset_0(v54, 0, 0x40uLL);
  if ( v7 < 0 )
    return 0LL;
  if ( a4 < -1 )
    return 0LL;
  v11 = a2;
  if ( !a2 )
    return 0LL;
  if ( a5 )
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[63] = v12[63];
    *(_OWORD *)v54 = *(_OWORD *)a5;
    *(_OWORD *)v55 = *(_OWORD *)(a5 + 16);
    *(_OWORD *)v56 = *(_OWORD *)(a5 + 32);
    *(_OWORD *)v57 = *(_OWORD *)(a5 + 48);
    v7 = a3;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v57, 8));
    if ( a3 > v13 )
      v7 = v13;
  }
  if ( (unsigned int)v7 > 0x9C4000 )
    return 0LL;
  v14 = (unsigned int)(2 * v7);
  v15 = 4 * v7;
  if ( a5 )
  {
    v8 = 64;
    if ( v54[1] )
    {
      v48 = 64;
      v8 = ((v14 + 3) & 0xFFFFFFFC) + 64;
      if ( (((_DWORD)v14 + 3) & 0xFFFFFFFC) >= 0xFFFFFFC0 )
        return 0LL;
    }
    if ( v55[0] )
    {
      v49 = v8;
      v8 += v15;
      if ( v8 < v49 )
        return 0LL;
    }
    v16 = (char *)v55[1];
    if ( v55[1] )
    {
      v50 = v8;
      v8 += v15;
      if ( v8 < v50 )
        return 0LL;
    }
    if ( v56[0] )
    {
      v51 = v8;
      v8 += v15;
      if ( v8 < v51 )
        return 0LL;
    }
    if ( v56[1] )
    {
      v52 = v8;
      v8 += (v7 + 3) & 0xFFFFFFFC;
      if ( v8 < v52 )
        return 0LL;
    }
    if ( v57[0] )
    {
      v53 = v8;
      v8 += v14;
      if ( v8 < v53 )
        return 0LL;
    }
  }
  else
  {
    v16 = (char *)v55[1];
  }
  if ( v8 <= 40960000 - (int)v14 )
  {
    v10 = AllocFreeTmpBuffer(v8 + (unsigned int)v14);
    v14 = (unsigned int)(2 * v7);
    v11 = a2;
  }
  if ( v10 )
  {
    v59 = (__m128i *)(v10 + v8);
    if ( a5 )
    {
      v9 = v10;
      v58 = v10;
      if ( v54[1] )
        v18 = v10 + v48;
      else
        v18 = 0LL;
      *(_QWORD *)(v10 + 8) = v18;
      if ( v55[0] )
        v19 = v10 + v49;
      else
        v19 = 0LL;
      *(_QWORD *)(v10 + 16) = v19;
      if ( v16 )
        v20 = v10 + v50;
      else
        v20 = 0LL;
      *(_QWORD *)(v10 + 24) = v20;
      if ( v56[0] )
        v21 = v10 + v51;
      else
        v21 = 0LL;
      *(_QWORD *)(v10 + 32) = v21;
      if ( v56[1] )
        v22 = v10 + v52;
      else
        v22 = 0LL;
      *(_QWORD *)(v10 + 40) = v22;
      if ( v57[0] )
        v23 = v10 + v53;
      else
        v23 = 0LL;
      *(_QWORD *)(v10 + 48) = v23;
      *(_DWORD *)v10 = v8;
      *(_DWORD *)(v10 + 56) = v7;
    }
    v24 = (unsigned int)v14;
    v25 = (ULONG64)v11 + v14;
    if ( v25 < (unsigned __int64)v11 || v25 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v10 + v8), v11, v24);
    if ( (a6 & 0x200000) != 0 && a5 && v16 )
    {
      v28 = *(void **)(v9 + 24);
      v29 = (ULONG64)&v16[4 * v7];
      if ( v29 < (unsigned __int64)v16 || v29 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v28, v16, (unsigned int)(4 * v7));
    }
    SessionState = W32GetSessionState(v27, v26);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v61,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v60, a1);
    if ( v60[0] )
    {
      CharacterPlacementW = GrepGetCharacterPlacementW((struct UDCOBJ *)v60, v59, v7, a4, (__int128 *)v9, a6, v46);
      v47 = CharacterPlacementW;
    }
    else
    {
      CharacterPlacementW = 0;
    }
    if ( CharacterPlacementW && a5 )
    {
      *(_DWORD *)(a5 + 60) = *(_DWORD *)(v9 + 60);
      v32 = *(int *)(v9 + 56);
      *(_DWORD *)(a5 + 56) = v32;
      v33 = (unsigned int)(2 * v32);
      v34 = (unsigned int)(4 * v32);
      v35 = (_BYTE **)MmUserProbeAddress;
      if ( v54[1] )
      {
        v36 = (unsigned int)v33;
        v37 = *(const void **)(v9 + 8);
        v38 = (char *)v54[1] + v33;
        if ( (unsigned __int64)v38 > MmUserProbeAddress || v38 <= v54[1] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v35 = (_BYTE **)MmUserProbeAddress;
        }
        memmove(v54[1], v37, v36);
      }
      if ( v55[0] )
      {
        v39 = *(const void **)(v9 + 16);
        if ( (char *)v55[0] + v34 > *v35 || (char *)v55[0] + v34 <= v55[0] )
        {
          **v35 = 0;
          v35 = (_BYTE **)MmUserProbeAddress;
        }
        memmove(v55[0], v39, (unsigned int)v34);
      }
      if ( v16 )
      {
        v40 = *(const void **)(v9 + 24);
        if ( &v16[v34] > *v35 || &v16[v34] <= v16 )
        {
          **v35 = 0;
          v35 = (_BYTE **)MmUserProbeAddress;
        }
        memmove(v16, v40, (unsigned int)v34);
      }
      if ( v56[0] )
      {
        v41 = *(const void **)(v9 + 32);
        if ( (char *)v56[0] + v34 > *v35 || (char *)v56[0] + v34 <= v56[0] )
        {
          **v35 = 0;
          v35 = (_BYTE **)MmUserProbeAddress;
        }
        memmove(v56[0], v41, (unsigned int)v34);
      }
      if ( v56[1] )
      {
        v42 = *(const void **)(v9 + 40);
        if ( (char *)v56[1] + v32 > *v35 || (char *)v56[1] + v32 <= v56[1] )
        {
          **v35 = 0;
          v35 = (_BYTE **)MmUserProbeAddress;
        }
        memmove(v56[1], v42, v32);
      }
      if ( v57[0] )
      {
        v43 = *(const void **)(v9 + 48);
        v44 = (char *)v57[0] + (unsigned int)(2 * v32);
        if ( v44 > *v35 || v44 <= v57[0] )
          **v35 = 0;
        memmove(v57[0], v43, (unsigned int)(2 * v32));
      }
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v60);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v61);
    FreeTmpBuffer(v10);
    v45 = 1;
  }
  else
  {
    v45 = 0;
  }
  return v47 & (unsigned int)-(v45 != 0);
}
