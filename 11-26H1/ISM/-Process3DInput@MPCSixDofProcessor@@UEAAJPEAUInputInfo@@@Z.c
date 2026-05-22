/*
 * XREFs of ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180023B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000CB74 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x180023D20 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024E38 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B9E5C (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C5F34 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1801C02FC (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MPCSixDofProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  MPCInputProviderBase *v4; // rsi
  struct IMPCTarget *v5; // rbx
  MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v7; // rbp
  struct IMPCTarget *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebp
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v14; // [rsp+40h] [rbp+8h] BYREF
  struct IMPCTarget *v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = (MPCInputProviderBase *)(this - 24);
  v5 = *(struct IMPCTarget **)(this + 3608);
  v15 = v5;
  if ( v5 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( *((_BYTE *)a2 + 2492) && *((_BYTE *)a2 + 2493) )
  {
    if ( MPCSixDofProcessor::ShouldRequestPrimary(v4, a2) )
      MPCInputProviderBase::SetRequestingPrimary(v4);
  }
  else if ( MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::DemoteProviderPrimary(
      Instance,
      (struct IMPCInputProviderBase *)(this & -(__int64)(v4 != 0LL)));
  }
  MPCSixDofProcessor::ProcessHomeGesture(v4, a2);
  v14 = 0LL;
  v7 = MPCHolographicInputManager::GetInstance();
  v8 = v14;
  v14 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = MPCHolographicInputManager::Process3DInput(
         v7,
         a2,
         (struct IMPCInputProviderBase *)(this & -(__int64)(v4 != 0LL)),
         &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    MPCSixDofProcessor::DeliverInputToTarget(v4, a2, v5, v14);
    memcpy_0((void *)(this + 7768), a2, 0xBC0uLL);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v14);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v15);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x233,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v9,
      v12);
    if ( v14 )
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v5 )
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v5 + 16LL))(v5);
    return v10;
  }
}
