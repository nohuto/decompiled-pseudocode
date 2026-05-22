/*
 * XREFs of ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF168
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024590 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024E38 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800C0030 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C1384 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     _lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator() @ 0x1801BF240 (_lambda_00acc3e30bec0ac7fd9c7cd13d293566_--operator().c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z @ 0x1801C0188 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801C06F0 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C2128 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801C3310 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801C3880 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801C3AD0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C52A0 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C54F4 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C72D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C7C2C (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1801C95D8 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800775A0 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall MPCConstantManager::GetConstant<float>(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  v7 = *a3;
  return MPCConstantManager::GetStaticConstant<float>(a1, v5, &v7);
}
