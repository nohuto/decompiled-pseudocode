/*
 * XREFs of ApiSetEditionResetIMEConversionStatus @ 0x1400F4448
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3EF0 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionResetIMEConversionStatus(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5576LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 5584LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64, __int64))result)(a1, a2);
    }
  }
  return result;
}
