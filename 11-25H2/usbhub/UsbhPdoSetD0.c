/*
 * XREFs of UsbhPdoSetD0 @ 0x1400106D0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x14000C7AC (UsbhEtwLogDevicePowerEvent.c)
 *     GET_FDO_POWER_STATE @ 0x14000DD54 (GET_FDO_POWER_STATE.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     UsbhSshSetPortsBusyState @ 0x14000FDA0 (UsbhSshSetPortsBusyState.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400111E0 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhClearPdoIdleReady @ 0x140017A4C (UsbhClearPdoIdleReady.c)
 *     UsbhCompletePdoIdleIrp @ 0x140018038 (UsbhCompletePdoIdleIrp.c)
 *     UsbhDisableDeviceForWake @ 0x140019A94 (UsbhDisableDeviceForWake.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReleaseFdoPwrLock @ 0x14003173C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x140032544 (UsbhSetPdoPowerState.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400398C0 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhReleasePowerContext @ 0x140039F54 (UsbhReleasePowerContext.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BED4 (UsbhPdoSetD0_Finish.c)
 */

void __fastcall UsbhPdoSetD0(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v3; // r14
  _DWORD *v6; // r13
  void *DeviceExtension; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rsi
  KSPIN_LOCK *v10; // rbx
  KIRQL v11; // al
  int v12; // ecx
  _DWORD *v13; // rdi
  __int64 v14; // rdx
  int v15; // eax
  _DWORD *v16; // rdi
  KIRQL v17; // dl
  KSPIN_LOCK *v18; // rdi
  KIRQL v19; // al
  int v20; // ecx
  int v21; // r12d
  int v22; // edx
  int v23; // r8d
  int v24; // r12d
  _DWORD *v25; // rdi
  __int64 v26; // rdx
  _DWORD *v27; // rdi
  _DWORD *v28; // rax
  KSPIN_LOCK *v29; // rdi
  KIRQL v30; // al
  int v31; // ecx
  _DWORD *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // edi
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  _DWORD *v41; // rdi
  __int64 v42; // rdx
  _DWORD *v43; // rbx
  KIRQL v44; // dl
  __int64 v45; // rdx
  int v46; // edx
  int v47; // edx
  int v48; // edx
  BOOLEAN v49; // r9
  KSPIN_LOCK *v50; // rbx
  KIRQL v51; // al
  KSPIN_LOCK *v52; // r15
  KSPIN_LOCK **v53; // r8
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-78h]
  KSPIN_LOCK *v55; // [rsp+50h] [rbp-48h]
  __int64 v56; // [rsp+58h] [rbp-40h]
  int v58; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(a3 + 48);
  v58 = 0;
  v6 = PdoExt((__int64)v3);
  v55 = (KSPIN_LOCK *)FdoExt(*((_QWORD *)v6 + 148));
  v56 = *(_QWORD *)(*(_QWORD *)(a3 + 64) + 184LL);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v8 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v8 = 809780304;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a3;
        *(_QWORD *)(v8 + 24) = v3;
      }
    }
  }
  v9 = PdoExt((__int64)v3) + 236;
  v10 = (KSPIN_LOCK *)FdoExt((__int64)a1);
  v11 = KeAcquireSpinLockRaiseToDpc(v10 + 632);
  v12 = *((_DWORD *)v10 + 1043);
  *((_BYTE *)v10 + 5064) = v11;
  v9[10] = v12;
  v9[11] = 126;
  v9[8] = 844055622;
  v9[9] = 1381131376;
  *((_QWORD *)v9 + 3) = KeGetCurrentThread();
  v10[168] = (KSPIN_LOCK)v9;
  v13 = PdoExt((__int64)v3);
  FdoExt(*((_QWORD *)v9 + 1));
  v14 = ((unsigned __int8)v13[2] + 1) & 7;
  v13[2] = v14;
  v14 *= 32LL;
  *(_DWORD *)((char *)v13 + v14 + 272) = 8;
  v15 = v13[282];
  *(_DWORD *)((char *)v13 + v14 + 280) = 8;
  *(_DWORD *)((char *)v13 + v14 + 276) = v15;
  v13[282] = 8;
  v16 = FdoExt((__int64)a1);
  FdoExt(*((_QWORD *)v9 + 1));
  v9[8] = 1734964085;
  v17 = *((_BYTE *)v16 + 5064);
  *((_QWORD *)v16 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v16 + 632, v17);
  *(_QWORD *)(a3 + 112) = UsbhIncHubBusy((__int64)a1, (__int64)v9, (__int64)v3, 1430414448, 1);
  v18 = (KSPIN_LOCK *)FdoExt((__int64)a1);
  v19 = KeAcquireSpinLockRaiseToDpc(v18 + 632);
  v20 = *((_DWORD *)v18 + 1043);
  *((_BYTE *)v18 + 5064) = v19;
  v9[10] = v20;
  v9[11] = 126;
  v9[8] = 844055622;
  v9[9] = 809792336;
  *((_QWORD *)v9 + 3) = KeGetCurrentThread();
  v18[168] = (KSPIN_LOCK)v9;
  v21 = PdoExt(*(_QWORD *)(a3 + 48))[282];
  v22 = GET_FDO_POWER_STATE((__int64)v9);
  if ( v22 <= 206 )
  {
    if ( v22 != 206 )
    {
      v46 = v22 - 201;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( !v47 || (v48 = v47 - 1) == 0 || (unsigned int)(v48 - 1) <= 1 )
        {
LABEL_28:
          UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v23, v21, 9);
          UsbhReleaseFdoPwrLock(a1, v9);
          v36 = -1073741101;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              v34,
              1,
              15,
              (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
              *((_WORD *)v6 + 714),
              211);
          }
          goto LABEL_23;
        }
        goto LABEL_22;
      }
    }
    v24 = v21 - 1;
    if ( v24 )
    {
      if ( v24 == 6 )
      {
        UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v23, 7, 13);
        UsbhReleaseFdoPwrLock(a1, v9);
        Log((_DWORD)a1, 16, 1999782960, 0, *((unsigned __int16 *)v6 + 714));
        KeWaitForSingleObject(v6 + 590, Executive, 0, v49, 0LL);
      }
      else
      {
        v25 = PdoExt((__int64)v3);
        FdoExt(*((_QWORD *)v9 + 1));
        v26 = (v25[2] + 1) & 7;
        v25[2] = v26;
        v26 *= 32LL;
        *(_DWORD *)((char *)v25 + v26 + 272) = 8;
        *(_DWORD *)((char *)v25 + v26 + 276) = v25[282];
        *(_DWORD *)((char *)v25 + v26 + 280) = 7;
        v25[282] = 7;
        UsbhReleaseFdoPwrLock(a1, v9);
        if ( (v6[355] & 0x4000000) != 0 )
        {
          UsbhPdoWaitForD3Reconnect(a1, v3);
        }
        else
        {
          UsbhSyncResumeDeviceInternal(a1, v9, v3);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              16,
              (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
              *((_WORD *)v6 + 714));
          }
          PdoExt((__int64)v3)[197] = 1;
          PoSetPowerState(v3, DevicePowerState, (POWER_STATE)1);
          v27 = PdoExt((__int64)v3);
          v28 = PdoExt((__int64)v3);
          UsbhSshSetPortsBusyState(*((_QWORD *)v28 + 148), *((_WORD *)v27 + 714), 2, 0);
        }
        v29 = (KSPIN_LOCK *)FdoExt((__int64)a1);
        v30 = KeAcquireSpinLockRaiseToDpc(v29 + 632);
        v31 = *((_DWORD *)v29 + 1043);
        *((_BYTE *)v29 + 5064) = v30;
        v9[10] = v31;
        v9[11] = 126;
        v9[8] = 844055622;
        v9[9] = 809792336;
        *((_QWORD *)v9 + 3) = KeGetCurrentThread();
        v29[168] = (KSPIN_LOCK)v9;
        PdoExt(*(_QWORD *)(a3 + 48));
        v6[596] = *((_DWORD *)v55 + 1054);
        v32 = PdoExt((__int64)v3);
        FdoExt(*((_QWORD *)v9 + 1));
        v33 = ((unsigned __int8)v32[2] + 1) & 7;
        v32[2] = v33;
        v33 *= 32LL;
        *(_DWORD *)((char *)v32 + v33 + 272) = 8;
        *(_DWORD *)((char *)v32 + v33 + 276) = v32[282];
        *(_DWORD *)((char *)v32 + v33 + 280) = 1;
        v32[282] = 1;
        KeSetEvent((PRKEVENT)(v6 + 590), 0, 0);
        UsbhReleaseFdoPwrLock(a1, v9);
        UsbhCompletePdoIdleIrp(a1, v3, 0LL);
        UsbhClearPdoIdleReady(a1, v3, a3);
        if ( (v6[355] & 0x100) != 0 )
        {
          v35 = UsbhDisableDeviceForWake(*((_QWORD *)v9 + 1), v3, &v58);
          v34 = v35;
          if ( (v35 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v35) )
            UsbhException(*((_QWORD *)v9 + 1), *((_WORD *)v6 + 714), 49, 0LL, 0, v34, v58, usbfile_pdopwr_c, 1186, 0);
        }
      }
    }
    else
    {
      UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v23, 1, 13);
      UsbhReleaseFdoPwrLock(a1, v9);
      Log((_DWORD)a1, 16, 1999848496, 0, *((unsigned __int16 *)v6 + 714));
    }
LABEL_16:
    v36 = 0;
LABEL_23:
    *((_QWORD *)v6 + 320) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy((__int64)a1, v34, *(_QWORD **)(a3 + 112));
    v45 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(a3 + 112) = 0LL;
    LODWORD(Timeout) = v36;
    UsbhEtwLogDevicePowerEvent(
      (__int64)v6,
      v45,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
      *(_DWORD *)(v56 + 24),
      Timeout);
    *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = v36;
    IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
    UsbhDecPdoIoCount((ULONG_PTR)v3, *(_QWORD *)(a3 + 64));
    UsbhReleasePowerContext(a1, a3);
    return;
  }
  v37 = v22 - 209;
  if ( v37 )
  {
    v38 = v37 - 1;
    if ( v38 )
    {
      v39 = v38 - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( !v40 )
          goto LABEL_28;
        if ( v40 == 1 )
        {
          v36 = -1073741810;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              1,
              1,
              14,
              (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
              *((_WORD *)v6 + 714),
              14);
          }
          UsbhReleaseFdoPwrLock(a1, v9);
          goto LABEL_23;
        }
LABEL_22:
        v41 = PdoExt((__int64)v3);
        FdoExt(*((_QWORD *)v9 + 1));
        v42 = ((unsigned __int8)v41[2] + 1) & 7;
        v41[2] = v42;
        v42 *= 32LL;
        *(_DWORD *)((char *)v41 + v42 + 272) = 3;
        *(_DWORD *)((char *)v41 + v42 + 276) = v41[282];
        *(_DWORD *)((char *)v41 + v42 + 280) = v21;
        v41[282] = v21;
        v43 = FdoExt((__int64)a1);
        FdoExt(*((_QWORD *)v9 + 1));
        v9[8] = 1734964085;
        v44 = *((_BYTE *)v43 + 5064);
        *((_QWORD *)v43 + 168) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)v43 + 632, v44);
        v36 = -1073741101;
        goto LABEL_23;
      }
    }
  }
  UsbhSetPdoPowerState((_DWORD)v9, (_DWORD)v3, v23, 3, 7);
  UsbhReleaseFdoPwrLock(a1, v9);
  Log((_DWORD)a1, 16, 1349862448, a3, (__int64)v3);
  UsbhClearPdoIdleReady(a1, v3, a3);
  Log((_DWORD)a1, 16, 2003321904, 0, a2);
  v50 = v55 + 522;
  v51 = KeAcquireSpinLockRaiseToDpc(v55 + 522);
  if ( !*((_BYTE *)v55 + 4184) )
  {
    KeReleaseSpinLock(v50, v51);
    UsbhPdoSetD0_Finish(v9, v3, *(_QWORD *)(a3 + 64));
    goto LABEL_16;
  }
  v52 = (KSPIN_LOCK *)(a3 + 96);
  v53 = (KSPIN_LOCK **)v55[525];
  if ( *v53 != v55 + 524 )
    __fastfail(3u);
  *v52 = (KSPIN_LOCK)(v55 + 524);
  v52[1] = (KSPIN_LOCK)v53;
  *v53 = v52;
  v55[525] = (KSPIN_LOCK)v52;
  KeReleaseSpinLock(v50, v51);
}
