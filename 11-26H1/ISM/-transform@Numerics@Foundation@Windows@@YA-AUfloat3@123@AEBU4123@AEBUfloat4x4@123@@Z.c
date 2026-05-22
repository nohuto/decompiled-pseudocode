/*
 * XREFs of ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18000ED1C
 * Callers:
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x18000EB10 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18000EE4C (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800670B0 (-PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z @ 0x1800BBA64 (-UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z.c)
 *     ?PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800C07C0 (-PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x1800C25EC (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801BE380 (-GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V-.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x1801C162C (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ @ 0x1801C43F0 (-OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C47E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x1801C7180 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C7C2C (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCEyeGazeProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C8650 (-PopulateTargetingData@MPCEyeGazeProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1801C95D8 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall Windows::Foundation::Numerics::transform(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm1_4
  float v5; // xmm6_4
  float v6; // xmm3_4
  float v7; // xmm3_4

  result = a1;
  v4 = a2[2];
  v5 = (float)((float)(a2[1] * a3[6]) + (float)(*a2 * a3[2])) + (float)(v4 * a3[10]);
  v6 = (float)((float)(a2[1] * a3[5]) + (float)(*a2 * a3[1])) + (float)(v4 * a3[9]);
  *a1 = (float)((float)((float)(a2[1] * a3[4]) + (float)(*a2 * *a3)) + (float)(v4 * a3[8])) + a3[12];
  v7 = v6 + a3[13];
  a1[2] = v5 + a3[14];
  a1[1] = v7;
  return result;
}
