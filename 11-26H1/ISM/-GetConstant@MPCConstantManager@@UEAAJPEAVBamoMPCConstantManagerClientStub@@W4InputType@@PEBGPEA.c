/*
 * XREFs of ?GetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Proxy@@@Z @ 0x1800B3D10
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetPROPVARIANT@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@W4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1800B41F0 (-GetPROPVARIANT@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@W4InputType@@V-$bas.c)
 *     ?value@?$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ @ 0x1800B59EC (-value@-$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCConstantManager::GetConstant(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF

  v10[0] = a4;
  v10[1] = std::_WChar_traits<unsigned short>::length(a4);
  ((void (__fastcall *)(__int64, _BYTE *, __int64, _QWORD *))MPCConstantManager::GetPROPVARIANT)(v6, v11, v5, v10);
  v7 = *(_QWORD *)(a5 + 8);
  if ( !v11[24] )
    return (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 32))(a5 + 8, 2147942487LL);
  v9 = std::optional<tagPROPVARIANT>::value(v11);
  return (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 24))(a5 + 8, v9);
}
