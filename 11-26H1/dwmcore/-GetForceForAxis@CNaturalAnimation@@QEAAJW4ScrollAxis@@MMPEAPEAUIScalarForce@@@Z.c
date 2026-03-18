/*
 * XREFs of ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18027B4B0
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1801FE5E0 (-SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1802756A0 (-SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180044E40 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x18013EF70 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1801E3618 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??0CNaturalAnimationScalarForceAdapter@@QEAA@XZ @ 0x18027B1C8 (--0CNaturalAnimationScalarForceAdapter@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNaturalAnimation::GetForceForAxis(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        struct IUnknownWeakRef *a5)
{
  struct IUnknownWeakRef *v5; // r14
  _OWORD *v8; // rax
  CNaturalAnimationScalarForceAdapter *v9; // rax
  CNaturalAnimationScalarForceAdapter *v10; // rbx
  CNaturalAnimation *v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  int WeakReference; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a5;
  *(_QWORD *)a5 = 0LL;
  v8 = operator new(0x28uLL);
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    v9 = CNaturalAnimationScalarForceAdapter::CNaturalAnimationScalarForceAdapter((CNaturalAnimationScalarForceAdapter *)v8);
    v10 = v9;
    if ( v9 )
      (**(void (__fastcall ***)(CNaturalAnimationScalarForceAdapter *))v9)(v9);
  }
  else
  {
    v10 = 0LL;
  }
  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    *(float *)(a1 + 320) = a4;
    *(float *)(a1 + 284) = a3;
  }
  else
  {
    *(float *)(a1 + 316) = a4;
    *(float *)(a1 + 280) = a3;
  }
  *(_BYTE *)(a1 + 532) |= 0x10u;
  CNaturalAnimation::ClearState((CNaturalAnimation *)a1);
  v12 = CNaturalAnimation::SetupAnimationIfNecessary(v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x38Du, 0LL);
    if ( v10 )
      (*(void (__fastcall **)(CNaturalAnimationScalarForceAdapter *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    *((_QWORD *)v10 + 3) = *(_QWORD *)(a1 + 24);
    *((_DWORD *)v10 + 4) = a2;
    a5 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&a5);
    WeakReference = CResource::GetWeakReference((CResource *)a1, &a5);
    if ( WeakReference < 0 )
      ModuleFailFastForHRESULT(WeakReference, retaddr);
    *((_QWORD *)v10 + 4) = a5;
    a5 = 0LL;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&a5);
    v13 = 0;
    *(_QWORD *)v5 = v10;
  }
  return v13;
}
