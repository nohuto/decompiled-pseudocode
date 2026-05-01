/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@YAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@@Z @ 0x18033EA0C
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@QEAU21@$$QEAU21@@Z @ 0x18033D83C (--$_Emplace_reallocate@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@s.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x18033E494 (--$_Reallocate@$0A@@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@QEAU10@AEAV?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@@Z @ 0x18033D320 (--$_Destroy_range@V-$allocator@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

char *__fastcall std::_Uninitialized_move<std::pair<unsigned long,std::wstring> *,std::allocator<std::pair<unsigned long,std::wstring>>>(
        _DWORD *a1,
        _DWORD *a2,
        char *a3)
{
  _DWORD *v4; // r8
  signed __int64 v5; // r9
  char *v6; // r10
  __int64 v7; // r8
  _DWORD *v8; // r11

  v4 = a1;
  if ( a1 != a2 )
  {
    v5 = (char *)a1 - a3;
    v6 = (char *)(a3 - (char *)a1);
    do
    {
      *(_DWORD *)a3 = *v4;
      std::wstring::wstring((__int64)&v6[(_QWORD)v4 + 8], (__int64)&v6[(_QWORD)v4 + 8 + v5]);
      a3 += 40;
      v4 = (_DWORD *)(v7 + 40);
    }
    while ( v4 != v8 );
  }
  std::_Destroy_range<std::allocator<std::pair<unsigned long,std::wstring>>>((__int64)a3, (__int64)a3);
  return a3;
}
