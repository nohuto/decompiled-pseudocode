/*
 * XREFs of _lambda_c51e6e2186cc259f124bbf87b89b0c07_::_lambda_invoker_cdecl_ @ 0x1401D5D80
 * Callers:
 *     <none>
 * Callees:
 *     ?RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x1401409BC (-RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017E400 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 */

void __fastcall lambda_c51e6e2186cc259f124bbf87b89b0c07_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 i; // rbx

  InputTraceLogging::RIM::RawInputManagerObjectUsed((const struct RawInputManagerObject *)a1);
  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)i);
}
