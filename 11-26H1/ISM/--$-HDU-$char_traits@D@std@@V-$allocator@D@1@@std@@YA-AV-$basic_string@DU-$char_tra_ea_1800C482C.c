/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C482C
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800C4E44 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EC148 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EF888 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@Z @ 0x1800C49DC (--$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@-$basic_string@DU-$cha.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x1800C4ACC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

__int64 __fastcall std::operator+<char>(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  __int64 v3; // rsi
  size_t Size; // rdi
  __int64 v6; // rcx
  bool v7; // cc
  _QWORD *v8; // rax
  char *v9; // rbx

  v3 = (__int64)a2;
  Size = -1LL;
  do
    ++Size;
  while ( a3[Size] );
  v6 = a2[2];
  if ( Size > a2[3] - v6 )
  {
    v3 = std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
           a2,
           Size);
  }
  else
  {
    v7 = a2[3] <= 0xFuLL;
    a2[2] = v6 + Size;
    v8 = a2;
    if ( !v7 )
      v8 = (_QWORD *)*a2;
    v9 = (char *)v8 + v6;
    memmove_0((char *)v8 + v6, a3, Size);
    v9[Size] = 0;
  }
  std::string::string(a1, v3);
  return a1;
}
