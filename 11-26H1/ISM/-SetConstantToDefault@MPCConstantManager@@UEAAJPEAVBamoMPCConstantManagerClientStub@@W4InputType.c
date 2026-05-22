/*
 * XREFs of ?SetConstantToDefault@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800B50D0
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B5048 (-SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V-$basic_string_view@GU-$char_traits.c)
 */

__int64 __fastcall MPCConstantManager::SetConstantToDefault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // r10
  __m128i v8; // [rsp+20h] [rbp-18h] BYREF

  v8.m128i_i64[0] = a4;
  v8.m128i_i64[1] = std::_WChar_traits<unsigned short>::length(a4);
  MPCConstantManager::SetConstantToDefault(v6, v5, &v8);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a5 + 8) + 24LL))(a5 + 8, 0LL);
}
