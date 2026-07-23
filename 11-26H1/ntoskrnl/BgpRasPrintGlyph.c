/*
 * XREFs of BgpRasPrintGlyph @ 0x1404A69C8
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1404A6714 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x140C57FA0 (BgpTxtDisplayString.c)
 * Callees:
 *     RaspRectangleCreate @ 0x140356700 (RaspRectangleCreate.c)
 *     BgpFmRoundUp @ 0x1403576F0 (BgpFmRoundUp.c)
 *     RaspFreeMemory @ 0x140357B8C (RaspFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RaspAntiAlias @ 0x1404A64BC (RaspAntiAlias.c)
 *     RaspRasterize @ 0x1404A6E94 (RaspRasterize.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BgpGxCopyRectangle @ 0x140C57A04 (BgpGxCopyRectangle.c)
 *     RaspAddCacheEntry @ 0x140C5820C (RaspAddCacheEntry.c)
 *     RaspDestroyCachedBitmap @ 0x140C5AEA4 (RaspDestroyCachedBitmap.c)
 */

__int64 __fastcall BgpRasPrintGlyph(
        __int128 *a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        char a6,
        unsigned int *a7,
        __int64 a8,
        __int128 *a9)
{
  int v10; // edx
  __int128 *v11; // r15
  int v12; // edi
  __int128 *v13; // r12
  int v14; // ecx
  bool v15; // r13
  __int64 v16; // rsi
  int v17; // r9d
  _BYTE *Memory; // rbx
  _XSAVE_FORMAT *StateSaveArea; // rax
  int v20; // r8d
  __int64 v21; // rcx
  _XSAVE_FORMAT **v22; // rdx
  _XSAVE_FORMAT *v23; // rcx
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r9d
  int v30; // r14d
  int v31; // eax
  unsigned int v32; // r14d
  unsigned int v33; // r14d
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  unsigned int *v37; // rcx
  int v38; // eax
  int v39; // eax
  int v42; // [rsp+54h] [rbp-ACh]
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v44; // [rsp+5Ch] [rbp-A4h]
  _DWORD *v45; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  __int128 *v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v50; // [rsp+88h] [rbp-78h]
  unsigned int *v51; // [rsp+90h] [rbp-70h]
  __int128 *v52; // [rsp+98h] [rbp-68h]
  unsigned int *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v56; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-38h]
  _BYTE v58[80]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v59; // [rsp+120h] [rbp+20h] BYREF
  __int128 v60; // [rsp+130h] [rbp+30h]
  __int128 v61; // [rsp+140h] [rbp+40h]
  __int128 v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+60h]
  char v64[8]; // [rsp+1F8h] [rbp+F8h]

  v51 = (unsigned int *)a2;
  v52 = a1;
  v44 = a4;
  v53 = a7;
  memset_0(&v59, 0, 0x48uLL);
  v46 = 0LL;
  memset_0(v58, 0, 0x46uLL);
  v10 = a3;
  v11 = &v56;
  v43 = 0;
  v12 = 0;
  v57 = 0LL;
  v13 = 0LL;
  v49 = 0LL;
  v14 = 0;
  v50 = 0;
  v55 = 0LL;
  v64[0] = a6 & 1;
  v15 = 0;
  *a7 = 0;
  LODWORD(v45) = 0;
  v48 = 0LL;
  if ( a9 )
    v11 = a9;
  v47 = 0LL;
  v42 = 0;
  v56 = 0LL;
  if ( a3 >= 0x20u )
  {
    v16 = *(_QWORD *)(a2 + 8);
    v17 = *(_DWORD *)(a2 + 16);
    Memory = 0LL;
    StateSaveArea = gLoadedDiffHivesLock.StateSaveArea;
    v54 = v16;
    v20 = *(_DWORD *)(v16 + 40);
    while ( StateSaveArea != (_XSAVE_FORMAT *)&gLoadedDiffHivesLock.StateSaveArea )
    {
      if ( WORD2(StateSaveArea->FloatRegisters[1].High) == a3
        && LODWORD(StateSaveArea->FloatRegisters[0].High) == v17
        && HIDWORD(StateSaveArea->FloatRegisters[0].Low) == v20
        && *(_QWORD *)&StateSaveArea->MxCsr == v16 )
      {
        v21 = *(_QWORD *)&StateSaveArea->ControlWord;
        Memory = StateSaveArea;
        if ( *(_XSAVE_FORMAT **)(*(_QWORD *)&StateSaveArea->ControlWord + 8LL) != StateSaveArea
          || (v22 = *(_XSAVE_FORMAT ***)&StateSaveArea->ErrorOffset, *v22 != StateSaveArea)
          || (*v22 = (_XSAVE_FORMAT *)v21,
              *(_QWORD *)(v21 + 8) = v22,
              v23 = gLoadedDiffHivesLock.StateSaveArea,
              *(struct _KTHREAD **)&gLoadedDiffHivesLock.StateSaveArea->ErrorOffset != (struct _KTHREAD *)&gLoadedDiffHivesLock.StateSaveArea) )
        {
          __fastfail(3u);
        }
        v10 = a3;
        *(_QWORD *)&StateSaveArea->ControlWord = gLoadedDiffHivesLock.StateSaveArea;
        *(_QWORD *)&StateSaveArea->ErrorOffset = &gLoadedDiffHivesLock.StateSaveArea;
        *(_QWORD *)&v23->ErrorOffset = StateSaveArea;
        v14 = 0;
        gLoadedDiffHivesLock.StateSaveArea = StateSaveArea;
        break;
      }
      StateSaveArea = *(_XSAVE_FORMAT **)&StateSaveArea->ControlWord;
    }
    if ( !Memory )
    {
      if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 4) != 0 )
      {
        v14 = 1;
        v42 = 1;
      }
      else if ( !*(_QWORD *)v11 )
      {
        v15 = (*(_BYTE *)(a2 + 20) & 1) == 0;
      }
      v12 = RaspRasterize(a2, v10, v20, v17, v14, (__int64)&v48, (__int64)&v45, (__int64)&v43, (__int64)v11);
      if ( v12 < 0 )
        goto LABEL_48;
      if ( v15 )
      {
        Memory = (_BYTE *)BgpFwAllocateMemory(0x46uLL);
        if ( !Memory )
        {
          v12 = -1073741801;
          goto LABEL_55;
        }
      }
      else
      {
        Memory = v58;
      }
      v24 = *((_QWORD *)v11 + 2);
      v25 = *(_DWORD *)(v16 + 40);
      *((_DWORD *)Memory + 10) = *(_DWORD *)(a2 + 16);
      *((_DWORD *)Memory + 11) = (_DWORD)v45;
      *((_DWORD *)Memory + 12) = v43;
      *((_DWORD *)Memory + 13) = 4;
      *((_DWORD *)Memory + 14) = 4;
      *((_QWORD *)Memory + 2) = v48;
      *((_WORD *)Memory + 30) = a3;
      *((_DWORD *)Memory + 9) = v25;
      *((_QWORD *)Memory + 3) = v16;
      *(_QWORD *)(Memory + 62) = v24;
    }
    v26 = *((_DWORD *)Memory + 11);
    v45 = (_DWORD *)*((_QWORD *)Memory + 2);
    v27 = *(__int16 *)(v54 + 86);
    v28 = *(_QWORD *)(a2 + 8);
    v43 = *v45 / *((_DWORD *)Memory + 14);
    v30 = BgpFmRoundUp(
            ((*(unsigned int *)(a2 + 16) * v27 * *(unsigned int *)(v28 + 96)) << 6)
          / (72LL
           * *(unsigned __int16 *)(v28 + 120)));
    v31 = *((_DWORD *)Memory + 12);
    v32 = a5 + v30;
    if ( v31 < 0 || v31 <= v32 )
    {
      v33 = v32 - v31;
    }
    else
    {
      v33 = 0;
      DbgPrintEx(0x65u, 0, "BGFX internal font error char %x!\n", *((unsigned __int16 *)Memory + 30));
      v29 = v43;
    }
    if ( *(_DWORD *)v52 < v29 + v33 || *((_DWORD *)v52 + 1) < v26 + v44 )
    {
      v12 = -2147483643;
      goto LABEL_48;
    }
    if ( v64[0] )
    {
      v13 = &v59;
      v34 = v52[1];
      v59 = *v52;
      v35 = v52[2];
      v60 = v34;
      v36 = v52[3];
      v61 = v35;
      *(_QWORD *)&v35 = *((_QWORD *)v52 + 8);
      v37 = v51;
      v62 = v36;
      v63 = v35;
      if ( (v51[5] & 1) != 0 )
        v26 = DWORD1(v59);
      else
        DWORD1(v59) = v26;
      LODWORD(v59) = v29;
      *((_QWORD *)&v60 + 1) += v33 * v26 * (DWORD2(v59) >> 3);
    }
    else
    {
      v49 = __PAIR64__(v29, v26);
      v50 = v26;
      v38 = RaspRectangleCreate(&v49, 0x20u, &v47, (__int64)v11);
      v13 = v47;
      v12 = v38;
      if ( v38 < 0 )
        goto LABEL_48;
      v37 = v51;
    }
    RaspAntiAlias((__int64)v45, (__int64)v13, *((_DWORD *)Memory + 13), *((_DWORD *)Memory + 14), v37);
    if ( !v64[0] )
    {
      v46 = __PAIR64__(v33, v44);
      BgpGxCopyRectangle(v52, v13, &v46, &v55);
    }
    *v53 = v26;
    if ( v15 )
      RaspAddCacheEntry(&gLoadedDiffHivesLock.StateSaveArea, Memory);
    if ( v12 >= 0 )
    {
      v39 = v42;
      if ( v15 )
        goto LABEL_53;
      goto LABEL_52;
    }
LABEL_48:
    if ( v15 )
    {
      if ( Memory )
        RaspDestroyCachedBitmap(Memory);
      goto LABEL_53;
    }
    v39 = v42;
LABEL_52:
    if ( !v39 )
    {
LABEL_55:
      if ( v48 )
        RaspFreeMemory(v48, v11);
      goto LABEL_57;
    }
LABEL_53:
    if ( v12 >= 0 || Memory )
      goto LABEL_57;
    goto LABEL_55;
  }
LABEL_57:
  if ( !v64[0] && v13 )
    RaspFreeMemory((__int64)v13, v11);
  *((_QWORD *)v11 + 2) = 0LL;
  return (unsigned int)v12;
}
