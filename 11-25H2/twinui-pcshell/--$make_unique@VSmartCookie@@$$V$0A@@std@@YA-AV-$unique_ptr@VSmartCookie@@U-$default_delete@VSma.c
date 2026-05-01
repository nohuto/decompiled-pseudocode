/*
 * XREFs of ??$make_unique@VSmartCookie@@$$V$0A@@std@@YA?AV?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@0@XZ @ 0x1802CA7B8
 * Callers:
 *     ?Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService@@@Z @ 0x18069ADE0 (-Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<SmartCookie,,0>(_QWORD *a1)
{
  _QWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x80uLL);
  v3[14] = 0LL;
  *((_DWORD *)v3 + 30) = 0;
  *a1 = v3;
  return a1;
}
