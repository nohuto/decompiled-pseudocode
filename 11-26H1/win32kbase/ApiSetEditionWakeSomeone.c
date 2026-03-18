/*
 * XREFs of ApiSetEditionWakeSomeone @ 0x1400E3C68
 * Callers:
 *     HandleDeferredInput @ 0x1400E3510 (HandleDeferredInput.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionWakeSomeone(__int64 a1, __int64 a2, unsigned int a3, __int64 a4))(void)
{
  __int64 (*result)(void); // rax
  __int64 v9; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4384LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48) + 4392LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))result)(a1, a2, a3, a4);
    }
  }
  return result;
}
