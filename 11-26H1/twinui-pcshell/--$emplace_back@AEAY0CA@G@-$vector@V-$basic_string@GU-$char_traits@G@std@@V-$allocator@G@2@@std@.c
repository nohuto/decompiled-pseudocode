/*
 * XREFs of ??$emplace_back@AEAY0CA@G@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAY0CA@G@Z @ 0x18033F9FC
 * Callers:
 *     ?MonitorEnumProc@GamingOverlayExperienceManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180225C70 (-MonitorEnumProc@GamingOverlayExperienceManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Emplace_reallocate@AEAY0CA@G@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEAY0CA@G@Z @ 0x18033D608 (--$_Emplace_reallocate@AEAY0CA@G@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 */

__int64 __fastcall std::vector<std::wstring>::emplace_back<unsigned short (&)[32]>(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( a1[1] == a1[2] )
    return std::vector<std::wstring>::_Emplace_reallocate<unsigned short (&)[32]>(a1, a1[1], a2);
  std::wstring::wstring(a1[1], a2);
  v3 = a1[1];
  a1[1] = v3 + 32;
  return v3;
}
