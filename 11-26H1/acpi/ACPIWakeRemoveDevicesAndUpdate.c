/*
 * XREFs of ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90
 * Callers:
 *     OSNotifyDeviceWake @ 0x14001EBC8 (OSNotifyDeviceWake.c)
 *     ACPIWakeEmptyRequestQueue @ 0x14003202C (ACPIWakeEmptyRequestQueue.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1400320C0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140032208 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1400328B0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032C00 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x14003C468 (ACPIWakeDisconnectWakeInterrupts.c)
 *     ACPIRootPowerCallBack @ 0x140043150 (ACPIRootPowerCallBack.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x14004E18C (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPITableLoadCallBack @ 0x1400510E0 (ACPITableLoadCallBack.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIGpeIndexToByteIndex @ 0x1400201A8 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x14002131C (ACPIGpeIndexToGpeRegister.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memset @ 0x140072740 (memset.c)
 */

void __fastcall ACPIWakeRemoveDevicesAndUpdate(__int64 a1, __int64 a2)
{
  char v4; // si
  unsigned __int16 *v5; // rcx
  unsigned int i; // r10d
  __int64 v7; // r9
  __int64 *v8; // rbx
  __int64 *v9; // rdx
  __int64 *v10; // r8
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13; // edi
  unsigned int v14; // ebp
  __int64 v15; // r14
  unsigned __int8 v16; // cl
  int (__fastcall *v17)(__int64); // rax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  void *v20; // rdx
  int (__fastcall *v21)(__int64, void *, _QWORD); // rax
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rax
  __int64 **v25; // rcx
  __int64 **v26; // rax
  __int64 v27; // rax
  const char *v28; // rdx
  const char *v29; // rcx
  char v30; // [rsp+90h] [rbp+18h] BYREF

  if ( *((_BYTE *)AcpiInformation + 133) )
  {
    v4 = 0;
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  }
  else
  {
    v4 = 1;
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    v5 = (unsigned __int16 *)AcpiInformation;
    for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); v5 = (unsigned __int16 *)AcpiInformation )
    {
      v7 = i++;
      *((_BYTE *)GpeCurEnable + v7) &= *((_BYTE *)GpeSpecialHandler + v7) | (unsigned __int8)~(*((_BYTE *)GpeWakeEnable
                                                                                               + v7) | *((_BYTE *)GpeWakeHandler + v7));
    }
    memset(GpeWakeEnable, 0, v5[51]);
  }
  v8 = (__int64 *)AcpiPowerWaitWakeList;
  if ( (__int64 *)AcpiPowerWaitWakeList != &AcpiPowerWaitWakeList )
  {
    while ( 1 )
    {
      v9 = v8;
      v10 = v8;
      v8 = (__int64 *)*v8;
      v11 = v9[5];
      if ( v11 == a1 )
      {
        _InterlockedExchange64((volatile __int64 *)(v9[25] + 104), 0LL);
        if ( !*(_BYTE *)(v9[25] + 68) )
        {
          v24 = *v10;
          if ( *(__int64 **)(*v10 + 8) != v9
            || (v25 = (__int64 **)v9[1], *v25 != v9)
            || (*v25 = (__int64 *)v24, *(_QWORD *)(v24 + 8) = v25, v26 = *(__int64 ***)(a2 + 8), *v26 != (__int64 *)a2) )
          {
            __fastfail(3u);
          }
          *v10 = a2;
          v9[1] = (__int64)v26;
          *v26 = v9;
          *(_QWORD *)(a2 + 8) = v9;
          *((_DWORD *)v9 + 14) &= ~0x40u;
          *((_DWORD *)v9 + 27) |= 2u;
        }
        goto LABEL_19;
      }
      if ( v4 && (*(_QWORD *)(v11 + 1008) & 0x500000000LL) == 0 && *((_DWORD *)v9 + 26) >= AcpiMostRecentSleepState )
      {
        if ( *(_BYTE *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)(v11 + 504), v9, v10) + GpeMap) )
        {
          v27 = *(_QWORD *)(v11 + 8);
          v28 = byte_140075A82;
          v29 = byte_140075A82;
          if ( (v27 & 0x200000000000LL) != 0 )
          {
            v28 = *(const char **)(v11 + 608);
            if ( (v27 & 0x400000000000LL) != 0 )
              v29 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0x11u,
              0x18u,
              (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
              *(_DWORD *)(v11 + 504),
              v11,
              v28,
              v29);
          goto LABEL_19;
        }
        v12 = ACPIGpeIndexToGpeRegister(*(unsigned int *)(v11 + 504));
        v13 = 1 << (*(_BYTE *)(v11 + 504) & 7);
        v14 = v12;
        v15 = v12;
        v16 = *((_BYTE *)GpeWakeEnable + v12);
        if ( (v16 & (unsigned __int8)v13) == 0 )
          break;
      }
LABEL_19:
      if ( v8 == &AcpiPowerWaitWakeList )
        goto LABEL_20;
    }
    v30 = v13;
    *((_BYTE *)GpeWakeEnable + v12) = v13 | v16;
    v17 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
    if ( v14 >= *((unsigned __int16 *)AcpiInformation + 43) )
    {
      if ( v17(7LL) < 0 )
      {
LABEL_16:
        if ( ((unsigned __int8)v13 & *((_BYTE *)GpeEnable + v15)) != 0 )
        {
          if ( ((unsigned __int8)v13 & *((_BYTE *)GpeSpecialHandler + v15)) == 0 )
            *((_BYTE *)GpeWakeHandler + v15) |= v13;
        }
        else if ( ((unsigned __int8)v13 & *((_BYTE *)GpeCurEnable + v15)) == 0 )
        {
          *((_BYTE *)GpeIsLevel + v15) |= v13;
          *((_BYTE *)GpeCurEnable + v15) |= v13;
        }
        goto LABEL_19;
      }
      v14 -= *((unsigned __int16 *)AcpiInformation + 43);
      v18 = 7LL;
    }
    else
    {
      if ( v17(6LL) < 0 )
        goto LABEL_16;
      v18 = 6LL;
    }
    (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
      v18,
      v14,
      &v30,
      1LL,
      0LL);
    goto LABEL_16;
  }
LABEL_20:
  if ( v4 )
  {
    v19 = 0;
    if ( *((_WORD *)AcpiInformation + 51) )
    {
      while ( 1 )
      {
        v20 = GpeCurEnable;
        if ( AcpiPowerLeavingS0 )
          *((_BYTE *)GpeCurEnable + v19) &= ~*((_BYTE *)GpeWakeEnable + v19);
        else
          *((_BYTE *)GpeCurEnable + v19) |= *((_BYTE *)GpeWakeEnable + v19) & (unsigned __int8)~*((_BYTE *)GpePending
                                                                                                + v19);
        v30 = *((_BYTE *)GpeCurEnable + v19);
        v21 = *(int (__fastcall **)(__int64, void *, _QWORD))(PmHalDispatchTable + 120);
        if ( v19 >= *((unsigned __int16 *)AcpiInformation + 43) )
          break;
        if ( v21(6LL, v20, v19) >= 0 )
        {
          v22 = 6LL;
          v23 = *((unsigned __int16 *)AcpiInformation + 43);
LABEL_27:
          (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
            v22,
            v19 + v23,
            &v30,
            1LL,
            0LL);
        }
LABEL_28:
        if ( ++v19 >= *((unsigned __int16 *)AcpiInformation + 51) )
          goto LABEL_29;
      }
      if ( v21(7LL, v20, v19) < 0 )
        goto LABEL_28;
      v22 = 7LL;
      v23 = *((unsigned __int16 *)AcpiInformation + 49) - *((unsigned __int16 *)AcpiInformation + 43);
      goto LABEL_27;
    }
  }
LABEL_29:
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
