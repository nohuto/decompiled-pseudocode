/*
 * XREFs of ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x18020E3E0
 * Callers:
 *     ??0CMotion@@QEAA@XZ @ 0x1801B713C (--0CMotion@@QEAA@XZ.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1801FE5E0 (-SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1802756A0 (-SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CScalarForce *__fastcall CScalarForce::CScalarForce(CScalarForce *this, struct IAccelerator *a2)
{
  __int64 v3; // rdx

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  *(_QWORD *)this = &CScalarForce::`vftable';
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = v3;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 13);
  return this;
}
