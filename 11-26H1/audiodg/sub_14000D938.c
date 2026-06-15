/*
 * XREFs of sub_14000D938 @ 0x14000D938
 * Callers:
 *     sub_14000C3C4 @ 0x14000C3C4 (sub_14000C3C4.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14000D8D0 @ 0x14000D8D0 (sub_14000D8D0.c)
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14000EDE0 @ 0x14000EDE0 (sub_14000EDE0.c)
 *     sub_14002B664 @ 0x14002B664 (sub_14002B664.c)
 *     sub_140032480 @ 0x140032480 (sub_140032480.c)
 *     sub_14003A5EC @ 0x14003A5EC (sub_14003A5EC.c)
 *     sub_14003F004 @ 0x14003F004 (sub_14003F004.c)
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14000DEF8 @ 0x14000DEF8 (sub_14000DEF8.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000D938(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  while ( *(_QWORD *)(a1 + 16) )
  {
    v4 = *(__int64 **)a1;
    if ( !*(_QWORD *)a1 )
      sub_14004639C(2147500037LL, a2);
    *(_QWORD *)a1 = *v4;
    result = *(_QWORD *)(a1 + 32);
    *v4 = result;
    *(_QWORD *)(a1 + 32) = v4;
    if ( (*(_QWORD *)(a1 + 16))-- == 1LL )
      result = sub_14000D938(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
  {
    result = sub_14000DEF8();
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
