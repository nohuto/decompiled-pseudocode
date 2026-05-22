/*
 * XREFs of ?SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800B4D10
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0M$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEAM@Z @ 0x180092BB4 (--$-0M$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEAM@Z.c)
 *     ??$?0K$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEAK@Z @ 0x18009815C (--$-0K$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEAK@Z.c)
 *     ??$?0_N$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEA_N@Z @ 0x180098170 (--$-0_N$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEA_N@Z.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800B372C (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCConstantManager::SetConstant(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        PROPVARIANT *propvarIn,
        __int64 a6)
{
  HRESULT v10; // eax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64); // rbx
  HRESULT v13; // eax
  HRESULT v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  BOOL pfRet; // [rsp+20h] [rbp-30h] BYREF
  ULONGLONG pullRet; // [rsp+28h] [rbp-28h] BYREF
  DOUBLE pdblRet; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v20[8]; // [rsp+38h] [rbp-18h] BYREF
  __m128i v21; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  switch ( *(_WORD *)propvarIn )
  {
    case 4:
    case 5:
      pdblRet = 0.0;
      v14 = PropVariantToDouble(propvarIn, &pdblRet);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x103,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v14,
          pfRet);
      v11 = a6;
      v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL);
      *(float *)&propvarIn = pdblRet;
      std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)v20, &propvarIn);
      break;
    case 0xB:
      pfRet = 0;
      v13 = PropVariantToBoolean(propvarIn, &pfRet);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v13,
          pfRet);
      v11 = a6;
      LOBYTE(propvarIn) = pfRet;
      v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL);
      std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v20, &propvarIn);
      break;
    case 0x15:
      pullRet = 0LL;
      v10 = PropVariantToUInt64(propvarIn, &pullRet);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFA,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v10,
          pfRet);
      v11 = a6;
      v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL);
      LODWORD(propvarIn) = pullRet;
      std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)v20, &propvarIn);
      break;
    default:
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL))(a6 + 8, 2147942487LL);
  }
  v21.m128i_i64[0] = a4;
  v21.m128i_i64[1] = std::_WChar_traits<unsigned short>::length(a4);
  v16 = (unsigned int)MPCConstantManager::ChangeConstant(a1, a3, &v21, v15);
  return v12(v11 + 8, v16);
}
