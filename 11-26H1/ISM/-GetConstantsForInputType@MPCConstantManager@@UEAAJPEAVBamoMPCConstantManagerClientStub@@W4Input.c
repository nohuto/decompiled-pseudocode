/*
 * XREFs of ?GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x1800B4020
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z @ 0x180025D10 (-CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x1800B3D94 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCConstantManager::GetConstantsForInputType(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // rdx
  unsigned int v9; // ebx
  _QWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a4 + 8;
  if ( !MPCConstantManager::CheckTypeExistence(a1, a3) )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, 2147942487LL);
  MPCConstantManager::GetConstantNamesString(a1, (__int64)v10, a3);
  v8 = v10;
  if ( v10[3] > 7uLL )
    v8 = (_QWORD *)v10[0];
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, v8);
  std::wstring::_Tidy_deallocate(v10);
  return v9;
}
