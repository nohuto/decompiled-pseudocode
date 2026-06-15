/*
 * XREFs of sub_14006C91C @ 0x14006C91C
 * Callers:
 *     sub_14006C9D0 @ 0x14006C9D0 (sub_14006C9D0.c)
 * Callees:
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_140064A88 @ 0x140064A88 (sub_140064A88.c)
 *     sub_14006CAD8 @ 0x14006CAD8 (sub_14006CAD8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_14006C91C(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  v9 = a1;
  v10 = 0LL;
  v6 = (_QWORD *)sub_140044584(0x18uLL);
  sub_140064A88(v6 + 2, a3);
  ++*(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  *v6 = a2;
  v6[1] = v7;
  v10 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  *v7 = v6;
  sub_14006CAD8(&v9);
  return v6;
}
