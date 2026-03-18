/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18027740C
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180276224 (-SetCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?push_back@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAAX$$QEAPEAVCResource@@@Z @ 0x180024DAC (-push_back@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@de.c)
 *     ?Create@?$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z @ 0x18013EDCC (-Create@-$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z @ 0x180271DFC (-BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x180272FC0 (-DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z @ 0x180277314 (-StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker2::TransitionToCustomAnimation(CInteractionTracker2 *a1, __int64 a2, signed int a3)
{
  __int64 v3; // rbp
  char v4; // di
  int v7; // ecx
  int v8; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  CInteractionTracker2 *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  v4 = 0;
  if ( (unsigned __int64)a3 >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  if ( !a2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v7 = *((_DWORD *)a1 + 22);
  if ( !v7 )
    goto LABEL_11;
  v8 = v7 - 2;
  if ( !v8 )
  {
    (*(void (__fastcall **)(CInteractionTracker2 *))(*(_QWORD *)a1 + 440LL))(a1);
    CInteractionTracker2::DestroyDefaultAnimations(a1, 0);
    goto LABEL_11;
  }
  if ( v8 == 1 )
  {
    CInteractionTracker2::StopCustomAnimation(a1, a3, 0);
LABEL_11:
    v4 = 1;
    CInteractionTracker2::BoostCompositorClock(a1, 1);
    CInteractionTracker2::StopCustomAnimation(a1, v3, 1);
    CWeakReference<CBaseExpression>::Create((CResource *)a2, (struct IUnknownWeakRef **)a1 + v3 + 84);
    v11 = a1;
    detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::push_back((__int64 *)(a2 + 32), &v11);
    (*(void (__fastcall **)(CInteractionTracker2 *, __int64))(*(_QWORD *)a1 + 448LL))(a1, 3LL);
    (*(void (__fastcall **)(CInteractionTracker2 *, __int64))(*(_QWORD *)a1 + 544LL))(a1, a2);
    return v4;
  }
  *(_BYTE *)(a2 + 216) &= ~1u;
  return v4;
}
