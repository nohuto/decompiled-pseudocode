/*
 * XREFs of UsbhPdoDevicePowerState @ 0x1400156F0
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x14002B130 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhSetPdoIdleReady @ 0x1400116C0 (UsbhSetPdoIdleReady.c)
 *     UsbhClearPdoIdleReady @ 0x140011788 (UsbhClearPdoIdleReady.c)
 *     UsbhPdoSetDx @ 0x140012618 (UsbhPdoSetDx.c)
 *     GET_FDO_POWER_STATE @ 0x140012D8C (GET_FDO_POWER_STATE.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhSet_Pdo_Dx @ 0x14001451C (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     UsbhSet_D0_wQueued_Action @ 0x140029E60 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x14002AE7C (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhQueueWorkItemEx @ 0x14002C4D0 (UsbhQueueWorkItemEx.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x14002F1E4 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhSetPdoPowerState @ 0x140034138 (UsbhSetPdoPowerState.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_BusDisconnect @ 0x140043A00 (UsbhPCE_BusDisconnect.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPdoDevicePowerState(__int64 a1, struct _DEVICE_OBJECT *a2, IRP *a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rcx
  signed __int32 v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  KIRQL v17; // al
  __int64 Pool2; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 **v21; // rcx
  KIRQL v22; // al
  __int64 v23; // rax
  KSPIN_LOCK *v24; // rcx
  int v25; // edx
  bool v26; // zf
  KIRQL v27; // dl
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  KIRQL v32; // al
  int v33; // ecx
  __int64 v34; // rdx
  int v35; // ebx
  __int64 v36; // r8
  __int64 v37; // r9
  int ActivityIdIrp; // eax
  const GUID *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  char SystemState; // bl
  unsigned int v44; // r12d
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // edx
  POWER_STATE v50; // ebx
  __int32 v51; // ebx
  __int32 v52; // ebx
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  _IO_STACK_LOCATION *v57; // r10
  __int64 v58; // r9
  __int64 Options; // rax
  __int64 v60; // r8
  __int64 v61; // r11
  __int64 v62; // rcx
  signed __int32 v63; // eax
  unsigned int v64; // edx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r11
  __int64 v68; // rcx
  signed __int32 v69; // eax
  unsigned int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // rdx
  const EVENT_DESCRIPTOR *v73; // rbx
  int v74; // eax
  const GUID *v75; // rdx
  unsigned __int16 v77; // bx
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // ebx
  int v84; // eax
  int v85; // r8d
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  int v95; // r8d
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  BOOLEAN v100; // r9
  POWER_STATE State; // [rsp+68h] [rbp-51h]
  KIRQL NewIrql; // [rsp+6Ch] [rbp-4Dh]
  KSPIN_LOCK *SpinLock; // [rsp+70h] [rbp-49h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+78h] [rbp-41h]
  __int128 v105; // [rsp+C0h] [rbp+7h] BYREF

  v6 = PdoExt(a2);
  FdoExt(a1, v7, v8, v9);
  v10 = PdoExt(a2) + 944;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  State.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 880), 0xFFFFFFFF);
        v13 = *(_DWORD *)(v11 + 884);
        v14 = *(_QWORD *)(v11 + 888);
        v15 = 32LL * ((v12 - 1) & v13);
        *(_DWORD *)(v15 + v14) = 1682990192;
        *(_QWORD *)(v15 + v14 + 8) = 0LL;
        *(_QWORD *)(v15 + v14 + 16) = a2;
        *(_QWORD *)(v15 + v14 + 24) = a3;
      }
    }
  }
  v16 = PdoExt(a2);
  SpinLock = (KSPIN_LOCK *)(v16 + 1216);
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 1216));
  NewIrql = v17;
  if ( *(_DWORD *)(v16 + 784) != 2 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = a3;
      v19 = v16 + 1224;
      *(_DWORD *)(Pool2 + 32) = 0;
      *(_DWORD *)Pool2 = 1464815728;
      v20 = (__int64 *)(Pool2 + 8);
      v21 = *(__int64 ***)(v19 + 8);
      if ( *v21 != (__int64 *)v19 )
        __fastfail(3u);
      *v20 = v19;
      v20[1] = (__int64)v21;
      *v21 = v20;
      *(_QWORD *)(v19 + 8) = v20;
    }
    else
    {
      ++*(_DWORD *)(v16 + 1264);
    }
    KeReleaseSpinLock(SpinLock, NewIrql);
    v22 = KeAcquireSpinLockRaiseToDpc(&HubG);
    *(_DWORD *)(v10 + 136) = 1;
    *(_BYTE *)(v10 + 132) = v22;
    *(_DWORD *)(v10 + 88) = 2018460752;
    *(_DWORD *)(v10 + 92) = 12;
    qword_140070600 = v10;
    *(_QWORD *)(v10 + 24) = KeGetCurrentThread();
    v23 = PdoExt(a2);
    v24 = &HubG;
    v25 = *(_DWORD *)(v23 + 1124);
    *(_DWORD *)(v10 + 136) = 0;
    v26 = v25 == 3;
    qword_140070600 = 0LL;
    *(_DWORD *)(v10 + 88) = 1734964085;
    v27 = *(_BYTE *)(v10 + 132);
    if ( !v26 )
    {
      v44 = -1073741810;
      goto LABEL_20;
    }
    KeReleaseSpinLock(&HubG, v27);
    v31 = FdoExt(a1, v28, v29, v30);
    v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v31 + 5056));
    v33 = *(_DWORD *)(v31 + 4172);
    *(_BYTE *)(v31 + 5064) = v32;
    *(_DWORD *)(v10 + 40) = v33;
    *(_DWORD *)(v10 + 44) = 126;
    *(_DWORD *)(v10 + 32) = 844055622;
    *(_DWORD *)(v10 + 36) = 1986356304;
    *(_QWORD *)(v10 + 24) = KeGetCurrentThread();
    *(_QWORD *)(v31 + 1344) = v10;
    v35 = *(_DWORD *)(PdoExt(a2) + 1128);
    if ( State.SystemState != PowerSystemWorking )
    {
      if ( State.SystemState != PowerSystemSleeping1 && (unsigned int)(State.SystemState - 3) >= 2 )
      {
        v44 = -1073741811;
LABEL_78:
        UsbhReleaseFdoPwrLock(a1, v10);
        goto LABEL_21;
      }
      v105 = 0LL;
      if ( dword_1400706F0 )
      {
        FdoExt(*(_QWORD *)(v6 + 1184), v34, v36, v37);
        if ( g_IoGetActivityIdIrp )
          ActivityIdIrp = g_IoGetActivityIdIrp(a3, &v105);
        else
          ActivityIdIrp = -1073741823;
        v39 = (const GUID *)&v105;
        if ( ActivityIdIrp < 0 )
          v39 = 0LL;
        UsbhEtwWrite(&USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_DISPATCH, v39);
      }
      SystemState = State.SystemState;
      if ( *(_DWORD *)(PdoExt(a2) + 788) != State.SystemState )
      {
        if ( *(_DWORD *)(v6 + 1152) == 2 )
        {
          if ( !CurrentStackLocation->Parameters.Create.EaLength )
          {
            if ( !*(_BYTE *)(v6 + 2733) )
            {
              *(_BYTE *)(v6 + 2733) = 1;
              UsbhQueueWorkItemEx(a1, 1, (unsigned int)&UsbhSetPdoSelectiveSuspendedKey, (_DWORD)a2, 0, 2001228627, 0LL);
            }
            if ( State.SystemState == PowerSystemSleeping3
              && (*(_DWORD *)(PdoExt(a2) + 1180) & 0x10) != 0
              && (*(_DWORD *)(v6 + 1420) & 0xC00000) == 0xC00000 )
            {
              KeSetEvent((PRKEVENT)(v6 + 2920), 0, 0);
              *(_DWORD *)(v6 + 1420) = *(_DWORD *)(v6 + 1420) & 0xFAFFFFFF | 0x4000000;
            }
          }
          v44 = UsbhPdoSetDx(v10, (__int64)a2, (__int64)a3);
        }
        else
        {
          v44 = -1073741130;
          UsbhReleaseFdoPwrLock(a1, v10);
        }
LABEL_22:
        if ( Usb_Disconnected(v44) )
          UsbhPCE_BusDisconnect(a1, v10, *(unsigned __int16 *)(v6 + 1428));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            v49,
            1,
            22,
            (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
            *(_WORD *)(v6 + 1428),
            SystemState);
        v50.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
        *(POWER_STATE *)(PdoExt(a2) + 788) = v50;
        PoSetPowerState(a2, DevicePowerState, v50);
        v51 = v50.SystemState - 1;
        if ( v51 )
        {
          v52 = v51 - 1;
          if ( v52 && (unsigned int)(v52 - 1) >= 2 )
            goto LABEL_28;
          v77 = *(_WORD *)(PdoExt(a2) + 1428);
          v78 = PdoExt(a2);
          v79 = 1LL;
        }
        else
        {
          v77 = *(_WORD *)(PdoExt(a2) + 1428);
          v78 = PdoExt(a2);
          v79 = 2LL;
        }
        UsbhSshSetPortsBusyState(*(_QWORD *)(v78 + 1184), v77, v79, 0LL);
LABEL_28:
        *(_QWORD *)(v6 + 2560) = MEMORY[0xFFFFF78000000014];
        v53 = *(_QWORD *)(PdoExt(a2) + 1184);
        v54 = PdoExt(a2);
        v57 = a3->Tail.Overlay.CurrentStackLocation;
        v58 = v54;
        Options = v57->Parameters.Create.Options;
        if ( (unsigned int)Options <= 1 )
        {
          v60 = (unsigned int)Options;
          v61 = *(_QWORD *)(v58 + 8 * Options + 800);
          if ( (UsbhLogMask & 0x10) != 0 )
          {
            if ( v53 )
            {
              v62 = *(_QWORD *)(v53 + 64);
              if ( v62 )
              {
                v63 = _InterlockedExchangeAdd((volatile signed __int32 *)(v62 + 880), 0xFFFFFFFF);
                v64 = *(_DWORD *)(v62 + 884);
                v65 = *(_QWORD *)(v62 + 888);
                v66 = 32LL * ((v63 - 1) & v64);
                *(_DWORD *)(v66 + v65) = 827212880;
                *(_QWORD *)(v66 + v65 + 8) = 0LL;
                *(_QWORD *)(v66 + v65 + 16) = v61;
                *(_QWORD *)(v66 + v65 + 24) = a3;
              }
            }
          }
          v67 = *(_QWORD *)(v58 + 8 * v60 + 816);
          if ( (UsbhLogMask & 0x10) != 0 )
          {
            if ( v53 )
            {
              v68 = *(_QWORD *)(v53 + 64);
              if ( v68 )
              {
                v69 = _InterlockedExchangeAdd((volatile signed __int32 *)(v68 + 880), 0xFFFFFFFF);
                v70 = *(_DWORD *)(v68 + 884);
                v71 = *(_QWORD *)(v68 + 888);
                v72 = 32LL * ((v69 - 1) & v70);
                *(_DWORD *)(v72 + v71) = 843990096;
                *(_QWORD *)(v72 + v71 + 8) = 0LL;
                *(_QWORD *)(v72 + v71 + 16) = v67;
                *(_QWORD *)(v72 + v71 + 24) = v57;
              }
            }
          }
          *(_QWORD *)(v58 + 8 * v60 + 800) = 0LL;
          *(_QWORD *)(v58 + 8 * v60 + 816) = 0LL;
          *(_DWORD *)(v58 + 4 * v60 + 832) = 2101;
          PoStartNextPowerIrp(a3);
        }
        v73 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE;
        if ( State.SystemState != PowerSystemWorking )
          v73 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_COMPLETE;
        v105 = 0LL;
        if ( dword_1400706F0 )
        {
          FdoExt(*(_QWORD *)(v6 + 1184), v55, v56, v58);
          if ( g_IoGetActivityIdIrp )
            v74 = g_IoGetActivityIdIrp(a3, &v105);
          else
            v74 = -1073741823;
          v75 = (const GUID *)&v105;
          if ( v74 < 0 )
            v75 = 0LL;
          UsbhEtwWrite(v73, v75);
        }
        a3->IoStatus.Status = v44;
        IofCompleteRequest(a3, 0);
        UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a3);
        return v44;
      }
      v44 = 0;
      v45 = FdoExt(a1, v40, v41, v42);
      FdoExt(*(_QWORD *)(v10 + 8), v46, v47, v48);
      *(_DWORD *)(v10 + 32) = 1734964085;
      v24 = (KSPIN_LOCK *)(v45 + 5056);
      v27 = *(_BYTE *)(v45 + 5064);
      *(_QWORD *)(v45 + 1344) = 0LL;
LABEL_20:
      KeReleaseSpinLock(v24, v27);
LABEL_21:
      SystemState = State.SystemState;
      goto LABEL_22;
    }
    UsbhEtwLogDevicePowerEvent(
      v6,
      a3,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_DISPATCH,
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
      0);
    *(_QWORD *)(v6 + 2552) = MEMORY[0xFFFFF78000000014];
    v83 = v35 - 1;
    if ( v83 )
    {
      if ( v83 == 6 )
      {
        UsbhSetPdoPowerState(v10, (_DWORD)a2, v81, 7, 13);
        UsbhReleaseFdoPwrLock(a1, v10);
        Log(a1, 16, 2003059760, 0LL, *(unsigned __int16 *)(v6 + 1428));
        KeWaitForSingleObject((PVOID)(v6 + 2360), Executive, 0, v100, 0LL);
        v44 = 0;
        goto LABEL_21;
      }
      v84 = GET_FDO_POWER_STATE(v10, v80, v81, v82) - 201;
      if ( !v84 || (v86 = v84 - 5) == 0 || (v87 = v86 - 3) == 0 || (v88 = v87 - 1) == 0 || (v89 = v88 - 1) == 0 )
      {
        if ( (int)UsbhSet_D0_wQueued_Action(a1, v10, a2, a3) >= 0 )
        {
          KeResetEvent((PRKEVENT)(v6 + 2360));
          v90 = PdoExt(a2);
          FdoExt(*(_QWORD *)(v10 + 8), v91, v92, v93);
          v94 = ((unsigned __int8)*(_DWORD *)(v90 + 8) + 1) & 7;
          *(_DWORD *)(v90 + 8) = v94;
          v94 *= 32LL;
          *(_DWORD *)(v94 + v90 + 272) = 6;
          *(_DWORD *)(v94 + v90 + 276) = *(_DWORD *)(v90 + 1128);
          *(_DWORD *)(v94 + v90 + 280) = 2;
          *(_DWORD *)(v90 + 1128) = 2;
          UsbhReleaseFdoPwrLock(a1, v10);
          return 259LL;
        }
        goto LABEL_76;
      }
      if ( (unsigned int)(v89 - 1) < 2 )
      {
LABEL_76:
        UsbhSetPdoPowerState(v10, (_DWORD)a2, v85, 6, 3);
        v44 = -1073741810;
        if ( (unsigned int)GET_FDO_POWER_STATE(v10, v97, v98, v99) != 213 )
          v44 = 0;
        goto LABEL_78;
      }
      UsbhSetPdoPowerState(v10, (_DWORD)a2, v85, 6, 3);
    }
    else
    {
      UsbhSetPdoPowerState(v10, (_DWORD)a2, v81, 1, 2);
    }
    UsbhReleaseFdoPwrLock(a1, v10);
    v44 = 0;
    goto LABEL_21;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 1216), v17);
  if ( *(_BYTE *)(v6 + 2740) )
  {
    UsbhAcquireFdoPwrLock(a1, v10, 126LL, 1986356304LL);
    if ( State.SystemState == PowerSystemWorking )
    {
      UsbhSetPdoPowerState(v10, (_DWORD)a2, v95, 1, 2);
      UsbhReleaseFdoPwrLock(a1, v10);
      UsbhClearPdoIdleReady(a1, (__int64)a2, (__int64)a3);
    }
    else
    {
      UsbhSetPdoPowerState(v10, (_DWORD)a2, v95, 4, 4);
      UsbhReleaseFdoPwrLock(a1, v10);
      UsbhSetPdoIdleReady(a1, (__int64)a2, (__int64)a3);
    }
    UsbhSet_Pdo_Dx(a2, State);
  }
  Log(a1, 16, 1886545441, -1073741810LL, (__int64)a3);
  *(_QWORD *)(v6 + 2560) = MEMORY[0xFFFFF78000000014];
  v96 = PdoExt(a2);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v96 + 1184), a2, a3, 1910LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
