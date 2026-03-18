/*
 * XREFs of NVMeControllerPowerUp @ 0x1400075D0
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 *     NVMeControllerStartFailureEventLog @ 0x140007370 (NVMeControllerStartFailureEventLog.c)
 *     NVMeQueuesReInit @ 0x1400076B0 (NVMeQueuesReInit.c)
 *     ControllerReset @ 0x140007840 (ControllerReset.c)
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x14002ABD0 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 */

__int64 __fastcall NVMeControllerPowerUp(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int inited; // edi
  int v4; // edx
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rdx

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 6u);
  *(_DWORD *)(a1 + 24) &= ~4u;
  NVMeQueuesReInit();
  LOBYTE(v2) = 1;
  inited = ControllerReset(a1, v2);
  if ( inited
    || (inited = NVMeControllerInitPart1(a1, 0)) != 0
    || (LOBYTE(v6) = 1, (inited = NVMeControllerInitPart2(a1, 0LL, v6)) != 0)
    || !NVMeControllerInitPart3(a1, 1u) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 6u);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 8u);
    if ( inited )
    {
      NVMeControllerStartFailureEventLog(a1);
      return inited;
    }
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 6u);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 8u);
  }
  v4 = *(_DWORD *)(a1 + 4064);
  if ( (v4 & 2) != 0 )
  {
    v7 = v4 & 0xFFFFFFFD;
    *(_DWORD *)(a1 + 4064) = v7;
    v8 = v7 >> 2;
    LOBYTE(v8) = v8 & 1;
    NVMeSetNonOperationalPowerStatePermissiveMode(a1, v8);
  }
  return inited;
}
