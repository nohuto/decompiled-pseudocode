/*
 * XREFs of ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1801C02FC
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180023B90 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800C5C74 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1800C5E00 (-SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C1884 (-TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCSixDofProcessor::DeliverInputToTarget(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2,
        struct IMPCTarget *a3,
        struct IMPCTarget *a4)
{
  bool v8; // cl
  int v9; // eax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v12; // [rsp+48h] [rbp+10h] BYREF

  if ( a4 && !(*(unsigned __int8 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a4 + 32LL))(a4) )
    MPCSixDofProcessor::TreatTouchpadPressAsInteraction(this, a2);
  MPCInputProviderBase::SendInputToPostProcessor(this, a2);
  v12 = 0;
  MPCInputProviderBase::ProcessSourceDetectedAndLost(this, a3, a4, &v12);
  v8 = 1;
  if ( *((_DWORD *)a2 + 17) != 1 )
    v8 = *((_DWORD *)a2 + 17) == 5;
  if ( a4 && !v8 && !v12 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct LegacyInputInfo *))(*(_QWORD *)a4 + 24LL))(a4, a2);
    if ( v9 == -2147417853 )
    {
      *((_BYTE *)this + 3568) = 0;
    }
    else if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147417828 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x25C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        v10);
    }
  }
}
