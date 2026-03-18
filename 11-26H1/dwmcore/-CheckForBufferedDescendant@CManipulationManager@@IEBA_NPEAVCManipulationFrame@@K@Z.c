/*
 * XREFs of ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x1801147B0
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180114240 (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1800AAD50 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180113F58 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CManipulationManager::CheckForBufferedDescendant(
        CManipulationManager *this,
        struct CManipulationFrame *a2,
        unsigned int a3)
{
  int v5; // edi
  bool v6; // r15
  unsigned int v7; // esi
  CManipulationManager *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v11; // r12
  char v12; // r12
  __int64 v13; // rcx
  __int64 *v15; // rax
  __int64 v16; // rbx
  void (__fastcall ***v17)(_QWORD); // rax
  void (__fastcall ***v18)(_QWORD); // rax
  __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+28h] [rbp-20h] BYREF
  __int64 i; // [rsp+30h] [rbp-18h]
  __int64 v23; // [rsp+98h] [rbp+50h] BYREF
  int v24; // [rsp+A0h] [rbp+58h]
  __int64 v25; // [rsp+A8h] [rbp+60h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v24 = 0;
  v8 = this;
  for ( i = *((_QWORD *)a2 + 31 * a3 + 49); v7 < *((_DWORD *)a2 + 4); ++v7 )
  {
    if ( v6 )
      break;
    v9 = 0LL;
    v10 = 248LL * v7;
    v23 = 0LL;
    v25 = 0LL;
    v11 = (char *)a2 + v10;
    if ( v7 == a3 || *(_QWORD *)((char *)a2 + v10 + 392) != -1LL )
      goto LABEL_4;
    v5 |= 1u;
    v15 = (__int64 *)CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
                       (__int64)v8 + 160,
                       &v20,
                       (_DWORD *)v11 + 93);
    if ( &v19 != v15 )
    {
      v9 = *v15;
      *v15 = 0LL;
    }
    v19 = 0LL;
    v25 = v9;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v19);
    if ( v9
      && (v18 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(
                                                 v9,
                                                 *((unsigned int *)v11 + 93)),
          *Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v23, v18)) )
    {
      v12 = 0;
    }
    else
    {
LABEL_4:
      v12 = 1;
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v20);
    }
    if ( v12 )
    {
      if ( v9 )
        (*(void (__fastcall **)(__int64, CManipulationManager *))(*(_QWORD *)v9 + 8LL))(v9, v8);
      v13 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64, CManipulationManager *))(*(_QWORD *)v13 + 8LL))(v13, v8);
      }
    }
    else
    {
      while ( v23 && !v6 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, CManipulationManager *))(*(_QWORD *)v23 + 64LL))(v23, v8);
        v17 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 96LL))(v23);
        Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v23, v17);
        v6 = v16 == i;
      }
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v23);
    }
    v8 = this;
  }
  return v6;
}
