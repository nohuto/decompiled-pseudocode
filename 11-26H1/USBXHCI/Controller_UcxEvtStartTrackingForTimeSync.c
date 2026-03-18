/*
 * XREFs of Controller_UcxEvtStartTrackingForTimeSync @ 0x140043980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_dqd @ 0x140034850 (WPP_RECORDER_SF_dqd.c)
 *     Interrupter_QueryBusEdgeInformation @ 0x1400381DC (Interrupter_QueryBusEdgeInformation.c)
 *     McTemplateK0ptqqp_EtwWriteTransfer @ 0x1400451EC (McTemplateK0ptqqp_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_II @ 0x1400454A8 (WPP_RECORDER_SF_II.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

PDEVICE_OBJECT __fastcall Controller_UcxEvtStartTrackingForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v8; // r12d
  int v9; // edx
  __int64 v10; // rsi
  int v11; // r8d
  _BYTE *v12; // rdi
  int v13; // ebx
  unsigned __int8 v14; // r14
  unsigned __int64 v15; // rdi
  int v16; // edx
  PDEVICE_OBJECT result; // rax
  int v18; // edx
  int v19; // edx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r14
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  unsigned int *v26; // rbx
  int Ulong; // eax
  __int64 *v28; // rcx
  __int64 v29; // rdx
  int v30; // edx
  __int64 v31; // [rsp+30h] [rbp-51h]
  __int64 v32; // [rsp+40h] [rbp-41h]
  char v33[8]; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-31h]
  __int64 v35; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v36; // [rsp+60h] [rbp-21h] BYREF
  __int64 v37; // [rsp+68h] [rbp-19h] BYREF
  ULONG Seed[2]; // [rsp+70h] [rbp-11h] BYREF
  __int128 v39; // [rsp+78h] [rbp-9h] BYREF
  __int128 v40; // [rsp+88h] [rbp+7h]
  __int128 v41; // [rsp+98h] [rbp+17h]
  void *v42; // [rsp+A8h] [rbp+27h]
  char v43; // [rsp+100h] [rbp+7Fh]

  v43 = 1;
  LODWORD(v42) = 0;
  v33[0] = 0;
  v37 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v8 = (*(char (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 2240))(WdfDriverGlobals);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          a1,
          off_14006B290);
  v12 = (_BYTE *)(v10 + 1064);
  if ( a4 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v31) = 0;
      WPP_RECORDER_SF_II(*(_QWORD *)(v10 + 72), v9, v11, 302);
    }
LABEL_4:
    v13 = -1073741811;
LABEL_5:
    v14 = v43;
    goto LABEL_6;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 *, _QWORD))(WdfFunctions_01033 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v37,
          0LL);
  if ( v13 < 0 )
    goto LABEL_5;
  if ( *(_QWORD *)v37 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), v18, 4, 303, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    goto LABEL_4;
  }
  v14 = *(_BYTE *)(v37 + 8);
  v43 = v14;
  if ( a3 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v31) = 0;
      WPP_RECORDER_SF_II(*(_QWORD *)(v10 + 72), v18, v11, 304);
    }
    v13 = -1073741811;
    goto LABEL_6;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01033 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v36,
          0LL);
  if ( v13 < 0 )
  {
LABEL_6:
    v15 = v34;
    goto LABEL_7;
  }
  if ( (_BYTE)v8 == 1 )
  {
    v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2216))(WdfDriverGlobals, a2);
    v19 = v35;
    if ( !v35 )
    {
      v13 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(v10 + 72),
          v19,
          4,
          305,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          116);
      }
      goto LABEL_6;
    }
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v35,
            off_14006B218);
    v22 = v20;
    if ( *(_BYTE *)(v20 + 48) )
    {
      v13 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_q(
          *(_QWORD *)(v10 + 72),
          v21,
          4,
          306,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v35);
      }
      goto LABEL_5;
    }
    v23 = *(_QWORD *)(v20 + 24);
    if ( !v23 )
    {
      *(_QWORD *)Seed = MEMORY[0xFFFFF78000000320];
      v23 = ((RtlRandomEx(Seed) >> 2) + 4096) & 0xFFFFFFF8;
      *(_QWORD *)(v22 + 24) = v23;
    }
  }
  else
  {
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v39) = -1;
      else
        LODWORD(v39) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v39) = 56;
    }
    v42 = off_14006B218;
    *((_QWORD *)&v40 + 1) = 0x100000001LL;
    *(_QWORD *)&v41 = *(_QWORD *)(v10 + 1088);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64 *))(WdfFunctions_01033 + 1656))(
            WdfDriverGlobals,
            &v39,
            &v35);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v10 + 72),
          v24,
          4,
          307,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v13);
      }
      goto LABEL_6;
    }
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v35,
            off_14006B218);
    *(_BYTE *)(v22 + 60) = 0;
    *(_QWORD *)(v22 + 16) = v35;
    *(_QWORD *)(v22 + 24) = 0LL;
    v23 = v35;
  }
  *v36 = v23;
  if ( *(_DWORD *)(v10 + 792) != 1 )
  {
    v13 = -1073741436;
    goto LABEL_5;
  }
  DynamicLock_Acquire(*(_QWORD *)(v10 + 1072));
  if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 112))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 1088)) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), _BYTE *))(WdfFunctions_01033 + 1144))(
      WdfDriverGlobals,
      **(_QWORD **)(*(_QWORD *)(v10 + 128) + 40LL),
      Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
      v12);
    v25 = *(_QWORD *)(v10 + 88);
    v26 = *(unsigned int **)(v25 + 32);
    Ulong = XilRegister_ReadUlong(v25, v26);
    XilRegister_WriteUlong(*(_QWORD *)(v10 + 88), v26, Ulong | 0x400);
    *v12 = 1;
  }
  DynamicLock_Release(*(_QWORD *)(v10 + 1072));
  Interrupter_QueryBusEdgeInformation(*(_QWORD *)(v10 + 128), (__int64)v12, (__int64)v33, 0LL, 0LL, 0LL, 0LL);
  DynamicLock_Acquire(*(_QWORD *)(v10 + 1072));
  if ( !v33[0] )
  {
    if ( !v43 )
    {
      *(_QWORD *)(v22 + 32) = a2;
      v28 = *(__int64 **)(v10 + 1104);
      if ( *v28 != v10 + 1096 )
        __fastfail(3u);
      *(_QWORD *)v22 = v10 + 1096;
      *(_QWORD *)(v22 + 8) = v28;
      *v28 = v22;
      *(_QWORD *)(v10 + 1104) = v22;
    }
    if ( !*(_BYTE *)(v10 + 1120) )
    {
      v29 = *(_QWORD *)(v10 + 1112);
      *(_BYTE *)(v10 + 1120) = 1;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3040))(WdfDriverGlobals, v29);
    }
    if ( !v43 )
    {
      v13 = 259;
LABEL_56:
      DynamicLock_Release(*(_QWORD *)(v10 + 1072));
      goto LABEL_5;
    }
  }
  DynamicLock_Release(*(_QWORD *)(v10 + 1072));
  DynamicLock_Acquire(*(_QWORD *)(v10 + 1072));
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 120))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 1088),
          v35);
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v10 + 72),
        v30,
        4,
        308,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v13);
    }
    goto LABEL_56;
  }
  DynamicLock_Release(*(_QWORD *)(v10 + 1072));
  v15 = a3;
  *(_BYTE *)(v22 + 48) = 1;
  v14 = v43;
  v13 = 0;
LABEL_7:
  v16 = v35;
  ++*(_DWORD *)(v10 + 1216);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0ptqqp_EtwWriteTransfer(v14, v16, v11, *(_QWORD *)(v10 + 8), v14, v8, v13, v16);
  result = (PDEVICE_OBJECT)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v32) = v8;
      LODWORD(v31) = v13;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqd(
                                 *(_QWORD *)(v10 + 72),
                                 5u,
                                 4u,
                                 0x135u,
                                 (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                                 v31,
                                 v35,
                                 v32);
    }
  }
  if ( v13 >= 0 )
  {
    if ( v13 == 259 )
      return result;
  }
  else if ( !(_BYTE)v8 )
  {
    if ( v35 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
  }
  return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01033 + 2120))(
                           WdfDriverGlobals,
                           a2,
                           (unsigned int)v13,
                           v15);
}
