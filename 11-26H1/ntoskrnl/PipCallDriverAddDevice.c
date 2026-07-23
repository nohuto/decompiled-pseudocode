/*
 * XREFs of PipCallDriverAddDevice @ 0x140970138
 * Callers:
 *     PiProcessAddBootDevices @ 0x1407A7B1C (PiProcessAddBootDevices.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026F250 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     IovUtilMarkStack @ 0x1404E1B6C (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmOpenCommonClassRegKey @ 0x14095FB24 (_CmOpenCommonClassRegKey.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14096EC44 (PipDmgEnforceEnumerationPolicy.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14096EDFC (IopInsertLegacyBusDeviceNode.c)
 *     PnpCallAddDevice @ 0x14096F278 (PnpCallAddDevice.c)
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14096F9D8 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiDmaGuardProcessPreAddDevice @ 0x1409700B4 (PiDmaGuardProcessPreAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140970C4C (PnpCallDriverQueryServiceHelper.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     IopQueryLegacyBusInformation @ 0x1409B2634 (IopQueryLegacyBusInformation.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1409DC0E8 (PiProcessDriversLoadedOnSecureDevice.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     IopBootLog @ 0x140A3AA14 (IopBootLog.c)
 *     PnpUnloadAttachedDriver @ 0x140B2CD98 (PnpUnloadAttachedDriver.c)
 *     PnpGetStableSystemBootTime @ 0x140B4EB80 (PnpGetStableSystemBootTime.c)
 *     IopSafebootDriverLoad @ 0x140B5F86C (IopSafebootDriverLoad.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 *v12; // rsi
  __int64 v13; // rdi
  PVOID v14; // r12
  __int64 v16; // r14
  __int64 *AttachedDeviceReferenceWithTag; // r12
  unsigned __int8 i; // bl
  __int64 *v19; // r15
  __int64 *j; // rsi
  BOOL v21; // r9d
  int v22; // eax
  __int64 v23; // rdx
  int v24; // r9d
  int v25; // r8d
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  int *v30; // rbx
  unsigned int *v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  PVOID *v35; // r14
  void *v36; // r15
  int v37; // eax
  int v38; // eax
  int v39; // r11d
  int v40; // eax
  int v41; // eax
  int v42; // eax
  void *Pool2; // rbx
  int DeviceRegProp; // eax
  int v45; // eax
  PVOID v46; // rsi
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rdx
  const WNF_STATE_NAME *v50; // rbx
  ULONG v51; // esi
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rdx
  ULONG v55; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v56; // [rsp+64h] [rbp-9Ch] BYREF
  char v57; // [rsp+68h] [rbp-98h]
  int v58; // [rsp+6Ch] [rbp-94h] BYREF
  int v59; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v60; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v61; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v62; // [rsp+84h] [rbp-7Ch] BYREF
  int v63; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  int v66; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v71; // [rsp+D0h] [rbp-30h]
  PVOID v72; // [rsp+D8h] [rbp-28h]
  __int64 v73[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v74[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v75; // [rsp+108h] [rbp+8h]
  ACL SourceString[10]; // [rsp+120h] [rbp+20h] BYREF

  v57 = 0;
  Handle = 0LL;
  v58 = 0;
  v61 = 0;
  v4 = 0;
  v60 = 0LL;
  v5 = 0;
  v62 = 0;
  v70 = 0LL;
  v55 = 0;
  v59 = 0;
  v66 = 0;
  memset_0(v73, 0, 0x40uLL);
  v6 = 6LL;
  DestinationString = 0LL;
  v71 = 6LL;
  v56 = 0;
  v67 = 0LL;
  v63 = 0;
  *(_WORD *)&SourceString[0].AclRevision = 0;
  P = 0LL;
  v72 = 0LL;
  Object = 0LL;
  if ( *(_BYTE *)(BugCheckParameter2 + 688) && !*(_BYTE *)(a2 + 4) )
  {
    v8 = -1073741823;
    goto LABEL_20;
  }
  v7 = *(_QWORD *)(BugCheckParameter2 + 48);
  *(_BYTE *)(BugCheckParameter2 + 688) = 0;
  v8 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v7, 16, 0, 131097, 0, (__int64)&v60, 0LL);
  if ( v8 < 0 )
    goto LABEL_19;
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 48LL) & 0x2000000) != 0
    && ((int)PnpGetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               *(_QWORD *)(BugCheckParameter2 + 48),
               1,
               (char *)v60,
               0LL,
               (__int64)&DEVPKEY_Device_DebuggerSafe,
               &v63,
               (__int64)&v61,
               4u,
               (__int64)&v56,
               0) < 0
     || v63 != 7
     || v56 != 4
     || !v61) )
  {
    v25 = 53;
LABEL_90:
    v24 = 0;
    goto LABEL_52;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 660) == -1 )
  {
    if ( PnpQueryProximityNode
      && (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(BugCheckParameter2 + 48),
                1,
                (char *)v60,
                0LL,
                (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                &v63,
                (__int64)&v61,
                4u,
                (__int64)&v56,
                0) >= 0
      && v61 <= 0xFF
      && (int)guard_dispatch_icall_no_overrides(v61, (__int64)&v62) >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 660) = v62;
    }
    v26 = *(_DWORD *)(BugCheckParameter2 + 660);
    if ( v26 == -1 )
    {
      v27 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( !v27 )
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = -2;
        goto LABEL_5;
      }
      v26 = *(_DWORD *)(v27 + 660);
      *(_DWORD *)(BugCheckParameter2 + 660) = v26;
    }
    if ( v26 != -2 )
    {
      v28 = *(_QWORD *)(BugCheckParameter2 + 48);
      v61 = v26;
      PnpSetObjectProperty(PiPnpRtlCtx, v28, 1, 0LL, (__int64)&DEVPKEY_Device_Numa_Node, 7, (__int64)&v61, 4, 0);
    }
  }
LABEL_5:
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(_QWORD *)(BugCheckParameter2 + 48),
                     1,
                     (char *)v60,
                     0LL,
                     (__int64)DEVPKEY_Device_PreventDriverLoad,
                     &v63,
                     (__int64)&v70,
                     8u,
                     (__int64)&v56,
                     0);
  if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
    && (int)PnpGetStableSystemBootTime(&v67) >= 0 )
  {
    if ( ObjectProperty != -1073741789 && v63 == 16 && v56 == 8 && !PnpBootMode && v67 == v70 )
      goto LABEL_73;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_PreventDriverLoad,
      0,
      0LL,
      0,
      0);
  }
  v10 = *(_QWORD *)(BugCheckParameter2 + 48);
  v55 = 78;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v10,
              (__int64)v60,
              9u,
              (__int64)&v59,
              (__int64)SourceString,
              (__int64)&v55,
              0) >= 0
    && v55
    && v59 == 1 )
  {
    RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
    if ( !InitSafeBootMode )
    {
LABEL_11:
      CmOpenCommonClassRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)SourceString, 32, 0, 131097, 0, (__int64)&Handle, 0LL);
      goto LABEL_12;
    }
    if ( (unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
    {
      v4 = v57;
      goto LABEL_11;
    }
    v55 = 256;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        *(_QWORD *)(BugCheckParameter2 + 48),
                        (__int64)v60,
                        1u,
                        (__int64)&v59,
                        (__int64)Pool2,
                        (__int64)&v55,
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
  v55 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v11,
              (__int64)v60,
              0xBu,
              (__int64)&v59,
              (__int64)&v58,
              (__int64)&v55,
              0) < 0
    || v59 != 4
    || v55 != 4 )
  {
    v58 = 0;
  }
  v73[0] = BugCheckParameter2;
  v8 = 0;
  v73[1] = a2;
  v55 = 512;
  P = (PVOID)ExAllocatePool2(0x100uLL);
  if ( !P )
  {
LABEL_16:
    v8 = -1073741670;
    goto LABEL_17;
  }
  if ( (v58 & 0x80000) != 0 )
  {
    if ( Handle )
    {
      v45 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&v55,
              0,
              (unsigned int)DEVPKEY_DeviceClass_ConfigFilters,
              (__int64)SourceString,
              (__int64)Handle,
              1,
              0,
              v4,
              (__int64)v73);
      v8 = v45;
      if ( v45 != -1073741772 && v45 != -1073741275 && v45 < 0 )
        goto LABEL_17;
      while ( 1 )
      {
        v46 = P;
        v47 = PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)SourceString,
                2,
                (char *)Handle,
                0LL,
                (__int64)DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                &v66,
                (__int64)P,
                v55,
                (__int64)&v56,
                0);
        if ( v47 != -1073741789 )
          break;
        if ( v56 <= v55 )
        {
          v8 = -1073741823;
          goto LABEL_161;
        }
        ExFreePoolWithTag(v46, 0);
        v55 = v56;
        P = (PVOID)ExAllocatePool2(0x100uLL);
        if ( !P )
          goto LABEL_16;
      }
      v8 = v47;
      if ( v47 < 0 )
      {
        if ( v47 == -1073741772 || v47 == -1073741275 )
          v8 = 0;
LABEL_161:
        if ( v8 < 0 )
          goto LABEL_17;
        goto LABEL_162;
      }
      if ( v66 == 4099 && (v56 & 7) == 0 && v56 )
      {
        v50 = (const WNF_STATE_NAME *)P;
        v51 = v56 >> 3;
        do
        {
          ZwUpdateWnfStateData(v50++, 0LL, 0, 0LL, 0LL, 0, 0);
          --v51;
        }
        while ( v51 );
        v25 = 56;
        goto LABEL_90;
      }
    }
LABEL_162:
    if ( !v74[0] )
    {
      v48 = *(_QWORD *)(BugCheckParameter2 + 48);
      v56 = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v48,
                  (__int64)v60,
                  0xBu,
                  (__int64)&v59,
                  (__int64)&v58,
                  (__int64)&v56,
                  0) >= 0
        && v59 == 4
        && v56 == 4
        && (v58 & 0x80000) != 0 )
      {
        v49 = *(_QWORD *)(BugCheckParameter2 + 48);
        v58 &= ~0x80000u;
        CmSetDeviceRegProp(PiPnpRtlCtx, v49, (_DWORD)v60, 11, 4, (__int64)&v58, 4, 0);
      }
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x4000000) == 0
    && ((v42 = PnpCallDriverQueryServiceHelper(
                 (unsigned int)&P,
                 (unsigned int)&v55,
                 19,
                 (unsigned int)DEVPKEY_Device_CompoundLowerFilters,
                 *(_QWORD *)(BugCheckParameter2 + 48),
                 (__int64)v60,
                 0,
                 1,
                 v4,
                 (__int64)v73),
         v8 = v42,
         v42 == -1073741275)
     || v42 == -1073741772) )
  {
    PipSetDevNodeFlags(BugCheckParameter2, 0x4000000LL);
  }
  else if ( v8 < 0 )
  {
    goto LABEL_17;
  }
  if ( Handle && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
  {
    v40 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v55,
            19,
            (unsigned int)&DEVPKEY_DeviceClass_CompoundLowerFilters,
            (__int64)SourceString,
            (__int64)Handle,
            1,
            2,
            v4,
            (__int64)v73);
    v8 = v40;
    if ( v40 == -1073741275 || v40 == -1073741772 )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x8000000LL);
    }
    else if ( v40 < 0 )
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
    v41 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v55,
            5,
            0,
            *(_QWORD *)(BugCheckParameter2 + 48),
            (__int64)v60,
            0,
            3,
            v4,
            (__int64)v73);
    v8 = v41;
    if ( v41 == -1073741772 || v41 == -1073741275 )
    {
      v8 = -1073741772;
      PipSetDevNodeFlags(BugCheckParameter2, 0x10000000LL);
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
      PipClearDevNodeProblem(BugCheckParameter2);
      v5 = 1;
      goto LABEL_38;
    }
LABEL_73:
    v8 = -1073741823;
    goto LABEL_19;
  }
  if ( *(_QWORD *)(v75 + 8) )
  {
    PipSetDevNodeProblem(BugCheckParameter2, 19LL, 3221225858LL);
    goto LABEL_73;
  }
LABEL_38:
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x20000000) == 0 )
  {
    v37 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v55,
            18,
            (unsigned int)&DEVPKEY_Device_CompoundUpperFilters,
            *(_QWORD *)(BugCheckParameter2 + 48),
            (__int64)v60,
            0,
            4,
            v4,
            (__int64)v73);
    v8 = v37;
    if ( v37 == -1073741772 || v37 == -1073741275 )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x20000000LL);
    }
    else if ( v37 < 0 )
    {
      goto LABEL_19;
    }
  }
  if ( Handle && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
  {
    v38 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v55,
            18,
            (unsigned int)&DEVPKEY_DeviceClass_CompoundUpperFilters,
            (__int64)SourceString,
            (__int64)Handle,
            1,
            5,
            v4,
            (__int64)v73);
    v8 = v38;
    if ( v38 == -1073741772 || v38 == -1073741275 )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x40000000LL);
    }
    else if ( v38 < 0 )
    {
      goto LABEL_19;
    }
  }
  v8 = PiDmaGuardProcessPreAddDevice(v73, (__int64)v60);
  if ( v8 >= 0 )
  {
    v16 = 0LL;
    AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                       *(_QWORD **)(BugCheckParameter2 + 32),
                                       0x65706E50u);
    v72 = AttachedDeviceReferenceWithTag;
    for ( i = 0; i < 6u; ++i )
    {
      if ( i == 3 )
      {
        Object = IoGetAttachedDeviceReferenceWithTag(*(_QWORD **)(BugCheckParameter2 + 32), 0x65706E50u);
        if ( v5 )
        {
          if ( !v75 )
            PipSetDevNodeState(BugCheckParameter2, 773);
        }
      }
      v19 = (__int64 *)v74[i];
      for ( j = v19; j; j = (__int64 *)j[1] )
      {
        v29 = PnpCallAddDevice(BugCheckParameter2, *j, *(_QWORD *)(*(_QWORD *)(*j + 48) + 8LL), i);
        *(_DWORD *)(*j + 16) |= 0x400u;
        if ( v29 >= 0 )
        {
          if ( i == 3 )
            v16 = *((_QWORD *)Object + 3);
          PipSetDevNodeState(BugCheckParameter2, 773);
        }
        else if ( i == 3 )
        {
          IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), AttachedDeviceReferenceWithTag[3], v16, 0);
          v25 = 31;
          *(_DWORD *)(BugCheckParameter2 + 392) = v39;
          v24 = v39;
          goto LABEL_52;
        }
      }
      if ( !i )
      {
        if ( v19 )
        {
          v52 = *(_QWORD *)(BugCheckParameter2 + 48);
          v56 = 4;
          v53 = CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v52,
                  (__int64)v60,
                  0xBu,
                  (__int64)&v59,
                  (__int64)&v58,
                  (__int64)&v56,
                  0);
          if ( v53 >= 0 && v59 == 4 && v56 == 4 && (v58 & 0x80000) != 0 )
          {
            v54 = *(_QWORD *)(BugCheckParameter2 + 48);
            v58 &= ~0x80000u;
            CmSetDeviceRegProp(PiPnpRtlCtx, v54, (_DWORD)v60, 11, 4, (__int64)&v58, 4, 0);
          }
        }
      }
    }
    v21 = !v16 || v5;
    IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), AttachedDeviceReferenceWithTag[3], v16, v21);
    v22 = PipChangeDeviceObjectFromRegistryProperties(
            *(_QWORD *)(BugCheckParameter2 + 32),
            (int)v60,
            SourceString,
            (__int64)Handle,
            v5);
    if ( v22 < 0 )
    {
      v24 = v22;
      v25 = 50;
LABEL_52:
      PnpRequestDeviceRemoval(BugCheckParameter2, 0, v25, v24);
      v8 = -1073741106;
      goto LABEL_19;
    }
    v30 = (int *)(BugCheckParameter2 + 448);
    v31 = (unsigned int *)(BugCheckParameter2 + 452);
    if ( (int)IopQueryLegacyBusInformation(
                *(_QWORD *)(BugCheckParameter2 + 32),
                v23,
                BugCheckParameter2 + 448,
                BugCheckParameter2 + 452) >= 0 )
    {
      IopInsertLegacyBusDeviceNode(BugCheckParameter2, *v30, *v31);
    }
    else
    {
      *v30 = -1;
      *v31 = -16;
    }
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v32, *(_QWORD *)(BugCheckParameter2 + 48), 23LL);
    if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) != 0 )
    {
      v8 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2);
      if ( v8 < 0 )
        goto LABEL_19;
    }
    if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
    {
      v8 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2, v33, v34);
      goto LABEL_19;
    }
    goto LABEL_18;
  }
LABEL_19:
  v6 = 6LL;
LABEL_20:
  v12 = v74;
  do
  {
    v13 = *v12;
    if ( *v12 )
    {
      do
      {
        v35 = (PVOID *)v13;
        v36 = (void *)v13;
        v13 = *(_QWORD *)(v13 + 8);
        if ( PnpUnusedBootDriversCleanedUp )
          PnpUnloadAttachedDriver(*v35);
        ObfDereferenceObject(*v35);
        ExFreePoolWithTag(v36, 0);
      }
      while ( v13 );
      v6 = v71;
    }
    ++v12;
    v71 = --v6;
  }
  while ( v6 );
  v14 = v72;
  if ( v60 )
    ZwClose(v60);
  if ( Handle )
    ZwClose(Handle);
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x65706E50u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}
