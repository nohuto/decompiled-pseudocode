/*
 * XREFs of EtwTraceAutoBoostClearFloor @ 0x1404B15B0
 * Callers:
 *     ?KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1404342C4 (-KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PE.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216A20 (EtwTraceSiloKernelEvent.c)
 *     MmGetMinWsPagePriority @ 0x1404B1660 (MmGetMinWsPagePriority.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404B1670 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAutoBoostClearFloor(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int IsEnabledWithReporting; // eax
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 1296);
  v6 = a2;
  v7 = v3;
  v8 = a3;
  MmGetMinWsPagePriority(0LL);
  IsEnabledWithReporting = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(0LL);
  v9[1] = 16LL;
  v9[0] = &v6;
  EtwTraceSiloKernelEvent(
    *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL),
    (int)v9,
    1,
    0xA0001000,
    1347,
    IsEnabledWithReporting != 0 ? 6299138 : 6298114);
}
