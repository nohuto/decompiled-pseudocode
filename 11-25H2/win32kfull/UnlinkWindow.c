/*
 * XREFs of UnlinkWindow @ 0x14004BBDC
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x14004DAC8 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x140058F0C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowGroupBand @ 0x140152834 (SetWindowGroupBand.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B5DE8 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x14001D2A8 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x14004BF48 (IsMessageParentWindow.c)
 */

LONG_PTR __fastcall UnlinkWindow(__int64 *a1, __int64 *a2)
{
  int v4; // r15d
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  LONG_PTR result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  void *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+28h] [rbp-48h]
  _OWORD v28[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v29; // [rsp+50h] [rbp-20h]
  int v30; // [rsp+58h] [rbp-18h]
  _QWORD v31[2]; // [rsp+5Ch] [rbp-14h]

  if ( (*((_DWORD *)a1 + 95) & 0x2000000) == 0
    || !(unsigned int)IsWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1)
    || (unsigned int)IsMessageParentWindow()
    || a2 == *(__int64 **)(W32GetUserSessionState(v19, v18) + 68472) )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    DirtyVisRgnTrackers((struct tagWND *)a1, v20);
  }
  v5 = a1 + 11;
  if ( (__int64 *)a2[14] == a1 )
  {
    v6 = *v5;
    if ( *v5 )
      v7 = *(_QWORD *)(v6 + 48);
    else
      v7 = 0LL;
    *(_QWORD *)(a2[5] + 56) = v7;
    v26 = a2 + 14;
    v27 = v6;
LABEL_7:
    HMAssignmentLock(&v26, 0LL);
    goto LABEL_8;
  }
  v21 = a1[12];
  if ( v21 )
  {
    v22 = *v5;
    v23 = (_QWORD *)(v21 + 88);
    v24 = *(_QWORD *)(v21 + 40);
    if ( *v5 )
      v25 = *(_QWORD *)(v22 + 48);
    else
      v25 = 0LL;
    *(_QWORD *)(v24 + 72) = v25;
    v26 = v23;
    v27 = v22;
    goto LABEL_7;
  }
LABEL_8:
  v8 = a1 + 12;
  v9 = *v5;
  if ( *v5 )
  {
    v10 = *v8;
    v11 = (_QWORD *)(v9 + 96);
    v12 = *(_QWORD *)(v9 + 40);
    if ( *v8 )
      v13 = *(_QWORD *)(v10 + 48);
    else
      v13 = 0LL;
    *(_QWORD *)(v12 + 80) = v13;
    v27 = v10;
    v26 = v11;
    HMAssignmentLock(&v26, 0LL);
    *(_QWORD *)(a1[5] + 72) = 0LL;
    HMAssignmentUnlock(a1 + 11);
  }
  *(_QWORD *)(a1[5] + 80) = 0LL;
  result = HMAssignmentUnlock(a1 + 12);
  *((_DWORD *)a1 + 95) &= 0xFCFFFFFF;
  if ( v4 )
  {
    v15 = *a2;
    v16 = *a1;
    v17 = (void *)ReferenceDwmApiPort();
    result = IncrementDWMWindowUniqueness();
    if ( v17 )
    {
      memset(v28, 0, sizeof(v28));
      WORD2(v28[0]) = 0x8000;
      v29 = 0LL;
      LODWORD(v28[0]) = 3932180;
      v30 = 1073741843;
      v31[0] = v16;
      v31[1] = v15;
      LpcRequestPort(v17, v28);
      return ObfDereferenceObject(v17);
    }
  }
  return result;
}
