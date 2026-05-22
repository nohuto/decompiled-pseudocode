/*
 * XREFs of ??$_Construct_n@PEBU?$pair@G_N@std@@PEBU12@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K$$QEAPEBU?$pair@G_N@1@1@Z @ 0x180095364
 * Callers:
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180009B90 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@@std@@QEAA@XZ @ 0x18017C924 (--1-$_Tidy_guard@V-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x180180EAC (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned short,bool>>::_Construct_n<std::pair<unsigned short,bool> const *,std::pair<unsigned short,bool> const *>(
        __int64 a1,
        unsigned __int64 a2,
        void **a3,
        __int64 *a4)
{
  __int64 v6; // rsi
  void *v7; // rbx
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v10 = a1;
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<std::pair<unsigned short,bool>>::_Buy_raw(&qword_180254050);
    v6 = qword_180254050;
    v7 = *a3;
    v8 = *a4;
    std::_Copy_memmove<enum _Button *,enum _Button *>(v7, v8, (void *)qword_180254050);
    v10 = 0LL;
    *(_QWORD *)&xmmword_180254058 = v6 + 4 * ((v8 - (__int64)v7) >> 2);
    return std::_Tidy_guard<std::vector<std::pair<unsigned short,bool>>>::~_Tidy_guard<std::vector<std::pair<unsigned short,bool>>>(&v10);
  }
  return result;
}
