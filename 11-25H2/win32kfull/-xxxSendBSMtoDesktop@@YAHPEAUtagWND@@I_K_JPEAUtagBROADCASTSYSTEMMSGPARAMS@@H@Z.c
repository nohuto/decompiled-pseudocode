/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140129E38
 * Callers:
 *     xxxSendMessageBSM @ 0x140128DF0 (xxxSendMessageBSM.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140037CD8 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     _PostTransformableMessageIL @ 0x14012A580 (_PostTransformableMessageIL.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x14018E130 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND **a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  unsigned int v8; // r14d
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *i; // rax
  __int64 v14; // r15
  ULONG_PTR v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 UserSessionState; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  ULONG_PTR *v24; // r12
  ULONG_PTR v25; // rbx
  struct tagTHREADINFO *v26; // r15
  int v27; // r12d
  __int64 v28; // rcx
  int v29; // ebx
  int v30; // edx
  unsigned int v31; // ebx
  unsigned int v32; // r15d
  struct tagDRAWITEMSTRUCT *v33; // r9
  __int64 v34; // rdx
  void *v35; // rcx
  PETHREAD *v36; // rcx
  ULONG_PTR *CurrentThreadNonPaged; // rax
  ULONG_PTR v38; // rcx
  bool v39; // zf
  _QWORD *v41; // rcx
  _QWORD *v42; // rcx
  __int128 v43; // xmm0
  int v44; // eax
  LastWokenThread *v45; // rcx
  struct tagTHREADINFO *v46; // rax
  HANDLE InputBuffer; // [rsp+50h] [rbp-89h] BYREF
  int v48; // [rsp+58h] [rbp-81h]
  __int64 v49; // [rsp+60h] [rbp-79h]
  int v50; // [rsp+68h] [rbp-71h]
  unsigned __int64 v51; // [rsp+70h] [rbp-69h]
  void *Handle; // [rsp+78h] [rbp-61h] BYREF
  __int64 v53; // [rsp+80h] [rbp-59h] BYREF
  __int64 v54; // [rsp+88h] [rbp-51h]
  int v55; // [rsp+90h] [rbp-49h]
  __int64 v56; // [rsp+98h] [rbp-41h] BYREF
  struct tagTHREADINFO *v57; // [rsp+A0h] [rbp-39h]
  struct tagBWL *v58; // [rsp+A8h] [rbp-31h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v60; // [rsp+C0h] [rbp-19h] BYREF
  int v61; // [rsp+D0h] [rbp-9h]

  v48 = 1;
  v54 = a4;
  v51 = a3;
  v8 = a2;
  v10 = 0LL;
  v57 = PtiCurrent((__int64)a1, a2);
  v60 = 0LL;
  v61 = 0;
  if ( !a1 )
    return 0LL;
  if ( v8 - 1024 <= 0xBBFF )
  {
    UserSetLastError(87);
    return 1LL;
  }
  if ( !a6 && (v8 == 295 || v8 == 21 || v8 == 26 || v8 == 29 || v8 == 794) )
    a6 = 1;
  v58 = BuildHwndList(a1[14], 2LL, 0LL, 1);
  if ( !v58 )
    return 0LL;
  if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80 )
  {
    v45 = *(LastWokenThread **)(W32GetUserSessionState(v12, v11) + 19144);
    if ( a1[3] == v45
      && ((_InterlockedCompareExchange((volatile signed __int32 *)v57 + 132, 0, 0) & 8) != 0
       || CanForceForeground(*((const struct tagPROCESSINFO **)v57 + 58))) )
    {
      LastWokenThread::Clear(v45);
    }
  }
  v49 = 0LL;
  if ( v8 != 537 )
    goto LABEL_14;
  if ( a3 != 32772 )
  {
    v49 = 0LL;
    if ( a3 != 0x8000 )
      goto LABEL_14;
  }
  v39 = *(_DWORD *)(a4 + 4) == 2;
  v49 = 0LL;
  if ( !v39 )
    goto LABEL_14;
  if ( (*(_DWORD *)(a4 + 12) & 0x40000000) != 0 )
    return 0LL;
  v43 = *(_OWORD *)a4;
  v61 = *(_DWORD *)(a4 + 16);
  v44 = HIDWORD(*(_QWORD *)(a4 + 8)) | 0x40000000;
  v49 = 0LL;
  v39 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
  v60 = v43;
  HIDWORD(v60) = v44;
  if ( v39 )
  {
    InputBuffer = 0LL;
    GetProcessLuid(0LL, &InputBuffer);
    v49 = 0LL;
    if ( (_DWORD)InputBuffer == luidSystem[0] )
    {
      v11 = HIDWORD(InputBuffer) == luidSystem[1];
      v49 = v11;
    }
  }
LABEL_14:
  for ( i = (__int64 *)((char *)v58 + 32); ; i = (__int64 *)((char *)Handle + 8) )
  {
    v14 = *i;
    Handle = i;
    if ( v14 == 1 )
    {
      v31 = v48;
      goto LABEL_68;
    }
    v50 = 0;
    v15 = 0LL;
    W32GetCurrentThreadNonPaged(1LL, v11);
    v18 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19872);
    if ( (unsigned __int64)(unsigned __int16)v14 < *(_QWORD *)(v18 + 8) )
    {
      UserSessionState = W32GetUserSessionState(v18, v11);
      v22 = *(_DWORD *)(W32GetUserSessionState(v21, v20) + 19896) * (unsigned int)(unsigned __int16)v14
          + *(_QWORD *)(UserSessionState + 19888);
      v24 = (ULONG_PTR *)HMPkheFromPhe(v22);
      LOWORD(v14) = WORD1(v14) & 0x7FFF;
      if ( ((WORD1(v14) & 0x7FFF) == *(_WORD *)(v22 + 26)
         || (_WORD)v14 == 0x7FFF
         || !(_WORD)v14 && PsGetCurrentProcessWow64Process(v23, v11))
        && (*(_BYTE *)(v22 + 25) & 1) == 0
        && *(_BYTE *)(v22 + 24) == 1 )
      {
        v15 = *v24;
      }
    }
    if ( v15 )
    {
      v11 = *((unsigned int *)a5 + 1);
      v25 = v15 + 16;
      v26 = v57;
      if ( (v11 & 2) == 0 || *(_QWORD *)(*(_QWORD *)v25 + 472LL) != *((_QWORD *)v57 + 59) )
      {
        if ( (v11 & 0x400) == 0
          || (v42 = *(_QWORD **)v25, v53 = 0LL, (int)GetProcessLuid(*v42, &v53) >= 0) && *((_QWORD *)a5 + 4) == v53 )
        {
          v27 = 1;
          if ( v49 == 1 )
          {
            v41 = *(_QWORD **)v25;
            InputBuffer = 0LL;
            if ( (int)GetProcessLuid(*v41, &InputBuffer) < 0 )
              continue;
            if ( (HANDLE)__PAIR64__(luidSystem[1], luidSystem[0]) != InputBuffer )
              v50 = 1;
          }
          v28 = *(_WORD *)(*(_QWORD *)(v15 + 40) + 42LL) & 0x2FFF;
          if ( (_DWORD)v28 != 668 )
          {
            v11 = *(unsigned __int16 *)(W32GetUserSessionState(v28, v11) + 41330);
            if ( (_WORD)v11 != **(_WORD **)(*(_QWORD *)(v15 + 136) + 8LL) )
              break;
          }
        }
      }
    }
LABEL_47:
    ;
  }
  BugCheckParameter3[0] = *((_QWORD *)v26 + 57);
  *((_QWORD *)v26 + 57) = BugCheckParameter3;
  BugCheckParameter3[1] = v15;
  HMLockObject(v15);
  v29 = *((_DWORD *)a5 + 1);
  if ( (v29 & 0x10) != 0 )
  {
    PostTransformableMessageIL((struct tagWND *)v15, v8, v51, v54, a6);
LABEL_44:
    CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v35, v34);
    if ( CurrentThreadNonPaged )
      v38 = *CurrentThreadNonPaged;
    else
      v38 = 0LL;
    Win32HM_UnlockFromThread<0>(v38, BugCheckParameter3);
    goto LABEL_47;
  }
  if ( (v29 & 0x100) != 0 )
  {
    xxxSendNotifyMessage(v15, v8, v51, v54, a6);
    goto LABEL_44;
  }
  if ( (v29 & 0x20000000) != 0 )
  {
    SendNotifyMessageAlways((struct tagWND *)v15, v8, v51, v54, (a6 != 0) + 2);
    goto LABEL_44;
  }
  v56 = 0LL;
  v30 = v29 & 8;
  InputBuffer = 0LL;
  v31 = v29 & 0x20;
  v55 = v30;
  if ( v8 != 536 || v51 != 4 )
    v27 = 0;
  if ( v30 )
    v32 = v27 != 0 ? 2000 : 5000;
  else
    v32 = 0;
  if ( v27 )
  {
    InputBuffer = PsGetThreadProcessId(**(PETHREAD **)(v15 + 16));
    ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
    v30 = v55;
  }
  v33 = (struct tagDRAWITEMSTRUCT *)&v60;
  if ( !v50 )
    v33 = (struct tagDRAWITEMSTRUCT *)v54;
  if ( xxxSendTransformableMessageTimeout(
         (struct tagTHREADINFO **)v15,
         v8,
         v51,
         v33,
         (v30 != 0 ? 2 : 0) | (*((_DWORD *)a5 + 1) >> 3) & 8u,
         v32,
         (unsigned __int64 *)&v56,
         a6,
         1) )
  {
    if ( (*((_DWORD *)a5 + 1) & 1) == 0 )
    {
      v31 = v48;
      goto LABEL_41;
    }
    v31 = 0;
    if ( v8 == 17 )
      v39 = v56 == 0;
    else
      v39 = v56 == 1112363332;
    LOBYTE(v31) = !v39;
  }
  v48 = v31;
LABEL_41:
  if ( v27 )
  {
    v36 = *(PETHREAD **)(v15 + 16);
    InputBuffer = 0LL;
    InputBuffer = PsGetThreadProcessId(*v36);
    ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
  }
  if ( v31 )
    goto LABEL_44;
  v39 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
  *((_QWORD *)a5 + 3) = *(_QWORD *)v15;
  if ( !v39 )
  {
    v35 = *(void **)(v15 + 24);
    Handle = 0LL;
    if ( v35 )
    {
      ObOpenObjectByPointer(v35, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
      v10 = Handle;
    }
    *((_QWORD *)a5 + 2) = v10;
  }
  v46 = PtiCurrent((__int64)v35, v34);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v46, BugCheckParameter3);
LABEL_68:
  FreeHwndList(v58, v11);
  return v31;
}
