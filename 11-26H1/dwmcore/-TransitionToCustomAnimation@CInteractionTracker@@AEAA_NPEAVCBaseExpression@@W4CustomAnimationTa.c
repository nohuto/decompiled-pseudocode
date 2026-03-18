/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B5C8
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B578 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?push_back@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAAX$$QEAPEAVCResource@@@Z @ 0x180024DAC (-push_back@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@de.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18013D238 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D338 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18013DFC0 (-LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?Create@?$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z @ 0x18013EDCC (-Create@-$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker::TransitionToCustomAnimation(__int64 a1, __int64 a2, signed int a3)
{
  __int64 v3; // rbp
  char v4; // di
  CInteractionTracker *v7; // rcx
  int v8; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  v4 = 0;
  if ( (unsigned __int64)a3 >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  if ( !a2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v7 = (CInteractionTracker *)*(unsigned int *)(a1 + 88);
  if ( (_DWORD)v7 )
  {
    v8 = (_DWORD)v7 - 2;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        *(_BYTE *)(a2 + 216) &= ~1u;
        return v4;
      }
      CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, a3, 0);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1);
      CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1, 0);
    }
  }
  v4 = 1;
  if ( (*(_BYTE *)(a1 + 597) & 2) == 0 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 6372LL);
    *(_BYTE *)(a1 + 597) |= 2u;
    CInteractionTracker::LogBoostCompositorClock(v7, 1u);
  }
  CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, v3, 1);
  CWeakReference<CBaseExpression>::Create((CResource *)a2, (struct IUnknownWeakRef **)(a1 + 440 + 8 * v3));
  v11 = a1;
  detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::push_back((__int64 *)(a2 + 32), &v11);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 448LL))(a1, 3LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 544LL))(a1, a2);
  return v4;
}
