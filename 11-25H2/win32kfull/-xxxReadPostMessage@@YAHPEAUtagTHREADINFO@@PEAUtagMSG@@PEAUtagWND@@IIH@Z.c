/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x140245110
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     FindQMsg @ 0x140066A10 (FindQMsg.c)
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     ?CheckQuitMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@H@Z @ 0x140145350 (-CheckQuitMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@H@Z.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401C6CDC (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x140212058 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402475D0 (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x140255BA4 (xxxDDETrackGetMessageHook.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x140281BE4 (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxReadPostMessage(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v10; // r14d
  __int64 **v11; // r13
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *QMsg; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  bool v19; // zf
  unsigned int v20; // eax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // ecx
  _QWORD *v25; // rax
  int v26; // ecx
  _OWORD *v27; // [rsp+30h] [rbp-58h]

  v10 = a6;
  if ( (unsigned int)CheckQuitMessage(a1, a2, a6) )
    return 1LL;
  v11 = (__int64 **)((char *)a1 + 848);
  v12 = 0;
  QMsg = FindQMsg(a1, (struct tagTHREADINFO *)((char *)a1 + 848), a3, a4, a5, 0);
  if ( QMsg )
  {
    v19 = (unsigned int)Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline(v14, v13, v16, v17) == 0;
    v20 = *((_DWORD *)QMsg + 6) - 571;
    v21 = 0;
    if ( v19 )
    {
      LOBYTE(v21) = v20 <= 1;
      if ( v21 && !ShouldReceiveTouchpadMessages(a1, (HWND)QMsg[2]) )
        v10 = 1;
    }
    else
    {
      LOBYTE(v21) = v20 <= 1;
      if ( v21 && (*((_QWORD *)a1 + 170) & 0x2000002000LL) == 0 && QMsg[5] == 1 )
        v10 = 1;
    }
    EtwTraceRetrievePostMessage(QMsg, v10);
    *((_DWORD *)a1 + 152) = *((_DWORD *)QMsg + 12);
    if ( *(_QWORD *)((char *)a1 + 796) != *(__int64 *)((char *)QMsg + 52) )
      _InterlockedOr((volatile signed __int32 *)a1 + 132, 0x100000u);
    *((_DWORD *)a1 + 199) = *((_DWORD *)QMsg + 13);
    *((_DWORD *)a1 + 200) = *((_DWORD *)QMsg + 14);
    v27 = QMsg + 2;
    LOBYTE(v22) = 1;
    v23 = HMValidateHandleNoSecure(QMsg[2], v22);
    if ( v23 )
      v24 = *(_DWORD *)(*(_QWORD *)(v23 + 40) + 288LL);
    else
      v24 = *(_DWORD *)(*((_QWORD *)a1 + 58) + 268LL);
    *((_DWORD *)a1 + 201) = v24;
    *((_QWORD *)a1 + 101) = QMsg[10];
    *((_QWORD *)a1 + 77) = QMsg;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 424LL) = QMsg[9];
    tagTHREADINFO::UpdateInputSource(a1, (const struct tagINPUT_MESSAGE_SOURCE *)((char *)QMsg + 124));
    *(_OWORD *)a2 = *v27;
    *((_OWORD *)a2 + 1) = *((_OWORD *)QMsg + 2);
    *((_OWORD *)a2 + 2) = *((_OWORD *)QMsg + 3);
    if ( v10 )
    {
      v25 = (_QWORD *)*((_QWORD *)a1 + 65);
      if ( (*((_DWORD *)QMsg + 25) & 1) != 0 )
        *v25 |= 0x1000uLL;
      else
        *v25 &= ~0x1000uLL;
      if ( *((_DWORD *)*v11 + 6) == 786 )
        CheckRemoveHotkeyBit(a1, v11);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 0x400) != 0
        && (int)CheckProcessForeground(a1) < 0 )
      {
        return 0LL;
      }
      DelQEntry((__int64)v11, QMsg, 1);
    }
    else
    {
      *((_QWORD *)a1 + 77) = 1LL;
    }
    v26 = *((_DWORD *)a2 + 2);
    if ( (unsigned int)(v26 + 2147482655) <= 7 )
    {
      *((_DWORD *)a2 + 2) = v26 & 0x7FFFFFFF;
      xxxDDETrackGetMessageHook(a2);
      if ( !v10 && QMsg == FindQMsg(a1, (struct tagMLIST *)v11, a3, a4, a5, 0) )
      {
        *v27 = *(_OWORD *)a2;
        *((_OWORD *)QMsg + 2) = *((_OWORD *)a2 + 1);
        *((_OWORD *)QMsg + 3) = *((_OWORD *)a2 + 2);
      }
    }
  }
  else if ( (unsigned int)CheckQuitMessage(a1, a2, a6) )
  {
    return 1LL;
  }
  if ( !*((_DWORD *)a1 + 216)
    && (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 0x40000000) == 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 61) + 8LL), 0xFFFFFEF7);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 61) + 4LL), 0xFFFFFEFF);
  }
  LOBYTE(v12) = QMsg != 0LL;
  return v12;
}
