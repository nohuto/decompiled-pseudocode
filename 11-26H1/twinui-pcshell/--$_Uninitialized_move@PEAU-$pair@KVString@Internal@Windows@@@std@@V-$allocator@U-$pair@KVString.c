/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@YAPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x18020B410
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x1802B7C54 (--$_Reallocate@$0A@@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVStr.c)
 *     ??$_Emplace_reallocate@U?$pair@KVString@Internal@Windows@@@std@@@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAPEAU?$pair@KVString@Internal@Windows@@@1@QEAU21@$$QEAU21@@Z @ 0x18030F3C0 (--$_Emplace_reallocate@U-$pair@KVString@Internal@Windows@@@std@@@-$vector@U-$pair@KVString@Inter.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x1800F09DC (--$_Destroy_range@V-$allocator@U-$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU-$pai.c)
 */

char *__fastcall std::_Uninitialized_move<std::pair<unsigned long,Windows::Internal::String> *,std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 1;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      *(_DWORD *)a3 = *((_DWORD *)v4 - 2);
      a3 += 16;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = *v4;
      *v4 = 0LL;
      v4 += 2;
    }
    while ( v4 - 1 != a2 );
  }
  std::_Destroy_range<std::allocator<std::pair<unsigned long,Windows::Internal::String>>>((__int64)a3, (__int64)a3);
  return a3;
}
