/*
 * XREFs of InternalInvalidate3 @ 0x140032DB8
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x140030E90 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x140052E08 (xxxEndPaint.c)
 * Callees:
 *     IncPaintCount @ 0x140033748 (IncPaintCount.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 *     DecPaintCount @ 0x14005332C (DecPaintCount.c)
 *     CalcWindowRgn @ 0x140053D54 (CalcWindowRgn.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     IncPaintCountInterMoveSize @ 0x1402D3B50 (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // r13
  int v6; // r14d
  __int64 v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  BOOL v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // ebp
  _DWORD *v16; // rax
  int v17; // r13d
  int v18; // r15d
  int v19; // eax
  int v20; // r13d
  __int64 v21; // rax
  int v22; // r12d
  int v23; // ebx
  int v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int *v27; // rax
  unsigned int v28; // r15d
  int v29; // r14d
  int v30; // eax
  int v31; // r12d
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v33; // rax
  int v34; // r12d
  int v35; // r14d
  int v36; // ebx
  _DWORD *v37; // rax
  int v38; // r14d
  int v39; // ebx
  int v40; // r12d
  __int64 v41; // rax
  int v42; // r15d
  int v43; // ebp
  int v44; // ebx
  _DWORD *v45; // rax
  int v46; // ebp
  int v47; // ebx
  int v48; // r15d
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  struct tagWND *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 UserSessionState; // rax
  void *v60; // rax
  void *v61; // rax
  void *v62; // rax
  void *v63; // rax
  __int64 v64; // r8
  __int64 v65; // rdx
  struct tagTHREADINFO *v66; // rbx
  struct tagTHREADINFO *v67; // rax
  int v68; // [rsp+20h] [rbp-48h]
  BOOL v70; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v7 = *((_QWORD *)a1 + 3);
    v8 = 0LL;
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 8);
      if ( v9 )
        v8 = *(struct tagWND **)(v9 + 24);
    }
    if ( a1 == v8 && (unsigned int)IsWindowDesktopComposed(a1) )
      return;
  }
  v10 = *((_QWORD *)a1 + 5);
  v11 = (_BYTE *)(v10 + 17);
  v12 = *(_QWORD *)(v10 + 136) || (*v11 & 0x10) != 0;
  v70 = v12;
  if ( (a3 & 0x407) == 0 )
  {
    if ( (a3 & 0x838) == 0 )
      return;
    LOBYTE(v10) = (*v11 >> 5) & ((a3 & 0x8000) == 0);
    if ( (_BYTE)v10 )
      return;
    if ( (a3 & 0x10) != 0 )
      SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( (a3 & 8) == 0 )
      goto LABEL_53;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0LL, a1, 258LL, 1LL);
    if ( (a3 & 0x800) != 0 )
      SetOrClrWF(0LL, a1, 264LL, 1LL);
    v55 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v55 + 136) )
      goto LABEL_53;
    if ( (*(_BYTE *)(v55 + 17) & 8) != 0 )
    {
      if ( v4 != 1 )
      {
LABEL_67:
        if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
        {
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
          v64 = *((_QWORD *)a1 + 5);
          v65 = *(_QWORD *)(v64 + 136);
          if ( !v65 )
            goto LABEL_59;
          LOBYTE(v64) = ~*(_BYTE *)(v64 + 17);
          if ( !(unsigned int)CalcWindowRgn(a1, v65, ((unsigned int)v64 >> 3) & 1) )
            goto LABEL_59;
        }
        v56 = GreCombineRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), v4, 4LL);
        if ( !v56 )
          goto LABEL_59;
        if ( v56 != 1 )
        {
LABEL_53:
          if ( v12 )
          {
            v53 = *((_QWORD *)a1 + 5);
            if ( !*(_QWORD *)(v53 + 136) && (*(_BYTE *)(v53 + 17) & 0x10) == 0 )
              DecPaintCount(a1);
          }
          return;
        }
LABEL_70:
        DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
        SetOrClrWF(0LL, a1, 258LL, 1LL);
        goto LABEL_53;
      }
      v4 = *(_QWORD *)(W32GetUserSessionState(v10, v11) + 63376);
      CalcWindowRgn(a1, v4, 1LL);
    }
    if ( v4 == 1 )
      goto LABEL_70;
    goto LABEL_67;
  }
  if ( (a3 & 2) != 0 )
  {
    v13 = *(_DWORD *)(v10 + 232);
    v14 = *(_DWORD *)(v10 + 28);
    v15 = *(_DWORD *)(v10 + 24);
    *v11 |= 0x10u;
    v68 = v13;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v16 = (_DWORD *)*((_QWORD *)a1 + 5);
      v17 = v16[7];
      v18 = v15 ^ v16[6];
      v19 = v68 ^ v16[58];
      v20 = v14 ^ v17;
      if ( !v20 )
      {
        if ( v18 )
        {
LABEL_74:
          if ( (v18 & 0x4E27A9) == 0 && (v19 & 0x3F2C0) == 0 )
          {
LABEL_82:
            if ( (v20 & 0x1C40000) != 0 || (v18 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
            goto LABEL_15;
          }
LABEL_81:
          DirtyVisRgnTrackers(a1);
          v60 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v60);
          goto LABEL_82;
        }
        if ( !v19 )
        {
LABEL_15:
          v4 = a2;
          goto LABEL_16;
        }
      }
      if ( (v20 & 0xB9CF0000) != 0 )
        goto LABEL_81;
      goto LABEL_74;
    }
  }
LABEL_16:
  if ( !v6 )
    goto LABEL_38;
  v21 = *((_QWORD *)a1 + 5);
  v22 = *(_DWORD *)(v21 + 28);
  v23 = *(_DWORD *)(v21 + 24);
  v24 = *(_DWORD *)(v21 + 232);
  *(_BYTE *)(v21 + 17) &= ~1u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v27 = (unsigned int *)*((_QWORD *)a1 + 5);
    v28 = v27[7];
    v26 = v27[6];
    v25 = v27[58];
    v29 = v23 ^ v27[6];
    v30 = v24 ^ v27[58];
    v31 = v28 ^ v22;
    if ( !v31 )
    {
      if ( v29 )
      {
LABEL_78:
        if ( (v29 & 0x4E27A9) == 0 && (v30 & 0x3F2C0) == 0 )
        {
LABEL_85:
          if ( (v31 & 0x1C40000) != 0 || (v29 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(a1, 1LL);
          goto LABEL_21;
        }
LABEL_84:
        DirtyVisRgnTrackers(a1);
        v61 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v61);
        goto LABEL_85;
      }
      if ( !v30 )
        goto LABEL_21;
    }
    if ( (v31 & 0xB9CF0000) != 0 )
      goto LABEL_84;
    goto LABEL_78;
  }
LABEL_21:
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v26, v25);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  if ( *((_QWORD **)a1 + 2) != CurrentThreadNonPaged )
  {
    SetOrClrWF(1LL, a1, 288LL, 1LL);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 1) != 0 )
    {
      SetOrClrWF(1LL, a1, 1026LL, 1LL);
      UserSessionState = W32GetUserSessionState(v58, v57);
      *(_DWORD *)(UserSessionState + 63420) |= a3;
    }
  }
  if ( (a3 & 4) != 0 )
  {
    v33 = *((_QWORD *)a1 + 5);
    v34 = *(_DWORD *)(v33 + 28);
    v35 = *(_DWORD *)(v33 + 24);
    v36 = *(_DWORD *)(v33 + 232);
    *(_BYTE *)(v33 + 17) |= 2u;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v37 = (_DWORD *)*((_QWORD *)a1 + 5);
      v38 = v37[6] ^ v35;
      v39 = v37[58] ^ v36;
      v40 = v37[7] ^ v34;
      if ( !v40 )
      {
        if ( v38 )
        {
LABEL_88:
          if ( (v38 & 0x4E27A9) == 0 && (v39 & 0x3F2C0) == 0 )
          {
LABEL_91:
            if ( (v40 & 0x1C40000) != 0 || (v38 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
            goto LABEL_29;
          }
LABEL_90:
          DirtyVisRgnTrackers(a1);
          v62 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v62);
          goto LABEL_91;
        }
        if ( !v39 )
          goto LABEL_29;
      }
      if ( (v40 & 0xB9CF0000) != 0 )
        goto LABEL_90;
      goto LABEL_88;
    }
  }
LABEL_29:
  if ( (a3 & 0x400) == 0 )
    goto LABEL_34;
  v41 = *((_QWORD *)a1 + 5);
  v42 = *(_DWORD *)(v41 + 28);
  v43 = *(_DWORD *)(v41 + 24);
  v44 = *(_DWORD *)(v41 + 232);
  *(_BYTE *)(v41 + 17) |= 8u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_34;
  v45 = (_DWORD *)*((_QWORD *)a1 + 5);
  v46 = v45[6] ^ v43;
  v47 = v45[58] ^ v44;
  v48 = v45[7] ^ v42;
  if ( !v48 )
  {
    if ( v46 )
      goto LABEL_94;
    if ( !v47 )
      goto LABEL_34;
  }
  if ( (v48 & 0xB9CF0000) != 0 )
  {
LABEL_96:
    DirtyVisRgnTrackers(a1);
    v63 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v63);
    goto LABEL_97;
  }
LABEL_94:
  if ( (v46 & 0x4E27A9) != 0 || (v47 & 0x3F2C0) != 0 )
    goto LABEL_96;
LABEL_97:
  if ( (v48 & 0x1C40000) != 0 || (v46 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_34:
  v49 = *((_QWORD *)a1 + 5);
  v50 = *(_QWORD *)(v49 + 136);
  if ( v50 != 1 )
  {
    if ( v4 == 1 )
      goto LABEL_59;
    if ( v50 )
    {
      if ( (unsigned int)GreCombineRgn(v50, *(_QWORD *)(v49 + 136), v4, 2LL) )
        goto LABEL_38;
LABEL_59:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
      goto LABEL_38;
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
    v54 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
    if ( !v54 || !(unsigned int)GreCombineRgn(v54, v4, 0LL, 5LL) )
      goto LABEL_59;
  }
LABEL_38:
  if ( !v70 )
  {
    v51 = *((_QWORD *)a1 + 5);
    if ( *(_QWORD *)(v51 + 136) || (*(_BYTE *)(v51 + 17) & 0x10) != 0 )
    {
      if ( (a3 & 0x20000) == 0 )
      {
        v52 = a1;
LABEL_47:
        IncPaintCount(v52);
        return;
      }
      v66 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
      v67 = PtiCurrent();
      v52 = a1;
      if ( v66 == v67 )
        goto LABEL_47;
      IncPaintCountInterMoveSize(a1);
    }
  }
}
