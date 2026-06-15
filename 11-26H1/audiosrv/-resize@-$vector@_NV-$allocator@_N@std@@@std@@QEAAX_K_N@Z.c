/*
 * XREFs of ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x180140278
 * Callers:
 *     ??$_Match@V?$allocator@V?$sub_match@PEBG@std@@@std@@@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA_NPEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@1@_N@Z @ 0x180133BE0 (--$_Match@V-$allocator@V-$sub_match@PEBG@std@@@std@@@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG.c)
 *     ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014CEB0 (-_Do_capture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x18013F4B4 (-_Insert_n@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocat.c)
 *     ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x18013FF24 (-end@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@s.c)
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x18013FFF4 (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 */

void __fastcall std::vector<bool>::resize(__int64 *a1, unsigned __int64 a2)
{
  __int128 *v2; // rax
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  _QWORD *v6; // rax
  __int64 v7; // r10
  __int64 *v8; // r11
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int128 v11; // xmm0
  char v12[16]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp-10h] BYREF

  v12[0] = 0;
  if ( a1[3] >= a2 )
  {
    if ( a1[3] > a2 )
    {
      v6 = std::vector<bool>::end(a1, v15);
      v9 = *v8;
      if ( v7 >= 0 )
        v10 = v9 + 4 * ((unsigned __int64)v7 >> 5);
      else
        v10 = v9 - (4 * ((unsigned __int64)~v7 >> 5) + 4);
      v11 = *(_OWORD *)v6;
      *(_QWORD *)&v13 = v10;
      *((_QWORD *)&v13 + 1) = v7 & 0x1F;
      v14 = v11;
      std::vector<bool>::erase(v8, &v16, &v13);
    }
  }
  else
  {
    v2 = (__int128 *)std::vector<bool>::end(a1, &v14);
    v5 = v4 - v3[3];
    v13 = *v2;
    std::vector<bool>::_Insert_n(v3, v15, &v13, v5, v12);
  }
}
