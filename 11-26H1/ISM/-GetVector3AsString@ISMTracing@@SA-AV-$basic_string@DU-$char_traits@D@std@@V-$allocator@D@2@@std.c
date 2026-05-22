/*
 * XREFs of ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800C4E44
 * Callers:
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C5384 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C4808 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C482C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800C482C.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800C6048 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@N@Z @ 0x1800C6088 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ISMTracing::GetVector3AsString(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD v6[4]; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v7[32]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v8[32]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v9[32]; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v10[32]; // [rsp+B0h] [rbp+7h] BYREF
  _BYTE v11[32]; // [rsp+D0h] [rbp+27h] BYREF

  std::to_string(v8);
  std::to_string(v7);
  std::to_string(v6);
  v2 = std::operator+<char>((__int64)v11, v6, ", ");
  v3 = (_QWORD *)std::operator+<char>((__int64)v10, v2, (__int64)v7);
  v4 = std::operator+<char>((__int64)v9, v3, ", ");
  std::operator+<char>(a1, v4, (__int64)v8);
  std::string::_Tidy_deallocate(v9);
  std::string::_Tidy_deallocate(v10);
  std::string::_Tidy_deallocate(v11);
  std::string::_Tidy_deallocate(v6);
  std::string::_Tidy_deallocate(v7);
  std::string::_Tidy_deallocate(v8);
  return a1;
}
