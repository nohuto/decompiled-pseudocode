/*
 * XREFs of UsbhSyncSendCommandToDevice @ 0x14002DA80
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1400275B4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhEnableDeviceForWake @ 0x14002D218 (UsbhEnableDeviceForWake.c)
 *     UsbhGetStringFromDevice @ 0x14002D2C4 (UsbhGetStringFromDevice.c)
 *     UsbhGetLanguageIdString @ 0x14002D494 (UsbhGetLanguageIdString.c)
 *     UsbhDisableDeviceForWake @ 0x14002D984 (UsbhDisableDeviceForWake.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x14004285C (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x140042F68 (UsbhGetMsOsFeatureDescriptor.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x140043454 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhGetBosDescriptor @ 0x14005CAF8 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x14005CC9C (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x14005CD78 (UsbhGetQualifierDescriptorFromDevice.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSyncSendCommandToDevice(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        _WORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  _QWORD *Pool2; // rdi
  __int64 v8; // r15
  _DWORD *v11; // rax
  PDEVICE_OBJECT *v12; // rsi
  PIRP v13; // rax
  IRP *v14; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // esi
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  KSPIN_LOCK *v20; // rsi
  KIRQL v21; // al
  __int64 v22; // r15
  KIRQL v23; // r10
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  _DWORD *v31; // rax
  int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // rdx
  struct _DEVICE_OBJECT *v35; // rsi
  PIRP v36; // rdx
  NTSTATUS v37; // eax
  bool v38; // zf
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rdx
  KSPIN_LOCK *v43; // r12
  KIRQL v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  _DWORD *v49; // rax
  unsigned int v51; // [rsp+50h] [rbp-61h] BYREF
  _DWORD *v52; // [rsp+58h] [rbp-59h]
  _DWORD *v53; // [rsp+60h] [rbp-51h]
  struct _IO_STATUS_BLOCK v54; // [rsp+68h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-39h] BYREF
  struct _KEVENT Object; // [rsp+90h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-9h] BYREF
  KIRQL v60[8]; // [rsp+128h] [rbp+77h]

  v51 = 0;
  Pool2 = 0LL;
  memset(&Object, 0, sizeof(Object));
  v8 = 0LL;
  v54 = 0LL;
  v52 = FdoExt(a1);
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v11 = *(_DWORD **)(a2 + 64);
  v53 = v11;
  if ( !v11 )
    goto LABEL_71;
  if ( *v11 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, v11);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v12 = (PDEVICE_OBJECT *)FdoExt(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13 = IoBuildDeviceIoControlRequest(0x220013u, v12[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  v14 = v13;
  if ( v13 )
  {
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&v51;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(v12[151], v14);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  v17 = v51;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( v18 )
      {
        v19 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884))
            + *(_QWORD *)(v18 + 888);
        *(_DWORD *)v19 = 1400074357;
        *(_QWORD *)(v19 + 24) = Status;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = v17;
      }
    }
  }
  if ( (Status & 0xC0000000) == 0xC0000000 )
    goto LABEL_64;
  if ( !a5 )
  {
    Status = -1073741811;
    goto LABEL_64;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 136LL, 1112885333LL);
  if ( !Pool2 )
  {
    Status = -1073741670;
    LODWORD(v40) = -1073737728;
    goto LABEL_43;
  }
  v20 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
  v21 = KeAcquireSpinLockRaiseToDpc(v20);
  v22 = *(_QWORD *)(a2 + 64);
  v23 = v21;
  v60[0] = v21;
  if ( !v22 )
LABEL_71:
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v22 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, v22);
  v24 = *(int *)(v22 + 1152);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 824923716;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = a2;
        *(_QWORD *)(v26 + 24) = v24;
      }
    }
  }
  v27 = *(_DWORD *)(v22 + 1152);
  if ( v27 != 2 )
  {
    if ( v27 < 2 )
      Log(a1, 256, 1146497825, a2, *(int *)(v22 + 1152));
    KeReleaseSpinLock(v20, v23);
    v8 = 0LL;
    goto LABEL_63;
  }
  v28 = *(_QWORD *)(v22 + 1160);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v29 = *(_QWORD *)(a1 + 64);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
        *(_DWORD *)v30 = 724260420;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 16) = 1145983859LL;
        *(_QWORD *)(v30 + 24) = v28;
      }
    }
  }
  v31 = FdoExt(a1);
  if ( !*((_QWORD *)v31 + 558) )
  {
    v32 = -1073741822;
    goto LABEL_70;
  }
  v32 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))v31 + 558))(
          *((_QWORD *)v31 + 529),
          v28,
          Pool2,
          1145983859LL);
  if ( v32 < 0 )
  {
LABEL_70:
    v8 = 0LL;
    goto LABEL_28;
  }
  v8 = *(_QWORD *)(v22 + 1160);
LABEL_28:
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884))
            + *(_QWORD *)(v33 + 888);
        *(_DWORD *)v34 = 841700932;
        *(_QWORD *)(v34 + 16) = v32;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 24) = v8;
      }
    }
  }
  KeReleaseSpinLock(v20, v60[0]);
  if ( !v8 || (v35 = (struct _DEVICE_OBJECT *)*((_QWORD *)v52 + 152)) == 0LL )
  {
LABEL_63:
    Status = -1073741810;
LABEL_64:
    LODWORD(v40) = -1073713152;
    goto LABEL_43;
  }
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v36 = IoBuildDeviceIoControlRequest(0x220003u, v35, 0LL, 0, 0LL, 0, 1u, &Object, &v54);
  if ( v36 )
  {
    Pool2[1] = *((_QWORD *)v53 + 145);
    *(_DWORD *)Pool2 = 3276936;
    *((_DWORD *)Pool2 + 8) = 10;
    if ( *a3 < 0 )
      *((_DWORD *)Pool2 + 8) = 11;
    *((_DWORD *)Pool2 + 9) = (unsigned __int16)*a5;
    Pool2[5] = a4;
    Pool2[6] = 0LL;
    *((_DWORD *)Pool2 + 14) = 2000;
    Pool2[16] = *(_QWORD *)a3;
    v36->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Pool2;
    v37 = IofCallDriver(v35, v36);
    Status = v37;
    if ( v37 == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = v54.Status;
    }
    else
    {
      v54.Status = v37;
    }
    v38 = (UsbhLogMask & 0x100) == 0;
    v39 = *((unsigned __int16 *)Pool2 + 18);
    v40 = *((int *)Pool2 + 1);
    *a5 = v39;
    if ( !v38 )
    {
      if ( a1 )
      {
        v41 = *(_QWORD *)(a1 + 64);
        if ( v41 )
        {
          v42 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884))
              + *(_QWORD *)(v41 + 888);
          *(_DWORD *)v42 = 1986282323;
          *(_QWORD *)(v42 + 8) = 0LL;
          *(_QWORD *)(v42 + 16) = v39;
          *(_QWORD *)(v42 + 24) = v40;
        }
      }
    }
  }
  else
  {
    Status = -1073741670;
    LODWORD(v40) = -1073737728;
  }
LABEL_43:
  if ( a7 )
    *a7 = v40;
  if ( v8 )
  {
    v43 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
    v44 = KeAcquireSpinLockRaiseToDpc(v43);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v45 = *(_QWORD *)(a1 + 64);
        if ( v45 )
        {
          v46 = *(_QWORD *)(v45 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
          *(_DWORD *)v46 = 825054788;
          *(_QWORD *)(v46 + 8) = 0LL;
          *(_QWORD *)(v46 + 16) = v8;
          *(_QWORD *)(v46 + 24) = Pool2;
        }
      }
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v47 = *(_QWORD *)(a1 + 64);
          if ( v47 )
          {
            v48 = *(_QWORD *)(v47 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
            *(_DWORD *)v48 = 841832004;
            *(_QWORD *)(v48 + 8) = 0LL;
            *(_QWORD *)(v48 + 16) = v8;
            *(_QWORD *)(v48 + 24) = 1145983859LL;
          }
        }
      }
    }
    v49 = FdoExt(a1);
    if ( *((_QWORD *)v49 + 559) )
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))v49 + 559))(
        *((_QWORD *)v49 + 529),
        v8,
        Pool2,
        1145983859LL);
    KeReleaseSpinLock(v43, v44);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Status;
}
