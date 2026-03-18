/*
 * XREFs of UsbhDisableTimerObject @ 0x140007330
 * Callers:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x14000EDC0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhFreeTimerObject @ 0x140038E30 (UsbhFreeTimerObject.c)
 *     Usbh_PIND_Disable_Action @ 0x14003F42C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x14003F594 (Usbh_PIND_SetAuto_Action.c)
 *     UsbhAsyncStop @ 0x14004FC58 (UsbhAsyncStop.c)
 *     UsbhHubStart @ 0x140050D10 (UsbhHubStart.c)
 *     UsbhInitCallbackWorker @ 0x140051070 (UsbhInitCallbackWorker.c)
 *     UsbhHubSSH_PnpStop @ 0x14005EBF0 (UsbhHubSSH_PnpStop.c)
 *     UsbhSshDisabled @ 0x14005EE90 (UsbhSshDisabled.c)
 *     UsbhSshEnterSx @ 0x14005F1A4 (UsbhSshEnterSx.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

void __fastcall UsbhDisableTimerObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int128 *v11; // r8
  __int64 v12; // r9
  unsigned __int16 *v13; // rcx
  int v14; // eax
  KIRQL v15; // al
  __int64 v16; // r8
  KIRQL v17; // r9
  __int64 v18; // rcx
  signed __int32 v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  signed __int32 v25; // eax
  unsigned int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  signed __int32 v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  int v36; // [rsp+7Ch] [rbp+3h]
  __int128 v37; // [rsp+84h] [rbp+Bh] BYREF
  __int64 v38; // [rsp+94h] [rbp+1Bh]

  v7 = FdoExt(a1, a2, a3, a4);
  if ( a2 )
  {
    v9 = *(unsigned int *)(a2 + 24);
    v37 = 0LL;
    v38 = 0LL;
    if ( dword_1400706F0 )
    {
      v10 = FdoExt(a1, v6, v9, v8);
      v11 = &v37;
      v12 = 5LL;
      v13 = (unsigned __int16 *)(v10 + 5210);
      v36 = *(_WORD *)(v10 + 5208) != 0;
      do
      {
        v14 = *v13;
        *(_DWORD *)v11 = v14;
        if ( v14 )
          ++v36;
        v11 = (__int128 *)((char *)v11 + 4);
        ++v13;
        --v12;
      }
      while ( v12 );
      HIDWORD(v38) = *(_DWORD *)(v10 + 2536);
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_DISABLE_TIMER, 0LL);
    }
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 3728));
    v16 = *(int *)(a2 + 4);
    v17 = v15;
    if ( _bittest(&UsbhLogMask, 0xDu) )
    {
      if ( a1 )
      {
        v18 = *(_QWORD *)(a1 + 64);
        if ( v18 )
        {
          v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 880), 0xFFFFFFFF);
          v20 = *(_DWORD *)(v18 + 884);
          v21 = *(_QWORD *)(v18 + 888);
          v22 = 32LL * ((v19 - 1) & v20);
          *(_DWORD *)(v22 + v21) = 827618148;
          *(_QWORD *)(v22 + v21 + 8) = 0LL;
          *(_QWORD *)(v22 + v21 + 16) = a2;
          *(_QWORD *)(v22 + v21 + 24) = v16;
        }
      }
    }
    v23 = *(int *)(a2 + 4);
    if ( (_DWORD)v23 == 1 )
    {
      if ( _bittest(&UsbhLogMask, 0xDu) )
      {
        if ( a1 )
        {
          v29 = *(_QWORD *)(a1 + 64);
          if ( v29 )
          {
            v30 = _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 880), 0xFFFFFFFF);
            v31 = *(_DWORD *)(v29 + 884);
            v32 = *(_QWORD *)(v29 + 888);
            v33 = 32LL * ((v30 - 1) & v31);
            *(_DWORD *)(v33 + v32) = 844395364;
            *(_QWORD *)(v33 + v32 + 8) = 0LL;
            *(_QWORD *)(v33 + v32 + 16) = a2;
            *(_QWORD *)(v33 + v32 + 24) = 1LL;
          }
        }
      }
      v34 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v34 + 8) != a2 + 56 || (v35 = *(_QWORD **)(a2 + 64), *v35 != a2 + 56) )
        __fastfail(3u);
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
    }
    else if ( _bittest(&UsbhLogMask, 0xDu) && a1 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 880), 0xFFFFFFFF);
        v26 = *(_DWORD *)(v24 + 884);
        v27 = *(_QWORD *)(v24 + 888);
        v28 = 32LL * ((v25 - 1) & v26);
        *(_DWORD *)(v28 + v27) = 861172580;
        *(_QWORD *)(v28 + v27 + 8) = 0LL;
        *(_QWORD *)(v28 + v27 + 16) = a2;
        *(_QWORD *)(v28 + v27 + 24) = v23;
      }
    }
    *(_DWORD *)(a2 + 4) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 3728), v17);
  }
}
