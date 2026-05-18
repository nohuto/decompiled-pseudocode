/*
 * XREFs of ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_4 @ 0x1800E53C8
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F3B0 @ 0x18001F3B0 (sub_18001F3B0.c)
 */

__int64 __fastcall `std::collate<unsigned short>::do_transform'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18001F3B0();
  }
  return result;
}
