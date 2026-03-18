/*
 * XREFs of PipCallDriverAddDevice @ 0x1409156CC
 * Callers:
 *     PiProcessAddBootDevices @ 0x1407A4FDC (PiProcessAddBootDevices.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026FCE0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     IovUtilMarkStack @ 0x1404E87AC (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _CmSetDeviceRegProp @ 0x14090A0E8 (_CmSetDeviceRegProp.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     IopQueryLegacyBusInformation @ 0x140910554 (IopQueryLegacyBusInformation.c)
 *     PnpCallAddDevice @ 0x14091480C (PnpCallAddDevice.c)
 *     PnpRequestDeviceRemoval @ 0x14091493C (PnpRequestDeviceRemoval.c)
 *     PipClearDevNodeProblem @ 0x140914C5C (PipClearDevNodeProblem.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x140914F6C (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiDmaGuardProcessPreAddDevice @ 0x140915648 (PiDmaGuardProcessPreAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1409161E0 (PnpCallDriverQueryServiceHelper.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140996B50 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     _CmOpenCommonClassRegKey @ 0x14099F0C4 (_CmOpenCommonClassRegKey.c)
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 *     IopBootLog @ 0x140A27974 (IopBootLog.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140AA8BB8 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140B13278 (PipDmgEnforceEnumerationPolicy.c)
 *     PnpUnloadAttachedDriver @ 0x140B2AD18 (PnpUnloadAttachedDriver.c)
 *     PnpGetStableSystemBootTime @ 0x140B4CDF0 (PnpGetStableSystemBootTime.c)
 *     IopSafebootDriverLoad @ 0x140B5C94C (IopSafebootDriverLoad.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140B5FEFC (IopInsertLegacyBusDeviceNode.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipCallDriverAddDevice(__int64 BugCheckParameter2, __int64 a2)
{
  char v4; // r12
  char v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ebx
  int ObjectProperty; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 *v13; // rsi
  __int64 v14; // rdi
  PVOID v15; // r12
  __int64 v17; // r14
  __int64 *AttachedDeviceReferenceWithTag; // r12
  unsigned __int8 i; // bl
  __int64 *v20; // r15
  __int64 *j; // rsi
  BOOL v22; // r9d
  int v23; // eax
  __int64 v24; // rdx
  int v25; // r9d
  int v26; // r8d
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  _DWORD *v31; // rbx
  _DWORD *v32; // rsi
  __int64 v33; // rcx
  PVOID *v34; // r14
  void *v35; // r15
  int v36; // eax
  int v37; // eax
  int v38; // r11d
  int v39; // eax
  int v40; // eax
  int v41; // eax
  void *Pool2; // rbx
  int DeviceRegProp; // eax
  int v44; // eax
  PVOID v45; // rsi
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rdx
  char *v49; // rbx
  unsigned int v50; // esi
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v55; // [rsp+64h] [rbp-9Ch] BYREF
  char v56; // [rsp+68h] [rbp-98h]
  int v57; // [rsp+6Ch] [rbp-94h] BYREF
  int v58; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v59; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v60; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v61; // [rsp+84h] [rbp-7Ch] BYREF
  int v62; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  int v65; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-30h]
  PVOID v71; // [rsp+D8h] [rbp-28h]
  __int64 v72[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v73[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v74; // [rsp+108h] [rbp+8h]
  ACL SourceString[10]; // [rsp+120h] [rbp+20h] BYREF

  v56 = 0;
  Handle = 0LL;
  v57 = 0;
  v60 = 0;
  v4 = 0;
  v59 = 0LL;
  v5 = 0;
  v61 = 0;
  v69 = 0LL;
  v54 = 0;
  v58 = 0;
  v65 = 0;
  memset_0(v72, 0, 0x40uLL);
  v6 = 6LL;
  DestinationString = 0LL;
  v70 = 6LL;
  v55 = 0;
  v66 = 0LL;
  v62 = 0;
  *(_WORD *)&SourceString[0].AclRevision = 0;
  P = 0LL;
  v71 = 0LL;
  Object = 0LL;
  if ( *(_BYTE *)(BugCheckParameter2 + 688) && !*(_BYTE *)(a2 + 4) )
  {
    v8 = -1073741823;
    goto LABEL_20;
  }
  v7 = *(_QWORD *)(BugCheckParameter2 + 48);
  *(_BYTE *)(BugCheckParameter2 + 688) = 0;
  v8 = CmOpenDeviceRegKey(PiPnpRtlCtx, v7, 16, 0, 131097, 0, (__int64)&v59, 0LL);
  if ( v8 < 0 )
    goto LABEL_19;
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 48LL) & 0x2000000) != 0
    && ((int)PnpGetObjectProperty(
               PiPnpRtlCtx,
               *(_QWORD *)(BugCheckParameter2 + 48),
               1,
               (_DWORD)v59,
               0LL,
               (__int64)&DEVPKEY_Device_DebuggerSafe,
               (__int64)&v62,
               (__int64)&v60,
               4,
               (__int64)&v55,
               0) < 0
     || v62 != 7
     || v55 != 4
     || !v60) )
  {
    v26 = 53;
LABEL_90:
    v25 = 0;
    goto LABEL_52;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 660) == -1 )
  {
    if ( PnpQueryProximityNode
      && (int)PnpGetObjectProperty(
                PiPnpRtlCtx,
                *(_QWORD *)(BugCheckParameter2 + 48),
                1,
                (_DWORD)v59,
                0LL,
                (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                (__int64)&v62,
                (__int64)&v60,
                4,
                (__int64)&v55,
                0) >= 0
      && v60 <= 0xFF
      && (int)guard_dispatch_icall_no_overrides(v60, (__int64)&v61) >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 660) = v61;
    }
    v27 = *(_DWORD *)(BugCheckParameter2 + 660);
    if ( v27 == -1 )
    {
      v28 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( !v28 )
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = -2;
        goto LABEL_5;
      }
      v27 = *(_DWORD *)(v28 + 660);
      *(_DWORD *)(BugCheckParameter2 + 660) = v27;
    }
    if ( v27 != -2 )
    {
      v29 = *(_QWORD *)(BugCheckParameter2 + 48);
      v60 = v27;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        v29,
        1,
        (_DWORD)v59,
        0LL,
        (__int64)&DEVPKEY_Device_Numa_Node,
        7,
        (__int64)&v60,
        4,
        0);
    }
  }
LABEL_5:
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     *(_QWORD *)(BugCheckParameter2 + 48),
                     1,
                     (_DWORD)v59,
                     0LL,
                     (__int64)DEVPKEY_Device_PreventDriverLoad,
                     (__int64)&v62,
                     (__int64)&v69,
                     8,
                     (__int64)&v55,
                     0);
  if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
    && (int)PnpGetStableSystemBootTime(&v66) >= 0 )
  {
    if ( ObjectProperty != -1073741789 && v62 == 16 && v55 == 8 && !PnpBootMode && v66 == v69 )
      goto LABEL_73;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (_DWORD)v59,
      0LL,
      (__int64)DEVPKEY_Device_PreventDriverLoad,
      0,
      0LL,
      0,
      0);
  }
  v10 = *(_QWORD *)(BugCheckParameter2 + 48);
  v54 = 78;
  if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v10, (_DWORD)v59, 9, (__int64)&v58, (__int64)SourceString, (__int64)&v54, 0) >= 0
    && v54
    && v58 == 1 )
  {
    RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
    if ( !(_DWORD)InitSafeBootMode )
    {
LABEL_11:
      CmOpenCommonClassRegKey(PiPnpRtlCtx, (unsigned int)SourceString, 32, 0, 131097, 0, (__int64)&Handle, 0LL);
      goto LABEL_12;
    }
    if ( (unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
    {
      v4 = v56;
      goto LABEL_11;
    }
    v54 = 256;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      DeviceRegProp = CmGetDeviceRegProp(
                        PiPnpRtlCtx,
                        *(_QWORD *)(BugCheckParameter2 + 48),
                        (_DWORD)v59,
                        1,
                        (__int64)&v58,
                        (__int64)Pool2,
                        (__int64)&v54,
                        0);
      if ( DeviceRegProp == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
      }
      else if ( DeviceRegProp >= 0 )
      {
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
        IopBootLog(&DestinationString);
        goto LABEL_144;
      }
    }
    IopBootLog(&DestinationString);
    if ( !Pool2 )
      goto LABEL_73;
LABEL_144:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_73;
  }
LABEL_12:
  v11 = *(_QWORD *)(BugCheckParameter2 + 48);
  v54 = 4;
  if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v11, (_DWORD)v59, 11, (__int64)&v58, (__int64)&v57, (__int64)&v54, 0) < 0
    || v58 != 4
    || v54 != 4 )
  {
    v57 = 0;
  }
  v72[0] = BugCheckParameter2;
  v8 = 0;
  v72[1] = a2;
  v54 = 512;
  P = (PVOID)ExAllocatePool2(0x100uLL);
  if ( !P )
  {
LABEL_16:
    v8 = -1073741670;
    goto LABEL_17;
  }
  if ( (v57 & 0x80000) != 0 )
  {
    if ( Handle )
    {
      v44 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&v54,
              0,
              (unsigned int)DEVPKEY_DeviceClass_ConfigFilters,
              (__int64)SourceString,
              (__int64)Handle,
              1,
              0,
              v4,
              (__int64)v72);
      v8 = v44;
      if ( v44 != -1073741772 && v44 != -1073741275 && v44 < 0 )
        goto LABEL_17;
      while ( 1 )
      {
        v45 = P;
        v46 = PnpGetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)SourceString,
                2,
                (_DWORD)Handle,
                0LL,
                (__int64)DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                (__int64)&v65,
                (__int64)P,
                v54,
                (__int64)&v55,
                0);
        if ( v46 != -1073741789 )
          break;
        if ( v55 <= v54 )
        {
          v8 = -1073741823;
          goto LABEL_161;
        }
        ExFreePoolWithTag(v45, 0);
        v54 = v55;
        P = (PVOID)ExAllocatePool2(0x100uLL);
        if ( !P )
          goto LABEL_16;
      }
      v8 = v46;
      if ( v46 < 0 )
      {
        if ( v46 == -1073741772 || v46 == -1073741275 )
          v8 = 0;
LABEL_161:
        if ( v8 < 0 )
          goto LABEL_17;
        goto LABEL_162;
      }
      if ( v65 == 4099 && (v55 & 7) == 0 && v55 )
      {
        v49 = (char *)P;
        v50 = v55 >> 3;
        do
        {
          ZwUpdateWnfStateData((__int64)v49, 0LL);
          v49 += 8;
          --v50;
        }
        while ( v50 );
        v26 = 56;
        goto LABEL_90;
      }
    }
LABEL_162:
    if ( !v73[0] )
    {
      v47 = *(_QWORD *)(BugCheckParameter2 + 48);
      v55 = 4;
      if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v47, (_DWORD)v59, 11, (__int64)&v58, (__int64)&v57, (__int64)&v55, 0) >= 0
        && v58 == 4
        && v55 == 4
        && (v57 & 0x80000) != 0 )
      {
        v48 = *(_QWORD *)(BugCheckParameter2 + 48);
        v57 &= ~0x80000u;
        CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v48, (__int64)v59, 0xBu, 4, (__int64)&v57, 4, 0);
      }
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x4000000) == 0
    && ((v41 = PnpCallDriverQueryServiceHelper(
                 (unsigned int)&P,
                 (unsigned int)&v54,
                 19,
                 (unsigned int)DEVPKEY_Device_CompoundLowerFilters,
                 *(_QWORD *)(BugCheckParameter2 + 48),
                 (__int64)v59,
                 0,
                 1,
                 v4,
                 (__int64)v72),
         v8 = v41,
         v41 == -1073741275)
     || v41 == -1073741772) )
  {
    PipSetDevNodeFlags(BugCheckParameter2, 0x4000000u);
  }
  else if ( v8 < 0 )
  {
    goto LABEL_17;
  }
  if ( Handle && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
  {
    v39 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v54,
            19,
            (unsigned int)&DEVPKEY_DeviceClass_CompoundLowerFilters,
            (__int64)SourceString,
            (__int64)Handle,
            1,
            2,
            v4,
            (__int64)v72);
    v8 = v39;
    if ( v39 == -1073741275 || v39 == -1073741772 )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x8000000u);
    }
    else if ( v39 < 0 )
    {
      goto LABEL_17;
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x10000000) != 0 )
  {
    v8 = -1073741772;
  }
  else
  {
    v40 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v54,
            5,
            0,
            *(_QWORD *)(BugCheckParameter2 + 48),
            (__int64)v59,
            0,
            3,
            v4,
            (__int64)v72);
    v8 = v40;
    if ( v40 == -1073741772 || v40 == -1073741275 )
    {
      v8 = -1073741772;
      PipSetDevNodeFlags(BugCheckParameter2, 0x10000000u);
    }
  }
LABEL_17:
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) != 0 )
  {
LABEL_18:
    v8 = 0;
    goto LABEL_19;
  }
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_19;
    if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100) != 0 )
    {
      PipClearDevNodeProblem(BugCheckParameter2, v12);
      v5 = 1;
      goto LABEL_38;
    }
LABEL_73:
    v8 = -1073741823;
    goto LABEL_19;
  }
  if ( *(_QWORD *)(v74 + 8) )
  {
    PipSetDevNodeProblem(BugCheckParameter2, 19LL, 3221225858LL);
    goto LABEL_73;
  }
LABEL_38:
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x20000000) == 0 )
  {
    v36 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v54,
            18,
            (unsigned int)&DEVPKEY_Device_CompoundUpperFilters,
            *(_QWORD *)(BugCheckParameter2 + 48),
            (__int64)v59,
            0,
            4,
            v4,
            (__int64)v72);
    v8 = v36;
    if ( v36 == -1073741772 || v36 == -1073741275 )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x20000000u);
    }
    else if ( v36 < 0 )
    {
      goto LABEL_19;
    }
  }
  if ( Handle && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
  {
    v37 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v54,
            18,
            (unsigned int)&DEVPKEY_DeviceClass_CompoundUpperFilters,
            (__int64)SourceString,
            (__int64)Handle,
            1,
            5,
            v4,
            (__int64)v72);
    v8 = v37;
    if ( v37 == -1073741772 || v37 == -1073741275 )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x40000000u);
    }
    else if ( v37 < 0 )
    {
      goto LABEL_19;
    }
  }
  v8 = PiDmaGuardProcessPreAddDevice(v72, (int)v59);
  if ( v8 >= 0 )
  {
    v17 = 0LL;
    AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                       *(_QWORD **)(BugCheckParameter2 + 32),
                                       0x65706E50u);
    v71 = AttachedDeviceReferenceWithTag;
    for ( i = 0; i < 6u; ++i )
    {
      if ( i == 3 )
      {
        Object = IoGetAttachedDeviceReferenceWithTag(*(_QWORD **)(BugCheckParameter2 + 32), 0x65706E50u);
        if ( v5 )
        {
          if ( !v74 )
            PipSetDevNodeState(BugCheckParameter2, 773);
        }
      }
      v20 = (__int64 *)v73[i];
      for ( j = v20; j; j = (__int64 *)j[1] )
      {
        v30 = PnpCallAddDevice(BugCheckParameter2, *j, *(_QWORD *)(*(_QWORD *)(*j + 48) + 8LL), i);
        *(_DWORD *)(*j + 16) |= 0x400u;
        if ( v30 >= 0 )
        {
          if ( i == 3 )
            v17 = *((_QWORD *)Object + 3);
          PipSetDevNodeState(BugCheckParameter2, 773);
        }
        else if ( i == 3 )
        {
          IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), AttachedDeviceReferenceWithTag[3], v17, 0);
          v26 = 31;
          *(_DWORD *)(BugCheckParameter2 + 392) = v38;
          v25 = v38;
          goto LABEL_52;
        }
      }
      if ( !i )
      {
        if ( v20 )
        {
          v51 = *(_QWORD *)(BugCheckParameter2 + 48);
          v55 = 4;
          v52 = CmGetDeviceRegProp(PiPnpRtlCtx, v51, (_DWORD)v59, 11, (__int64)&v58, (__int64)&v57, (__int64)&v55, 0);
          if ( v52 >= 0 && v58 == 4 && v55 == 4 && (v57 & 0x80000) != 0 )
          {
            v53 = *(_QWORD *)(BugCheckParameter2 + 48);
            v57 &= ~0x80000u;
            CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v53, (__int64)v59, 0xBu, 4, (__int64)&v57, 4, 0);
          }
        }
      }
    }
    v22 = !v17 || v5;
    IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), AttachedDeviceReferenceWithTag[3], v17, v22);
    v23 = PipChangeDeviceObjectFromRegistryProperties(
            *(_QWORD *)(BugCheckParameter2 + 32),
            (int)v59,
            SourceString,
            (__int64)Handle,
            v5);
    if ( v23 < 0 )
    {
      v25 = v23;
      v26 = 50;
LABEL_52:
      PnpRequestDeviceRemoval(BugCheckParameter2, 0, v26, v25);
      v8 = -1073741106;
      goto LABEL_19;
    }
    v31 = (_DWORD *)(BugCheckParameter2 + 448);
    v32 = (_DWORD *)(BugCheckParameter2 + 452);
    if ( (int)IopQueryLegacyBusInformation(
                *(_QWORD **)(BugCheckParameter2 + 32),
                v24,
                (_DWORD *)(BugCheckParameter2 + 448),
                (_DWORD *)(BugCheckParameter2 + 452)) >= 0 )
    {
      IopInsertLegacyBusDeviceNode(BugCheckParameter2, (unsigned int)*v31, (unsigned int)*v32);
    }
    else
    {
      *v31 = -1;
      *v32 = -16;
    }
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v33, *(_QWORD *)(BugCheckParameter2 + 48), 23);
    if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) != 0 )
    {
      v8 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2);
      if ( v8 < 0 )
        goto LABEL_19;
    }
    if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
    {
      v8 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2);
      goto LABEL_19;
    }
    goto LABEL_18;
  }
LABEL_19:
  v6 = 6LL;
LABEL_20:
  v13 = v73;
  do
  {
    v14 = *v13;
    if ( *v13 )
    {
      do
      {
        v34 = (PVOID *)v14;
        v35 = (void *)v14;
        v14 = *(_QWORD *)(v14 + 8);
        if ( PnpUnusedBootDriversCleanedUp )
          PnpUnloadAttachedDriver(*v34);
        ObfDereferenceObject(*v34);
        ExFreePoolWithTag(v35, 0);
      }
      while ( v14 );
      v6 = v70;
    }
    ++v13;
    v70 = --v6;
  }
  while ( v6 );
  v15 = v71;
  if ( v59 )
    ZwClose(v59);
  if ( Handle )
    ZwClose(Handle);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x65706E50u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}
