/*
 * XREFs of NvmSubsystemReset @ 0x140019374
 * Callers:
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 * Callees:
 *     CheckDpcWatchdogTimerExpireSoon @ 0x140006AC0 (CheckDpcWatchdogTimerExpireSoon.c)
 */

char __fastcall NvmSubsystemReset(__int64 a1)
{
  char v2; // di
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // esi
  unsigned int v6; // ebp
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 32LL) = 1314278757;
  _InterlockedOr(v8, 0);
  StorPortStallExecution(5000LL);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 204) / 0xAu;
  while ( (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 1) != 0 )
  {
    if ( v5 >= v6 )
      goto LABEL_7;
    if ( CheckDpcWatchdogTimerExpireSoon(a1, 0, v3, v4) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4020));
LABEL_7:
      ++*(_DWORD *)(a1 + 4156);
      return v2;
    }
    StorPortStallExecution(10000LL);
    ++v5;
  }
  ++*(_DWORD *)(a1 + 4152);
  return 1;
}
