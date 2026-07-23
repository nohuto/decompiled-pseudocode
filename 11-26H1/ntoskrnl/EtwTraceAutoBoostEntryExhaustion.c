/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x14026F91C
 * Callers:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbTryReclaimOrphanedEntries@LegacyAutoBoost@@YAKPEAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRIES@@@Z @ 0x1404292F8 (-KiAbTryReclaimOrphanedEntries@LegacyAutoBoost@@YAKPEAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRIES@@@Z.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x140528AFC (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0;
  if ( !(unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline() )
  {
    v4 = *(_QWORD *)(a1 + 544);
    v6 = *(_DWORD *)(a1 + 1296);
    v5 = a2;
    v8[0] = &v5;
    v8[1] = 16LL;
    EtwTraceSiloKernelEvent(*(_QWORD *)(v4 + 1520), (int)v8, 1, 0xA0001000, 1348, 6298114);
  }
}
