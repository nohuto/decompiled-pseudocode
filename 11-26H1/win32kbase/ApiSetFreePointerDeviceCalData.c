/*
 * XREFs of ApiSetFreePointerDeviceCalData @ 0x140228010
 * Callers:
 *     RIMFreePointerDevice @ 0x140130280 (RIMFreePointerDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetFreePointerDeviceCalData(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v3; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4064LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 4072LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64))result)(a1);
    }
  }
  return result;
}
