/*
 * XREFs of PostInputMessage @ 0x14011FED8
 * Callers:
 *     PostPointerEventMessage @ 0x14011BED0 (PostPointerEventMessage.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x14011C948 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x14011CC7C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     EditionPostMouseWheelToForeground @ 0x14011F510 (EditionPostMouseWheelToForeground.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x14011F61C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14011F944 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     EditionPostInputMessage @ 0x14011FA60 (EditionPostInputMessage.c)
 *     EditionPostMouseMoveToQ @ 0x14011FD80 (EditionPostMouseMoveToQ.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1401A1724 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1402386D0 (EditionPostRawMouseInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x14024FA10 (EditionHandleAndPostKeyEvent.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x1402746D8 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     ?PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x140274A2C (-PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z @ 0x1402B6AB0 (-PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1400664A0 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400670A0 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400681AC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1401196C0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140119D60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x14011A154 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     IsPointerInputMessageWithState @ 0x140144520 (IsPointerInputMessageWithState.c)
 *     PtiKbdFromQ @ 0x14014543C (PtiKbdFromQ.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x140151C1C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     IsAdaptiveQueueDetachExempted @ 0x140151C68 (IsAdaptiveQueueDetachExempted.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x14016F640 (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1401AD7F8 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x140275110 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PostInputMessage(
        struct tagQ *a1,
        LARGE_INTEGER *this,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        char a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        void *a11,
        struct tagUIPI_INFO *a12,
        int a13,
        int a14,
        __int64 a15)
{
  int v15; // edi
  struct tagTHREADINFO *v19; // r13
  struct tagINPUT_MESSAGE_SOURCE *v21; // r12
  __int64 v22; // rsi
  const struct tagQMSG *CoalesceableMouseMessage; // rax
  _DWORD *v24; // rsi
  int v25; // edi
  unsigned int v26; // eax
  unsigned int v27; // ecx
  int v28; // edi
  unsigned __int64 v29; // rdx
  char v30; // r13
  __int64 UserSessionState; // rax
  int v32; // edx
  int v33; // r8d
  unsigned int v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  _QWORD *QuadPart; // rbx
  __int64 v42; // rax
  struct _KEVENT *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  union _SLIST_HEADER *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  struct tagTHREADINFO *v51; // [rsp+70h] [rbp-48h]
  int v52; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v53; // [rsp+D8h] [rbp+20h] BYREF

  v53 = a4;
  v15 = a13;
  v19 = (struct tagTHREADINFO *)(a15 & -(__int64)(a13 != 0));
  v51 = v19;
  if ( a3 == 255 && a13 && v19 )
  {
    a13 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4694LL);
    return 0LL;
  }
  v21 = a10;
  if ( !a10 || (v52 = 1, *((_DWORD *)a10 + 1) != 2) )
    v52 = 0;
  v22 = *((_QWORD *)a1 + 4);
  if ( (*((_DWORD *)a1 + 103) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  if ( (a9 & 1) == 0
    && v22
    && (*(_DWORD *)(v22 + 100) & 2) == 0
    && (a3 == 512 || a3 == 522 || a3 == 526)
    && (CoalesceableMouseMessage = (const struct tagQMSG *)GetCoalesceableMouseMessage(a3, &v53, v22, v21),
        (v24 = CoalesceableMouseMessage) != 0LL) )
  {
    InputTraceLogging::Delivery::CoalesceMessage(CoalesceableMouseMessage);
    CleanInputMessage(a3, (struct tagQMSG *)v24);
  }
  else
  {
    v24 = AllocQEntryEx((__int64)a1 + 24, 0LL, 1);
    if ( !v24 )
      return 0LL;
  }
  v25 = 32 * v15;
  v26 = (v25 ^ (a14 << 27)) & 0xF7FFFFFF;
  v27 = (v24[25] ^ v25) & 0xF7FFFFDF;
  v28 = 0;
  v29 = a7;
  v24[25] = (a14 << 27) ^ v26 ^ v27;
  *((_QWORD *)v24 + 18) = v29;
  if ( v29 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || (v30 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v30 = 0;
    }
    LOBYTE(a13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = a13;
      WPP_RECORDER_AND_TRACE_SF_qiqdd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v32,
        v33,
        *(_QWORD *)(UserSessionState + 69160));
      v29 = a7;
      v28 = 0;
    }
    v19 = v51;
  }
  if ( this )
    v34 = *(_DWORD *)(this[5].QuadPart + 288);
  else
    v34 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(a1) + 464) + 268LL);
  v35 = a5;
  StoreQMessage((LARGE_INTEGER *)v24, this, a3, (LARGE_INTEGER)v53, a5, a6, v29, 0, a8, a9, v21, v34, a11, a12);
  InputTraceLogging::Delivery::PostInputMessage((const struct tagQMSG *)v24, a1);
  if ( (unsigned int)IsPointerInputMessageWithState(a3) )
  {
    v38 = W32GetUserSessionState(v37, v36);
    CTouchProcessor::MarkPointerMessageGenerated(
      *(CTouchProcessor **)(v38 + 3256),
      a3,
      *((_QWORD *)v24 + 5),
      -__CFSHR__(v24[25], 6),
      v24);
  }
  if ( (unsigned int)IsMiPMouseMessage(a3) )
  {
    if ( v21 )
    {
      if ( (unsigned int)IsGenuineMouseInput(v21) )
      {
        v24[25] |= 0x400u;
        if ( this )
        {
          v40 = InputTransform::OnInput((InputTransform *)this, *((struct tagWND **)v24 + 17));
          v24[25] = (v40 << 12) ^ (v24[25] ^ (v40 << 12)) & 0xFFFFEFFF;
        }
      }
    }
  }
  if ( v52 )
  {
    if ( a3 != 255 )
      goto LABEL_69;
LABEL_66:
    LOBYTE(v39) = 18;
    v45 = HMValidateHandleNoSecure(v35, v39);
    v46 = *(union _SLIST_HEADER **)(v45 + 16);
    if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                         v48,
                         v47,
                         v49,
                         v50) )
      *(_DWORD *)(v45 + 48) &= ~1u;
    ExpInterlockedPushEntrySList(v46 + 72, (PSLIST_ENTRY)(v45 + 32));
    goto LABEL_69;
  }
  if ( a3 == 255 )
    goto LABEL_66;
  if ( tagQ::AreMultipleThreadsAttached(a1) )
  {
    if ( this && (QuadPart = (_QWORD *)this[2].QuadPart, this == (LARGE_INTEGER *)QuadPart[198]) )
    {
      v28 = 1;
    }
    else
    {
      v42 = *((_QWORD *)a1 + 16);
      if ( !v42 )
        goto LABEL_69;
      QuadPart = *(_QWORD **)(v42 + 16);
      if ( v42 != QuadPart[198] )
        goto LABEL_69;
    }
    if ( QuadPart && !(unsigned int)IsAdaptiveQueueDetachExempted(QuadPart) )
    {
      if ( a3 != 260 && a3 != 513 && a3 != 516 && a3 != 519 && a3 != 522 && a3 != 523 && a3 != 526 )
      {
        if ( a3 == 581 )
        {
          if ( v28 )
          {
            v43 = *(struct _KEVENT **)(this[2].QuadPart + 1576);
LABEL_61:
            KeSetEvent(v43, 1, 0);
            goto LABEL_69;
          }
          v44 = QuadPart[89];
          if ( !v44 || (*(_DWORD *)(v44 + 200) & 0x8000) == 0 )
            goto LABEL_69;
        }
        else if ( a3 != 582 )
        {
          goto LABEL_69;
        }
      }
      v43 = (struct _KEVENT *)QuadPart[197];
      goto LABEL_61;
    }
  }
LABEL_69:
  WakeSomeone(a1, v19, a3, (struct tagQMSG *)v24);
  return 1LL;
}
