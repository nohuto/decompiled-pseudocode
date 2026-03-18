/*
 * XREFs of UsbhPdoSetD0 @ 0x140016CD0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhCompletePdoIdleIrp @ 0x140010A24 (UsbhCompletePdoIdleIrp.c)
 *     UsbhClearPdoIdleReady @ 0x140011788 (UsbhClearPdoIdleReady.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400120E4 (UsbhSyncResumeDeviceInternal.c)
 *     GET_FDO_POWER_STATE @ 0x140012D8C (GET_FDO_POWER_STATE.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhDisableDeviceForWake @ 0x14002D984 (UsbhDisableDeviceForWake.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x14002F1E4 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhSetPdoPowerState @ 0x140034138 (UsbhSetPdoPowerState.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x140038F0C (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhReleasePowerContext @ 0x140039970 (UsbhReleasePowerContext.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BA84 (UsbhPdoSetD0_Finish.c)
 */

void __fastcall UsbhPdoSetD0(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v3; // r14
  _DWORD *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  KIRQL v20; // al
  int v21; // ecx
  _DWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  KIRQL v34; // dl
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  KIRQL v39; // al
  int v40; // ecx
  int v41; // r12d
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // edx
  int v46; // r8d
  int v47; // r12d
  _DWORD *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  unsigned __int16 v53; // di
  _DWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdi
  KIRQL v59; // al
  int v60; // ecx
  _DWORD *v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rdx
  unsigned int v67; // eax
  int v68; // edi
  int v69; // edx
  int v70; // edx
  int v71; // edx
  int v72; // edx
  _DWORD *v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rdx
  int v79; // edx
  int v80; // edx
  int v81; // edx
  BOOLEAN v82; // r9
  KSPIN_LOCK *v83; // rbx
  KIRQL v84; // al
  _QWORD *v85; // r15
  _QWORD *v86; // r8
  __int64 v87; // [rsp+50h] [rbp-48h]
  __int64 v88; // [rsp+58h] [rbp-40h]
  int v90; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(a3 + 48);
  v90 = 0;
  v6 = PdoExt((__int64)v3);
  v87 = FdoExt(*((_QWORD *)v6 + 148), v7, v8, v9);
  v88 = *(_QWORD *)(*(_QWORD *)(a3 + 64) + 184LL);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v11 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v12 = *((_DWORD *)DeviceExtension + 221);
        v13 = *((_QWORD *)DeviceExtension + 111);
        v14 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(v14 + v13) = 809780304;
        *(_QWORD *)(v14 + v13 + 8) = 0LL;
        *(_QWORD *)(v14 + v13 + 16) = a3;
        *(_QWORD *)(v14 + v13 + 24) = v3;
      }
    }
  }
  v15 = PdoExt((__int64)v3) + 236;
  v19 = FdoExt(a1, v16, v17, v18);
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 5056));
  v21 = *(_DWORD *)(v19 + 4172);
  *(_BYTE *)(v19 + 5064) = v20;
  v15[10] = v21;
  v15[11] = 126;
  v15[8] = 844055622;
  v15[9] = 1381131376;
  *((_QWORD *)v15 + 3) = KeGetCurrentThread();
  *(_QWORD *)(v19 + 1344) = v15;
  v22 = PdoExt((__int64)v3);
  FdoExt(*((_QWORD *)v15 + 1), v23, v24, v25);
  v26 = ((unsigned __int8)v22[2] + 1) & 7;
  v22[2] = v26;
  v26 *= 32LL;
  *(_DWORD *)((char *)v22 + v26 + 272) = 8;
  v27 = v22[282];
  *(_DWORD *)((char *)v22 + v26 + 280) = 8;
  *(_DWORD *)((char *)v22 + v26 + 276) = v27;
  v22[282] = 8;
  v30 = FdoExt(a1, v26, v28, v29);
  FdoExt(*((_QWORD *)v15 + 1), v31, v32, v33);
  v15[8] = 1734964085;
  v34 = *(_BYTE *)(v30 + 5064);
  *(_QWORD *)(v30 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v30 + 5056), v34);
  *(_QWORD *)(a3 + 112) = UsbhIncHubBusy((_DWORD)a1, (_DWORD)v15, (_DWORD)v3, 1430414448, 1);
  v38 = FdoExt(a1, v35, v36, v37);
  v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v38 + 5056));
  v40 = *(_DWORD *)(v38 + 4172);
  *(_BYTE *)(v38 + 5064) = v39;
  v15[10] = v40;
  v15[11] = 126;
  v15[8] = 844055622;
  v15[9] = 809792336;
  *((_QWORD *)v15 + 3) = KeGetCurrentThread();
  *(_QWORD *)(v38 + 1344) = v15;
  v41 = PdoExt(*(_QWORD *)(a3 + 48))[282];
  v45 = GET_FDO_POWER_STATE((__int64)v15, v42, v43, v44);
  if ( v45 <= 206 )
  {
    if ( v45 != 206 )
    {
      v79 = v45 - 201;
      if ( v79 )
      {
        v80 = v79 - 1;
        if ( !v80 || (v81 = v80 - 1) == 0 || (unsigned int)(v81 - 1) <= 1 )
        {
LABEL_28:
          UsbhSetPdoPowerState((_DWORD)v15, (_DWORD)v3, v46, v41, 9);
          UsbhReleaseFdoPwrLock(a1, v15);
          v68 = -1073741101;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              v66,
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
    v47 = v41 - 1;
    if ( v47 )
    {
      if ( v47 == 6 )
      {
        UsbhSetPdoPowerState((_DWORD)v15, (_DWORD)v3, v46, 7, 13);
        UsbhReleaseFdoPwrLock(a1, v15);
        Log((__int64)a1, 16, 1999782960, 0LL, *((unsigned __int16 *)v6 + 714));
        KeWaitForSingleObject(v6 + 590, Executive, 0, v82, 0LL);
      }
      else
      {
        v48 = PdoExt((__int64)v3);
        FdoExt(*((_QWORD *)v15 + 1), v49, v50, v51);
        v52 = (v48[2] + 1) & 7;
        v48[2] = v52;
        v52 *= 32LL;
        *(_DWORD *)((char *)v48 + v52 + 272) = 8;
        *(_DWORD *)((char *)v48 + v52 + 276) = v48[282];
        *(_DWORD *)((char *)v48 + v52 + 280) = 7;
        v48[282] = 7;
        UsbhReleaseFdoPwrLock(a1, v15);
        if ( (v6[355] & 0x4000000) != 0 )
        {
          UsbhPdoWaitForD3Reconnect(a1, v3);
        }
        else
        {
          UsbhSyncResumeDeviceInternal((__int64)a1, (__int64)v15, v3);
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
          v53 = *((_WORD *)PdoExt((__int64)v3) + 714);
          v54 = PdoExt((__int64)v3);
          UsbhSshSetPortsBusyState(*((_QWORD *)v54 + 148), v53, 2LL, 0LL);
        }
        v58 = FdoExt(a1, v55, v56, v57);
        v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v58 + 5056));
        v60 = *(_DWORD *)(v58 + 4172);
        *(_BYTE *)(v58 + 5064) = v59;
        v15[10] = v60;
        v15[11] = 126;
        v15[8] = 844055622;
        v15[9] = 809792336;
        *((_QWORD *)v15 + 3) = KeGetCurrentThread();
        *(_QWORD *)(v58 + 1344) = v15;
        PdoExt(*(_QWORD *)(a3 + 48));
        v6[596] = *(_DWORD *)(v87 + 4216);
        v61 = PdoExt((__int64)v3);
        FdoExt(*((_QWORD *)v15 + 1), v62, v63, v64);
        v65 = ((unsigned __int8)v61[2] + 1) & 7;
        v61[2] = v65;
        v65 *= 32LL;
        *(_DWORD *)((char *)v61 + v65 + 272) = 8;
        *(_DWORD *)((char *)v61 + v65 + 276) = v61[282];
        *(_DWORD *)((char *)v61 + v65 + 280) = 1;
        v61[282] = 1;
        KeSetEvent((PRKEVENT)(v6 + 590), 0, 0);
        UsbhReleaseFdoPwrLock(a1, v15);
        UsbhCompletePdoIdleIrp((__int64)a1, (__int64)v3, 0);
        UsbhClearPdoIdleReady((__int64)a1, (__int64)v3, a3);
        if ( (v6[355] & 0x100) != 0 )
        {
          v67 = UsbhDisableDeviceForWake(*((_QWORD *)v15 + 1), v3, &v90);
          v66 = v67;
          if ( (v67 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v67) )
            UsbhException(
              *((_QWORD *)v15 + 1),
              *((unsigned __int16 *)v6 + 714),
              49,
              0,
              0,
              v66,
              v90,
              (__int64)usbfile_pdopwr_c,
              1186,
              0);
        }
      }
    }
    else
    {
      UsbhSetPdoPowerState((_DWORD)v15, (_DWORD)v3, v46, 1, 13);
      UsbhReleaseFdoPwrLock(a1, v15);
      Log((__int64)a1, 16, 1999848496, 0LL, *((unsigned __int16 *)v6 + 714));
    }
LABEL_16:
    v68 = 0;
LABEL_23:
    *((_QWORD *)v6 + 320) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy(a1, v66, *(_QWORD *)(a3 + 112));
    v78 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(a3 + 112) = 0LL;
    UsbhEtwLogDevicePowerEvent(
      v6,
      v78,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
      *(unsigned int *)(v88 + 24),
      v68);
    *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = v68;
    IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
    UsbhDecPdoIoCount((ULONG_PTR)v3, *(_QWORD *)(a3 + 64));
    UsbhReleasePowerContext(a1, a3);
    return;
  }
  v69 = v45 - 209;
  if ( v69 )
  {
    v70 = v69 - 1;
    if ( v70 )
    {
      v71 = v70 - 1;
      if ( v71 )
      {
        v72 = v71 - 1;
        if ( !v72 )
          goto LABEL_28;
        if ( v72 == 1 )
        {
          v68 = -1073741810;
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
          UsbhReleaseFdoPwrLock(a1, v15);
          goto LABEL_23;
        }
LABEL_22:
        v73 = PdoExt((__int64)v3);
        FdoExt(*((_QWORD *)v15 + 1), v74, v75, v76);
        v77 = ((unsigned __int8)v73[2] + 1) & 7;
        v73[2] = v77;
        v77 *= 32LL;
        *(_DWORD *)((char *)v73 + v77 + 272) = 3;
        *(_DWORD *)((char *)v73 + v77 + 276) = v73[282];
        *(_DWORD *)((char *)v73 + v77 + 280) = v41;
        v73[282] = v41;
        UsbhReleaseFdoPwrLock(a1, v15);
        v68 = -1073741101;
        goto LABEL_23;
      }
    }
  }
  UsbhSetPdoPowerState((_DWORD)v15, (_DWORD)v3, v46, 3, 7);
  UsbhReleaseFdoPwrLock(a1, v15);
  Log((__int64)a1, 16, 1349862448, a3, (__int64)v3);
  UsbhClearPdoIdleReady((__int64)a1, (__int64)v3, a3);
  Log((__int64)a1, 16, 2003321904, 0LL, a2);
  v83 = (KSPIN_LOCK *)(v87 + 4176);
  v84 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v87 + 4176));
  if ( !*(_BYTE *)(v87 + 4184) )
  {
    KeReleaseSpinLock(v83, v84);
    UsbhPdoSetD0_Finish(v15, v3, *(_QWORD *)(a3 + 64));
    goto LABEL_16;
  }
  v85 = (_QWORD *)(a3 + 96);
  v86 = *(_QWORD **)(v87 + 4200);
  if ( *v86 != v87 + 4192 )
    __fastfail(3u);
  *v85 = v87 + 4192;
  v85[1] = v86;
  *v86 = v85;
  *(_QWORD *)(v87 + 4200) = v85;
  KeReleaseSpinLock(v83, v84);
}
