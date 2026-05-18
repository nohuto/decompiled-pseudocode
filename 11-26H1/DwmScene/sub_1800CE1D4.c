/*
 * XREFs of sub_1800CE1D4 @ 0x1800CE1D4
 * Callers:
 *     sub_1800CE2A0 @ 0x1800CE2A0 (sub_1800CE2A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

void __fastcall sub_1800CE1D4(__int64 a1)
{
  void **v1; // rbx
  HRESULT v2; // eax
  ULONG_PTR v3; // rbx
  D2D1_FACTORY_OPTIONS pFactoryOptions; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v1 = (void **)(a1 + 512);
  if ( !*(_QWORD *)(a1 + 512) )
  {
    pFactoryOptions.debugLevel = D2D1_DEBUG_LEVEL_NONE;
    sub_18000F938((__int64 *)(a1 + 512));
    v2 = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &stru_180190AC8, &pFactoryOptions, v1);
    v3 = v2;
    if ( v2 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v3;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
}
