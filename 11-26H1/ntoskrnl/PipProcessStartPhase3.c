/*
 * XREFs of PipProcessStartPhase3 @ 0x1409AB9E8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x140499454 (McTemplateK0dz_EtwWriteTransfer.c)
 *     SepAuditingForSubCategory @ 0x1404BB95C (SepAuditingForSubCategory.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x1404DC6D4 (PnpSetDeviceInstanceStartedEvent.c)
 *     PpvUtilTestStartedPdoStack @ 0x1404EF1D4 (PpvUtilTestStartedPdoStack.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140819488 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PnpCheckDeviceIdsChanged @ 0x140944830 (PnpCheckDeviceIdsChanged.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1409ABBD8 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiUpdateDevicePanel @ 0x1409ABC40 (PiUpdateDevicePanel.c)
 *     PnpSetPlugPlayEvent @ 0x1409ABCFC (PnpSetPlugPlayEvent.c)
 *     PiCreateDriverSwDevices @ 0x1409ABE44 (PiCreateDriverSwDevices.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1409AC818 (PnpDeviceObjectToDeviceInstance.c)
 *     PiAuditDeviceStart @ 0x1409AD34C (PiAuditDeviceStart.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1409AD3F8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PiProcessQueryDeviceState @ 0x1409B0470 (PiProcessQueryDeviceState.c)
 *     PnpQueryID @ 0x1409B1418 (PnpQueryID.c)
 *     PnpGenerateDeviceIdsHash @ 0x1409DBCCC (PnpGenerateDeviceIdsHash.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     PpDevCfgProcessDevice @ 0x140B466DC (PpDevCfgProcessDevice.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, int a2, __int64 a3)
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
  WCHAR *v14; // rdi
  WCHAR *v15; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v17; // r15
  __int64 v18; // rdx
  bool v19; // si
  int v20; // r13d
  int v21; // eax
  struct _KTHREAD *v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  int v26; // [rsp+60h] [rbp-19h] BYREF
  int v27; // [rsp+64h] [rbp-15h] BYREF
  int v28; // [rsp+68h] [rbp-11h] BYREF
  int v29; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID v30; // [rsp+70h] [rbp-9h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-1h] BYREF
  PVOID v33; // [rsp+F0h] [rbp+77h] BYREF
  PVOID P; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = a2;
  Handle = 0LL;
  v30 = 0LL;
  if ( (byte_140EF412B & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      3,
      *(const wchar_t **)(a1 + 48));
  v5 = PiPnpRtlBeginOperation(&v30);
  if ( v5 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = (_DWORD *)(a1 + 396);
    if ( (*(_DWORD *)(a1 + 396) & 0x20) == 0 )
    {
      v33 = 0LL;
      v26 = 0;
      P = 0LL;
      v29 = 0;
      *(_OWORD *)&SubjectContext.ClientToken = 0LL;
      if ( (int)PnpDeviceObjectToDeviceInstance(v7, &Handle, 131097LL) >= 0 )
      {
        PnpQueryID(a1, 1LL, &P, &v29);
        PnpQueryID(a1, 2LL, &v33, &v26);
        v14 = (WCHAR *)v33;
        v15 = (WCHAR *)P;
        PnpGenerateDeviceIdsHash(P, v33, a1 + 684);
        if ( v15 || v14 )
        {
          v24 = 0;
          v27 = 0;
          CurrentThread = KeGetCurrentThread();
          v17 = 0;
          LOBYTE(v33) = 0;
          LOBYTE(P) = 0;
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
          v18 = *(_QWORD *)(a1 + 48);
          v28 = 4;
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v18,
                      (__int64)Handle,
                      0xBu,
                      (__int64)&v27,
                      (__int64)&v24,
                      (__int64)&v28,
                      0) >= 0
            && v27 == 4
            && v28 == 4 )
          {
            v19 = (v24 & 0x21) == 32;
          }
          else
          {
            v24 = 0;
            v19 = 1;
          }
          v20 = v29;
          if ( (v24 & 0x400) == 0 )
          {
            v21 = 0;
            if ( !v15
              || (v21 = PnpCheckDeviceIdsChanged(a1, (__int64)Handle, v15, v29, 1, &v33), (v17 = (char)v33) == 0) )
            {
              if ( v14 )
              {
                v21 = PnpCheckDeviceIdsChanged(a1, (__int64)Handle, v14, v26, 0, &v33);
                v17 = (char)v33;
              }
            }
            if ( v21 >= 0 && v17 )
            {
              v24 |= 0x400u;
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
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 3, 7, (__int64)v14, v26, 0);
            ExFreePoolWithTag(v14, 0);
          }
          if ( v17 )
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 11, 4, (__int64)&v24, 4, 0);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          if ( v19 )
            PpDevCfgProcessDevice(a1, Handle, 0LL);
        }
        PnpSetObjectProperty(
          PiPnpRtlCtx,
          *(_QWORD *)(a1 + 48),
          1,
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
        v3 = a2;
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
        LOBYTE(v33) = v10;
        if ( *(_DWORD *)&SepRmCapTableLock.WaitBlockFill11[112] )
        {
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContext(&SubjectContext);
          PrimaryToken = SubjectContext.PrimaryToken;
          if ( SubjectContext.ClientToken )
            PrimaryToken = SubjectContext.ClientToken;
          SepAdtIncorporatePerUserPolicy(0x26u, 1, 0, (__int64)PrimaryToken, &v33);
          SeReleaseSubjectContext(&SubjectContext);
          v10 = (char)v33;
        }
        if ( v10 )
          PiAuditDeviceStart(a1 + 40);
        v5 = 0;
      }
    }
  }
  v11 = v30;
  if ( v30 )
    PiPnpRtlEndOperation((char *)v30);
  if ( (byte_140EF412B & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      (__int64)v11,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      v6,
      3,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)v5;
}
