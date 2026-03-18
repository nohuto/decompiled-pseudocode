/*
 * XREFs of ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18028E7B8
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1801FE5E0 (-SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1802756A0 (-SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

__int64 __fastcall CExpressionForce::CExpressionForce(__int64 a1, float a2, float a3, __int64 a4, int a5)
{
  __int64 v6; // r9
  __int64 result; // rax

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>(a1);
  *(_QWORD *)a1 = &CExpressionForce::`vftable'{for `CMILRefCountBaseT<IAccelerator,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 16) = &CExpressionForce::`vftable'{for `IScalarForce'};
  *(_QWORD *)(a1 + 96) = v6;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)(a1 + 96));
  *(_DWORD *)(a1 + 104) = a5;
  result = a1;
  *(float *)(a1 + 124) = a2;
  *(float *)(a1 + 128) = a3;
  *(_BYTE *)(a1 + 120) = 0;
  return result;
}
