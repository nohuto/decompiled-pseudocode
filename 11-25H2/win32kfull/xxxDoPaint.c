/*
 * XREFs of xxxDoPaint @ 0x14005138C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x140051900 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     DecPaintCount @ 0x14005332C (DecPaintCount.c)
 *     ExchangeW32ThreadLock @ 0x140128FC4 (ExchangeW32ThreadLock.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxDoPaint(struct tagWND *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagWND *v7; // rdi
  struct tagWND *v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  int v11; // r13d
  char v12; // cl
  int v13; // ebx
  int v14; // esi
  int v15; // r12d
  _DWORD *v16; // rax
  int v17; // r14d
  int v18; // ecx
  __int64 v19; // rdx
  int v20; // ebp
  int v21; // eax
  int v22; // r15d
  __int64 v23; // rax
  int v24; // ebx
  int v25; // r15d
  int v26; // r12d
  _DWORD *v27; // rax
  int v28; // esi
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // ebp
  int v32; // eax
  int v33; // r14d
  struct tagWND *v34; // rdx
  __int64 v35; // rax
  int v37; // ebx
  int v38; // esi
  int v39; // r12d
  _DWORD *v40; // rax
  int v41; // r14d
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // ebp
  int v45; // eax
  int v46; // r15d
  __int64 v47; // rsi
  int v48; // esi
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  void *v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  void *v56; // rax
  int v57; // esi
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  void *v61; // rax
  __int64 v62; // rax
  struct tagTHREADINFO *v63; // rax
  __int64 v64; // rdx
  _QWORD *v65; // rsi
  __int64 v66; // rax
  _QWORD v67[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v68; // [rsp+30h] [rbp-38h]

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v6 = *CurrentThreadNonPaged;
  else
    v6 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 528), 0, 0) & 4) != 0 )
  {
    v47 = *(_QWORD *)(v6 + 656);
    if ( !v47 )
      return 0LL;
    v7 = *(struct tagWND **)(*(_QWORD *)(v47 + 56) + 8LL);
    v62 = *((_QWORD *)v7 + 5);
    if ( !*(_QWORD *)(v62 + 136) && (*(_BYTE *)(v62 + 17) & 0x10) == 0 )
    {
      v7 = 0LL;
      v63 = PtiCurrent(v5, v4);
      v67[0] = *((_QWORD *)v63 + 48);
      *((_QWORD *)v63 + 48) = v67;
      v65 = *(_QWORD **)(v47 + 16);
      v66 = UserDereferenceObject;
      v67[1] = 0LL;
      v68 = UserDereferenceObject;
      if ( v65 )
      {
        do
        {
          ObfReferenceObject(v65);
          ExchangeW32ThreadLock(v65, v67);
          v7 = xxxInternalDoPaint(*(struct tagWND **)(v65[1] + 24LL), (struct tagTHREADINFO *)v6);
          if ( v7 )
            break;
          v65 = (_QWORD *)v65[4];
        }
        while ( v65 );
        v66 = v68;
      }
      if ( v66 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v67, v64);
        v68 = -1LL;
      }
    }
  }
  else
  {
    v7 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v6 + 496) + 8LL) + 24LL),
           (struct tagTHREADINFO *)v6);
  }
  if ( !v7 )
    return 0LL;
  if ( a1 && a1 != v7 )
  {
    v8 = v7;
    while ( v8 && (*(_BYTE *)(*((_QWORD *)v8 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      v8 = (struct tagWND *)*((_QWORD *)v8 + 13);
      if ( a1 == v8 )
      {
        v9 = 1;
        goto LABEL_13;
      }
    }
    v9 = 0;
LABEL_13:
    if ( !v9 )
      return 0LL;
  }
  v10 = *((_QWORD *)v7 + 5);
  v11 = -16;
  v12 = *(_BYTE *)(v10 + 17);
  if ( (v12 & 0x10) == 0 )
    goto LABEL_15;
  v37 = *(_DWORD *)(v10 + 28);
  v38 = *(_DWORD *)(v10 + 24);
  v39 = *(_DWORD *)(v10 + 232);
  *(_BYTE *)(v10 + 17) = v12 & 0xEF;
  if ( (unsigned int)IsWindowDesktopComposed(v7) )
  {
    v40 = (_DWORD *)*((_QWORD *)v7 + 5);
    v41 = v40[7];
    v42 = v40[6];
    v43 = (unsigned int)v40[58];
    v44 = v38 ^ v42;
    v45 = v39 ^ v40[58];
    v46 = v37 ^ v41;
    if ( v37 == v41 )
    {
      if ( v44 )
        goto LABEL_55;
      if ( !v45 )
        goto LABEL_33;
    }
    if ( (v46 & 0xB9CF0000) != 0 )
    {
      v57 = -16;
      goto LABEL_59;
    }
LABEL_55:
    if ( (v44 & 0x4E27A9) != 0 )
    {
      v57 = -20;
      v41 = v42;
    }
    else
    {
      if ( (v45 & 0x3F2C0) == 0 )
      {
LABEL_60:
        if ( (v46 & 0x1C40000) != 0 || (v44 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v7, 1LL);
        goto LABEL_33;
      }
      v57 = -268435456;
      v41 = v43;
    }
LABEL_59:
    DirtyVisRgnTrackers(v7, v43);
    v58 = *(_QWORD *)v7;
    v61 = (void *)ReferenceDwmApiPort(v60, v59);
    DwmAsyncChildStyleChange(v61, v58, v57, v41);
    goto LABEL_60;
  }
LABEL_33:
  v10 = *((_QWORD *)v7 + 5);
  if ( !*(_QWORD *)(v10 + 136) )
  {
    DecPaintCount(v7);
    v10 = *((_QWORD *)v7 + 5);
  }
LABEL_15:
  v13 = *(_DWORD *)(v10 + 28);
  v14 = *(_DWORD *)(v10 + 24);
  v15 = *(_DWORD *)(v10 + 232);
  *(_BYTE *)(v10 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(v7) )
    goto LABEL_19;
  v16 = (_DWORD *)*((_QWORD *)v7 + 5);
  v17 = v16[7];
  v18 = v16[6];
  v19 = (unsigned int)v16[58];
  v20 = v14 ^ v18;
  v21 = v15 ^ v16[58];
  v22 = v13 ^ v17;
  if ( v13 == v17 )
  {
    if ( v20 )
      goto LABEL_38;
    if ( !v21 )
      goto LABEL_19;
  }
  if ( (v22 & 0xB9CF0000) != 0 )
  {
    v48 = -16;
    goto LABEL_49;
  }
LABEL_38:
  if ( (v20 & 0x4E27A9) != 0 )
  {
    v48 = -20;
    v17 = v18;
    goto LABEL_49;
  }
  if ( (v21 & 0x3F2C0) != 0 )
  {
    v48 = -268435456;
    v17 = v19;
LABEL_49:
    DirtyVisRgnTrackers(v7, v19);
    v53 = *(_QWORD *)v7;
    v56 = (void *)ReferenceDwmApiPort(v55, v54);
    DwmAsyncChildStyleChange(v56, v53, v48, v17);
  }
  if ( (v22 & 0x1C40000) != 0 || (v20 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(v7, 1LL);
LABEL_19:
  v23 = *((_QWORD *)v7 + 5);
  v24 = *(_DWORD *)(v23 + 28);
  v25 = *(_DWORD *)(v23 + 24);
  v26 = *(_DWORD *)(v23 + 232);
  *(_BYTE *)(v23 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v7) )
    goto LABEL_23;
  v27 = (_DWORD *)*((_QWORD *)v7 + 5);
  v28 = v27[7];
  v29 = v27[6];
  v30 = (unsigned int)v27[58];
  v31 = v25 ^ v29;
  v32 = v26 ^ v27[58];
  v33 = v24 ^ v28;
  if ( v24 == v28 )
  {
    if ( v31 )
      goto LABEL_42;
    if ( !v32 )
      goto LABEL_23;
  }
  if ( (v33 & 0xB9CF0000) != 0 )
  {
LABEL_45:
    DirtyVisRgnTrackers(v7, v30);
    v49 = *(_QWORD *)v7;
    v52 = (void *)ReferenceDwmApiPort(v51, v50);
    DwmAsyncChildStyleChange(v52, v49, v11, v28);
    goto LABEL_46;
  }
LABEL_42:
  if ( (v31 & 0x4E27A9) != 0 )
  {
    v11 = -20;
    v28 = v29;
    goto LABEL_45;
  }
  if ( (v32 & 0x3F2C0) != 0 )
  {
    v11 = -268435456;
    v28 = v30;
    goto LABEL_45;
  }
LABEL_46:
  if ( (v33 & 0x1C40000) != 0 || (v31 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(v7, 1LL);
LABEL_23:
  v34 = v7;
  while ( v34 && (*(_WORD *)(*((_QWORD *)v34 + 5) + 42LL) & 0x2FFF) != 0x29D )
  {
    v34 = (struct tagWND *)*((_QWORD *)v34 + 13);
    if ( (*(_BYTE *)(*((_QWORD *)v34 + 5) + 31LL) & 2) == 0 )
    {
      SetOrClrWF(1, v7, 0x401u, 1);
      break;
    }
  }
  *(_QWORD *)a2 = *(_QWORD *)v7;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v35 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v7 + 5) + 288LL));
  *(_DWORD *)(a2 + 8) = 15;
  *(_QWORD *)(a2 + 36) = v35;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
