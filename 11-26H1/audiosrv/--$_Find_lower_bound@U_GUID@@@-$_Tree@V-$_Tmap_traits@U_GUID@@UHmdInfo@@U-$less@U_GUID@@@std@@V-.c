/*
 * XREFs of ??$_Find_lower_bound@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@1@AEBU_GUID@@@Z @ 0x180150280
 * Callers:
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x180150320 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pai.c)
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Find_lower_bound<_GUID>(
        __int64 a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  __int128 v7; // xmm1
  int v8; // eax
  __int128 Buf2; // [rsp+20h] [rbp-28h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-18h] BYREF

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *a2 = v5;
  v6 = v5;
  a2[1] = 0LL;
  for ( a2[2] = *(_QWORD *)a1; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
  {
    *a2 = v6;
    v7 = *((_OWORD *)v6 + 2);
    Buf2 = *a3;
    Buf1 = v7;
    if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) >= 0 )
    {
      a2[2] = v6;
      v8 = 1;
    }
    else
    {
      v6 += 2;
      v8 = 0;
    }
    *((_DWORD *)a2 + 2) = v8;
  }
  return a2;
}
