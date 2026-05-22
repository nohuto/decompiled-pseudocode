/*
 * XREFs of ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x1800ED500
 * Callers:
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800EB910 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EC148 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$?0PEAD$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEAD0AEBV?$allocator@D@1@@Z @ 0x1800E90C4 (--$-0PEAD$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEAD0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x1800EA258 (--$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z.c)
 */

__int64 __fastcall std::to_string(__int64 a1, signed int a2)
{
  _BYTE *v3; // rdx
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  if ( a2 >= 0 )
  {
    v3 = (_BYTE *)std::_UIntegral_to_buff<char,unsigned int>((__int64)v5, a2);
  }
  else
  {
    v3 = (_BYTE *)(std::_UIntegral_to_buff<char,unsigned int>((__int64)v5, -a2) - 1);
    *v3 = 45;
  }
  std::string::string(a1, (__int64)v3, (__int64)v5);
  return a1;
}
