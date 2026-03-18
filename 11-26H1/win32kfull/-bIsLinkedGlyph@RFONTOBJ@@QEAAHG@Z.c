/*
 * XREFs of ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1400FAC2C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z @ 0x1400FA384 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 * Callees:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1400FB1B4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ??$GrepAcquireLockValidate@$0BA@@@YAXXZ @ 0x1400FB480 (--$GrepAcquireLockValidate@$0BA@@@YAXXZ.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??$GrepReleaseLockValidate@$0BA@@@YAXXZ @ 0x1400FB5F4 (--$GrepReleaseLockValidate@$0BA@@@YAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bIsLinkedGlyph(RFONTOBJ *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // r13
  BOOL v11; // r12d
  __int64 v12; // rax
  _QWORD **v13; // rax
  _QWORD *i; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  struct PFE *v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // r14
  int v25; // eax
  int v26; // r14d
  int v27; // r9d
  __int64 v28; // rbx
  int v29; // eax
  struct PFE *v30; // rdx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // r14
  int v36; // r14d
  int v37; // ecx
  int v38; // edi
  __int64 v40; // rbx
  int v41; // eax
  struct PFE *v42; // rdx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int64 v47; // r14
  int v48; // r14d
  int v49; // ecx
  int v50; // edi
  __int64 v51; // r9
  struct W32_PUSH_LOCK *v52; // [rsp+60h] [rbp+18h]

  v3 = (unsigned __int16)a2;
  v5 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  GrepAcquireLockValidate<16>();
  v52 = (struct W32_PUSH_LOCK *)(v5 + 13472);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v5 + 13472), 0);
  v8 = 6399LL;
  v9 = 0;
  if ( (unsigned __int16)(v3 + 0x2000) <= 0x18FFu
    || (*(_QWORD *)(v5 + 13520) || *(_QWORD *)(v5 + 13528))
    && (unsigned __int16)v3 >= *(_WORD *)(v5 + 14064)
    && (unsigned __int16)v3 <= *(_WORD *)(v5 + 14066)
    && (v7 = v3 >> 5,
        v8 = (unsigned int)v3,
        v6 = 0x80000000 >> v3,
        ((unsigned int)v6 & *(_DWORD *)(*(_QWORD *)(v5 + 14072) + 4 * (v3 >> 5))) != 0) )
  {
    v9 = 1;
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(v5 + 19560) )
  {
LABEL_7:
    if ( !*(_DWORD *)(v5 + 19552) )
      goto LABEL_9;
    v8 = *(_QWORD *)(*(_QWORD *)this + 120LL);
    if ( (*(_DWORD *)(v8 + 12) & 0x10) == 0 )
      goto LABEL_9;
    v40 = *(_QWORD *)(v5 + 19536);
    v41 = *(_DWORD *)(v40 + 12);
    if ( (v41 & 0x200) != 0 )
    {
      v42 = *(struct PFE **)(v5 + 19536);
      *(_DWORD *)(v40 + 12) = v41 & 0xFFFFFDFF;
      bComputeQuickLookup(0LL, v42, 0);
    }
    if ( !*(_QWORD *)(v40 + 112) )
      goto LABEL_9;
    v43 = *(_DWORD *)(v40 + 12);
    if ( (v43 & 0x200) != 0 )
    {
      *(_DWORD *)(v40 + 12) = v43 & 0xFFFFFDFF;
      bComputeQuickLookup(0LL, (struct PFE *)v40, 0);
    }
    if ( (unsigned __int16)v3 < *(_WORD *)(v40 + 104) )
      goto LABEL_9;
    v44 = *(_DWORD *)(v40 + 12);
    if ( (v44 & 0x200) != 0 )
    {
      *(_DWORD *)(v40 + 12) = v44 & 0xFFFFFDFF;
      bComputeQuickLookup(0LL, (struct PFE *)v40, 0);
    }
    if ( (unsigned __int16)v3 > *(_WORD *)(v40 + 106) )
      goto LABEL_9;
    v45 = *(_DWORD *)(v40 + 12);
    if ( (v45 & 0x200) != 0 )
    {
      *(_DWORD *)(v40 + 12) = v45 & 0xFFFFFDFF;
      bComputeQuickLookup(0LL, (struct PFE *)v40, 0);
    }
    v46 = *(_DWORD *)(v40 + 12);
    v47 = *(_QWORD *)(v40 + 112);
    if ( (v46 & 0x200) != 0 )
    {
      *(_DWORD *)(v40 + 12) = v46 & 0xFFFFFDFF;
      bComputeQuickLookup(0LL, (struct PFE *)v40, 0);
    }
    v48 = *(_DWORD *)(v47 + 4LL * ((int)(v3 - *(unsigned __int16 *)(v40 + 104)) / 32));
    v49 = *(_DWORD *)(v40 + 12);
    if ( (v49 & 0x200) != 0 )
    {
      *(_DWORD *)(v40 + 12) = v49 & 0xFFFFFDFF;
      bComputeQuickLookup(0LL, (struct PFE *)v40, 0);
    }
    v50 = v3 - *(unsigned __int16 *)(v40 + 104);
    v6 = (unsigned int)(v50 >> 31);
    LODWORD(v6) = v50 % 32;
    v8 = (unsigned int)(v50 % 32);
    if ( ((0x80000000 >> v8) & v48) == 0 )
    {
LABEL_9:
      if ( v9 )
        goto LABEL_57;
      goto LABEL_10;
    }
LABEL_56:
    v9 = 1;
    goto LABEL_57;
  }
  v27 = *(_DWORD *)(*(_QWORD *)this + 852LL);
  v7 = v27 != 0;
  v6 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 45LL) >> 4;
  if ( (unsigned int)v6 >= 7 || !*(_DWORD *)(664LL * (unsigned int)v6 + v5 + 14288) )
    v6 = 6LL;
  v8 = v27 != 0;
  if ( v27 )
  {
    v51 = 664LL * (unsigned int)v6;
    if ( !*(_QWORD *)(v51 + v5 + 14944) )
    {
      if ( *(_QWORD *)(v51 + v5 + 14936) )
        v8 = 0LL;
    }
  }
  v28 = *(_QWORD *)(v5 + 8 * ((unsigned int)v8 + 83LL * (unsigned int)v6) + 14936);
  if ( v28 )
  {
    v29 = *(_DWORD *)(v28 + 12);
    if ( (v29 & 0x200) != 0 )
    {
      v30 = *(struct PFE **)(v5 + 8 * ((unsigned int)v8 + 83LL * (unsigned int)v6) + 14936);
      *(_DWORD *)(v28 + 12) = v29 & 0xFFFFFDFF;
      bComputeQuickLookup(0LL, v30, 0);
    }
    if ( *(_QWORD *)(v28 + 112) )
    {
      v31 = *(_DWORD *)(v28 + 12);
      if ( (v31 & 0x200) != 0 )
      {
        *(_DWORD *)(v28 + 12) = v31 & 0xFFFFFDFF;
        bComputeQuickLookup(0LL, (struct PFE *)v28, 0);
      }
      if ( (unsigned __int16)v3 >= *(_WORD *)(v28 + 104) )
      {
        v32 = *(_DWORD *)(v28 + 12);
        if ( (v32 & 0x200) != 0 )
        {
          *(_DWORD *)(v28 + 12) = v32 & 0xFFFFFDFF;
          bComputeQuickLookup(0LL, (struct PFE *)v28, 0);
        }
        if ( (unsigned __int16)v3 <= *(_WORD *)(v28 + 106) )
        {
          v33 = *(_DWORD *)(v28 + 12);
          if ( (v33 & 0x200) != 0 )
          {
            *(_DWORD *)(v28 + 12) = v33 & 0xFFFFFDFF;
            bComputeQuickLookup(0LL, (struct PFE *)v28, 0);
          }
          v34 = *(_DWORD *)(v28 + 12);
          v35 = *(_QWORD *)(v28 + 112);
          if ( (v34 & 0x200) != 0 )
          {
            *(_DWORD *)(v28 + 12) = v34 & 0xFFFFFDFF;
            bComputeQuickLookup(0LL, (struct PFE *)v28, 0);
          }
          v36 = *(_DWORD *)(v35 + 4LL * ((int)(v3 - *(unsigned __int16 *)(v28 + 104)) / 32));
          v37 = *(_DWORD *)(v28 + 12);
          if ( (v37 & 0x200) != 0 )
          {
            *(_DWORD *)(v28 + 12) = v37 & 0xFFFFFDFF;
            bComputeQuickLookup(0LL, (struct PFE *)v28, 0);
          }
          v38 = v3 - *(unsigned __int16 *)(v28 + 104);
          v6 = (unsigned int)(v38 >> 31);
          LODWORD(v6) = v38 % 32;
          v8 = (unsigned int)(v38 % 32);
          if ( ((0x80000000 >> v8) & v36) != 0 )
            goto LABEL_56;
        }
      }
    }
  }
LABEL_10:
  v10 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v11 = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
  v12 = *(_QWORD *)(v10 + 120);
  if ( v12 )
    v13 = (_QWORD **)(v12 + 16);
  else
    v13 = (_QWORD **)(*(_QWORD *)(W32GetSessionState(v8, v6, v7) + 96) + 14128LL);
  for ( i = *v13; ; i = (_QWORD *)*i )
  {
    v15 = *(_QWORD *)(v10 + 120);
    v16 = v15 ? v15 + 16 : *(_QWORD *)(W32GetSessionState(v8, v6, v7) + 96) + 14128LL;
    if ( i == (_QWORD *)v16 )
      break;
    v8 = -i[v11 + 4];
    v17 = i[(v11 & (unsigned int)-(i[v11 + 4] != 0LL)) + 4];
    v18 = *(_DWORD *)(v17 + 12);
    if ( (v18 & 0x200) != 0 )
    {
      v19 = (struct PFE *)i[(v11 & (unsigned int)-(i[v11 + 4] != 0LL)) + 4];
      *(_DWORD *)(v17 + 12) = v18 & 0xFFFFFDFF;
      bComputeQuickLookup(0LL, v19, 0);
    }
    if ( *(_QWORD *)(v17 + 112) )
    {
      v20 = *(_DWORD *)(v17 + 12);
      if ( (v20 & 0x200) != 0 )
      {
        *(_DWORD *)(v17 + 12) = v20 & 0xFFFFFDFF;
        bComputeQuickLookup(0LL, (struct PFE *)v17, 0);
      }
      if ( (unsigned __int16)v3 >= *(_WORD *)(v17 + 104) )
      {
        v21 = *(_DWORD *)(v17 + 12);
        if ( (v21 & 0x200) != 0 )
        {
          *(_DWORD *)(v17 + 12) = v21 & 0xFFFFFDFF;
          bComputeQuickLookup(0LL, (struct PFE *)v17, 0);
        }
        if ( (unsigned __int16)v3 <= *(_WORD *)(v17 + 106) )
        {
          v22 = *(_DWORD *)(v17 + 12);
          if ( (v22 & 0x200) != 0 )
          {
            *(_DWORD *)(v17 + 12) = v22 & 0xFFFFFDFF;
            bComputeQuickLookup(0LL, (struct PFE *)v17, 0);
          }
          v23 = *(_DWORD *)(v17 + 12);
          v24 = *(_QWORD *)(v17 + 112);
          if ( (v23 & 0x200) != 0 )
          {
            *(_DWORD *)(v17 + 12) = v23 & 0xFFFFFDFF;
            bComputeQuickLookup(0LL, (struct PFE *)v17, 0);
          }
          v25 = *(_DWORD *)(v17 + 12);
          v26 = *(_DWORD *)(v24 + 4LL * ((int)(v3 - *(unsigned __int16 *)(v17 + 104)) / 32));
          if ( (v25 & 0x200) != 0 )
          {
            *(_DWORD *)(v17 + 12) = v25 & 0xFFFFFDFF;
            bComputeQuickLookup(0LL, (struct PFE *)v17, 0);
          }
          v6 = (unsigned int)((int)(v3 - *(unsigned __int16 *)(v17 + 104)) >> 31);
          LODWORD(v6) = (int)(v3 - *(unsigned __int16 *)(v17 + 104)) % 32;
          v8 = (unsigned int)v6;
          if ( ((0x80000000 >> v6) & v26) != 0 )
            goto LABEL_56;
        }
      }
    }
  }
LABEL_57:
  W32ReleasePushLockExclusiveEx(v52, 0);
  GrepReleaseLockValidate<16>();
  return v9;
}
