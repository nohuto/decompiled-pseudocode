/*
 * XREFs of Controller_StopTimeTrackingForHandle @ 0x140042DD4
 * Callers:
 *     Controller_EvtDeviceFileClose @ 0x140034210 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x140044080 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Controller_IsHandlePresentInCollectionLocked @ 0x140016A38 (Controller_IsHandlePresentInCollectionLocked.c)
 *     WPP_RECORDER_SF_qq @ 0x140038B04 (WPP_RECORDER_SF_qq.c)
 *     McTemplateK0pptqqqq_EtwWriteTransfer @ 0x140045014 (McTemplateK0pptqqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_StopTimeTrackingForHandle(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  char v6; // si
  __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned int *v10; // rbx
  int Ulong; // eax
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d

  v3 = a1 + 1064;
  v6 = 0;
  v8 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 1072));
  if ( Controller_IsHandlePresentInCollectionLocked(*(_QWORD *)(v3 + 24), a2) )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
           WdfDriverGlobals,
           a2,
           off_14006B218);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 128))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 24),
      a2);
    *(_BYTE *)(v8 + 48) = 0;
    if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 112))(
            WdfDriverGlobals,
            *(_QWORD *)(v3 + 24)) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01033 + 1144))(
        WdfDriverGlobals,
        **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
        Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
        v3);
      v9 = *(_QWORD *)(a1 + 88);
      v10 = *(unsigned int **)(v9 + 32);
      Ulong = XilRegister_ReadUlong(v9, v10);
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v10, Ulong & 0xFFFFFBFF);
      *(_BYTE *)v3 = 0;
    }
    v12 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(a1 + 72),
        2u,
        4u,
        0x13Eu,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        a2,
        *(_QWORD *)(v3 + 24));
    v12 = -1073741811;
  }
  DynamicLock_Release(*(_QWORD *)(v3 + 8));
  if ( v8 )
  {
    v6 = *(_BYTE *)(v8 + 60);
    v14 = *(_DWORD *)(v8 + 52);
    v15 = *(_DWORD *)(v8 + 56);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  ++*(_DWORD *)(a1 + 1220);
  *(_DWORD *)(a1 + 1224) += v14;
  *(_DWORD *)(a1 + 1228) += v15;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0pptqqqq_EtwWriteTransfer(v6, v13, v14, *(_QWORD *)(a1 + 8), a2, a3, v6, v12, v14, v15);
  return v12;
}
