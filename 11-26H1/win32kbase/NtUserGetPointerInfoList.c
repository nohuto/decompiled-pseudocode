/*
 * XREFs of NtUserGetPointerInfoList @ 0x140053E60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x14004F438 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x14004F53C (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     GetPointerInfoSize @ 0x140050B38 (GetPointerInfoSize.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1400537C4 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetPointerInfoList(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        volatile void *Address)
{
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rbx
  volatile void *v16; // r14
  unsigned int ULongFromUser; // eax
  __int64 v18; // r15
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // r8d
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v30; // r15
  __int64 CurrentProcessWow64Process; // rax
  _DWORD *v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // r15d
  unsigned int v35; // r12d
  __int64 v36; // rdx
  __int64 v37; // rax
  int PointerFrameInfoInternal; // eax
  __int64 UserSessionState; // rax
  __int64 v40; // rax
  unsigned int v41; // [rsp+50h] [rbp-F8h] BYREF
  struct tagTHREADINFO *v42; // [rsp+58h] [rbp-F0h] BYREF
  unsigned int v43[4]; // [rsp+A0h] [rbp-A8h]
  _OWORD Src[9]; // [rsp+B0h] [rbp-98h] BYREF
  unsigned int v45; // [rsp+150h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+158h] [rbp+10h]
  int v47; // [rsp+160h] [rbp+18h]
  int v48; // [rsp+168h] [rbp+20h]

  v48 = a4;
  v47 = a3;
  v46 = a2;
  *(_QWORD *)v43 = 0LL;
  v12 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v42);
  LODWORD(v13) = 0;
  if ( !a1 )
    goto LABEL_14;
  if ( HIWORD(a1) )
    goto LABEL_14;
  v14 = a5;
  if ( !a5 )
    goto LABEL_14;
  if ( (_DWORD)v14 != (unsigned int)GetPointerInfoSize(a2) )
    goto LABEL_14;
  v15 = a6;
  if ( !a6 || a7 == v13 )
    goto LABEL_14;
  if ( a3 || a4 )
  {
    v16 = Address;
  }
  else
  {
    v16 = Address;
    if ( !Address )
    {
LABEL_14:
      v24 = 87LL;
LABEL_15:
      v12 = v13;
LABEL_16:
      UserSetLastError(v24);
      goto LABEL_17;
    }
  }
  if ( a4 && (*((_DWORD *)v42 + 340) & 0x100LL) != 0 )
  {
    v24 = 5LL;
    goto LABEL_15;
  }
  ULongFromUser = RtlReadULongFromUser(a6, v13);
  v18 = ULongFromUser;
  v45 = ULongFromUser;
  v20 = RtlReadULongFromUser(a7, v19);
  v41 = v20;
  LODWORD(v13) = 0;
  if ( v16 )
  {
    if ( !(_DWORD)v18 )
      goto LABEL_14;
    if ( !v20 )
      goto LABEL_14;
    v23 = v18 * v20;
    if ( v23 > 0xFFFFFFFF )
      goto LABEL_14;
    v30 = v14 * (unsigned int)v23;
    *(_QWORD *)v43 = v30;
    if ( v30 > 0xFFFFFFFF )
      goto LABEL_14;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v23, 0LL);
    ProbeForWrite(v16, (unsigned int)v30, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    LODWORD(v30) = v43[0];
  }
  if ( a1 == 1 )
  {
    v32 = (_DWORD *)*((_QWORD *)PtiCurrent(v21, 0LL) + 189);
    if ( !v32 || (*v32 & 1) == 0 )
    {
      v12 = 0;
      v24 = 87LL;
      goto LABEL_16;
    }
    v34 = 1;
    v35 = 1;
    if ( v16 )
    {
      v36 = *((_QWORD *)PtiCurrent(0LL, v33) + 189);
      Src[0] = *(_OWORD *)(v36 + 24);
      Src[1] = *(_OWORD *)(v36 + 40);
      Src[2] = *(_OWORD *)(v36 + 56);
      Src[3] = *(_OWORD *)(v36 + 72);
      Src[4] = *(_OWORD *)(v36 + 88);
      Src[5] = *(_OWORD *)(v36 + 104);
      RtlCopyToUser((void *)v16, Src, 0x60uLL);
    }
LABEL_27:
    RtlWriteULongToUser(v15, v34);
    RtlWriteULongToUser(a7, v35);
    goto LABEL_17;
  }
  if ( v48 )
  {
    UserSessionState = W32GetUserSessionState(v21, 0, v22);
    PointerFrameInfoInternal = CTouchProcessor::GetPointerFrameInfoInternal(
                                 *(CTouchProcessor **)(UserSessionState + 3256),
                                 v42,
                                 a1,
                                 v46,
                                 v47,
                                 v30,
                                 &v45,
                                 &v41,
                                 (struct tagPOINTER_INFO *)v16);
    v34 = v45;
    v35 = v41;
  }
  else
  {
    v35 = 1;
    if ( v47 )
    {
      v40 = W32GetUserSessionState(v21, 0, v22);
      PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoHistoryInternal(
                                   *(CTouchProcessor **)(v40 + 3256),
                                   v42,
                                   a1,
                                   v46,
                                   v30,
                                   &v45,
                                   (unsigned __int8 *)v16);
      v34 = v45;
    }
    else
    {
      v34 = 1;
      v37 = W32GetUserSessionState(v21, 0, v22);
      PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoInternal(
                                   *(CTouchProcessor **)(v37 + 3256),
                                   v42,
                                   a1,
                                   v46,
                                   v43[0],
                                   (struct tagPOINTER_INFO *)v16);
    }
  }
  v12 = PointerFrameInfoInternal;
  if ( PointerFrameInfoInternal )
    goto LABEL_27;
LABEL_17:
  UserSessionSwitchLeaveCritWithNonPaged(v26, v25, v27, v28);
  return v12;
}
