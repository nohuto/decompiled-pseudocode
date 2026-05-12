/*
 * XREFs of RaidStallDeviceQueue @ 0x140028300
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidSetUnitPauseTimer @ 0x140028BD4 (RaidSetUnitPauseTimer.c)
 *     RaidPauseDeviceQueue @ 0x140029448 (RaidPauseDeviceQueue.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RiDisableDeviceQueueFastPath @ 0x14002DED0 (RiDisableDeviceQueueFastPath.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     RiIsDeviceQueueBusy @ 0x14005C9A4 (RiIsDeviceQueueBusy.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaidStallDeviceQueue(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  volatile LONG *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int8 v14; // cl
  int v15; // r13d
  KIRQL v16; // si
  __int16 v17; // cx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  __int64 v20; // r9
  KIRQL OldIrql; // [rsp+40h] [rbp-29h]
  _OWORD v22[2]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v23; // [rsp+68h] [rbp-1h]
  __int64 v24; // [rsp+78h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_c322fa6968f23b6028136a62a823132b_Traceguids, a2, a3);
  }
  if ( a2 && a3 )
  {
    v8 = (volatile LONG *)(a1 + 72);
    LOBYTE(v11) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    OldIrql = v11;
    if ( *(int *)(a1 + 24) > 0 || (unsigned int)RiIsDeviceQueueBusy(a1, v9, v10, v11) == 1 )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v11);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_c322fa6968f23b6028136a62a823132b_Traceguids, a2, a3);
      }
    }
    else
    {
      if ( a2 == 1 )
      {
        v13 = *(_QWORD *)(a4 + 24);
        if ( v13 )
          v14 = *(_BYTE *)(v13 + 56);
        else
          v14 = -1;
        v15 = (unsigned __int8)BYTE2(*(_DWORD *)(a4 + 104)) | (((unsigned __int8)BYTE1(*(_DWORD *)(a4 + 104)) | (((unsigned __int8)*(_DWORD *)(a4 + 104) | (v14 << 8)) << 8)) << 8);
        RaidPauseDeviceQueue(a1);
        memset(v22, 0, sizeof(v22));
        v24 = 0LL;
        v23 = 0LL;
        if ( *(_QWORD *)(a4 + 32) && RaidIsUnitControlSupported(a4, 31) )
        {
          v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a4 + 32) + 24LL));
          ++*(_DWORD *)(*(_QWORD *)(a4 + 32) + 84LL);
          *(_QWORD *)&v22[0] = 0x3800000038LL;
          DWORD2(v22[0]) = 2;
          if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline() )
          {
            HIDWORD(v23) = 4;
            WORD4(v23) = 1;
            v17 = *(_WORD *)(*(_QWORD *)(a4 + 24) + 56LL);
            LOWORD(v24) = *(_WORD *)(a4 + 104);
            BYTE2(v24) = *(_BYTE *)(a4 + 106);
            WORD5(v23) = v17;
          }
          v18 = *(_DWORD **)(a4 + 24);
          if ( *v18 == 1094997074 )
          {
            v19 = v18 + 94;
          }
          else if ( *v18 == 1314275652 )
          {
            v19 = v18 + 42;
          }
          else
          {
            v19 = 0LL;
          }
          RaCallMiniportUnitControl(v19, 31LL, v22);
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a4 + 32) + 24LL), v16);
        }
        if ( (qword_140172448 & 0x200) != 0 )
          DbgLogRequest(*(_QWORD *)(a4 + 24), 4, (_DWORD)retaddr, v15, *(int *)(a4 + 744), 0LL, 0LL);
      }
      else if ( a2 == 2 )
      {
        LOBYTE(v12) = 1;
        RiDisableDeviceQueueFastPath(a1, v12);
        if ( (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF) != 0 )
        {
          v20 = (unsigned __int64)(a3 * (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF)) / 0x64;
          if ( !(_DWORD)v20 )
            v20 = 1LL;
          *(_DWORD *)(a1 + 28) = v20;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 13LL, &WPP_c322fa6968f23b6028136a62a823132b_Traceguids, v20);
          }
        }
      }
      ExReleaseSpinLockExclusive(v8, OldIrql);
      if ( a2 == 1 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_c322fa6968f23b6028136a62a823132b_Traceguids, a3);
        }
        RaidSetUnitPauseTimer(a4, a3);
      }
    }
  }
}
