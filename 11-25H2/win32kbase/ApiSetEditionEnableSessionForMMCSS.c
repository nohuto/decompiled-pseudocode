/*
 * XREFs of ApiSetEditionEnableSessionForMMCSS @ 0x140057FA4
 * Callers:
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x140057E84 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionEnableSessionForMMCSS(unsigned int a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 4200LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 4208LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD))result)(a1);
    }
  }
  return result;
}
