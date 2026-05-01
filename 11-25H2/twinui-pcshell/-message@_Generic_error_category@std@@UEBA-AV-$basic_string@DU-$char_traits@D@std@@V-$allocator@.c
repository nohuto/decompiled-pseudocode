/*
 * XREFs of ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180319210
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18031403C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_QWORD *__fastcall std::_Generic_error_category::message(__int64 a1, _QWORD *a2, int a3)
{
  char *v4; // rax

  v4 = (char *)std::_Syserror_map(a3);
  std::string::string(a2, v4);
  return a2;
}
