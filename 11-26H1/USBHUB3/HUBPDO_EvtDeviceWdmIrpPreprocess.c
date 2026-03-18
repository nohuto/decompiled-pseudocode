/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016C10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FC4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x140014A3C (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBPDO_GetHubName @ 0x140018C90 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x14001A3FC (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B864 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x14001C858 (HUBPDO_ValidateURB.c)
 *     McTemplateK0pjq_EtwWriteTransfer @ 0x14001CC9C (McTemplateK0pjq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x14001DED0 (WPP_RECORDER_SF_q.c)
 *     HUBUCX_GetControllerName @ 0x1400275A8 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x140027700 (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x140030358 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 *     HUBMISC_WaitForSignal @ 0x14003436C (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x14004073C (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140084D6C (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x14008555C (HUBPDO_UnregisterPortPLDRCapability.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPreprocess(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v7; // rdi
  unsigned int LowPart; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  bool v16; // zf
  _IRP *MasterIrp; // rdx
  int v20; // r14d
  bool v21; // cl
  ULONG v22; // esi
  _IO_SECURITY_CONTEXT *v23; // r14
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // r9d
  int v32; // edx
  __int64 v33; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  __int64 v35; // rcx
  _ACCESS_STATE *v36; // rax
  _SECURITY_QUALITY_OF_SERVICE *v37; // rcx
  PVOID v38; // r10
  __int64 v39; // rdx
  unsigned __int16 *v40; // rdx
  unsigned int *v41; // rsi
  unsigned int v42; // ebx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v44; // rcx
  unsigned int AccessState_high; // eax
  unsigned int v46; // ebx
  unsigned __int16 v47; // cx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  _IO_STACK_LOCATION *v52; // rax
  _IO_STACK_LOCATION *v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  unsigned __int16 v58; // r9
  unsigned __int8 v59; // dl
  int v60; // eax
  __int64 v61; // rcx
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // eax
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int DeviceBusInfo; // eax
  int v69; // r9d
  __int64 v70; // rdx
  _IO_SECURITY_CONTEXT *v71; // rax
  _IO_STACK_LOCATION *v72; // rax
  _IO_STACK_LOCATION *v73; // rax
  __int64 v74; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  unsigned int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // eax
  unsigned int v81; // eax
  _IO_SECURITY_CONTEXT *v82; // rcx
  __int64 v83; // rax
  __int16 v84; // dx
  __int64 v85; // r8
  unsigned int v86; // eax
  unsigned int v87; // eax
  unsigned int v88; // eax
  unsigned int v89; // eax
  unsigned int v90; // eax
  unsigned int v91; // eax
  _IO_SECURITY_CONTEXT *v92; // rax
  __int64 v93; // rcx
  _IO_SECURITY_CONTEXT *v94; // r8
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  char v98; // cl
  __int64 v99; // rcx
  char v100; // cl
  unsigned int v101; // eax
  unsigned int v102; // eax
  unsigned int v103; // eax
  unsigned int v104; // eax
  unsigned int v105; // eax
  unsigned int v106; // eax
  int v107; // edx
  int v108; // r9d
  _IO_SECURITY_CONTEXT *v109; // rax
  int v110; // eax
  int v111; // r14d
  int v112; // r14d
  int v113; // r14d
  int v114; // r14d
  _IO_STACK_LOCATION *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  int v118; // ecx
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-60h]
  ULONG BugCheckOnFailurea[2]; // [rsp+20h] [rbp-60h]
  ULONG Priority[2]; // [rsp+28h] [rbp-58h]
  unsigned int v122; // [rsp+30h] [rbp-50h]
  _IO_STACK_LOCATION *v123; // [rsp+38h] [rbp-48h]
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  GUID v125; // [rsp+58h] [rbp-28h] BYREF
  __int128 Source1; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&v125.Data1 = a1;
  Status = 0;
  memset(&Event, 0, sizeof(Event));
  Source1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006D1D0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = v4;
  v123 = CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v122 = LowPart;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    v9 = LowPart - 2229348;
    if ( v9 )
    {
      v10 = v9 - 4;
      if ( !v10 )
      {
        if ( CurrentStackLocation->Parameters.Read.Length != 36 )
        {
LABEL_20:
          Status = -1073741811;
          v20 = 2;
          goto LABEL_257;
        }
        v16 = CurrentStackLocation->Parameters.Create.Options == 36;
LABEL_12:
        if ( v16 )
        {
          MasterIrp = a2->AssociatedIrp.MasterIrp;
          if ( MasterIrp )
          {
            *(_QWORD *)(&MasterIrp->Size + 1) = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL);
            goto LABEL_15;
          }
        }
        goto LABEL_20;
      }
      v11 = v10 - 4;
      if ( v11 )
      {
        v12 = v11 - 4;
        if ( v12 )
        {
          v13 = v12 - 4;
          if ( !v13 )
            goto LABEL_15;
          v14 = v13 - 4;
          if ( !v14 )
            goto LABEL_15;
          v15 = v14 - 4;
          if ( !v15 )
            goto LABEL_15;
          if ( v15 != 4 )
            goto LABEL_119;
          if ( CurrentStackLocation->Parameters.Read.Length != 24 )
            goto LABEL_20;
          v16 = CurrentStackLocation->Parameters.Create.Options == 24;
          goto LABEL_12;
        }
      }
    }
    goto LABEL_110;
  }
  v21 = 0;
  switch ( LowPart )
  {
    case 0x220003u:
      LODWORD(v5) = *(unsigned __int16 *)(CurrentStackLocation->Parameters.WMI.ProviderId + 2);
      if ( (_WORD)v5 == 53 || (_WORD)v5 == 54 )
        v21 = 1;
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      break;
    case 0x490007u:
    case 0x49104Bu:
      v21 = 1;
      break;
    case 0x220FB3u:
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v21 = (*(_DWORD *)(v7 + 32) & 0x20) != 0;
      break;
    case 0x220463u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
          v5,
          5,
          57,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
          (char)a2);
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1640LL) |= 0x80000u;
      goto LABEL_58;
  }
  if ( *(_BYTE *)v7 && !v21 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
        v5,
        5,
        58,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        (char)a2);
    }
    v22 = v122;
    Status = -1073741810;
    if ( v122 == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
LABEL_59:
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_14006D2C0)
                    + 4) & 0x1000) != 0 )
    {
      v125 = 0LL;
      if ( g_IoGetActivityIdIrp )
        g_IoGetActivityIdIrp(a2, &v125);
      if ( (byte_140070D49 & 4) != 0 )
      {
        BugCheckOnFailure[0] = v22;
        McTemplateK0pq_EtwWriteTransfer(
          v33,
          &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
          &v125,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailure);
      }
      if ( v22 != 2228227 )
      {
        if ( v22 == 4788299 )
        {
          if ( (byte_140070D49 & 4) == 0 )
            goto LABEL_279;
          McTemplateK0pjq_EtwWriteTransfer(
            v33,
            v32,
            (unsigned int)&v125,
            *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
            (__int64)&Source1,
            Status);
        }
LABEL_277:
        if ( (byte_140070D49 & 4) != 0 )
        {
          Priority[0] = Status;
          BugCheckOnFailure[0] = v22;
          McTemplateK0pqq_EtwWriteTransfer(
            v33,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
            &v125,
            *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
            *(_QWORD *)BugCheckOnFailure,
            *(_QWORD *)Priority);
        }
        goto LABEL_279;
      }
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( (byte_140070D49 & 4) != 0 )
      {
        BugCheckOnFailure[0] = WORD1(SecurityContext->SecurityQos);
        McTemplateK0pq_EtwWriteTransfer(
          v33,
          &USBHUB3_ETW_EVENT_DEVICE_URB_START,
          &v125,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailure);
        if ( (byte_140070D49 & 4) != 0 )
        {
          Priority[0] = HIDWORD(SecurityContext->SecurityQos);
          BugCheckOnFailurea[0] = WORD1(SecurityContext->SecurityQos);
          McTemplateK0pqq_EtwWriteTransfer(
            WORD1(SecurityContext->SecurityQos),
            &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
            &v125,
            *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
            *(_QWORD *)BugCheckOnFailurea,
            *(_QWORD *)Priority);
          goto LABEL_277;
        }
      }
    }
LABEL_279:
    a2->IoStatus.Status = Status;
    goto LABEL_280;
  }
  if ( LowPart == 2228227 )
  {
    v23 = CurrentStackLocation->Parameters.Create.SecurityContext;
    v24 = WORD1(v23->SecurityQos);
    if ( v24 == 9 || (_WORD)v24 == 10 || (unsigned __int16)(v24 - 57) <= 1u )
      goto LABEL_117;
    if ( v24 > 0x2A )
    {
      v48 = v24 - 48;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( v49 )
        {
          v50 = v49 - 4;
          if ( !v50 || (v51 = v50 - 1) == 0 )
          {
            v23->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 24LL);
            goto LABEL_119;
          }
          v28 = v51 == 5;
LABEL_116:
          if ( !v28 )
            goto LABEL_117;
        }
      }
    }
    else
    {
      if ( v24 == 42 )
      {
        v5 = *(_QWORD *)(v7 + 24);
        if ( WORD2(v23[5].AccessState) != 7 )
        {
          v47 = *(_WORD *)(v5 + 1998);
          if ( (v47 >= 0x200u || v47 < 0x100u) && (*(_DWORD *)(v5 + 1640) & 0x80u) == 0
            || (*(_DWORD *)(v5 + 1652) & 2) != 0 )
          {
            BYTE1(v23[5].AccessState) = *(_BYTE *)(v5 + 2060);
            v23->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 24LL);
LABEL_110:
            v20 = 1;
            goto LABEL_257;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_56;
          v30 = *(_QWORD *)(v5 + 8);
          v31 = 59;
          LOBYTE(v5) = 3;
          goto LABEL_55;
        }
        if ( (*(_DWORD *)(v5 + 2472) & 2) == 0 )
          goto LABEL_56;
        SecurityQos = v23[2].SecurityQos;
        if ( SecurityQos )
          v44 = (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0
              ? *(PVOID *)&SecurityQos[2].Length
              : MmMapLockedPagesSpecifyCache(
                  (PMDL)SecurityQos,
                  0,
                  MmCached,
                  0LL,
                  0,
                  ExDefaultMdlProtection | 0x40000010u);
        else
          v44 = *(PVOID *)&v23[1].DesiredAccess;
        if ( !v44 )
          goto LABEL_56;
        AccessState_high = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 2496LL) + 8LL);
        if ( AccessState_high >= HIDWORD(v23[1].AccessState) )
          AccessState_high = HIDWORD(v23[1].AccessState);
        v46 = AccessState_high;
        memmove(v44, *(const void **)(*(_QWORD *)(v7 + 24) + 2496LL), AccessState_high);
        HIDWORD(v23[1].AccessState) = v46;
        goto LABEL_91;
      }
      if ( WORD1(v23->SecurityQos) )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 10;
          if ( v26 )
          {
            v27 = v26 - 8;
            if ( v27 )
            {
              v28 = v27 == 11;
              goto LABEL_116;
            }
            v29 = *(_QWORD *)(v7 + 24);
            if ( (*(_DWORD *)(v29 + 1640) & 0x80000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
LABEL_56:
                Status = -1073741637;
LABEL_57:
                CurrentStackLocation = v123;
                goto LABEL_58;
              }
              v30 = *(_QWORD *)(v29 + 8);
              v31 = 60;
              LOBYTE(v5) = 4;
LABEL_55:
              WPP_RECORDER_SF_(
                *(_QWORD *)(v30 + 1432),
                v5,
                5,
                v31,
                (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
              goto LABEL_56;
            }
LABEL_117:
            v23->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 24LL);
            goto LABEL_15;
          }
          v35 = *(_QWORD *)(v7 + 24);
          if ( *(_WORD *)(v35 + 1998) <= 0x200u )
          {
            v36 = *(_ACCESS_STATE **)(v35 + 24);
LABEL_70:
            v23->AccessState = v36;
            goto LABEL_15;
          }
          Status = HUBPDO_ValidateURB(v7, v23);
          if ( (Status & 0x80000000) != 0 )
            goto LABEL_57;
          v37 = v23[2].SecurityQos;
          if ( v37 )
          {
            if ( (*(&v37->EffectiveOnly + 1) & 5) != 0 )
              v38 = *(PVOID *)&v37[2].Length;
            else
              v38 = MmMapLockedPagesSpecifyCache((PMDL)v37, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010u);
          }
          else
          {
            v38 = *(PVOID *)&v23[1].DesiredAccess;
          }
          if ( !v38 )
          {
            Status = -1073741811;
            HIDWORD(v23->SecurityQos) = -2147482880;
            goto LABEL_57;
          }
          if ( BYTE3(v23[5].AccessState) == 1 )
          {
            v41 = (unsigned int *)&v23[1].AccessState + 1;
            v40 = (unsigned __int16 *)(*(_QWORD *)(v7 + 24) + 1996LL);
            v42 = 18;
            if ( HIDWORD(v23[1].AccessState) <= 0x12 )
              v42 = HIDWORD(v23[1].AccessState);
          }
          else
          {
            if ( BYTE3(v23[5].AccessState) != 2 )
              goto LABEL_117;
            v39 = *(_QWORD *)(v7 + 24);
            if ( BYTE2(v23[5].AccessState) )
            {
              v36 = *(_ACCESS_STATE **)(v39 + 24);
              goto LABEL_70;
            }
            v40 = *(unsigned __int16 **)(v39 + 2024);
            v41 = (unsigned int *)&v23[1].AccessState + 1;
            v42 = v40[1];
            if ( v42 >= HIDWORD(v23[1].AccessState) )
              v42 = HIDWORD(v23[1].AccessState);
          }
          LODWORD(v23[1].AccessState) |= 1u;
          if ( ((__int64)v23[1].AccessState & 8) != 0 )
            WORD1(v23->SecurityQos) = 8;
          memmove(v38, v40, v42);
          *v41 = v42;
LABEL_91:
          Status = 0;
          goto LABEL_57;
        }
      }
    }
    v60 = HUBPDO_ValidateURB(v7, v23);
    Status = v60;
    if ( v60 < 0 )
      goto LABEL_57;
    if ( v60 != 128 )
    {
      v20 = (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1640LL) & 2) != 0 ? 5 : 3;
      goto LABEL_257;
    }
    goto LABEL_91;
  }
  if ( LowPart <= 0x22043F )
  {
    if ( LowPart == 2229311 )
    {
      v82 = CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v82 )
      {
        v83 = *(_QWORD *)(v7 + 16);
        *(_OWORD *)&v82->SecurityQos = *(_OWORD *)(v83 + 312);
        *(_OWORD *)&v82->DesiredAccess = *(_OWORD *)(v83 + 328);
        v84 = *(_WORD *)(v7 + 48);
        v85 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 240LL);
        if ( (_BYTE)v85 )
          *((_WORD *)&v82->DesiredAccess + v85) = v84;
        else
          LOWORD(v82->DesiredAccess) = v84;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v5) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
            v5,
            5,
            11,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
        }
        Status = -1073741811;
      }
      goto LABEL_58;
    }
    v61 = 2228263LL;
    if ( LowPart > 0x220027 )
    {
      v76 = LowPart - 2228267;
      if ( !v76 )
      {
        DeviceBusInfo = HUBPDO_RecordFailure(v7, a2);
        goto LABEL_137;
      }
      v77 = v76 - 1013;
      if ( !v77 )
      {
        DeviceBusInfo = HUBUCX_GetDeviceBusInfo(
                          *(_QWORD *)(v7 + 16),
                          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
                          CurrentStackLocation->Parameters.WMI.ProviderId);
        goto LABEL_137;
      }
      v78 = v77 - 4;
      if ( !v78 )
      {
        DeviceBusInfo = HUBUCX_GetControllerName(
                          *(_QWORD *)(v7 + 16),
                          CurrentStackLocation->Parameters.WMI.ProviderId,
                          CurrentStackLocation->Parameters.Create.Options);
        goto LABEL_137;
      }
      v79 = v78 - 8;
      if ( v79 )
      {
        v80 = v79 - 7;
        if ( !v80 )
        {
          Status = CurrentStackLocation->Parameters.WMI.ProviderId == 0 ? 0xC000000D : 0;
          goto LABEL_58;
        }
        v81 = v80 - 4;
        if ( v81 )
        {
          if ( v81 != 4 )
          {
LABEL_239:
            Status = a2->IoStatus.Status;
            goto LABEL_58;
          }
        }
      }
      goto LABEL_184;
    }
    if ( LowPart != 2228263 )
    {
      v62 = LowPart - 2228231;
      if ( !v62 )
      {
        if ( (*(_DWORD *)(v7 + 32) & 1) != 0 )
        {
          if ( !KeGetCurrentIrql() )
            goto LABEL_119;
          Status = -1073741811;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_58;
          v69 = 64;
        }
        else
        {
          Status = -1073741101;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_58;
          v69 = 63;
        }
        goto LABEL_141;
      }
      v63 = v62 - 8;
      if ( v63 )
      {
        v64 = v63 - 4;
        if ( !v64 )
        {
          if ( KeGetCurrentIrql() )
          {
            Status = -1073741811;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_58;
            v69 = 61;
          }
          else
          {
            v71 = CurrentStackLocation->Parameters.Create.SecurityContext;
            if ( v71 )
            {
              LODWORD(v71->SecurityQos) = 0;
              CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v7;
LABEL_157:
              v72 = a2->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v72[-1].MajorFunction = *(_OWORD *)&v72->MajorFunction;
              *(_OWORD *)&v72[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v72->Parameters.NotifyDirectoryEx.CompletionFilter;
              *(_OWORD *)(&v72[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v72->Parameters.SetQuota + 6);
              v72[-1].FileObject = v72->FileObject;
              v72[-1].Control = 0;
              KeInitializeEvent(&Event, NotificationEvent, 0);
              v73 = a2->Tail.Overlay.CurrentStackLocation;
              v74 = *(_QWORD *)&v125.Data1;
              v73[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&HUBPDO_SyncCompletionRoutine;
              v73[-1].Context = &Event;
              v73[-1].Control = -32;
              v57 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015
                                                                                                + 3216))(
                      WdfDriverGlobals,
                      v74,
                      a2,
                      *(_QWORD *)(*(_QWORD *)(v7 + 16) + 2416LL),
                      2);
              if ( v57 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_161;
              v58 = 72;
              v59 = 2;
LABEL_160:
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
                v59,
                5u,
                v58,
                (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
                v57);
LABEL_161:
              HUBMISC_WaitForSignal(&Event);
              Status = a2->IoStatus.Status;
LABEL_280:
              IofCompleteRequest(a2, 0);
              return Status;
            }
            Status = -1073741811;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_58;
            v69 = 62;
          }
          LOBYTE(v5) = 2;
          goto LABEL_142;
        }
        v65 = v64 - 4;
        if ( !v65 )
          goto LABEL_58;
        v66 = v65 - 4;
        if ( !v66 )
          goto LABEL_58;
        v67 = v66 - 4;
        if ( v67 )
        {
          if ( v67 == 1 )
          {
            DeviceBusInfo = HUBPDO_GetHubName(v7, a2);
LABEL_137:
            Status = DeviceBusInfo;
            goto LABEL_58;
          }
          goto LABEL_239;
        }
        if ( KeGetCurrentIrql() )
        {
          Status = -1073741811;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_58;
          v69 = 67;
        }
        else
        {
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 4), 1, 0) )
          {
            v70 = *(_QWORD *)(v7 + 24);
            if ( (*(_DWORD *)(v70 + 2444) & 0x400) != 0 )
              HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v70 + 512);
            EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(*(_QWORD *)(v7 + 24), 2228255, 0);
            HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 512LL, 4011);
            goto LABEL_58;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_58:
            v22 = v122;
            goto LABEL_59;
          }
          v69 = 68;
        }
LABEL_141:
        LOBYTE(v5) = 3;
LABEL_142:
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
          v5,
          5,
          v69,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
        goto LABEL_58;
      }
LABEL_184:
      Status = -1073741637;
      goto LABEL_58;
    }
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( Parameters && *(_QWORD *)&Parameters->NamedPipeType )
    {
      v125 = 0LL;
      if ( g_IoGetActivityIdIrp )
        g_IoGetActivityIdIrp(a2, &v125);
      if ( (byte_140070D49 & 4) != 0 )
        McTemplateK0p_EtwWriteTransfer(
          v61,
          &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
          &v125,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL));
      return (unsigned int)HUBIDLE_AddEvent(v7 + 72, 6003LL, a2);
    }
    Status = -1073741224;
    v20 = 2;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_57;
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
      v5,
      5,
      69,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
LABEL_257:
    v111 = v20 - 1;
    if ( !v111 )
      goto LABEL_15;
    v112 = v111 - 1;
    if ( v112 )
    {
      v113 = v112 - 1;
      if ( v113 )
      {
        v114 = v113 - 1;
        if ( v114 )
        {
          if ( v114 != 1 )
            return Status;
          goto LABEL_262;
        }
        goto LABEL_157;
      }
LABEL_119:
      v52 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v52[-1].MajorFunction = *(_OWORD *)&v52->MajorFunction;
      *(_OWORD *)&v52[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v52->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v52[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v52->Parameters.SetQuota + 6);
      v52[-1].FileObject = v52->FileObject;
      v52[-1].Control = 0;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v53 = a2->Tail.Overlay.CurrentStackLocation;
      v54 = *(_QWORD *)&v125.Data1;
      v55 = *(_QWORD *)&v125.Data1;
      v53[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&HUBPDO_SyncCompletionRoutine;
      v53[-1].Context = &Event;
      v53[-1].Control = -32;
      v56 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(WdfDriverGlobals, v55);
      v57 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
              WdfDriverGlobals,
              v54,
              a2,
              v56,
              2);
      if ( v57 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_161;
      v58 = 73;
      v59 = 3;
      goto LABEL_160;
    }
    goto LABEL_57;
  }
  if ( LowPart <= 0x491043 )
  {
    if ( LowPart == 4788291 )
    {
      v94 = CurrentStackLocation->Parameters.Create.SecurityContext;
      v94->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v7 + 16) + 2464LL);
      v95 = *(_QWORD *)(v7 + 24);
      *(_OWORD *)&v94->AccessState = *(_OWORD *)(v95 + 1996);
      LOWORD(v94[1].SecurityQos) = *(_WORD *)(v95 + 2012);
      WORD1(v94[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2200LL);
      WORD2(v94[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2202LL);
      v94[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 2576LL);
      v94[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 2584LL);
      BYTE2(v94[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 202LL);
      HIWORD(v94[1].AccessState) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2210LL);
      LOWORD(v94[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2212LL);
      v96 = *(_QWORD *)(v7 + 16);
      LOWORD(v94[1].FullCreateOptions) = *(_WORD *)(v96 + 1204)
                                       + *(_WORD *)(*(_QWORD *)(v7 + 24) + 2590LL)
                                       + *(_WORD *)(v96 + 2508);
      v97 = *(_QWORD *)(v7 + 24);
      if ( (*(_DWORD *)(v97 + 2224) & 1) != 0 )
      {
        HIWORD(v94[1].SecurityQos) = *(unsigned __int8 *)(v97 + 2205);
        v98 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 240LL);
      }
      else
      {
        HIWORD(v94[1].SecurityQos) = *(_WORD *)(v96 + 2494);
        v98 = *(_BYTE *)(v96 + 2496);
      }
      LOBYTE(v94[1].AccessState) = v98;
      v99 = *(_QWORD *)(v7 + 24);
      if ( (*(_DWORD *)(v99 + 2224) & 2) != 0 )
      {
        WORD1(v94[1].AccessState) = *(_WORD *)(v99 + 2208);
        v100 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 240LL);
      }
      else
      {
        WORD1(v94[1].AccessState) = *(_WORD *)(v96 + 2498);
        v100 = *(_BYTE *)(v96 + 2500);
      }
      BYTE4(v94[1].AccessState) = v100;
      if ( (*(_DWORD *)(v96 + 2512) & 1) != 0 )
        LODWORD(v94[2].SecurityQos) |= 1u;
      if ( (*(_DWORD *)(v96 + 2512) & 4) != 0 )
        LODWORD(v94[2].SecurityQos) |= 4u;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1640LL) & 0x2000) != 0 )
        LODWORD(v94[2].SecurityQos) |= 2u;
      if ( (((unsigned __int8)*(_DWORD *)(v96 + 2512) | *(_BYTE *)(*(_QWORD *)(v7 + 16) + 44LL)) & 8) != 0 )
        LODWORD(v94[2].SecurityQos) |= 8u;
      goto LABEL_58;
    }
    v86 = LowPart - 2229315;
    if ( !v86 )
      goto LABEL_184;
    v87 = v86 - 12;
    if ( !v87 )
    {
      DeviceBusInfo = HUBPDO_ReturnDeviceConfigInfo(v7, a2);
      goto LABEL_137;
    }
    v88 = v87 - 2916;
    if ( !v88 )
    {
      if ( (*(_DWORD *)(v7 + 32) & 1) != 0 )
      {
        if ( KeGetCurrentIrql() <= 2u )
        {
LABEL_262:
          v115 = a2->Tail.Overlay.CurrentStackLocation;
          v116 = *(_QWORD *)&v125.Data1;
          *(_OWORD *)&v115[-1].MajorFunction = *(_OWORD *)&v115->MajorFunction;
          *(_OWORD *)&v115[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v115->Parameters.NotifyDirectoryEx.CompletionFilter;
          *(_OWORD *)(&v115[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v115->Parameters.SetQuota + 6);
          v115[-1].FileObject = v115->FileObject;
          v115[-1].Control = 0;
          v117 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                   WdfDriverGlobals,
                   v116);
          return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                                 WdfDriverGlobals,
                                 *(_QWORD *)&v125.Data1,
                                 a2,
                                 v117,
                                 2);
        }
        Status = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_58;
        v69 = 66;
      }
      else
      {
        Status = -1073741101;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_58;
        v69 = 65;
      }
      goto LABEL_141;
    }
    v89 = v88 - 8;
    if ( !v89 )
    {
      v93 = *(_QWORD *)(v7 + 24);
      if ( (*(_DWORD *)(v93 + 1652) & 0x1000000) == 0 )
      {
        Status = -1073741275;
        goto LABEL_58;
      }
      DeviceBusInfo = HUBMISC_GenerateControllerSuffix(v93, CurrentStackLocation->Parameters.WMI.ProviderId);
      goto LABEL_137;
    }
    v90 = v89 - 2551880;
    if ( !v90 )
    {
      v92 = CurrentStackLocation->Parameters.Create.SecurityContext;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v7 + 24) + 24LL);
      if ( (v92->DesiredAccess & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x10u);
      goto LABEL_15;
    }
    v91 = v90 - 4;
    if ( v91 && v91 != 4 )
      goto LABEL_239;
    goto LABEL_205;
  }
  v101 = LowPart - 4788299;
  if ( !v101 )
  {
    v109 = CurrentStackLocation->Parameters.Create.SecurityContext;
    Source1 = *(_OWORD *)&v109->DesiredAccess;
    HIDWORD(v109[1].AccessState) = 0;
    if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
    {
      v110 = -((*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1464LL) & 0x10000) != 0);
    }
    else
    {
      if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
      {
        Status = (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1464LL) & 0x10000) != 0 ? 0xC00000BB : 0;
        v20 = ((*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1464LL) & 0x10000) != 0) + 1;
        goto LABEL_257;
      }
      if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE, 0x10uLL) == 16 )
      {
        v118 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1464LL) & 0x800;
      }
      else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
      {
        v118 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1464LL) & 0x900;
      }
      else
      {
        if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE, 0x10uLL) != 16 )
        {
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE, 0x10uLL) != 16
            && RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_SSP_ISOCH_PIPE_FLAGS, 0x10uLL) != 16 )
          {
            goto LABEL_15;
          }
          Status = 0;
          goto LABEL_58;
        }
        v118 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1464LL) & 0xB00;
      }
      v110 = -(v118 == 0);
    }
    Status = v110 & 0xC00000BB;
    goto LABEL_58;
  }
  v102 = v101 - 4;
  if ( !v102 )
  {
LABEL_205:
    CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v7 + 24) + 24LL);
    goto LABEL_15;
  }
  v103 = v102 - 949;
  if ( !v103 )
  {
    a2->AssociatedIrp.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)(*(_QWORD *)(v7 + 24) + 24LL);
    goto LABEL_15;
  }
  v104 = v103 - 4;
  if ( v104 )
  {
    v105 = v104 - 7;
    if ( !v105 )
    {
      *(_QWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 8) = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL);
      goto LABEL_15;
    }
    v106 = v105 - 1016;
    if ( v106 )
    {
      if ( v106 != 4 )
        goto LABEL_239;
      if ( !KeGetCurrentIrql() )
      {
        DeviceBusInfo = HUBPDO_UnregisterPortPLDRCapability(*(_QWORD *)(v7 + 24));
        goto LABEL_137;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v108 = 71;
LABEL_243:
        LOBYTE(v107) = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
          v107,
          5,
          v108,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      }
    }
    else
    {
      if ( !KeGetCurrentIrql() )
      {
        DeviceBusInfo = HUBPDO_RegisterPortPLDRCapability(*(_QWORD *)(v7 + 24));
        goto LABEL_137;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v108 = 70;
        goto LABEL_243;
      }
    }
    Status = -1073741808;
    goto LABEL_58;
  }
LABEL_15:
  ++a2->Tail.Overlay.CurrentStackLocation;
  ++a2->CurrentLocation;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 8), a2);
}
