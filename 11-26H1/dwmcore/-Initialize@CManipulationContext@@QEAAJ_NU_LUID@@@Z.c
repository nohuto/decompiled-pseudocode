/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NU_LUID@@@Z @ 0x180226FE0
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800A72E0 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180113960 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180152D28 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1800A82C4 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1801AB4B0 (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, char a2, struct _LUID a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  CInteractionRoot *v9; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 14);
  *((_DWORD *)this + 30) = 0;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 16);
  *((_BYTE *)this + 28) &= ~1u;
  *((_BYTE *)this + 28) |= a2;
  *((struct _LUID *)this + 4) = a3;
  v6 = DefaultHeap::AllocClear(0x568uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v6, 0, 0x568uLL);
  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v7);
  *v7 = &CInteractionRoot::`vftable';
  v7[2] = 0LL;
  CInteractionProcessor::CInteractionProcessor((CInteractionProcessor *)(v7 + 3));
  if ( *((_QWORD **)this + 17) != v7 )
  {
    (*(void (__fastcall **)(_QWORD *))*v7)(v7);
    v8 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v7;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v9 = (CInteractionRoot *)*((_QWORD *)this + 17);
  if ( v9 )
    return CInteractionRoot::Initialize(v9, this, a2);
  else
    return 2147942414LL;
}
