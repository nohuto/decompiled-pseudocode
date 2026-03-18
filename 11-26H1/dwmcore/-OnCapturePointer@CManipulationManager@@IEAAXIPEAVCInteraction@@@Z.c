/*
 * XREFs of ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180226000
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800A72E0 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?FindKey@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEBAHAEBI@Z @ 0x1800A7A88 (-FindKey@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEBAHAEBI@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1800A7ABC (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800A7AF0 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800AC368 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1801D0010 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::OnCapturePointer(
        CManipulationManager *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  char *v3; // r12
  int Key; // eax
  unsigned int v8; // r14d
  __int64 (__fastcall ***v9)(_QWORD); // rbx
  __int64 *v10; // rax
  int v11; // ecx
  int v12; // esi
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall ***v18)(__int64); // [rsp+48h] [rbp-18h] BYREF
  __int64 (__fastcall ***v19)(_QWORD); // [rsp+50h] [rbp-10h] BYREF
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+58h] BYREF

  v21 = a2;
  v3 = (char *)this + 160;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 160,
          &v21);
  v8 = 2;
  if ( Key == -1 )
  {
    v9 = 0LL;
    v10 = &v17;
    v11 = 0;
    v12 = 1;
  }
  else
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 21) + 8LL * Key);
    v20 = v9;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v20);
    v10 = (__int64 *)&v20;
    v12 = 0;
    v11 = 2;
  }
  v19 = v9;
  *v10 = 0LL;
  if ( v11 )
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v20);
  if ( v12 )
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v17);
  v13 = 0LL;
  if ( v9 )
  {
    v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v9)[3])(v9, a2);
    if ( v14 )
      v13 = v14 - 72;
  }
  v15 = CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::FindKey(
          (__int64)this + 200,
          &v21);
  if ( v15 != -1 )
    v8 = *(_DWORD *)(*((_QWORD *)this + 26) + 4LL * v15);
  CManipulationManager::OnUp((__int64)this, v13, a2, v8, v9, 1, 1, 1);
  CManipulationManager::OnNewContact((__int64)this, (__int64)a3, a2, v8, 1, 0, 1);
  v22 = 0LL;
  v16 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)v3,
          &v21);
  if ( v16 != -1
    && *Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v22, (_QWORD *)(*((_QWORD *)this + 21) + 8LL * v16)) )
  {
    v18 = 0LL;
    LODWORD(v17) = 1;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v18);
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 72LL))(v22, a2, &v17);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v18, (__int64)a3);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 88LL))(v22, &v17);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v18);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v19);
}
