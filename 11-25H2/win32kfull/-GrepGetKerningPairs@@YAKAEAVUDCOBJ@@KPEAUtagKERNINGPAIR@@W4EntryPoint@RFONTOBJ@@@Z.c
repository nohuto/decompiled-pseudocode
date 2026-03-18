/*
 * XREFs of ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140178748
 * Callers:
 *     NtGdiGetKerningPairs @ 0x1401785E0 (NtGdiGetKerningPairs.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x14031172C (-GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14001774C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D1B54 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1401789B4 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z @ 0x140178FE4 (-cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z.c)
 *     ?vAddRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14017BD10 (-vAddRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GrepGetKerningPairs(struct UDCOBJ *a1, unsigned int a2, HSEMAPHORE a3, unsigned int a4)
{
  __int64 v5; // rsi
  char v7; // r14
  HSEMAPHORE v8; // rbx
  __int64 v9; // rdx
  unsigned int v11; // eax
  HSEMAPHORE v12; // r9
  struct _FD_KERNINGPAIR *v13; // rcx
  __int64 v14; // rdx
  __m128i v15; // xmm0
  int v16; // r8d
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 SessionState; // rax
  __int64 v21; // [rsp+38h] [rbp-50h] BYREF
  struct _FD_KERNINGPAIR *v22[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+50h] [rbp-38h]
  HSEMAPHORE v24[6]; // [rsp+58h] [rbp-30h] BYREF
  float v25; // [rsp+90h] [rbp+8h] BYREF
  char v26; // [rsp+A8h] [rbp+20h]

  v5 = a2;
  v7 = 0;
  v26 = 0;
  v25 = 0.0;
  v22[0] = (struct _FD_KERNINGPAIR *)__PAIR64__(*(unsigned __int16 *)(*(_QWORD *)a1 + 12LL), a4);
  v21 = 0LL;
  RFONTOBJ::vInit((RFONTOBJ *)&v21, a1, 0, 2u, (const struct RFONTOBJ::Tag *)v22);
  if ( v21
    && (v24[0] = *(HSEMAPHORE *)(v21 + 120),
        (unsigned int)bGetNtoWScale((struct EFLOAT *)&v25, a1, (struct RFONTOBJ *)&v21, (struct PFEOBJ *)v24)) )
  {
    v8 = *(HSEMAPHORE *)(v21 + 120);
    v22[0] = *(struct _FD_KERNINGPAIR **)(v21 + 128);
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v24, *(struct PFT **)&v22[0][16].wcFirst);
    if ( ((_DWORD)v24[0][10] & 0x8000) != 0 )
    {
      SessionState = W32GetSessionState(v24[0], v9);
      SEMOBJ<17>::SEMOBJ<17>(v24, *(_QWORD *)(SessionState + 96) + 4872LL);
      PFFOBJ::vAddRFONTRef((PFFOBJ *)v22);
      v7 = 1;
      v26 = 1;
      SEMOBJ<17>::vUnlock(v24);
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
    v24[0] = v8;
    if ( (_DWORD)v5 && a3 )
    {
      v22[0] = 0LL;
      v11 = PFEOBJ::cKernPairs((PFEOBJ *)v24, (const struct _FD_KERNINGPAIR **)v22);
      if ( v11 < (unsigned int)v5 )
        v5 = v11;
      v12 = a3 + 2 * v5;
      while ( a3 < v12 )
      {
        v13 = v22[0];
        *(_WORD *)a3 = v22[0]->wcFirst;
        *((_WORD *)a3 + 1) = v13->wcSecond;
        LODWORD(v14) = 0;
        v15 = (__m128i)COERCE_UNSIGNED_INT((float)v13->fwdKern);
        *(float *)v15.m128i_i32 = *(float *)v15.m128i_i32 * v25;
        LODWORD(v21) = v15.m128i_i32[0];
        v23 = 0LL;
        v16 = _mm_cvtsi128_si32(v15);
        v17 = (unsigned __int8)(v16 >> 23) - 118;
        if ( v17 <= 40 )
        {
          v18 = v16 & 0x7FFFFF | 0x800000LL;
          v23 = v18;
          if ( v17 < 0 )
            v19 = v18 >> (118 - (unsigned __int8)(v16 >> 23));
          else
            v19 = v18 << v17;
          v23 = v19 + 0x80000000LL;
          v14 = (v19 + 0x80000000LL) >> 32;
          if ( v16 < 0 )
            LODWORD(v14) = -(int)v14;
        }
        *((_DWORD *)a3 + 1) = v14;
        ++v22[0];
        a3 += 2;
        v24[2] = a3;
      }
    }
    else
    {
      LODWORD(v5) = *(_DWORD *)(*((_QWORD *)v8 + 4) + 164LL);
    }
    if ( v7 )
    {
      v24[0] = *(HSEMAPHORE *)v8;
      PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v24);
    }
    return (unsigned int)v5;
  }
  else
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
    return 0LL;
  }
}
