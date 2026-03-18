/*
 * XREFs of Controller_D0ExitSaveState @ 0x14002D350
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x14002BD60 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002D650 (McTemplateK0pq_EtwWriteTransfer.c)
 *     Register_WriteSecureMmio @ 0x14002DDB0 (Register_WriteSecureMmio.c)
 *     WPP_RECORDER_SF_I @ 0x1400324D4 (WPP_RECORDER_SF_I.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14003380C (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall Controller_D0ExitSaveState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int *v6; // rsi
  unsigned int *v7; // r14
  __int16 Ulong; // ax
  ULONGLONG v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  ULONGLONG UnbiasedInterruptTime; // rbp
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int i; // esi
  __int16 v17; // ax
  ULONGLONG v18; // rax
  unsigned __int64 v19; // rdx
  ULONGLONG v20; // rax
  unsigned __int64 v21; // rdx
  ULONGLONG v22; // rax
  int v23; // r8d
  unsigned __int64 v24; // rdx
  signed __int32 v26[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+20h] [rbp-38h]
  int v28; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  Interval.QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      4782);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 129, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(unsigned int **)(v5 + 32);
  v7 = v6 + 1;
  Ulong = XilRegister_ReadUlong(v5, v6 + 1);
  if ( (Ulong & 1) != 0 )
  {
    if ( (Ulong & 0x100) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v11 = 131;
      goto LABEL_11;
    }
    if ( (Ulong & 0x200) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v11 = 132;
      goto LABEL_11;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 133, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v13 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
    v14 = *(_QWORD *)(a1 + 88);
    v15 = v13 | 0x100;
    v28 = v15;
    if ( *(_BYTE *)(*(_QWORD *)(v14 + 8) + 1001LL) )
    {
      Register_WriteSecureMmio(v14, v6, 2LL, &v28);
    }
    else
    {
      *v6 = v15;
      _InterlockedOr(v26, 0);
    }
    for ( i = 20; ; --i )
    {
      v17 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v7);
      if ( (v17 & 0x400) != 0 )
        break;
      if ( (v17 & 0x100) == 0 )
      {
        v20 = KeQueryUnbiasedInterruptTime();
        v9 = v20;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = (v20 - UnbiasedInterruptTime) / 0xA;
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v21, v10, 135, v27, (v20 - UnbiasedInterruptTime) / 0xA);
        }
        goto LABEL_36;
      }
      if ( !i )
      {
        v18 = KeQueryUnbiasedInterruptTime();
        v9 = v18;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = (v18 - UnbiasedInterruptTime) / 0x2710;
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v19, v10, 136, v27, (v18 - UnbiasedInterruptTime) / 0x2710);
        }
        goto LABEL_35;
      }
      Interval.QuadPart = -2000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v22 = KeQueryUnbiasedInterruptTime();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = (v22 - UnbiasedInterruptTime) / 0x2710;
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v24, v23, 134, v27, (v22 - UnbiasedInterruptTime) / 0x2710);
    }
    XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v7, 1024);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 130;
LABEL_11:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, v11, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  }
LABEL_35:
  v3 = -1073741630;
LABEL_36:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pq_EtwWriteTransfer(v9, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_COMPLETE, v10, *(_QWORD *)(a1 + 8), v3);
  return v3;
}
