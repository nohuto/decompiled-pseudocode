/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14004F8CC
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14004F880 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14004F8CC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1400359F0 (xxxSimpleDoSyncPaint.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14004F8CC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxCompositedPaint @ 0x14004FBD4 (xxxCompositedPaint.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x140050078 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     DecPaintCount @ 0x14005332C (DecPaintCount.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall xxxUpdateWindow2(struct tagTHREADINFO **a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  int v3; // ebp
  struct tagWND *v5; // rsi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG_PTR *v10; // rax
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rcx
  struct tagWND *v13; // rax
  struct tagTHREADINFO **v14; // rax
  __int64 v15; // rdx
  struct tagTHREADINFO *v16; // rcx
  struct tagWND *v17; // rsi
  struct tagTHREADINFO *v18; // rdi
  __int64 v19; // rcx
  ULONG_PTR *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct tagTHREADINFO *v26; // rax
  struct tagTHREADINFO *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *i; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  v3 = a2;
  v5 = (struct tagWND *)a1;
  if ( a1 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 27LL) & 2) != 0 )
        break;
      v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
    }
    while ( v5 );
  }
  if ( v5 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
    if ( CurrentThreadNonPaged )
      v7 = *CurrentThreadNonPaged;
    else
      v7 = 0LL;
    BugCheckParameter3 = *(_QWORD *)(v7 + 456);
    *(_QWORD *)(v7 + 456) = &BugCheckParameter3;
    i = v5;
    HMLockObject(v5);
    xxxCompositedPaint(v5);
    v10 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v9, v8);
    if ( v10 )
      v2 = *v10;
    Win32HM_UnlockFromThread<0>(v2, &BugCheckParameter3);
    return;
  }
  v11 = a1[5];
  if ( *((_QWORD *)v11 + 17) )
  {
    if ( !(unsigned int)ValidateParents((struct tagWND *)a1, a2 & 4) )
      return;
  }
  else if ( (*((_BYTE *)v11 + 17) & 0x10) == 0 )
  {
    goto LABEL_13;
  }
  if ( (*((_BYTE *)a1[5] + 17) & 0x10) != 0 )
  {
    SetOrClrWF(0, (struct tagWND *)a1, 0x110u, 1);
    if ( !*((_QWORD *)a1[5] + 17) )
      DecPaintCount(a1);
  }
  SetOrClrWF(1, (struct tagWND *)a1, 0x240u, 1);
  SetOrClrWF(0, (struct tagWND *)a1, 0x120u, 1);
  v24 = *((unsigned int *)PtiCurrent(v22, v21) + 340);
  if ( (v24 & 0x40000) == 0 || (v26 = PtiCurrent(v24, v23), v27 = a1[2], v26 == v27) )
  {
    xxxSendMessage((struct tagWND *)a1, 0xFu);
  }
  else
  {
    v28 = *((_QWORD *)v27 + 107);
    v29 = v28 + 16;
    v30 = -v28;
    if ( (v29 & -(__int64)(v30 != 0)) == 0
      || *(_DWORD *)((v29 & -(__int64)(v30 != 0)) + 8) != 15
      || *(_QWORD *)((v29 & -(__int64)(v30 != 0)) + 0x10)
      || *(_QWORD *)((v29 & -(__int64)(v30 != 0)) + 0x18) )
    {
      PostMessage((int)a1, 15, 0, 0);
    }
  }
  if ( (*((_BYTE *)a1[5] + 18) & 0x40) != 0 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
LABEL_13:
  if ( (v3 & 1) != 0 )
  {
    v12 = a1[3];
    v13 = 0LL;
    if ( v12 )
    {
      a2 = *((_QWORD *)v12 + 1);
      if ( a2 )
        v13 = *(struct tagWND **)(a2 + 24);
    }
    if ( a1 != (struct tagTHREADINFO **)v13 )
    {
      v14 = (struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(v12, a2);
      if ( v14 )
        v16 = *v14;
      else
        v16 = 0LL;
      v17 = 0LL;
      BugCheckParameter3 = *((_QWORD *)v16 + 57);
      *((_QWORD *)v16 + 57) = &BugCheckParameter3;
      v18 = a1[14];
      for ( i = 0LL; v18; v18 = (struct tagTHREADINFO *)*((_QWORD *)v18 + 11) )
      {
        v19 = *((_QWORD *)v18 + 5);
        if ( (*(_BYTE *)(v19 + 24) & 0x20) != 0 && (*(_QWORD *)(v19 + 136) || (*(_BYTE *)(v19 + 17) & 0x10) != 0) )
        {
          v16 = v18;
          while ( 1 )
          {
            v16 = (struct tagTHREADINFO *)*((_QWORD *)v16 + 11);
            if ( !v16 )
              break;
            v25 = *((_QWORD *)v16 + 5);
            if ( *(_QWORD *)(v25 + 136) || (*(_BYTE *)(v25 + 17) & 0x10) != 0 )
              goto LABEL_25;
          }
        }
        i = v18;
        HMLockObject(v18);
        if ( v17 )
          HMUnlockObject(v17);
        xxxUpdateWindow2(v18, v3 | 4);
        v17 = i;
LABEL_25:
        ;
      }
      v20 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v16, v15);
      if ( v20 )
        v2 = *v20;
      Win32HM_UnlockFromThread<1>(v2, &BugCheckParameter3);
    }
  }
}
