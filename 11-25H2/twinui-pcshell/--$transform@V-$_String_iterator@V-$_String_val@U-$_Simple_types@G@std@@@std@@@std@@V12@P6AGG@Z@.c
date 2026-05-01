/*
 * XREFs of ??$transform@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@std@@YA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0V10@P6AGG@Z@Z @ 0x18029D114
 * Callers:
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x18029CFB0 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 *     _anonymous_namespace_::IsCurrentProcessExplorer @ 0x1803ACC94 (_anonymous_namespace_--IsCurrentProcessExplorer.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::transform<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short (*)(unsigned short)>(
        _QWORD *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        _WORD *a4,
        __int64 (__fastcall *a5)(_QWORD))
{
  unsigned __int16 *i; // rbx
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++a4 )
    *a4 = a5(*i++);
  result = a1;
  *a1 = a4;
  return result;
}
