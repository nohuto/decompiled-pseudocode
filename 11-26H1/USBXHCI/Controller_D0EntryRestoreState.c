/*
 * XREFs of Controller_D0EntryRestoreState @ 0x140039BB0
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     Controller_InitializeDeviceNotificationRegister @ 0x1400082F0 (Controller_InitializeDeviceNotificationRegister.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002D650 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_I @ 0x1400324D4 (WPP_RECORDER_SF_I.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14003380C (McTemplateK0p_EtwWriteTransfer.c)
 *     Controller_LogRestoreTimeout @ 0x1400421E8 (Controller_LogRestoreTimeout.c)
 */

__int64 __fastcall Controller_D0EntryRestoreState(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 *v5; // rdi
  __int64 v6; // rcx
  unsigned int *v7; // r14
  unsigned int *v8; // rbp
  __int16 Ulong; // ax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 *v13; // r15
  ULONGLONG UnbiasedInterruptTime; // rsi
  int v15; // eax
  int v16; // edx
  int v17; // edi
  __int16 i; // ax
  unsigned __int64 v19; // rcx
  ULONGLONG v20; // rax
  int v21; // r8d
  unsigned __int64 v22; // rdx
  int v23; // edi
  ULONGLONG v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 1001) == 0;
  Interval.QuadPart = 0LL;
  if ( !v3 && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      4260);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 113, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v5 = (__int64 *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 88);
  v7 = *(unsigned int **)(v6 + 32);
  v8 = v7 + 1;
  Ulong = XilRegister_ReadUlong(v6, v7 + 1);
  if ( (Ulong & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_34:
      v23 = -1073741630;
      goto LABEL_35;
    }
    v12 = 114;
LABEL_11:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, v12, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    goto LABEL_34;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v12 = 115;
    goto LABEL_11;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v12 = 116;
    goto LABEL_11;
  }
  Controller_InitializeDeviceNotificationRegister(a1);
  v13 = (__int64 *)(a1 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 117, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    v13 = (__int64 *)(a1 + 88);
  }
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v15 = XilRegister_ReadUlong(*v5, v7);
  XilRegister_WriteUlong(*v5, v7, v15 | 0x200);
  if ( (*(_QWORD *)(a1 + 744) & 0x40000000LL) != 0 )
  {
    v17 = 500;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v16,
        4,
        118,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        100);
    }
  }
  else
  {
    v17 = 20;
  }
  for ( i = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v7 + 1); ; i = XilRegister_ReadUlong(*v13, v8) )
  {
    if ( (i & 0x400) != 0 )
    {
      v20 = KeQueryUnbiasedInterruptTime();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = (v20 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v22, v21, 119, v27, (v20 - UnbiasedInterruptTime) / 0x2710);
      }
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v8, 1024);
      goto LABEL_34;
    }
    if ( (i & 0x200) == 0 )
      break;
    if ( !v17 )
    {
      v19 = KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime;
LABEL_40:
      Controller_LogRestoreTimeout(a1, v19 / 0x2710);
      goto LABEL_34;
    }
    if ( (*(_QWORD *)(a1 + 744) & 0x40000000LL) != 0 )
    {
      v19 = KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime;
      if ( v19 >= 0xF4240 )
        goto LABEL_40;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    --v17;
  }
  v25 = KeQueryUnbiasedInterruptTime();
  v10 = v25;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = (v25 - UnbiasedInterruptTime) / 0xA;
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v26, v11, 120, v27, (v25 - UnbiasedInterruptTime) / 0xA);
  }
  v23 = 0;
LABEL_35:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v27) = v23;
    McTemplateK0pq_EtwWriteTransfer(
      v10,
      &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_COMPLETE,
      v11,
      *(_QWORD *)(a1 + 8),
      v27);
  }
  if ( v23 < 0 )
  {
    ++*(_DWORD *)(a1 + 880);
    ++*(_DWORD *)(a1 + 924);
    *(_BYTE *)(a1 + 872) = 1;
  }
  return (unsigned int)v23;
}
