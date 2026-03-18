/*
 * XREFs of Controller_Start @ 0x140008410
 * Callers:
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1400444D0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     Register_GetExtendedTBCEnable @ 0x140007F5C (Register_GetExtendedTBCEnable.c)
 *     Register_GetExtendedTBCTRBStatusSupported @ 0x1400083E8 (Register_GetExtendedTBCTRBStatusSupported.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     WPP_RECORDER_SF_I @ 0x1400324D4 (WPP_RECORDER_SF_I.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x140040C4C (Controller_DetectFrameMicroframeBoundary.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_Start(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // r12
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r13
  int Ulong; // eax
  char v9; // bl
  bool ExtendedTBCEnable; // cl
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r10
  int v14; // edi
  int v15; // edx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r10
  int v19; // eax
  unsigned int v20; // edi
  ULONGLONG v21; // r15
  int v22; // r8d
  unsigned int i; // edi
  int v24; // r14d
  unsigned int j; // edi
  ULONGLONG v26; // rcx
  int v27; // r8d
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  int v32; // eax
  int Timeout; // [rsp+20h] [rbp-68h]
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  ULONGLONG UnbiasedInterruptTime; // [rsp+90h] [rbp+8h]
  __int64 v36; // [rsp+98h] [rbp+10h]

  v1 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( *(_BYTE *)(a1 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      4477);
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 121, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  if ( !(unsigned __int8)Controller_IsControllerAccessible(a1) )
    return v1;
  v5 = (__int64 *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 88);
  v7 = *(_QWORD *)(v6 + 32);
  v36 = v7 + 4;
  Ulong = XilRegister_ReadUlong(v6, v7 + 4);
  v9 = Ulong;
  if ( Ulong == -1 )
    return v1;
  if ( (Ulong & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, 122, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    return (unsigned int)-1073741630;
  }
  XilRegister_WriteUlong(*v5, *(_QWORD *)(*v5 + 32) + 20LL, 2LL);
  XilRegister_ReadUlong(*v5, v7);
  ExtendedTBCEnable = Register_GetExtendedTBCEnable(*v5);
  v14 = v11 | 0x10000;
  *(_BYTE *)(a1 + 1005) = ExtendedTBCEnable;
  if ( v15 != 3 )
    v14 = v11;
  v16 = (v12 != 0 ? 8197 : 5) | (ExtendedTBCEnable << 14) | v14 & 0xFFFF9FFF;
  *(_BYTE *)(a1 + 1006) = Register_GetExtendedTBCTRBStatusSupported(v13);
  if ( Register_GetExtendedTBCTRBStatusSupported(v17) )
  {
    if ( (*(_QWORD *)(*(_QWORD *)(v18 + 8) + 744LL) & 0x1000LL) == 0 )
    {
      v19 = 0x8000;
      goto LABEL_12;
    }
    v5 = (__int64 *)(a1 + 88);
  }
  v19 = 0;
LABEL_12:
  v20 = v19 | v16 & 0xFFFF7FFF;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 123, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v21 = 0LL;
  XilRegister_WriteUlong(*v5, v7, v20);
  for ( i = 0; i < 0x32; ++i )
  {
    KeStallExecutionProcessor(0x64u);
    v9 = XilRegister_ReadUlong(*v5, v36);
    if ( (v9 & 1) == 0 )
    {
      v21 = KeQueryUnbiasedInterruptTime();
      break;
    }
  }
  if ( (v9 & 1) == 0 )
    goto LABEL_19;
  v3 = ExAllocateTimer(&Controller_HighResTimerCompletion, &Event, 4LL);
  if ( !v3 )
    return (unsigned int)-1073741670;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  for ( j = 0; j < 7; ++j )
  {
    ExSetTimer(v3, -50000LL, 0LL, 0LL);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v9 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v36);
    if ( (v9 & 1) == 0 )
    {
      v21 = KeQueryUnbiasedInterruptTime();
      break;
    }
  }
  if ( (v9 & 1) != 0 )
  {
    v26 = KeQueryUnbiasedInterruptTime();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = (v26 - UnbiasedInterruptTime) / 0x2710;
      LOBYTE(v28) = 2;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v28, v27, 124, Timeout, (v26 - UnbiasedInterruptTime) / 0x2710);
    }
  }
  else
  {
LABEL_19:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = (v21 - UnbiasedInterruptTime) / 0xA;
      LOBYTE(v29) = 4;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v29, v22, 125, Timeout, (v21 - UnbiasedInterruptTime) / 0xA);
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 1072));
  ++*(_DWORD *)(a1 + 1080);
  v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 112))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 1088));
  if ( v24 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01033 + 1144))(
      WdfDriverGlobals,
      **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      a1 + 1064);
    v30 = *(_QWORD *)(a1 + 88);
    v31 = *(_QWORD *)(v30 + 32);
    v32 = XilRegister_ReadUlong(v30, v31);
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v31, v32 | 0x400u);
    *(_BYTE *)(a1 + 1064) = 1;
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 1072));
  if ( v24 )
    Controller_DetectFrameMicroframeBoundary(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 760),
    -50000000LL);
  if ( v3 )
    ExDeleteTimer(v3, 0LL, 0LL, 0LL);
  return v1;
}
