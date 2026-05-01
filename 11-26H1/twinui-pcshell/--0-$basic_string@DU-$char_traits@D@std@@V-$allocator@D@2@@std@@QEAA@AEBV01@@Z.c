/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x1803100EC
 * Callers:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180310254 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x180310334 (--0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z.c)
 * Callees:
 *     ??$_Construct@$01PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXQEBD_K@Z @ 0x18030F25C (--$_Construct@$01PEBD@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXQEBD_K@Z.c)
 */

_QWORD *__fastcall std::string::string(_QWORD *a1, __int64 **a2)
{
  unsigned __int64 v3; // r8

  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v3 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)a2[3] > 0xF )
    a2 = (__int64 **)*a2;
  std::string::_Construct<2,char const *>(a1, a2, v3);
  return a1;
}
