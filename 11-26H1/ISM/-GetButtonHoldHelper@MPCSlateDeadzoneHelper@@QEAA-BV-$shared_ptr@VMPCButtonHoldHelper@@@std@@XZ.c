/*
 * XREFs of ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800BFA70
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024590 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800C0A20 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C13C4 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C1884 (-TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C2128 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C47E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C4F4C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MPCSlateDeadzoneHelper::GetButtonHoldHelper(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a2 = *(_QWORD *)(a1 + 16);
  a2[1] = *(_QWORD *)(a1 + 24);
  return a2;
}
