/*
 * XREFs of HalpTimerEnableHypervisorTimer @ 0x140501D24
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x140586D60 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x14043349C (HalpInterruptGsiToLine.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerEnableHypervisorTimer(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  bool v4; // sf
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // eax
  unsigned __int8 v9; // di
  int v10; // ebx
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v12[2]; // [rsp+48h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+54h] [rbp-2Ch]
  int v15; // [rsp+5Ch] [rbp-24h]
  __int128 *v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+68h] [rbp-18h] BYREF

  v2 = HalpHypervisorHpet;
  v14 = 0LL;
  v15 = 0;
  v11 = 0LL;
  v17 = 0LL;
  if ( HalpHypervisorHpet && (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpHypervisorHpet + 72), a2) >= 0 )
  {
    if ( (*(_DWORD *)(v2 + 184) & 0x10) != 0 )
    {
      LOBYTE(v3) = 1;
      v4 = (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 72), v3) < 0;
    }
    else
    {
      v7 = *(_DWORD *)(v2 + 224);
      if ( (v7 & 0x200) != 0 )
      {
        if ( (int)HalpInterruptGsiToLine(*(unsigned int *)(v2 + 88), &v11) < 0 )
          return;
      }
      else if ( (v7 & 0x100) != 0 )
      {
        v8 = *(_DWORD *)(v2 + 84);
        if ( v8 >= 8 )
        {
          LODWORD(v11) = 45057;
          v8 -= 8;
        }
        else
        {
          LODWORD(v11) = 45056;
        }
        HIDWORD(v11) = v8;
      }
      v13 = 3;
      v16 = &v17;
      v12[0] = -1;
      v12[1] = 1;
      v9 = HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
      v10 = HalpInterruptSetLineState(
              &v11,
              0xD4u,
              15,
              *(_DWORD *)(v2 + 96),
              *(_DWORD *)(v2 + 92),
              (__int64)&v13,
              (__int64)v12);
      HalpReleaseHighLevelLock((KSPIN_LOCK *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink, v9);
      v4 = v10 < 0;
    }
    if ( !v4 )
      guard_dispatch_icall_no_overrides(v6, v5);
  }
}
