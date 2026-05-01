/*
 * XREFs of ??$_Get_index@$0A@@id@locale@std@@QEAA_KXZ @ 0x180316D18
 * Callers:
 *     ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18013BF44 (--$use_facet@V-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x180611A98 (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall std::locale::id::_Get_index<0>(__int64 a1)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)a1 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)&v3, 0);
    if ( !*(_QWORD *)a1 )
      *(_QWORD *)a1 = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit((std::_Lockit *)&v3);
  }
  return *(_QWORD *)a1;
}
