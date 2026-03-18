/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140035D3C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14002D4E4 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140036370 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     unsafe_cast_class_to_PIMEWND @ 0x140285D1C (unsafe_cast_class_to_PIMEWND.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1, __int64 a2)
{
  ULONG_PTR v2; // r13
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r12
  struct tagWND *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagBWL *v17; // r14
  _QWORD *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  _QWORD *i; // rax
  __int64 v29; // rbx
  ULONG64 v30; // rcx
  ULONG64 v31; // r15
  __int64 v32; // r15
  _QWORD *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 UserSessionState; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  _QWORD **v41; // rcx
  bool v42; // zf
  struct tagSMWP *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // ebx
  _QWORD *v47; // rbx
  ULONG_PTR *v48; // rax
  ULONG_PTR v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  ULONG_PTR *v52; // rax
  ULONG_PTR v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  ULONG_PTR v57; // [rsp+20h] [rbp-98h] BYREF
  _QWORD *v58; // [rsp+28h] [rbp-90h]
  ULONG64 v59; // [rsp+30h] [rbp-88h]
  _QWORD *v60; // [rsp+38h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[15]; // [rsp+40h] [rbp-78h] BYREF
  ULONG64 *v63; // [rsp+C8h] [rbp+10h]
  _QWORD **v64; // [rsp+C8h] [rbp+10h]
  struct tagWND *v65; // [rsp+D0h] [rbp+18h]

  v2 = 0LL;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v6 = *CurrentThreadNonPaged;
  else
    v6 = 0LL;
  if ( v6 )
  {
    v5 = *(_QWORD *)(v6 + 504);
    if ( v5 )
      v2 = *(_QWORD *)(v5 + 24);
  }
  BugCheckParameter3[4] = v2;
  v7 = (__int64 *)W32GetCurrentThreadNonPaged(v5, v4);
  if ( v7 )
    v10 = *v7;
  else
    v10 = 0LL;
  BugCheckParameter3[5] = v10;
  if ( v2 )
  {
    v11 = *(struct tagWND **)(v2 + 112);
    v14 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 63440);
    if ( v14 )
    {
      *(_QWORD *)(W32GetUserSessionState(v13, v12) + 63440) = 0LL;
LABEL_11:
      *(_QWORD *)(v14 + 8) = v14 + 32;
      *(_QWORD *)(v14 + 24) = v10;
      v17 = InternalBuildHwndList((struct tagBWL *)v14, v11, 2u);
      v18 = (_QWORD *)*((_QWORD *)v17 + 1);
      if ( (unsigned __int64)v18 >= *((_QWORD *)v17 + 2) )
      {
        Win32FreePool(v17);
        return;
      }
      *v18 = 1LL;
      v19 = (__int64 *)W32GetCurrentThreadNonPaged(v16, v15);
      if ( v19 )
        v21 = *v19;
      else
        v21 = 0LL;
      *((_QWORD *)v17 + 3) = v21;
      v22 = (__int64 *)W32GetCurrentThreadNonPaged(v21, v20);
      if ( v22 )
        v24 = *v22;
      else
        v24 = 0LL;
      *((_QWORD *)v17 + 3) = v24;
      v25 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 63248);
      *(_QWORD *)v17 = v25;
      *(_QWORD *)(W32GetUserSessionState(v25, v26) + 63248) = v17;
      BugCheckParameter3[3] = (ULONG_PTR)v17;
      for ( i = (_QWORD *)((char *)v17 + 32); ; i = v60 + 1 )
      {
        v60 = i;
        if ( *i == 1LL
          || (v29 = ValidateHwnd(*i),
              v65 = (struct tagWND *)v29,
              (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 528), 0, 0) & 1) != 0) )
        {
          FreeHwndList(v17, v27);
          return;
        }
        if ( v29 )
        {
          if ( *(_QWORD *)(v29 + 16) == v10 )
          {
            v63 = (ULONG64 *)unsafe_cast_class_to_PIMEWND(v29);
            if ( v63 )
              break;
          }
        }
LABEL_24:
        ;
      }
      v30 = *v63;
      v59 = *v63;
      v31 = MmUserProbeAddress;
      if ( v59 < MmUserProbeAddress )
        v31 = v59;
      v32 = *(_QWORD *)(v31 + 16);
      v33 = 0LL;
      W32GetCurrentThreadNonPaged(v30, v27);
      v36 = *(_QWORD *)(W32GetUserSessionState(v35, v34) + 19872);
      if ( (unsigned __int64)(unsigned __int16)v32 >= *(_QWORD *)(v36 + 8) )
      {
LABEL_33:
        if ( v33 )
        {
          Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v10, v29);
          Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(&v57, v10, (__int64)v33);
          do
          {
            if ( v33 == (_QWORD *)v2 )
              break;
            v44 = *v33;
            v43 = a1;
            v45 = *((_QWORD *)a1 + 5);
            v46 = *((_DWORD *)a1 + 7);
            while ( --v46 >= 0 )
            {
              if ( v44 == *(_QWORD *)v45 )
              {
                if ( (~*(_BYTE *)(v45 + 32) & 3) != 0 )
                  xxxSendMessage(v65, 0x287u);
                break;
              }
              v45 += 168LL;
            }
            if ( v46 >= 0 )
              break;
            v33 = (_QWORD *)v33[13];
            v47 = v58;
            v58 = v33;
            if ( v33 )
              HMLockObject(v33);
            if ( v47 )
              HMUnlockObject(v47);
          }
          while ( v33 );
          v48 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v44, v43);
          if ( v48 )
            v49 = *v48;
          else
            v49 = 0LL;
          Win32HM_UnlockFromThread<1>(v49, &v57);
          v58 = 0LL;
          v57 = -1LL;
          v52 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v51, v50);
          if ( v52 )
            v53 = *v52;
          else
            v53 = 0LL;
          Win32HM_UnlockFromThread<0>(v53, BugCheckParameter3);
          BugCheckParameter3[1] = 0LL;
          BugCheckParameter3[0] = -1LL;
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&v57, v54);
          Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v55);
        }
        goto LABEL_24;
      }
      UserSessionState = W32GetUserSessionState(v36, v27);
      v40 = *(_DWORD *)(W32GetUserSessionState(v39, v38) + 19896) * (unsigned int)(unsigned __int16)v32
          + *(_QWORD *)(UserSessionState + 19888);
      v41 = (_QWORD **)HMPkheFromPhe(v40);
      v64 = v41;
      LOWORD(v32) = WORD1(v32) & 0x7FFF;
      if ( (WORD1(v32) & 0x7FFF) != *(_WORD *)(v40 + 26) && (_WORD)v32 != 0x7FFF )
      {
        if ( (_WORD)v32 || !PsGetCurrentProcessWow64Process(v41, v27) )
          goto LABEL_61;
        v41 = v64;
      }
      if ( (*(_BYTE *)(v40 + 25) & 1) == 0 )
      {
        v42 = *(_BYTE *)(v40 + 24) == 1;
        v29 = (__int64)v65;
        if ( v42 )
          v33 = *v41;
        goto LABEL_33;
      }
LABEL_61:
      v29 = (__int64)v65;
      goto LABEL_33;
    }
    v56 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v14 = v56;
    if ( v56 )
    {
      *(_QWORD *)(v56 + 16) = v56 + 280;
      goto LABEL_11;
    }
  }
}
