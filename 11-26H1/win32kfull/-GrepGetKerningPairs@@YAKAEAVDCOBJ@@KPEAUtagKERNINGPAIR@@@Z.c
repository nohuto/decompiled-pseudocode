/*
 * XREFs of ?GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z @ 0x1401DCE60
 * Callers:
 *     NtGdiGetKerningPairs @ 0x140280640 (NtGdiGetKerningPairs.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z @ 0x1403339C4 (-GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1400C6734 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vAddRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1401B5008 (-vAddRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1401DD0B0 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z @ 0x1401DD2B8 (-cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z.c)
 */

__int64 __fastcall GrepGetKerningPairs(struct DCOBJ *a1, unsigned int a2, struct tagKERNINGPAIR *a3)
{
  __int64 v4; // rsi
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  HSEMAPHORE v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  struct tagKERNINGPAIR *v15; // r9
  struct _FD_KERNINGPAIR *v16; // rcx
  __m128i v17; // xmm0
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 SessionState; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  float v25; // [rsp+28h] [rbp-40h] BYREF
  int v26; // [rsp+2Ch] [rbp-3Ch]
  HSEMAPHORE v27[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-28h]
  struct _FD_KERNINGPAIR *v29[3]; // [rsp+48h] [rbp-20h] BYREF

  v4 = a2;
  v6 = 0;
  v25 = 0.0;
  v24 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v24, a1, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>(v24);
  if ( v24
    && (v27[0] = *(HSEMAPHORE *)(v24 + 120),
        (unsigned int)bGetNtoWScale((struct EFLOAT *)&v25, a1, (struct RFONTOBJ *)&v24, (struct PFEOBJ *)v27)) )
  {
    v11 = *(HSEMAPHORE *)(v24 + 120);
    v29[0] = *(struct _FD_KERNINGPAIR **)(v24 + 128);
    if ( (*(_DWORD *)(*(_QWORD *)&v29[0][16].wcFirst + 40LL) & 0x8000) != 0 )
    {
      SessionState = W32GetSessionState(v8, v7, v9);
      SEMOBJ<17>::SEMOBJ<17>(v27, *(_QWORD *)(SessionState + 96) + 4864LL);
      PFFOBJ::vAddRFONTRef((PFFOBJ *)v29, v22, v23);
      v6 = 1;
      SEMOBJ<17>::vUnlock(v27);
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
    v27[0] = v11;
    if ( (_DWORD)v4 && a3 )
    {
      v29[0] = 0LL;
      v14 = PFEOBJ::cKernPairs((PFEOBJ *)v27, (const struct _FD_KERNINGPAIR **)v29);
      if ( v14 < (unsigned int)v4 )
        v4 = v14;
      v15 = &a3[v4];
      while ( a3 < v15 )
      {
        v16 = v29[0];
        a3->wFirst = v29[0]->wcFirst;
        a3->wSecond = v16->wcSecond;
        v12 = 0LL;
        v17 = (__m128i)COERCE_UNSIGNED_INT((float)v16->fwdKern);
        *(float *)v17.m128i_i32 = *(float *)v17.m128i_i32 * v25;
        LODWORD(v24) = v17.m128i_i32[0];
        v28 = 0LL;
        v13 = (unsigned int)_mm_cvtsi128_si32(v17);
        v18 = (unsigned __int8)((int)v13 >> 23) - 118;
        v26 = v18;
        if ( v18 <= 40 )
        {
          v19 = v13 & 0x7FFFFF | 0x800000;
          v28 = v19;
          if ( v18 < 0 )
            v20 = v19 >> (118 - (unsigned __int8)((int)v13 >> 23));
          else
            v20 = v19 << v18;
          v28 = v20 + 0x80000000LL;
          v12 = (v20 + 0x80000000LL) >> 32;
          v26 = (unsigned __int64)(v20 + 0x80000000LL) >> 32;
          if ( (int)v13 < 0 )
            v12 = (unsigned int)-(int)v12;
        }
        a3->iKernAmount = v12;
        ++v29[0];
        v29[2] = (struct _FD_KERNINGPAIR *)++a3;
      }
    }
    else
    {
      LODWORD(v4) = *(_DWORD *)(*((_QWORD *)v11 + 4) + 164LL);
    }
    if ( v6 )
    {
      v27[0] = *(HSEMAPHORE *)v11;
      PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v27, v12, v13);
    }
    return (unsigned int)v4;
  }
  else
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
    return 0LL;
  }
}
