/*
 * XREFs of ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180065AE4
 * Callers:
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18003E9C0 (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180083F60 (-RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 */

void __fastcall RmpPowerBoostArmWatchdog(struct _RM_POWERBOOST_CONTEXT *a1)
{
  int v1; // ebx
  int UnbiasedInterruptTimeMs64; // eax
  int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 2);
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  v4 = *((_DWORD *)a1 + 16);
  v5 = UnbiasedInterruptTimeMs64 - v1;
  if ( v5 >= 0xBB8 )
  {
    *((_DWORD *)a1 + 16) = v4 & 0xFFFFFFFE;
  }
  else
  {
    *((_DWORD *)a1 + 16) = v4 | 1;
    v6 = -10000LL * (3000 - v5);
    TpSetTimer(*((_QWORD *)a1 + 3), &v6, 0LL, 0LL);
  }
}
