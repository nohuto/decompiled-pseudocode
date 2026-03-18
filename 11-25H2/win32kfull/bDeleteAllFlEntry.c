/*
 * XREFs of bDeleteAllFlEntry @ 0x140107318
 * Callers:
 *     GreEnableEUDC @ 0x140147400 (GreEnableEUDC.c)
 * Callees:
 *     bUnloadEudcFont @ 0x140107588 (bUnloadEudcFont.c)
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1401213E0 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140121404 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1401F355C (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     vLinkEudcPFEs @ 0x140201DCC (vLinkEudcPFEs.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1402247EC (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140260F84 (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 */

__int64 __fastcall bDeleteAllFlEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int128 v4; // xmm0
  _QWORD *v5; // rdi
  int v6; // r14d
  _QWORD *v7; // rcx
  int v8; // r9d
  struct PFE ***v9; // r8
  struct PFE ****v10; // rdx
  int v11; // eax
  struct PFE *****v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  int v16; // eax
  struct PFE **v17; // rbx
  struct PFE *v18; // rax
  struct PFE **v19; // rdi
  struct PFE ***v20; // rcx
  struct PFE **v22; // [rsp+20h] [rbp-20h] BYREF
  struct PFE ****v23; // [rsp+28h] [rbp-18h]
  struct PFE *v24[2]; // [rsp+30h] [rbp-10h] BYREF

  v23 = (struct PFE ****)&v22;
  v22 = (struct PFE **)&v22;
  *(_OWORD *)v24 = 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 4872LL;
  GreAcquirePushLockExclusive2<16,1>(v3);
  WaitForConcurrentEUDCOperationCompletion((struct Gre::Font::GLOBALS *)v3);
  vUnlinkAllEudcRFONTsAndPFEs(1LL);
  vUnlinkAllEudcFromRFONTList();
  if ( *(_QWORD *)(v3 + 8656) || *(_QWORD *)(v3 + 8664) )
  {
    v4 = *(_OWORD *)(v3 + 8656);
    *(_OWORD *)(v3 + 8656) = 0LL;
    ++*(_DWORD *)(v3 + 9232);
    *(_OWORD *)v24 = v4;
    *(_WORD *)(v3 + 8672) = 0;
  }
  v5 = *(_QWORD **)(v3 + 9248);
  if ( v5 == (_QWORD *)(v3 + 9248) )
    goto LABEL_23;
  v6 = *(_DWORD *)(v3 + 9240);
  do
  {
    v7 = v5;
    v8 = 0;
    v5 = (_QWORD *)*v5;
    v9 = (struct PFE ***)v7[2];
    if ( v9 == v7 + 2 )
    {
LABEL_15:
      v14 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v15 = (_QWORD *)v7[1], (_QWORD *)*v15 != v7) )
LABEL_11:
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      Win32FreePool(v7);
      --*(_DWORD *)(v3 + 9240);
      continue;
    }
    do
    {
      v10 = (struct PFE ****)v9;
      v9 = (struct PFE ***)*v9;
      v11 = *((_DWORD *)v10 + 4);
      if ( v11 )
      {
        if ( v11 != 1 || (*(_DWORD *)(v3 + 8648) & 8) == 0 )
        {
LABEL_35:
          ++v8;
          continue;
        }
      }
      else if ( (*(_DWORD *)(v3 + 8648) & 2) == 0 )
      {
        goto LABEL_35;
      }
      if ( v9[1] != (struct PFE **)v10 )
        goto LABEL_11;
      v12 = (struct PFE *****)v10[1];
      if ( *v12 != v10 )
        goto LABEL_11;
      *v12 = (struct PFE ****)v9;
      v9[1] = (struct PFE **)v12;
      v13 = v23;
      if ( *v23 != &v22 )
        goto LABEL_11;
      v10[1] = (struct PFE ***)v23;
      *v10 = &v22;
      *v13 = v10;
      v23 = v10;
    }
    while ( v9 != v7 + 2 );
    if ( !v8 )
      goto LABEL_15;
    if ( *((_DWORD *)v7 + 25) != v8 )
    {
      ++*((_DWORD *)v7 + 26);
      *((_DWORD *)v7 + 25) = v8;
    }
  }
  while ( v5 != (_QWORD *)(v3 + 9248) );
  v16 = *(_DWORD *)(v3 + 9240);
  if ( v6 != v16 )
    ++*(_DWORD *)(v3 + 9236);
  if ( v16 )
    vLinkEudcPFEs(0LL);
LABEL_23:
  GreReleasePushLockExclusive2<16,1>(v3);
  if ( v24[0] || v24[1] )
    bUnloadEudcFont(v24);
  v17 = v22;
  while ( v17 != (struct PFE **)&v22 )
  {
    v18 = *v17;
    v19 = v17;
    v17 = (struct PFE **)v18;
    if ( *((struct PFE ***)v18 + 1) != v19 )
      goto LABEL_11;
    v20 = (struct PFE ***)v19[1];
    if ( *v20 != v19 )
      goto LABEL_11;
    *v20 = (struct PFE **)v18;
    *((_QWORD *)v18 + 1) = v20;
    bUnloadEudcFont(v19 + 4);
    Win32FreePool(v19);
  }
  return 1LL;
}
