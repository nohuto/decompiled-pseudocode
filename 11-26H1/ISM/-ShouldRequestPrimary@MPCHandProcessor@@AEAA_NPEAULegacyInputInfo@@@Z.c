/*
 * XREFs of ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C1384
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C0E40 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18000EDC4 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_ @ 0x1800B99A8 (_lambda_cc14c4b3090cc7c63243ed8c77095553_--_lambda_cc14c4b3090cc7c63243ed8c77095553_.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF168 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?GetTicks@PerfCounter@@YA_JXZ @ 0x1800BFE80 (-GetTicks@PerfCounter@@YA_JXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall MPCHandProcessor::ShouldRequestPrimary(MPCHandProcessor *this, struct LegacyInputInfo *a2)
{
  char v3; // bl
  bool v4; // si
  MPCHolographicInputManager *Instance; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  PerfCounter *v10; // rcx
  bool v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  float v15; // xmm6_4
  __int64 v16; // r9
  struct LegacyInputInfo *v18; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D8h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-D0h]
  __int128 v21; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v22[416]; // [rsp+58h] [rbp-B0h] BYREF

  v18 = a2;
  v3 = 1;
  if ( byte_180254750 )
  {
    v4 = (*(_DWORD *)a2 & 0x662600) != 0 && *((_DWORD *)a2 + 16) == 2 || *((_QWORD *)this + 453);
    lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_(
      &v19,
      (__int64)this,
      (__int64)&v18);
    memset_0(v22, 0, sizeof(v22));
    Instance = MPCHolographicInputManager::GetInstance();
    PostProcessor = MPCHolographicInputManager::GetPostProcessor(Instance, v6, v7, v8);
    (*(void (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD, _BYTE *))(*(_QWORD *)PostProcessor + 72LL))(
      PostProcessor,
      *((unsigned int *)v18 + 1),
      v22);
    v11 = v22[410] != 0;
    if ( !v4 )
    {
      if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 840) != 512
        || (v15 = *(float *)(*v20 + 1072),
            MPCConstantManager::GetInstance(*v20, v12, v13, v14),
            *(_QWORD *)&v21 = L"HandGuidanceScoreForPrimary",
            *((_QWORD *)&v21 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HandGuidanceScoreForPrimary"),
            v15 < MPCConstantManager::GetConstant<float>(v16, (v19 + 24) & -(__int64)(v19 != 0), &v21)) )
      {
        if ( !v11 )
          return 0;
      }
    }
    if ( *(_QWORD *)&PerfCounter::GetTicks(v10) - MPCHandProcessor::m_lastKeyboardKeyPressTimeInTicks <= *((_QWORD *)this + 1244) )
      return 0;
  }
  else
  {
    byte_180254750 = 1;
  }
  return v3;
}
