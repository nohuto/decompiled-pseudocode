/*
 * XREFs of ApiSetEditionProcessPointerInputAsMouse @ 0x1401BEE30
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     EditionProcessPointerInputAsMouse @ 0x140160C70 (EditionProcessPointerInputAsMouse.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionProcessPointerInputAsMouse(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5872LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionProcessPointerInputAsMouse(a1, a2, a3);
  }
  return result;
}
