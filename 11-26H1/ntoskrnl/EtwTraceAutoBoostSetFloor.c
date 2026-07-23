/*
 * XREFs of EtwTraceAutoBoostSetFloor @ 0x1404AAB54
 * Callers:
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026DBD4 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     MmGetMinWsPagePriority @ 0x1404AACF0 (MmGetMinWsPagePriority.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404AAD00 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAutoBoostSetFloor(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10)
{
  int IsEnabledWithReporting; // eax
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  int v13; // [rsp+38h] [rbp-28h]
  char v14; // [rsp+3Ch] [rbp-24h]
  char v15; // [rsp+3Dh] [rbp-23h]
  char v16; // [rsp+3Eh] [rbp-22h]
  char v17; // [rsp+3Fh] [rbp-21h]
  _QWORD v18[2]; // [rsp+40h] [rbp-20h] BYREF

  v13 = *(_DWORD *)(a1 + 1296);
  v15 = a6;
  v12 = a2;
  v14 = a3;
  v16 = a4 & 7 | (8 * (a7 & 7 | (8 * ((2 * a8) | a5 & 1))));
  v17 = (4 * (a10 & 3)) | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  MmGetMinWsPagePriority(0LL);
  IsEnabledWithReporting = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(0LL);
  v18[1] = 16LL;
  v18[0] = &v12;
  EtwTraceSiloKernelEvent(
    *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL),
    (int)v18,
    1,
    0xA0001000,
    1346,
    IsEnabledWithReporting != 0 ? 6295042 : 6294018);
}
