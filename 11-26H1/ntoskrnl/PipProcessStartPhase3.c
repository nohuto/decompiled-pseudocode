/*
 * XREFs of PipProcessStartPhase3 @ 0x140908998
 * Callers:
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x14049F904 (McTemplateK0dz_EtwWriteTransfer.c)
 *     SepAuditingForSubCategory @ 0x1404C210C (SepAuditingForSubCategory.c)
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x1404E3140 (PnpSetDeviceInstanceStartedEvent.c)
 *     PpvUtilTestStartedPdoStack @ 0x1404F5C14 (PpvUtilTestStartedPdoStack.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140813628 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140907730 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PiAuditDeviceStart @ 0x140907780 (PiAuditDeviceStart.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140908B88 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiUpdateDevicePanel @ 0x140908BF0 (PiUpdateDevicePanel.c)
 *     PnpSetPlugPlayEvent @ 0x140908CAC (PnpSetPlugPlayEvent.c)
 *     PiCreateDriverSwDevices @ 0x14090988C (PiCreateDriverSwDevices.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140909994 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmSetDeviceRegProp @ 0x14090A0E8 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14090A260 (PnpDeviceObjectToDeviceInstance.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     PiProcessQueryDeviceState @ 0x14090E340 (PiProcessQueryDeviceState.c)
 *     PnpQueryID @ 0x14090F2E8 (PnpQueryID.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     PnpCheckDeviceIdsChanged @ 0x140982820 (PnpCheckDeviceIdsChanged.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 *     PnpGenerateDeviceIdsHash @ 0x140AA8798 (PnpGenerateDeviceIdsHash.c)
 *     PpDevCfgProcessDevice @ 0x140B4491C (PpDevCfgProcessDevice.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r12
  _DWORD *v8; // rdi
  int DeviceState; // eax
  char v10; // al
  PVOID v11; // rcx
  PACCESS_TOKEN PrimaryToken; // r9
  PVOID v14; // rdi
  PVOID v15; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v17; // r15
  __int64 v18; // rdx
  bool v19; // si
  unsigned int v20; // r13d
  int v21; // eax
  struct _KTHREAD *v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-59h]
  int v25; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-19h] BYREF
  int v28; // [rsp+64h] [rbp-15h] BYREF
  int v29; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v30; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID v31; // [rsp+70h] [rbp-9h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-1h] BYREF
  int v33; // [rsp+E8h] [rbp+6Fh]
  PVOID v34; // [rsp+F0h] [rbp+77h] BYREF
  PVOID P; // [rsp+F8h] [rbp+7Fh] BYREF

  v33 = a2;
  v3 = a2;
  Handle = 0LL;
  v31 = 0LL;
  if ( (byte_140EF3DCB & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      3,
      *(const wchar_t **)(a1 + 48));
  v5 = PiPnpRtlBeginOperation(&v31, a2);
  if ( v5 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = (_DWORD *)(a1 + 396);
    if ( (*(_DWORD *)(a1 + 396) & 0x20) == 0 )
    {
      v34 = 0LL;
      v27 = 0;
      P = 0LL;
      v30 = 0;
      *(_OWORD *)&SubjectContext.ClientToken = 0LL;
      if ( (int)PnpDeviceObjectToDeviceInstance(v7, &Handle, 131097LL) >= 0 )
      {
        PnpQueryID(a1, 1LL, &P, &v30);
        PnpQueryID(a1, 2LL, &v34, &v27);
        v14 = v34;
        v15 = P;
        PnpGenerateDeviceIdsHash(P, v34, a1 + 684);
        if ( v15 || v14 )
        {
          v25 = 0;
          v28 = 0;
          CurrentThread = KeGetCurrentThread();
          v17 = 0;
          LOBYTE(v34) = 0;
          LOBYTE(P) = 0;
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
          v18 = *(_QWORD *)(a1 + 48);
          v29 = 4;
          if ( (int)CmGetDeviceRegProp(
                      PiPnpRtlCtx,
                      v18,
                      (_DWORD)Handle,
                      11,
                      (__int64)&v28,
                      (__int64)&v25,
                      (__int64)&v29,
                      0) >= 0
            && v28 == 4
            && v29 == 4 )
          {
            v19 = (v25 & 0x21) == 32;
          }
          else
          {
            v25 = 0;
            v19 = 1;
          }
          v20 = v30;
          if ( (v25 & 0x400) == 0 )
          {
            v21 = 0;
            if ( !v15
              || (LOBYTE(v24) = 1,
                  v21 = PnpCheckDeviceIdsChanged(a1, Handle, v15, v30, v24, &v34),
                  (v17 = (char)v34) == 0) )
            {
              if ( v14 )
              {
                LOBYTE(v24) = 0;
                v21 = PnpCheckDeviceIdsChanged(a1, Handle, v14, v27, v24, &v34);
                v17 = (char)v34;
              }
            }
            if ( v21 >= 0 && v17 )
            {
              v25 |= 0x400u;
              v17 = 1;
              v19 = 1;
            }
            else
            {
              v17 = (char)P;
            }
          }
          if ( v15 )
          {
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 2, 7, (__int64)v15, v20, 0);
            ExFreePoolWithTag(v15, 0);
          }
          if ( v14 )
          {
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 3, 7, (__int64)v14, v27, 0);
            ExFreePoolWithTag(v14, 0);
          }
          if ( v17 )
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 11, 4, (__int64)&v25, 4, 0);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          if ( v19 )
            PpDevCfgProcessDevice(a1, Handle, 0LL);
        }
        PnpSetObjectProperty(
          PiPnpRtlCtx,
          *(_QWORD *)(a1 + 48),
          1,
          (_DWORD)Handle,
          0LL,
          (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
          7,
          (__int64)&PnpCurrentHardwareConfigurationIndex,
          4,
          0);
        RtlInitUnicodeString((PUNICODE_STRING)&SubjectContext, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
        RtlGUIDFromString((PCUNICODE_STRING)&SubjectContext, (GUID *)(a1 + 664));
        PipSetDevNodeFlags(a1, 32LL);
        v22 = KeGetCurrentThread();
        --v22->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        PiUpdateDevicePanel(a1, Handle);
        ZwClose(Handle);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v23, *(_QWORD *)(a1 + 48), 1LL);
        PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, *(_QWORD *)(a1 + 32));
        v3 = v33;
        v8 = (_DWORD *)(a1 + 396);
      }
    }
    if ( (*v8 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
    {
      v5 = -1073741823;
    }
    else
    {
      if ( v3 )
        PipSetDevNodeFlags(a1, 8LL);
      PnpQueryAndSaveDeviceNodeCapabilities(a1);
      DeviceState = PiProcessQueryDeviceState(v7);
      *(_DWORD *)(a1 + 704) |= 0x20000u;
      v5 = DeviceState;
      PiUpdateDevicePanel(a1, 0LL);
      PnpSetPlugPlayEvent(&GUID_DEVICE_ARRIVAL, *(_QWORD *)(a1 + 32));
      PnpSetDeviceInstanceStartedEvent(a1);
      if ( v5 >= 0 )
      {
        PpvUtilTestStartedPdoStack();
        PipSetDevNodeState(a1, 778);
        PnpStartedDeviceNodeDependencyCheck(a1);
        PiCreateDriverSwDevices(a1);
        v10 = SepAuditingForSubCategory(138, 1);
        LOBYTE(v34) = v10;
        if ( *(_DWORD *)&SepRmCapTableLock.WaitBlockFill11[80] )
        {
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContext(&SubjectContext);
          PrimaryToken = SubjectContext.PrimaryToken;
          if ( SubjectContext.ClientToken )
            PrimaryToken = SubjectContext.ClientToken;
          SepAdtIncorporatePerUserPolicy(0x26u, 1, 0, (__int64)PrimaryToken, &v34);
          SeReleaseSubjectContext(&SubjectContext);
          v10 = (char)v34;
        }
        if ( v10 )
          PiAuditDeviceStart(a1 + 40);
        v5 = 0;
      }
    }
  }
  v11 = v31;
  if ( v31 )
    PiPnpRtlEndOperation(v31);
  if ( (byte_140EF3DCB & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      (__int64)v11,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      v6,
      3,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)v5;
}
