/*
 * XREFs of ??$_Uninitialized_move@PEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@YAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800EA2D4
 * Callers:
 *     ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800E925C (--$_Emplace_reallocate@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x18008A660 (--$_Destroy_range@V-$allocator@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo.c)
 */

char *__fastcall std::_Uninitialized_move<std::vector<HidChannelValueInfo> *,std::allocator<std::vector<HidChannelValueInfo>>>(
        __int64 *a1,
        __int64 *a2,
        char *a3)
{
  __int64 *v5; // r8
  char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    v6 = (char *)(a3 - (char *)a1);
    do
    {
      v7 = v5[1];
      v5[1] = 0LL;
      v8 = *v5;
      *v5 = 0LL;
      v9 = *(v5 - 1);
      *(v5 - 1) = 0LL;
      *(_QWORD *)&v6[(_QWORD)v5] = v8;
      *(_QWORD *)&v6[(_QWORD)v5 + 8] = v7;
      v5 += 3;
      *(_QWORD *)a3 = v9;
      a3 += 24;
    }
    while ( v5 - 1 != a2 );
  }
  std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(a3, a3);
  return a3;
}
