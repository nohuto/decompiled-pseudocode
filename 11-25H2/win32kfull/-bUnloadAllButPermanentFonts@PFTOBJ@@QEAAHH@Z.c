/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14010FBC0
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x14010FB1C (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     prfntKillList @ 0x1400D7300 (prfntKillList.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x140107C84 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     bKillPFFOBJ @ 0x14010C008 (bKillPFFOBJ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x14010ED5C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1401E9998 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     vKillRFONTList @ 0x140207388 (vKillRFONTList.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this, __int64 a2, __int64 a3)
{
  int v4; // r13d
  __int64 SessionState; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rdx
  char *v10; // rbx
  __int64 v11; // rcx
  char *v12; // r14
  struct PFF **i; // r15
  struct PFF *v14; // r9
  _QWORD *v15; // rsi
  struct PFF *v16; // rax
  int v17; // r12d
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // ebp
  __int64 v27; // r14
  char *v28; // rsi
  _QWORD v30[9]; // [rsp+20h] [rbp-48h] BYREF
  HSEMAPHORE v31; // [rsp+70h] [rbp+8h] BYREF
  struct PFF *v32; // [rsp+80h] [rbp+18h]

  v4 = 0;
  SessionState = W32GetSessionState(this, a2, a3);
  SEMOBJ<17>::SEMOBJ<17>(&v31, *(_QWORD *)(SessionState + 96) + 4872LL);
  v8 = 1;
  v9 = *(unsigned int *)(*(_QWORD *)this + 28LL);
  if ( !(_DWORD)v9 )
    goto LABEL_5;
  if ( (unsigned int)v9 <= 0x40 )
  {
    v10 = (char *)(*(_QWORD *)(W32GetSessionState(v6, v9, v7) + 96) + 20440LL);
  }
  else
  {
    v10 = (char *)PALLOCNOZ(56 * (int)v9, 1769367111LL);
    if ( !v10 )
    {
      v8 = 0;
LABEL_5:
      SEMOBJ<17>::vUnlock(&v31);
      return v8;
    }
    v4 = 1;
  }
  v11 = *(_QWORD *)this;
  v12 = v10;
  for ( i = (struct PFF **)(*(_QWORD *)this + 40LL);
        (unsigned __int64)i < v11 + 8 * (unsigned __int64)*(unsigned int *)(v11 + 24) + 40;
        ++i )
  {
    v14 = SkipInvalidPff(*i);
    if ( v14 )
    {
      v15 = v12 + 8;
      do
      {
        v16 = (struct PFF *)*((_QWORD *)v14 + 1);
        v17 = *((_DWORD *)v14 + 13);
        *((_DWORD *)v14 + 14) = 0;
        v18 = v17 & 0x200;
        *((_DWORD *)v14 + 15) = 0;
        v32 = v16;
        v30[0] = v14;
        PFFOBJ::vKill((PFFOBJ *)v30);
        if ( *i == (struct PFF *)v21 )
          *i = *(struct PFF **)(v21 + 8);
        v22 = *(_QWORD *)(v21 + 8);
        if ( v22 )
          *(_QWORD *)(v22 + 16) = *(_QWORD *)(v21 + 16);
        v23 = *(_QWORD *)(v21 + 16);
        if ( v23 )
          *(_QWORD *)(v23 + 8) = *(_QWORD *)(v21 + 8);
        *(_QWORD *)v12 = v21;
        PFFOBJ::vRemoveHash((PFFOBJ *)v30, v19, v20);
        v25 = *(_QWORD *)this;
        if ( !v18 )
          ++*(_DWORD *)(v25 + 32);
        --*(_DWORD *)(v25 + 28);
        v15[1] = v15;
        *v15 = v15;
        prfntKillList(v30, v15, v24);
        if ( (_QWORD *)*v15 == v15 )
          *((_DWORD *)v15 + 10) = bKillPFFOBJ((PFFOBJ *)v30, (struct PFFCLEANUP *)(v15 + 2));
        v12 += 56;
        v15 += 7;
        v14 = SkipInvalidPff(v32);
      }
      while ( v14 );
    }
    v11 = *(_QWORD *)this;
  }
  SEMOBJ<17>::vUnlock(&v31);
  v26 = 0;
  v27 = 0x6DB6DB6DB6DB6DB7LL * ((v12 - v10) >> 3);
  if ( (_DWORD)v27 )
  {
    v28 = v10 + 8;
    do
    {
      if ( *(char **)v28 == v28 )
      {
        if ( *((_DWORD *)v28 + 10) )
          vCleanupFontFile((struct PFFCLEANUP *)&v10[56 * v26 + 24]);
      }
      else
      {
        v30[0] = *((_QWORD *)v28 - 1);
        vKillRFONTList((PFFOBJ *)v30);
      }
      ++v26;
      v28 += 56;
    }
    while ( v26 < (unsigned int)v27 );
  }
  if ( v4 )
    Win32FreePool(v10);
  return v8;
}
