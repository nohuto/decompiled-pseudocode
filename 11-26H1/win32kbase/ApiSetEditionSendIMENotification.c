/*
 * XREFs of ApiSetEditionSendIMENotification @ 0x1401BD55C
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x140087130 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     EditionSendIMENotification @ 0x1401904E4 (EditionSendIMENotification.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionSendIMENotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5184LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionSendIMENotification(a1, a2, a3, a4, a5);
  }
  return result;
}
