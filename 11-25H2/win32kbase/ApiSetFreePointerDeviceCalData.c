/*
 * XREFs of ApiSetFreePointerDeviceCalData @ 0x140225DE8
 * Callers:
 *     RIMFreePointerDevice @ 0x1401E3C1C (RIMFreePointerDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetFreePointerDeviceCalData(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4512LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 4520LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64))result)(a1);
    }
  }
  return result;
}
