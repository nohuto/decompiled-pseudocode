/*
 * XREFs of ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@N@Z @ 0x1800C6088
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800C4E44 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     sprintf_s @ 0x18009B408 (sprintf_s.c)
 *     _scprintf @ 0x18009B46C (_scprintf.c)
 *     ??$_Construct@$0A@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXD_K@Z @ 0x1800C4938 (--$_Construct@$0A@D@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXD_K@Z.c)
 */

char *__fastcall std::to_string(char *a1, double a2)
{
  size_t v3; // rdi
  __int64 v4; // rdx
  char *v5; // rcx

  v3 = scprintf("%f", a2);
  *(_OWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  std::string::_Construct<0,char>(a1, v4, v3);
  v5 = a1;
  if ( *((_QWORD *)a1 + 3) > 0xFuLL )
    v5 = *(char **)a1;
  sprintf_s(v5, v3 + 1, "%f", a2);
  return a1;
}
