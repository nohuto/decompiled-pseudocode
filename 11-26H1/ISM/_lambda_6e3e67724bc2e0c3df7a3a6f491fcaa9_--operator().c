/*
 * XREFs of _lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator() @ 0x1801C0010
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801C1A54 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$?0M$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEAM@Z @ 0x180092BB4 (--$-0M$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEAM@Z.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800B372C (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 */

LSTATUS __fastcall lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(__int64 a1, const WCHAR *a2, __int64 a3)
{
  LSTATUS result; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // r9
  __int64 v11; // r10
  __m128i v12; // [rsp+40h] [rbp-18h] BYREF
  float v13; // [rsp+60h] [rbp+8h] BYREF
  char v14; // [rsp+78h] [rbp+20h] BYREF

  result = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\ISM\\6dof",
             a2,
             0x10u,
             0LL,
             *(PVOID *)a1,
             *(LPDWORD *)(a1 + 8));
  if ( !result )
  {
    MPCConstantManager::GetInstance(v7, v6, v8, v9);
    v13 = (float)**(int **)a1 / 1000.0;
    std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)&v14, &v13);
    v12.m128i_i64[0] = a3;
    v12.m128i_i64[1] = std::_WChar_traits<unsigned short>::length(a3);
    return MPCConstantManager::ChangeConstant(v11, 0x2000LL, &v12, v10);
  }
  return result;
}
