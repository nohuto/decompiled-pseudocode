/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x1800F09DC
 * Callers:
 *     ?_Tidy@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXXZ @ 0x18004FB4C (-_Tidy@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@Internal@.c)
 *     ?_Change_array@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXQEAU?$pair@KVString@Internal@Windows@@@2@_K1@Z @ 0x180202230 (-_Change_array@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@I.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@YAPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x18020B410 (--$_Uninitialized_move@PEAU-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x1803106EC (--1_Reallocation_guard@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KV.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      Windows::Internal::String::~String((Windows::Internal::String *)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
