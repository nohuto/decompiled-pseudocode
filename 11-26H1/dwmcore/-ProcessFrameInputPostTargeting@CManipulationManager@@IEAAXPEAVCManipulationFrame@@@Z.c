/*
 * XREFs of ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801134FC
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180113030 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1800A785C (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800A7AF0 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180113F58 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180115FDC (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18018EF1C (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801D7124 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPostTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  char v4; // r15
  unsigned int v5; // esi
  bool IsMousewheelFrame; // r13
  __int64 v7; // rdx
  __int64 v8; // rbp
  int v9; // eax
  char *v10; // r12
  __int64 *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r10
  char v14; // r11
  __int64 v15; // rax
  CManipulationContext *v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD); // [rsp+88h] [rbp+10h] BYREF
  __int64 *v18; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  if ( *(_DWORD *)(v7 + 16) )
  {
    do
    {
      v8 = 248LL * v5;
      v9 = *(_DWORD *)((char *)a2 + v8 + 380);
      if ( (v9 & 0x840000) != 0 || IsMousewheelFrame )
      {
        v10 = (char *)a2 + v8;
        CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
          (char *)this + 160,
          &v18,
          (char *)a2 + v8 + 372);
        v11 = v18;
        if ( v18 )
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 24))(v18, *((unsigned int *)v10 + 93));
          v12 = ConvertToInputType(*((unsigned int *)a2 + 92), *((unsigned int *)a2 + 95));
          CManipulationManager::OnUp(
            (__int64)this,
            (v13 - 72) & -(__int64)(v13 != 0),
            *((_DWORD *)v10 + 93),
            v12,
            v11,
            0,
            0,
            v14);
          v15 = *v11;
          v18 = 0LL;
          (*(void (__fastcall **)(__int64 *))(v15 + 8))(v11);
        }
      }
      else if ( (v9 & 2) == 0 )
      {
        v16 = (CManipulationContext *)*((_QWORD *)this + 30);
        if ( v16 )
          CManipulationContext::OnContactHoverDepart(v16, *(_DWORD *)((char *)a2 + v8 + 372));
      }
      if ( !v4 && *(_QWORD *)((char *)a2 + v8 + 392) == -1LL )
      {
        v17 = (__int64 (__fastcall ***)(_QWORD))a2;
        v4 = 1;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v17);
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
          (char *)this + 224,
          &v17);
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v17);
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 4) );
  }
}
