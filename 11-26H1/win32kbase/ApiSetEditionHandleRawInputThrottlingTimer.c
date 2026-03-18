/*
 * XREFs of ApiSetEditionHandleRawInputThrottlingTimer @ 0x1401B4DF8
 * Callers:
 *     ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x140174560 (-OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionHandleRawInputThrottlingTimer(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6472LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 48) + 6480LL);
      if ( result )
        return (__int64 (*)(void))result();
    }
  }
  return result;
}
