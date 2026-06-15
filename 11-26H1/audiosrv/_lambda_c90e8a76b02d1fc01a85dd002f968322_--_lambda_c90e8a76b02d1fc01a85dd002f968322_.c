/*
 * XREFs of _lambda_c90e8a76b02d1fc01a85dd002f968322_::_lambda_c90e8a76b02d1fc01a85dd002f968322_ @ 0x18010EBD8
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall lambda_c90e8a76b02d1fc01a85dd002f968322_::_lambda_c90e8a76b02d1fc01a85dd002f968322_(
        __int64 a1,
        int a2,
        _QWORD *a3)
{
  __int64 v3; // r10
  __int64 result; // rax
  __int64 v5; // r9

  *(_DWORD *)a1 = a2;
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>((_QWORD *)(a1 + 8), a3);
  result = v3;
  *(_QWORD *)(v3 + 24) = v5;
  return result;
}
