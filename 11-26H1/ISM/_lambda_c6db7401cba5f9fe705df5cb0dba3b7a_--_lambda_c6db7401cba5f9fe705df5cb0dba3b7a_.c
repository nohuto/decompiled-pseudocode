/*
 * XREFs of _lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_ @ 0x18019B64C
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800129A0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801D14C0 (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = *a2;
  result = a1;
  a1[1] = a3;
  return result;
}
