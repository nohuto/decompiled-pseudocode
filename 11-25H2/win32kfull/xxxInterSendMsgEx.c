/*
 * XREFs of xxxInterSendMsgEx @ 0x14012BE00
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ClearSendMessages @ 0x14012D548 (ClearSendMessages.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxReceiverDied @ 0x14016F18C (xxxReceiverDied.c)
 *     _ReplyMessage @ 0x1401B74C0 (_ReplyMessage.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     xxxSleepThread2 @ 0x14001E134 (xxxSleepThread2.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140039968 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     IsPointerInputMessage @ 0x140067230 (IsPointerInputMessage.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     strncpycch @ 0x14011BDE0 (strncpycch.c)
 *     AllocateHidData @ 0x140120CE4 (AllocateHidData.c)
 *     IsPointerParentNotify @ 0x140137050 (IsPointerParentNotify.c)
 *     wcsncpycch @ 0x14013AB90 (wcsncpycch.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x140142CF0 (TransformMessageBetweenCoordinateSpaces.c)
 *     IsPointerInputMessageWithState @ 0x140144520 (IsPointerInputMessageWithState.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x14014B1A0 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     UnlinkSendListSms @ 0x14016F354 (UnlinkSendListSms.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140175800 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x140181818 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x140185DE4 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x14019340C (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ProcessSuspendedSendMessage @ 0x14019D800 (ProcessSuspendedSendMessage.c)
 *     ?CopyHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@0KPEAUHWND__@@@Z @ 0x14027442C (-CopyHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@0KPEAUHWND__@@@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x140275110 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1402AE7F4 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B3154 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall xxxInterSendMsgEx(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        void **a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  void **v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagWND *v23; // r9
  _DWORD *v24; // rbx
  int v25; // eax
  UIPrivilegeIsolation *v26; // rcx
  __int64 v27; // rsi
  int v28; // ebx
  int v29; // ebx
  const struct tagUIPI_INFO *v30; // r8
  const struct tagUIPI_INFO *v31; // rdx
  bool v32; // al
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r12
  _QWORD *v37; // rax
  __int64 v38; // rax
  unsigned int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 CurrentProcess; // rax
  __int64 UserSessionState; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  unsigned int v47; // esi
  void **v48; // r12
  const void *v49; // rdx
  unsigned __int64 v50; // rcx
  int v51; // r12d
  __int64 v52; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  _OWORD *v58; // r9
  void **v59; // rax
  _OWORD *v60; // rax
  void **v61; // r12
  size_t v62; // r8
  __int64 v63; // rbx
  void **v64; // rbx
  size_t v65; // r8
  unsigned int v66; // edx
  size_t v67; // r8
  __int64 v68; // rax
  unsigned int v69; // ecx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 HidData; // rax
  __int64 v78; // rbx
  HWND v79; // r15
  PETHREAD *v80; // rcx
  unsigned int ThreadId; // eax
  __int64 v82; // r13
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  int v87; // ecx
  int v88; // edx
  int v89; // eax
  int v90; // eax
  int v91; // eax
  _QWORD *v92; // rax
  _QWORD *v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  BOOL v97; // ebx
  unsigned int v98; // r12d
  unsigned int v99; // r13d
  unsigned int *v100; // rsi
  unsigned int v101; // r15d
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 *v105; // rax
  __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  int v112; // r12d
  BOOL v113; // r15d
  ULONG_PTR *v114; // rax
  ULONG_PTR v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // r13
  _QWORD *v119; // rsi
  const void *v120; // rdx
  __int64 v121; // r15
  __int128 *v122; // rax
  __int128 v123; // xmm0
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rsi
  int v130; // eax
  int v131; // eax
  _QWORD *v132; // rcx
  unsigned int v133; // ecx
  unsigned int Size; // [rsp+40h] [rbp-148h]
  __int64 v136; // [rsp+48h] [rbp-140h]
  int v137; // [rsp+48h] [rbp-140h]
  void **v138; // [rsp+50h] [rbp-138h]
  __int64 v139; // [rsp+58h] [rbp-130h]
  _QWORD *v140; // [rsp+58h] [rbp-130h]
  __int64 v142; // [rsp+68h] [rbp-120h]
  unsigned int v143; // [rsp+68h] [rbp-120h]
  int v145; // [rsp+80h] [rbp-108h]
  void *Src[2]; // [rsp+88h] [rbp-100h] BYREF
  void *v147; // [rsp+98h] [rbp-F0h]
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned int *v149; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 HighLimit; // [rsp+B0h] [rbp-D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+B8h] [rbp-D0h] BYREF
  void **v152; // [rsp+C0h] [rbp-C8h]
  void **v153; // [rsp+C8h] [rbp-C0h]
  __int64 v154; // [rsp+D0h] [rbp-B8h]
  __int64 v155; // [rsp+D8h] [rbp-B0h]
  void **v156; // [rsp+E0h] [rbp-A8h]
  __int64 v157; // [rsp+E8h] [rbp-A0h]
  __int64 v158; // [rsp+F0h] [rbp-98h]
  _QWORD v159[4]; // [rsp+100h] [rbp-88h] BYREF
  _BYTE v160[16]; // [rsp+120h] [rbp-68h] BYREF
  __int64 v161; // [rsp+130h] [rbp-58h] BYREF
  int v162; // [rsp+138h] [rbp-50h]

  v9 = a4;
  v136 = a3;
  v10 = a2;
  v138 = a4;
  v11 = a6;
  v158 = a6;
  v154 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  *(_OWORD *)Src = 0LL;
  v147 = 0LL;
  v145 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v17 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v17 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v14, v13, v15, v16);
  if ( CurrentThreadWin32Thread )
    v19 = *CurrentThreadWin32Thread;
  else
    v19 = 0LL;
  v142 = v19;
  v20 = v19;
  if ( !a5 )
    v20 = 0LL;
  v139 = v20;
  v157 = v20;
  if ( v20 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 528), 0, 0) & 1) != 0 )
      return 0LL;
    v136 = a3;
    v9 = v138;
  }
  HighLimit = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  v23 = a1;
  if ( a1 )
  {
    v24 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 464LL);
    if ( v24 == v17 )
    {
      v25 = 0;
LABEL_37:
      if ( v25 )
      {
        UserSetLastError(5);
        return 0LL;
      }
      v11 = a6;
      v23 = a1;
      goto LABEL_41;
    }
    if ( v10 > 0xD0 )
    {
      if ( v10 == 272 )
        goto LABEL_36;
      if ( v10 != 353 && v10 != 424 && v10 != 563 && v10 != 648 )
      {
LABEL_27:
        v25 = 0;
        goto LABEL_37;
      }
    }
    else if ( v10 != 208 )
    {
      switch ( v10 )
      {
        case 0xCu:
        case 0xBCu:
          goto LABEL_28;
        case 0xDu:
        case 0xC4u:
        case 0xCCu:
          v21 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 19872);
          if ( *(_WORD *)(v21 + 870) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL)
            || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 0x20) == 0 )
          {
            goto LABEL_35;
          }
          UserSetLastError(5);
          break;
        case 0xEu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x18u:
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x23u:
        case 0x24u:
        case 0x25u:
        case 0x26u:
        case 0x27u:
        case 0x28u:
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
        case 0x2Cu:
        case 0x2Du:
        case 0x2Eu:
        case 0x2Fu:
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x33u:
        case 0x34u:
        case 0x35u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x39u:
        case 0x3Au:
        case 0x3Bu:
        case 0x3Cu:
        case 0x3Du:
        case 0x3Eu:
        case 0x3Fu:
        case 0x40u:
        case 0x41u:
        case 0x42u:
        case 0x43u:
        case 0x44u:
        case 0x45u:
        case 0x46u:
        case 0x47u:
        case 0x48u:
        case 0x49u:
        case 0x4Au:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Du:
        case 0x4Fu:
        case 0x50u:
        case 0x51u:
        case 0x52u:
        case 0x53u:
        case 0x54u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
        case 0x58u:
        case 0x59u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Cu:
        case 0x5Du:
        case 0x5Eu:
        case 0x5Fu:
        case 0x60u:
        case 0x61u:
        case 0x62u:
        case 0x63u:
        case 0x64u:
        case 0x65u:
        case 0x66u:
        case 0x67u:
        case 0x68u:
        case 0x69u:
        case 0x6Au:
        case 0x6Bu:
        case 0x6Cu:
        case 0x6Du:
        case 0x6Eu:
        case 0x6Fu:
        case 0x70u:
        case 0x71u:
        case 0x72u:
        case 0x73u:
        case 0x74u:
        case 0x75u:
        case 0x76u:
        case 0x77u:
        case 0x78u:
        case 0x79u:
        case 0x7Au:
        case 0x7Bu:
        case 0x7Cu:
        case 0x7Du:
        case 0x7Eu:
        case 0x7Fu:
        case 0x80u:
        case 0x81u:
        case 0x82u:
        case 0x83u:
        case 0x84u:
        case 0x85u:
        case 0x86u:
        case 0x87u:
        case 0x88u:
        case 0x89u:
        case 0x8Au:
        case 0x8Bu:
        case 0x8Cu:
        case 0x8Du:
        case 0x8Eu:
        case 0x8Fu:
        case 0x90u:
        case 0x91u:
        case 0x92u:
        case 0x93u:
        case 0x94u:
        case 0x95u:
        case 0x96u:
        case 0x97u:
        case 0x98u:
        case 0x99u:
        case 0x9Au:
        case 0x9Bu:
        case 0x9Cu:
        case 0x9Du:
        case 0x9Eu:
        case 0x9Fu:
        case 0xA0u:
        case 0xA1u:
        case 0xA2u:
        case 0xA3u:
        case 0xA4u:
        case 0xA5u:
        case 0xA6u:
        case 0xA7u:
        case 0xA8u:
        case 0xA9u:
        case 0xAAu:
        case 0xABu:
        case 0xACu:
        case 0xADu:
        case 0xAEu:
        case 0xAFu:
        case 0xB0u:
        case 0xB1u:
        case 0xB2u:
        case 0xB3u:
        case 0xB4u:
        case 0xB5u:
        case 0xB6u:
        case 0xB7u:
        case 0xB8u:
        case 0xB9u:
        case 0xBAu:
        case 0xBBu:
        case 0xBDu:
        case 0xBEu:
        case 0xBFu:
        case 0xC0u:
        case 0xC1u:
        case 0xC2u:
        case 0xC3u:
        case 0xC5u:
        case 0xC6u:
        case 0xC7u:
        case 0xC8u:
        case 0xC9u:
        case 0xCAu:
        case 0xCBu:
          goto LABEL_35;
        case 0x4Eu:
          goto LABEL_36;
        default:
          goto LABEL_27;
      }
      goto LABEL_36;
    }
LABEL_28:
    if ( (unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline() )
    {
      v25 = 0;
      goto LABEL_37;
    }
    if ( UIPrivilegeIsolation::Enforced(v26) && *(_QWORD *)v24 != *(_QWORD *)(W32GetUserGdiSessionState() + 40) )
    {
      v25 = 0;
      goto LABEL_37;
    }
    if ( v24[191] == v17[191] && v24[192] == v17[192] )
    {
LABEL_35:
      v25 = 0;
      goto LABEL_37;
    }
LABEL_36:
    v25 = 1;
    goto LABEL_37;
  }
LABEL_41:
  if ( a8 )
    goto LABEL_77;
  v27 = 0LL;
  if ( v23 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)v23 + 2) + 464LL);
  }
  else if ( v11 )
  {
    v27 = *(_QWORD *)(v11 + 464);
  }
  if ( (_DWORD *)v27 != v17 )
  {
    if ( v10 == 717 )
      goto LABEL_75;
    v28 = IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v27, v23, v10);
    if ( !v28 )
      v28 = IsMessageAlwaysAllowedAcrossIL(v10);
    if ( !v28 )
    {
      if ( v10 == 274 && ((v136 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v136 != 61792 )
      {
        v29 = 1;
        goto LABEL_73;
      }
      if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
      {
        v31 = (const struct tagUIPI_INFO *)(v27 + 864);
      }
      else
      {
        if ( *(_QWORD *)v27 == *(_QWORD *)(W32GetUserGdiSessionState() + 40) )
        {
          v161 = 0x2000LL;
          v162 = 0;
        }
        else
        {
          v161 = *(_QWORD *)(v27 + 864);
          v162 = *(_DWORD *)(v27 + 872);
        }
        v31 = (const struct tagUIPI_INFO *)&v161;
      }
      v32 = UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v17 + 216), v31, v30);
      v29 = v32;
      if ( v32 )
        goto LABEL_76;
      if ( a1 && v10 == 793 )
      {
        v36 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v36 + 1584) == a1 )
        {
          v37 = (_QWORD *)PsGetCurrentThreadWin32Thread(v33, v21, v34, v35);
          v38 = v37 ? *v37 : 0LL;
          if ( *(_QWORD *)(v36 + 472) == *(_QWORD *)(v38 + 472) )
          {
            v29 = 1;
LABEL_73:
            if ( !v29 )
            {
              v10 = a2;
              v23 = a1;
LABEL_75:
              if ( !UserCheckForMessageAccessWithWindowCapability(v23, v10) )
                return 0LL;
              goto LABEL_76;
            }
            goto LABEL_76;
          }
        }
        v10 = a2;
      }
      if ( v29 )
        goto LABEL_76;
      EtwTraceUIPIMsgError(v17, v27, v10, v136, v9);
      UserSetLastError(5);
      goto LABEL_73;
    }
  }
LABEL_76:
  v20 = v139;
LABEL_77:
  v39 = a2;
  if ( a2 == 576 )
  {
    LOBYTE(v21) = 20;
  }
  else
  {
    if ( a2 != 281 )
      goto LABEL_82;
    LOBYTE(v21) = 21;
  }
  if ( !HMValidateHandleWithDescriptor((__int64)v9, v21) )
    return 0LL;
LABEL_82:
  if ( !tagPROCESSINFO::SyncAndTestFreeze(*(tagPROCESSINFO **)(a6 + 464)) )
    goto LABEL_95;
  v41 = a7;
  if ( a7 )
  {
    if ( (*(_DWORD *)(a7 + 32) & 0x40) != 0 )
      goto LABEL_90;
    if ( *(_DWORD *)a7 == 2 && *(_DWORD *)(a7 + 36) )
      return 0LL;
  }
  if ( v20 )
  {
    v42 = **(_QWORD **)(a6 + 464);
    CurrentProcess = PsGetCurrentProcess();
    if ( !PsGetProcessCommonJob(CurrentProcess, v42) )
      return 0LL;
    v39 = a2;
    v41 = a7;
LABEL_90:
    if ( v20 )
      goto LABEL_95;
  }
  if ( !v41 && (v39 == 537 || !(unsigned int)ProcessSuspendedSendMessage(a6, a1, v39, v136, v9))
    || *(_DWORD *)(a6 + 576) > 0x2710u )
  {
    return 0LL;
  }
LABEL_95:
  UserSessionState = W32GetUserSessionState(v41, v40);
  v45 = Win32AllocateFromPagedLookasideList(*(_QWORD *)(UserSessionState + 69088));
  v46 = v45;
  v155 = v45;
  if ( !v45 )
    return 0LL;
  *(_QWORD *)(v45 + 120) = 0LL;
  Size = 0;
  v47 = 0;
  v48 = v9;
  v156 = v9;
  v49 = (const void *)v142;
  v50 = *(unsigned int *)(v142 + 1604);
  *(_DWORD *)(v45 + 128) = v50;
  if ( a7 && *(_DWORD *)a7 == 33 )
  {
    v51 = a9;
    goto LABEL_181;
  }
  if ( v39 > 0x143 )
  {
    if ( v39 > 0x283 )
    {
      switch ( v39 )
      {
        case 0x30Cu:
LABEL_147:
          *(_OWORD *)Src = *(_OWORD *)v9;
          v49 = (const void *)((unsigned __int64)Src[0] >> 32);
          v145 = (SHIDWORD(Src[0]) >= 0) + 1;
          v9 = Src;
          v138 = Src;
          v50 = _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0];
          if ( v50 < (unsigned __int64)MmSystemRangeStart || !v139 )
            v47 = HIDWORD(Src[0]) & 0x7FFFFFFF;
          break;
        case 0x341u:
          v47 = 104;
          Size = 104;
          break;
        case 0x342u:
          v47 = 80;
LABEL_151:
          v58 = (_OWORD *)Win32AllocPoolWithQuotaZInit(v47, 1668510549LL);
          *(_QWORD *)(v46 + 120) = v58;
          if ( v58 )
          {
            v147 = v9;
            if ( a2 > 0x143 )
            {
              if ( a2 > 0x30C )
              {
LABEL_170:
                memmove(v58, v48, v47);
LABEL_171:
                v9 = *(void ***)(v46 + 120);
                v138 = v9;
              }
              else if ( a2 == 780 )
              {
LABEL_158:
                Size = v47;
                v147 = Src[1];
                Src[1] = *(void **)(v46 + 120);
              }
              else
              {
                switch ( a2 )
                {
                  case 0x145u:
                  case 0x14Au:
                  case 0x14Cu:
                  case 0x14Du:
                  case 0x158u:
                  case 0x180u:
                  case 0x181u:
                  case 0x18Cu:
                  case 0x18Du:
                  case 0x18Fu:
                  case 0x196u:
                  case 0x1A2u:
                    goto LABEL_168;
                  case 0x148u:
                  case 0x189u:
                    goto LABEL_158;
                  case 0x191u:
                    Size = v47;
                    goto LABEL_170;
                  case 0x220u:
                    v61 = v153;
                    v49 = v153[10];
                    if ( v49 )
                    {
                      v62 = *((unsigned int *)v153 + 19);
                      LODWORD(v62) = v62 & 0x7FFFFFFF;
                      memmove(v58, v49, v62);
                      *v61 = *(void **)(v46 + 120);
                    }
                    if ( *((_DWORD *)v61 + 14) )
                    {
                      v63 = *((unsigned int *)v61 + 19);
                      LODWORD(v63) = v63 & 0x7FFFFFFF;
                      v64 = (void **)(*(_QWORD *)(v46 + 120) + v63);
                      v156 = v64;
                      v65 = *((unsigned int *)v61 + 15);
                      LODWORD(v65) = v65 & 0x7FFFFFFF;
                      memmove(v64, v61[8], v65);
                      v61[1] = v64;
                    }
                    break;
                  default:
                    goto LABEL_170;
                }
              }
            }
            else
            {
              if ( a2 != 323 )
              {
                switch ( a2 )
                {
                  case 0xCu:
                  case 0x1Au:
                  case 0x1Bu:
                  case 0xC2u:
                    break;
                  case 0xDu:
                    goto LABEL_158;
                  case 0x4Au:
                    v9 = (void **)v58;
                    v138 = (void **)v58;
                    v59 = v152;
                    *v58 = *(_OWORD *)v152;
                    *((_QWORD *)v58 + 2) = v59[2];
                    if ( v59[2] )
                    {
                      *((_QWORD *)v58 + 2) = (char *)v58 + 24;
                      memmove((char *)v58 + 24, v59[2], *((unsigned int *)v59 + 2));
                    }
                    goto LABEL_172;
                  case 0x83u:
                    if ( !v136 )
                      goto LABEL_170;
                    *v58 = *(_OWORD *)v48;
                    v58[1] = *((_OWORD *)v48 + 1);
                    v58[2] = *((_OWORD *)v48 + 2);
                    *((_QWORD *)v58 + 6) = v48[6];
                    v50 = *(_QWORD *)(v46 + 120) + 56LL;
                    *((_QWORD *)v58 + 6) = v50;
                    v60 = v48[6];
                    *(_OWORD *)v50 = *v60;
                    *(_OWORD *)(v50 + 16) = v60[1];
                    *(_QWORD *)(v50 + 32) = *((_QWORD *)v60 + 4);
                    goto LABEL_171;
                  case 0xC4u:
                    v50 = *(unsigned __int16 *)Src[1];
                    *(_WORD *)v58 = v50;
                    goto LABEL_158;
                  default:
                    goto LABEL_170;
                }
              }
LABEL_168:
              v9 = (void **)v58;
              v138 = (void **)v58;
              v66 = *((_DWORD *)v58 + 1) & 0x7FFFFFFF | HIDWORD(Src[0]) & 0x80000000;
              *((_DWORD *)v58 + 1) = v66;
              *(_DWORD *)v58 = Src[0];
              *((_QWORD *)v58 + 1) = v58 + 1;
              v67 = v66 ^ (v66 ^ (v47 - 16)) & 0x7FFFFFFF;
              *((_DWORD *)v58 + 1) = v67;
              LODWORD(v67) = v67 & 0x7FFFFFFF;
              memmove(v58 + 1, Src[1], v67);
            }
          }
LABEL_172:
          v39 = a2;
          goto LABEL_173;
        case 0x344u:
          v47 = 1204;
          Size = 1204;
          break;
        case 0x346u:
          v47 = 96;
          break;
      }
    }
    else
    {
      if ( v39 != 643 )
      {
        switch ( v39 )
        {
          case 0x145u:
          case 0x18Du:
          case 0x196u:
            goto LABEL_120;
          case 0x148u:
          case 0x189u:
            goto LABEL_147;
          case 0x14Au:
          case 0x14Cu:
          case 0x14Du:
          case 0x158u:
          case 0x180u:
          case 0x181u:
          case 0x18Cu:
          case 0x18Fu:
          case 0x1A2u:
            goto LABEL_119;
          case 0x191u:
          case 0x192u:
LABEL_135:
            v47 = 4 * v136;
            goto LABEL_150;
          case 0x218u:
            if ( v9 && (v136 & 0x8000) != 0 && (v9 < MmSystemRangeStart || !v139) )
            {
              v47 = *((_DWORD *)v9 + 4) + 20;
              if ( *((_DWORD *)v9 + 4) >= 0xFFFFFFEC )
                goto LABEL_123;
            }
            goto LABEL_150;
          case 0x219u:
            if ( v9 && (v136 & 0x8000) != 0 && (v9 < MmSystemRangeStart || !v139) )
LABEL_128:
              v47 = *(_DWORD *)v9;
            goto LABEL_150;
          case 0x220u:
            v153 = v9;
            v47 = (*((_DWORD *)v9 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v9 + 19) & 0x7FFFFFFF);
            goto LABEL_150;
          default:
            goto LABEL_150;
        }
      }
      if ( v136 == 24 )
        v47 = (*(_DWORD *)v9 << 9) + 4;
    }
  }
  else if ( v39 == 323 )
  {
LABEL_119:
    if ( *(_DWORD *)(v142 + 1604) != 1 )
    {
LABEL_120:
      *(_OWORD *)Src = *(_OWORD *)v9;
      v50 = _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0];
      if ( v50 < (unsigned __int64)MmSystemRangeStart || !v139 )
      {
        v47 = LODWORD(Src[0]) + 18;
        if ( (unsigned int)(LODWORD(Src[0]) + 18) < LODWORD(Src[0]) )
        {
LABEL_123:
          v57 = W32GetUserSessionState(v50, v142);
          Win32FreeToPagedLookasideList(*(_QWORD *)(v57 + 69088), v46);
          return 8LL;
        }
      }
    }
  }
  else
  {
    switch ( v39 )
    {
      case 1u:
      case 0x81u:
        UserSetLastError(5);
        v56 = W32GetUserSessionState(v55, v54);
        Win32FreeToPagedLookasideList(*(_QWORD *)(v56 + 69088), v46);
        return 0LL;
      case 0xCu:
      case 0x1Au:
      case 0xC2u:
        if ( !v9 )
          break;
        goto LABEL_120;
      case 0xDu:
      case 0xC4u:
        goto LABEL_147;
      case 0x1Bu:
        goto LABEL_120;
      case 0x38u:
        v47 = *(unsigned __int16 *)v9;
        break;
      case 0x46u:
      case 0x47u:
        v47 = 40;
        Size = 40;
        break;
      case 0x49u:
        v47 = v136;
        break;
      case 0x4Au:
        v152 = v9;
        if ( !v9[2] )
        {
          v47 = 24;
          goto LABEL_151;
        }
        v47 = *((_DWORD *)v9 + 2) + 24;
        if ( v47 < 0x18 )
        {
          v52 = W32GetUserSessionState(v50, v142);
          Win32FreeToPagedLookasideList(*(_QWORD *)(v52 + 69088), v46);
          return 0LL;
        }
        break;
      case 0x53u:
        goto LABEL_128;
      case 0x83u:
        v47 = 96;
        if ( !v136 )
          v47 = 16;
        Size = v47;
        break;
      case 0xCBu:
        goto LABEL_135;
      default:
        break;
    }
  }
LABEL_150:
  if ( v47 )
    goto LABEL_151;
LABEL_173:
  if ( v47 && !*(_QWORD *)(v46 + 120) )
  {
    v68 = W32GetUserSessionState(v50, v49);
    Win32FreeToPagedLookasideList(*(_QWORD *)(v68 + 69088), v46);
    return 0LL;
  }
  v51 = a9;
  if ( a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) && !(unsigned int)IsPointerInputMessage(v39) )
  {
    TransformMessageBetweenCoordinateSpaces(v69, (__int64)a1, 0LL);
    v9 = v138;
  }
LABEL_181:
  *(_QWORD *)(v46 + 112) = 0LL;
  *(_QWORD *)(v46 + 16) = 0LL;
  v159[0] = v46 + 112;
  v159[1] = a1;
  HMAssignmentLock(v159, 0LL);
  *(_DWORD *)(v46 + 104) = v39;
  *(_QWORD *)(v46 + 88) = v136;
  *(_QWORD *)(v46 + 96) = v9;
  *(_DWORD *)(v46 + 84) = 0;
  *(_QWORD *)(v46 + 72) = 0LL;
  if ( v39 == 576 || v39 == 281 )
  {
    v83 = _HMObjectFromHandle(v9);
    v82 = a6;
    if ( v83 )
      HMChangeOwnerThread(v83, a6);
  }
  else if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                            v71,
                            v70,
                            v72,
                            v73)
         && v39 == 255
         && (LOBYTE(v74) = 18, (v76 = HMValidateHandleNoSecure((__int64)v9, v74)) != 0)
         && *(_QWORD *)(v142 + 1144) == v76
         && a1 )
  {
    HidData = AllocateHidData(
                *(void **)(v76 + 64),
                *(_DWORD *)(v76 + 56),
                (unsigned int)(*(_DWORD *)(v76 + 60) - 24),
                v136,
                (__int64)a1);
    v78 = HidData;
    if ( HidData )
    {
      memmove((void *)(HidData + 56), (const void *)(v76 + 56), *(unsigned int *)(HidData + 60));
      v79 = *(HWND *)a1;
      v80 = *(PETHREAD **)(v78 + 16);
      if ( v80 )
        ThreadId = (unsigned int)PsGetThreadId(*v80);
      else
        ThreadId = 0;
      InputTraceLogging::RawInput::CopyHidData(
        (struct tagHIDDATA *const)v76,
        (struct tagHIDDATA *const)v78,
        ThreadId,
        v79);
    }
    v82 = a6;
    if ( v78 )
    {
      *(_DWORD *)(v78 + 48) &= ~1u;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a6 + 1152), (PSLIST_ENTRY)(v78 + 32));
      v138 = *(void ***)v78;
      *(_QWORD *)(v46 + 96) = *(_QWORD *)v78;
    }
    v39 = a2;
  }
  else
  {
    v82 = a6;
  }
  v84 = W32GetUserSessionState(v75, v74) + 69056;
  v85 = *(_QWORD *)v84;
  if ( *(_QWORD *)(*(_QWORD *)v84 + 8LL) != v84 )
    goto LABEL_310;
  *(_QWORD *)v46 = v85;
  *(_QWORD *)(v46 + 8) = v84;
  *(_QWORD *)(v85 + 8) = v46;
  *(_QWORD *)v84 = v46;
  v86 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v46 + 80) = v86;
  *(_QWORD *)(v46 + 40) = v82;
  *(_QWORD *)(v46 + 32) = v139;
  *(_DWORD *)(v46 + 132) = W32GetCurrentThreadDpiAwarenessContext(v86);
  *(_QWORD *)(v46 + 64) = 0LL;
  if ( a7 && (*(_DWORD *)a7 & 1) != 0 )
  {
    v87 = *(_DWORD *)a7 & 0x100;
    v88 = *(_DWORD *)(v46 + 84);
    v89 = 1024;
    if ( !v87 )
      v89 = 2048;
    *(_DWORD *)(v46 + 84) = v88 | v89;
    *(_QWORD *)(v46 + 48) = *(_QWORD *)(a7 + 8);
    *(_QWORD *)(v46 + 56) = *(_QWORD *)(a7 + 16);
    if ( (*(_DWORD *)a7 & 0x20) != 0 )
    {
      v90 = 1536;
      if ( !v87 )
        v90 = 2560;
      *(_DWORD *)(v46 + 84) = v88 | v90;
      *(_QWORD *)(v46 + 72) = *(_QWORD *)(a7 + 24);
    }
    else
    {
      v91 = 1280;
      if ( !v87 )
        v91 = 2304;
      *(_DWORD *)(v46 + 84) = v88 | v91;
      *(_QWORD *)(v46 + 64) = v142;
    }
  }
  if ( v51 )
    *(_DWORD *)(v46 + 84) |= 0x10000u;
  v92 = (_QWORD *)(v46 + 16);
  v93 = *(_QWORD **)(v82 + 568);
  if ( *v93 != v82 + 560 )
    goto LABEL_310;
  *v92 = v82 + 560;
  *(_QWORD *)(v46 + 24) = v93;
  *v93 = v92;
  *(_QWORD *)(v82 + 568) = v92;
  ++*(_DWORD *)(v82 + 576);
  if ( v139 )
  {
    v154 = *(_QWORD *)(v139 + 544);
    *(_QWORD *)(v139 + 544) = v46;
  }
  else
  {
    *(_DWORD *)(v46 + 84) |= 8u;
  }
  if ( (*(_DWORD *)(v46 + 84) & 0x200) == 0
    && ((unsigned int)IsPointerInputMessageWithState(v39) || (unsigned int)IsPointerParentNotify(v95, a3)) )
  {
    v96 = W32GetUserSessionState(v95, v94);
    CTouchProcessor::ReferenceMsgDataExternal(*(_QWORD *)(v96 + 3256), v138, 6LL, v46);
  }
  EtwTraceBeginSendMessage(v46, v139, a7);
  if ( !v139 )
  {
    SetWakeBit(v82, 64LL);
    EtwTraceEndSendMessage(v46);
    return 1LL;
  }
  v97 = 0;
  v98 = 0;
  v143 = 0;
  v99 = 512;
  v137 = 0;
  SetWakeBit(a6, 64LL);
  if ( a7 )
  {
    v98 = *(_DWORD *)(a7 + 36);
    v143 = v98;
    v99 = ((*(_DWORD *)(a7 + 32) & 1) << 15) + 512;
  }
  CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v160);
  if ( *(_QWORD *)(v139 + 472) == *(_QWORD *)(a6 + 472)
    && (_InterlockedCompareExchange((volatile signed __int32 *)(v139 + 528), 0, 0) & 0x10000) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v139 + 528), 0x10000u);
    v137 = 1;
  }
  v100 = 0LL;
  v101 = a2;
  if ( a2 == 788 )
  {
    if ( v138 )
    {
      v100 = (unsigned int *)*v138;
      if ( ((_DWORD)v138[3] & 1) != 0 )
      {
        *(_DWORD *)(v46 + 84) |= 0x60000u;
        *(_QWORD *)(v46 + 120) = *(_QWORD *)v100;
      }
    }
  }
  if ( (*(_DWORD *)(v46 + 84) & 1) == 0 )
  {
    do
    {
      if ( v97 )
        break;
      Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v139 + 488) + 4LL), 0xFFFFFDFF);
      if ( v100 && (v100[12] == 13 || v100[12] == 14) && *(_DWORD *)(v102 + 672) <= 0x501u && *(_DWORD *)(v102 + 688) )
      {
        v105 = (__int64 *)PsGetCurrentThreadWin32Thread(v100[12] - 13, v102, v103, v104);
        if ( v105 )
          v106 = *v105;
        else
          v106 = 0LL;
        BugCheckParameter3 = *(_QWORD *)(v106 + 456);
        *(_QWORD *)(v106 + 456) = &BugCheckParameter3;
        v149 = v100;
        HMLockObject(v100);
        LOBYTE(v97) = 1;
      }
      v107 = xxxSleepThread2(v99, v98, 0, 0, 0LL);
      v112 = v107;
      v113 = v107 == 0;
      if ( v97 )
      {
        if ( v107 )
        {
          v100[16] &= ~0x4000u;
        }
        else
        {
          v109 = v100[16];
          LODWORD(v109) = v109 | 0x4000;
          v100[16] = v109;
          if ( (v109 & 0x10) == 0 && ++*((_BYTE *)v100 + 97) > 0xAu )
          {
            v109 = (unsigned int)v109 | 0x10;
            v100[16] = v109;
          }
        }
        v114 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v109, v108, v110, v111);
        if ( v114 )
          v115 = *v114;
        else
          v115 = 0LL;
        Win32HM_UnlockFromThread<1>(v115, &BugCheckParameter3);
        v149 = 0LL;
        BugCheckParameter3 = -1LL;
      }
      v97 = v113;
      if ( !v112 && a7 )
      {
        v116 = *(unsigned int *)(a7 + 32);
        if ( (v116 & 0x10) != 0 || (*(_DWORD *)(v46 + 84) & 0x20) != 0 )
        {
          v97 = v113;
          if ( (*(_DWORD *)(v46 + 84) & 0x10) != 0 )
          {
            v143 = 0;
            v97 = 0;
          }
        }
        if ( (v116 & 8) != 0 )
        {
          v117 = W32GetUserSessionState(v116, v108);
          if ( !IsThreadHungTimeCheck((const struct tagTHREADINFO *)a6, *(_DWORD *)(v117 + 69112)) )
            v97 = 0;
        }
        if ( !v97 )
          EtwTraceConvertTimeOutToBlocking();
      }
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3, v108);
      v98 = v143;
    }
    while ( (*(_DWORD *)(v46 + 84) & 1) == 0 );
    v101 = a2;
  }
  CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v160);
  v118 = v139;
  if ( v137 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v139 + 528), 0xFFFEFFFF);
    MergeDeferredMessagesOfThreadOnQueue(v139);
  }
  SetWakeBit(v139, 512LL);
  if ( v97 )
    goto LABEL_290;
  if ( !Size )
  {
    if ( v101 == 831 && a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
      TransformMessageBetweenCoordinateSpaces(0x33Fu, 0LL, (__int64)a1);
    goto LABEL_290;
  }
  v119 = v147;
  v140 = v147;
  if ( v101 != 131 )
  {
    v120 = *(const void **)(v46 + 120);
    if ( v145 )
    {
      if ( v145 == 1 )
        strncpycch(v147, (__int64)v120, Size);
      else
        wcsncpycch(v147, v120, Size >> 1);
    }
    else
    {
      memmove(v147, v120, Size);
    }
    v121 = a6;
    goto LABEL_291;
  }
  if ( a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    TransformMessageBetweenCoordinateSpaces(0x83u, 0LL, (__int64)a1);
    v119 = v140;
  }
  v122 = *(__int128 **)(v46 + 120);
  v123 = *v122;
  if ( !a3 )
  {
    *(_OWORD *)v119 = v123;
LABEL_290:
    v121 = a6;
    goto LABEL_291;
  }
  v124 = v119[6];
  *(_OWORD *)v119 = v123;
  *((_OWORD *)v119 + 1) = v122[1];
  *((_OWORD *)v119 + 2) = v122[2];
  v119[6] = v124;
  v125 = *((_QWORD *)v122 + 6);
  v121 = a6;
  if ( v125 )
  {
    *(_OWORD *)v124 = *(_OWORD *)v125;
    *(_OWORD *)(v124 + 16) = *(_OWORD *)(v125 + 16);
    *(_QWORD *)(v124 + 32) = *(_QWORD *)(v125 + 32);
  }
LABEL_291:
  EtwTraceEndSendMessage(v46);
  *(_QWORD *)(v118 + 544) = v154;
  if ( a7 )
  {
    **(_QWORD **)(a7 + 40) = *(_QWORD *)(v46 + 72);
    if ( (*(_DWORD *)(a7 + 32) & 0x20) != 0 && (*(_DWORD *)(v46 + 84) & 0x8000) != 0 )
    {
      v129 = 0LL;
      UserSetLastError(1400);
    }
    else
    {
      v129 = !v97;
    }
  }
  else
  {
    v129 = *(_QWORD *)(v46 + 72);
  }
  if ( a7 || v97 )
  {
    v130 = *(_DWORD *)(v46 + 84);
    if ( (v130 & 1) == 0 )
    {
      v131 = v130 | 1;
      *(_DWORD *)(v46 + 84) = v131;
      if ( (v131 & 0x4000) != 0 )
      {
        *(_DWORD *)(v46 + 84) = v131 | 8;
        goto LABEL_305;
      }
      --*(_DWORD *)(v121 + 576);
      v126 = *(_QWORD *)(v46 + 16);
      v132 = *(_QWORD **)(v46 + 24);
      if ( *(_QWORD *)(v126 + 8) == v46 + 16 && *v132 == v46 + 16 )
      {
        *v132 = v126;
        *(_QWORD *)(v126 + 8) = v132;
        *(_QWORD *)(v46 + 16) = 0LL;
        *(_DWORD *)(v46 + 84) |= 0x10u;
        goto LABEL_305;
      }
LABEL_310:
      __fastfail(3u);
    }
  }
LABEL_305:
  v133 = *(_DWORD *)(v46 + 84) & 0xFFFDFFFF;
  *(_DWORD *)(v46 + 84) = v133;
  if ( (v133 & 0x4010) != 0x10 )
  {
    v133 |= 8u;
    *(_DWORD *)(v46 + 84) = v133;
  }
  if ( (v133 & 0x8008) != 8 )
    UnlinkSendListSms(v46, v126, v127, v128);
  return v129;
}
