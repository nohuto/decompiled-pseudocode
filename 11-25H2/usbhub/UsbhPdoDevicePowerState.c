/*
 * XREFs of UsbhPdoDevicePowerState @ 0x14000EBA4
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1400302B0 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x14000C7AC (UsbhEtwLogDevicePowerEvent.c)
 *     GET_FDO_POWER_STATE @ 0x14000DD54 (GET_FDO_POWER_STATE.c)
 *     UsbhPdoSetDx @ 0x14000E090 (UsbhPdoSetDx.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     UsbhSshSetPortsBusyState @ 0x14000FDA0 (UsbhSshSetPortsBusyState.c)
 *     UsbhSet_Pdo_Dx @ 0x140010FD8 (UsbhSet_Pdo_Dx.c)
 *     UsbhSetPdoIdleReady @ 0x140017984 (UsbhSetPdoIdleReady.c)
 *     UsbhClearPdoIdleReady @ 0x140017A4C (UsbhClearPdoIdleReady.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhSet_D0_wQueued_Action @ 0x140030640 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x140031570 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x1400316B0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14003173C (UsbhReleaseFdoPwrLock.c)
 *     UsbhQueueWorkItemEx @ 0x140032140 (UsbhQueueWorkItemEx.c)
 *     UsbhSetPdoPowerState @ 0x140032544 (UsbhSetPdoPowerState.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_BusDisconnect @ 0x140043EDC (UsbhPCE_BusDisconnect.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPdoDevicePowerState(__int64 a1, struct _DEVICE_OBJECT *a2, IRP *a3)
{
  _DWORD *v6; // r14
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  KSPIN_LOCK *v10; // rbx
  KIRQL v11; // al
  bool v12; // zf
  __int64 Pool2; // rax
  _DWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  KIRQL v17; // al
  _DWORD *v18; // rax
  KSPIN_LOCK *v19; // rcx
  int v20; // edx
  KIRQL v21; // dl
  KSPIN_LOCK *v22; // rbx
  KIRQL v23; // al
  int v24; // ecx
  int v25; // ebx
  _DWORD *v26; // rax
  int ActivityIdIrp; // eax
  const GUID *v28; // rdx
  POWER_STATE v29; // ebx
  unsigned int v30; // r12d
  _DWORD *v31; // rbx
  int v32; // edx
  _IO_STACK_LOCATION *v33; // rdi
  POWER_STATE v34; // ebx
  __int32 v35; // ebx
  __int32 v36; // ebx
  __int64 v37; // rbx
  _DWORD *v38; // rax
  _IO_STACK_LOCATION *v39; // r10
  _DWORD *v40; // r8
  __int64 Options; // rax
  __int64 v42; // r11
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r11
  __int64 v46; // r9
  __int64 v47; // rcx
  const EVENT_DESCRIPTOR *v48; // rbx
  _DWORD *v49; // rax
  int v50; // eax
  const GUID *v51; // rdx
  _DWORD *v53; // rbx
  _DWORD *v54; // rax
  __int64 v55; // r8
  int v56; // r8d
  int v57; // ebx
  int v58; // eax
  int v59; // r8d
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  _DWORD *v64; // rbx
  __int64 v65; // rdx
  int v66; // r8d
  _DWORD *v67; // rax
  int v68; // ebx
  BOOLEAN v69; // r9
  POWER_STATE State; // [rsp+68h] [rbp-98h] BYREF
  KIRQL NewIrql; // [rsp+70h] [rbp-90h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+78h] [rbp-88h] BYREF
  int v73; // [rsp+80h] [rbp-80h] BYREF
  unsigned int LowPart; // [rsp+88h] [rbp-78h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+90h] [rbp-70h]
  int v76; // [rsp+98h] [rbp-68h] BYREF
  __int16 v77; // [rsp+9Ch] [rbp-64h]
  __int16 v78; // [rsp+9Eh] [rbp-62h]
  __int16 v79; // [rsp+A0h] [rbp-60h]
  __int16 v80; // [rsp+A2h] [rbp-5Eh]
  int v81; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v82; // [rsp+ACh] [rbp-54h]
  __int16 v83; // [rsp+AEh] [rbp-52h]
  __int16 v84; // [rsp+B0h] [rbp-50h]
  __int16 v85; // [rsp+B2h] [rbp-4Eh]
  __int64 v86; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v87; // [rsp+C0h] [rbp-40h]
  __int16 v88; // [rsp+C2h] [rbp-3Eh]
  int v89; // [rsp+C4h] [rbp-3Ch]
  int v90; // [rsp+C8h] [rbp-38h]
  int v91; // [rsp+CCh] [rbp-34h]
  int v92; // [rsp+D0h] [rbp-30h]
  int v93; // [rsp+D4h] [rbp-2Ch]
  int v94; // [rsp+D8h] [rbp-28h]
  int v95; // [rsp+DCh] [rbp-24h]
  int v96; // [rsp+E0h] [rbp-20h]
  __int64 v97; // [rsp+E8h] [rbp-18h] BYREF
  __int16 v98; // [rsp+F0h] [rbp-10h]
  __int16 v99; // [rsp+F2h] [rbp-Eh]
  int v100; // [rsp+F4h] [rbp-Ch]
  int v101; // [rsp+F8h] [rbp-8h]
  int v102; // [rsp+FCh] [rbp-4h]
  int v103; // [rsp+100h] [rbp+0h]
  int v104; // [rsp+104h] [rbp+4h]
  int v105; // [rsp+108h] [rbp+8h]
  int v106; // [rsp+10Ch] [rbp+Ch]
  int v107; // [rsp+110h] [rbp+10h]
  __int128 v108; // [rsp+118h] [rbp+18h] BYREF
  __int128 v109; // [rsp+128h] [rbp+28h] BYREF

  v6 = PdoExt((__int64)a2);
  FdoExt(a1);
  v7 = PdoExt((__int64)a2) + 236;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  State.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1682990192;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = a3;
      }
    }
  }
  v10 = (KSPIN_LOCK *)PdoExt((__int64)a2);
  SpinLock = v10 + 152;
  v11 = KeAcquireSpinLockRaiseToDpc(v10 + 152);
  v12 = *((_DWORD *)v10 + 196) == 2;
  NewIrql = v11;
  if ( !v12 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = a3;
      v14 = v10 + 153;
      *(_DWORD *)(Pool2 + 32) = 0;
      *(_DWORD *)Pool2 = 1464815728;
      v15 = (_QWORD *)(Pool2 + 8);
      v16 = (_QWORD *)*((_QWORD *)v14 + 1);
      if ( (_DWORD *)*v16 != v14 )
        __fastfail(3u);
      *v15 = v14;
      v15[1] = v16;
      *v16 = v15;
      *((_QWORD *)v14 + 1) = v15;
    }
    else
    {
      ++*((_DWORD *)v10 + 316);
    }
    KeReleaseSpinLock(SpinLock, NewIrql);
    v17 = KeAcquireSpinLockRaiseToDpc(&HubG);
    v7[34] = 1;
    *((_BYTE *)v7 + 132) = v17;
    v7[22] = 2018460752;
    v7[23] = 12;
    qword_14006F5A0 = (__int64)v7;
    *((_QWORD *)v7 + 3) = KeGetCurrentThread();
    v18 = PdoExt((__int64)a2);
    v19 = &HubG;
    v20 = v18[281];
    v7[34] = 0;
    v12 = v20 == 3;
    qword_14006F5A0 = 0LL;
    v7[22] = 1734964085;
    v21 = *((_BYTE *)v7 + 132);
    if ( !v12 )
    {
      v30 = -1073741810;
      goto LABEL_20;
    }
    KeReleaseSpinLock(&HubG, v21);
    v22 = (KSPIN_LOCK *)FdoExt(a1);
    v23 = KeAcquireSpinLockRaiseToDpc(v22 + 632);
    v24 = *((_DWORD *)v22 + 1043);
    *((_BYTE *)v22 + 5064) = v23;
    v7[10] = v24;
    v7[11] = 126;
    v7[8] = 844055622;
    v7[9] = 1986356304;
    *((_QWORD *)v7 + 3) = KeGetCurrentThread();
    v22[168] = (KSPIN_LOCK)v7;
    v25 = PdoExt((__int64)a2)[282];
    if ( State.SystemState != PowerSystemWorking )
    {
      if ( State.SystemState != PowerSystemSleeping1 && (unsigned int)(State.SystemState - 3) >= 2 )
      {
        v30 = -1073741811;
        UsbhReleaseFdoPwrLock(a1, v7);
        goto LABEL_21;
      }
      v73 = 0;
      v108 = 0LL;
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( dword_14006F690 )
      {
        v26 = FdoExt(*((_QWORD *)v6 + 148));
        v76 = v26[1298];
        v77 = *((_WORD *)v26 + 2598);
        v78 = v26[1300];
        v79 = *((_WORD *)v26 + 2614);
        v80 = *((_WORD *)v26 + 2615);
        v86 = *((_QWORD *)v6 + 145);
        v87 = *((_WORD *)v6 + 704);
        v88 = *((_WORD *)v6 + 705);
        v89 = v6[672];
        v90 = v6[673];
        v91 = v6[674];
        v92 = v6[675];
        v93 = v6[676];
        v94 = v6[677];
        v95 = v6[678];
        v96 = v6[292];
        if ( g_IoGetActivityIdIrp )
          ActivityIdIrp = g_IoGetActivityIdIrp(a3, &v108);
        else
          ActivityIdIrp = -1073741823;
        v28 = (const GUID *)&v108;
        if ( ActivityIdIrp < 0 )
          v28 = 0LL;
        UsbhEtwWrite(
          &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_DISPATCH,
          v28,
          &v76,
          12LL,
          &v86,
          44LL,
          &LowPart,
          4LL,
          &v73,
          4LL,
          0LL);
      }
      v29.SystemState = State.SystemState;
      if ( PdoExt((__int64)a2)[197] != State.SystemState )
      {
        if ( v6[288] == 2 )
        {
          if ( !CurrentStackLocation->Parameters.Create.EaLength )
          {
            if ( !*((_BYTE *)v6 + 2733) )
            {
              *((_BYTE *)v6 + 2733) = 1;
              UsbhQueueWorkItemEx(a1, 1, (unsigned int)&UsbhSetPdoSelectiveSuspendedKey, (_DWORD)a2, 0, 2001228627, 0LL);
            }
            if ( v29.SystemState == PowerSystemSleeping3
              && (PdoExt((__int64)a2)[295] & 0x10) != 0
              && (v6[355] & 0xC00000) == 0xC00000 )
            {
              KeSetEvent((PRKEVENT)(v6 + 730), 0, 0);
              v6[355] = v6[355] & 0xFAFFFFFF | 0x4000000;
            }
          }
          v30 = UsbhPdoSetDx((__int64)v7, (__int64)a2, (__int64)a3);
        }
        else
        {
          v30 = -1073741130;
          UsbhReleaseFdoPwrLock(a1, v7);
        }
LABEL_22:
        if ( (unsigned __int8)Usb_Disconnected(v30) )
          UsbhPCE_BusDisconnect(a1, v7, *((unsigned __int16 *)v6 + 714));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            v32,
            1,
            22,
            (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
            *((_WORD *)v6 + 714),
            v29.SystemState);
        v33 = CurrentStackLocation;
        v34.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
        PdoExt((__int64)a2)[197] = v34.SystemState;
        PoSetPowerState(a2, DevicePowerState, v34);
        v35 = v34.SystemState - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 && (unsigned int)(v36 - 1) >= 2 )
            goto LABEL_28;
          v53 = PdoExt((__int64)a2);
          v54 = PdoExt((__int64)a2);
          v55 = 1LL;
        }
        else
        {
          v53 = PdoExt((__int64)a2);
          v54 = PdoExt((__int64)a2);
          v55 = 2LL;
        }
        UsbhSshSetPortsBusyState(*((_QWORD *)v54 + 148), *((unsigned __int16 *)v53 + 714), v55);
LABEL_28:
        *((_QWORD *)v6 + 320) = MEMORY[0xFFFFF78000000014];
        v37 = *((_QWORD *)PdoExt((__int64)a2) + 148);
        v38 = PdoExt((__int64)a2);
        v39 = a3->Tail.Overlay.CurrentStackLocation;
        v40 = v38;
        Options = v39->Parameters.Create.Options;
        if ( (unsigned int)Options <= 1 )
        {
          v42 = *(_QWORD *)&v40[2 * Options + 200];
          if ( (UsbhLogMask & 0x10) != 0 )
          {
            if ( v37 )
            {
              v43 = *(_QWORD *)(v37 + 64);
              if ( v43 )
              {
                v44 = *(_QWORD *)(v43 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
                *(_DWORD *)v44 = 827212880;
                *(_QWORD *)(v44 + 8) = 0LL;
                *(_QWORD *)(v44 + 16) = v42;
                *(_QWORD *)(v44 + 24) = a3;
              }
            }
          }
          v45 = *(_QWORD *)&v40[2 * (unsigned int)Options + 204];
          if ( (UsbhLogMask & 0x10) != 0 )
          {
            if ( v37 )
            {
              v46 = *(_QWORD *)(v37 + 64);
              if ( v46 )
              {
                v47 = *(_QWORD *)(v46 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
                *(_DWORD *)v47 = 843990096;
                *(_QWORD *)(v47 + 8) = 0LL;
                *(_QWORD *)(v47 + 16) = v45;
                *(_QWORD *)(v47 + 24) = v39;
              }
            }
          }
          *(_QWORD *)&v40[2 * (unsigned int)Options + 200] = 0LL;
          *(_QWORD *)&v40[2 * (unsigned int)Options + 204] = 0LL;
          v40[(unsigned int)Options + 208] = 2101;
          PoStartNextPowerIrp(a3);
        }
        v12 = State.SystemState == PowerSystemWorking;
        v48 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE;
        State.SystemState = PowerSystemUnspecified;
        if ( !v12 )
          v48 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_COMPLETE;
        LODWORD(CurrentStackLocation) = v33->Parameters.Read.ByteOffset.LowPart;
        v109 = 0LL;
        if ( dword_14006F690 )
        {
          v49 = FdoExt(*((_QWORD *)v6 + 148));
          v81 = v49[1298];
          v82 = *((_WORD *)v49 + 2598);
          v83 = v49[1300];
          v84 = *((_WORD *)v49 + 2614);
          v85 = *((_WORD *)v49 + 2615);
          v97 = *((_QWORD *)v6 + 145);
          v98 = *((_WORD *)v6 + 704);
          v99 = *((_WORD *)v6 + 705);
          v100 = v6[672];
          v101 = v6[673];
          v102 = v6[674];
          v103 = v6[675];
          v104 = v6[676];
          v105 = v6[677];
          v106 = v6[678];
          v107 = v6[292];
          if ( g_IoGetActivityIdIrp )
            v50 = g_IoGetActivityIdIrp(a3, &v109);
          else
            v50 = -1073741823;
          v51 = (const GUID *)&v109;
          if ( v50 < 0 )
            v51 = 0LL;
          UsbhEtwWrite(v48, v51, &v81, 12LL, &v97, 44LL, &CurrentStackLocation, 4LL, &State, 4LL, 0LL);
        }
        a3->IoStatus.Status = v30;
        IofCompleteRequest(a3, 0);
        UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a3);
        return v30;
      }
      v30 = 0;
      v31 = FdoExt(a1);
      FdoExt(*((_QWORD *)v7 + 1));
      v7[8] = 1734964085;
      v19 = (KSPIN_LOCK *)(v31 + 1264);
      v21 = *((_BYTE *)v31 + 5064);
      *((_QWORD *)v31 + 168) = 0LL;
LABEL_20:
      KeReleaseSpinLock(v19, v21);
LABEL_21:
      LOBYTE(v29.SystemState) = State.SystemState;
      goto LABEL_22;
    }
    UsbhEtwLogDevicePowerEvent(
      (__int64)v6,
      (__int64)a3,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_DISPATCH,
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
      0);
    *((_QWORD *)v6 + 319) = MEMORY[0xFFFFF78000000014];
    v57 = v25 - 1;
    if ( v57 )
    {
      if ( v57 == 6 )
      {
        UsbhSetPdoPowerState((_DWORD)v7, (_DWORD)a2, v56, 7, 13);
        UsbhReleaseFdoPwrLock(a1, v7);
        Log(a1, 16, 2003059760, 0, *((unsigned __int16 *)v6 + 714));
        KeWaitForSingleObject(v6 + 590, Executive, 0, v69, 0LL);
        v30 = 0;
        goto LABEL_21;
      }
      v58 = GET_FDO_POWER_STATE((__int64)v7) - 201;
      if ( !v58 || (v60 = v58 - 5) == 0 || (v61 = v60 - 3) == 0 || (v62 = v61 - 1) == 0 || (v63 = v62 - 1) == 0 )
      {
        if ( (int)UsbhSet_D0_wQueued_Action(a1, v7, a2, a3) >= 0 )
        {
          KeResetEvent((PRKEVENT)(v6 + 590));
          v64 = PdoExt((__int64)a2);
          FdoExt(*((_QWORD *)v7 + 1));
          v65 = ((unsigned __int8)v64[2] + 1) & 7;
          v64[2] = v65;
          v65 *= 32LL;
          *(_DWORD *)((char *)v64 + v65 + 272) = 6;
          *(_DWORD *)((char *)v64 + v65 + 276) = v64[282];
          *(_DWORD *)((char *)v64 + v65 + 280) = 2;
          v64[282] = 2;
          UsbhReleaseFdoPwrLock(a1, v7);
          return 259LL;
        }
        goto LABEL_83;
      }
      if ( (unsigned int)(v63 - 1) < 2 )
      {
LABEL_83:
        UsbhSetPdoPowerState((_DWORD)v7, (_DWORD)a2, v59, 6, 3);
        v68 = GET_FDO_POWER_STATE((__int64)v7);
        UsbhReleaseFdoPwrLock(a1, v7);
        v30 = -1073741810;
        if ( v68 != 213 )
          v30 = 0;
        goto LABEL_21;
      }
      UsbhSetPdoPowerState((_DWORD)v7, (_DWORD)a2, v59, 6, 3);
    }
    else
    {
      UsbhSetPdoPowerState((_DWORD)v7, (_DWORD)a2, v56, 1, 2);
    }
    UsbhReleaseFdoPwrLock(a1, v7);
    v30 = 0;
    goto LABEL_21;
  }
  KeReleaseSpinLock(v10 + 152, v11);
  if ( *((_BYTE *)v6 + 2740) )
  {
    UsbhAcquireFdoPwrLock(a1, v7, 126LL, 1986356304LL);
    if ( State.SystemState == PowerSystemWorking )
    {
      UsbhSetPdoPowerState((_DWORD)v7, (_DWORD)a2, v66, 1, 2);
      UsbhReleaseFdoPwrLock(a1, v7);
      UsbhClearPdoIdleReady(a1, a2, a3);
    }
    else
    {
      UsbhSetPdoPowerState((_DWORD)v7, (_DWORD)a2, v66, 4, 4);
      UsbhReleaseFdoPwrLock(a1, v7);
      UsbhSetPdoIdleReady(a1, a2, a3);
    }
    UsbhSet_Pdo_Dx(a2, State);
  }
  Log(a1, 16, 1886545441, -1073741810, (__int64)a3);
  *((_QWORD *)v6 + 320) = MEMORY[0xFFFFF78000000014];
  v67 = PdoExt((__int64)a2);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v67 + 148), a2, a3, 1910LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
