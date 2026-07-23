/*
 * XREFs of HalRequestSoftwareInterrupt @ 0x14021F9A0
 * Callers:
 *     KeUpdateTotalCyclesCurrentThread @ 0x14021CAF0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiEndInterruptCycleAccumulation @ 0x14021E2A0 (KiEndInterruptCycleAccumulation.c)
 *     KiCheckForTimerExpiration @ 0x140220830 (KiCheckForTimerExpiration.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiStartThreadCycleAccumulation @ 0x140336EE0 (KiStartThreadCycleAccumulation.c)
 *     KiRequestTimer2Expiration @ 0x1404475C4 (KiRequestTimer2Expiration.c)
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 */

__int64 __fastcall HalRequestSoftwareInterrupt(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v3; // rdx
  char v5; // al
  __int64 v6; // r10
  int v7; // r9d
  char v8; // r11
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+24h] [rbp-24h]

  v10 = 0LL;
  v2 = a1;
  if ( (KiTrapFeatures & 0x10) != 0 )
  {
    if ( (unsigned __int8)(a1 - 1) > 1u )
      goto LABEL_3;
    v5 = HalpDisableInterrupts(a1, a2, (unsigned __int8)a1);
    v7 = *(_DWORD *)(v6 + 168);
    v8 = v5;
    *(_DWORD *)(v6 + 168) = v7 | (1 << v2);
    if ( !v7 )
      __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
    if ( v8 )
      _enable();
  }
  if ( v2 == 1 )
  {
    v3 = 31LL;
    goto LABEL_4;
  }
LABEL_3:
  v3 = 47LL;
LABEL_4:
  v9 = 5;
  return HalpInterruptSendIpi(&v9, v3);
}
