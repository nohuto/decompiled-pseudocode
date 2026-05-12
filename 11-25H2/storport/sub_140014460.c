/*
 * XREFs of sub_140014460 @ 0x140014460
 * Callers:
 *     sub_14001AB28 @ 0x14001AB28 (sub_14001AB28.c)
 *     sub_1400A1750 @ 0x1400A1750 (sub_1400A1750.c)
 *     sub_1401ADB60 @ 0x1401ADB60 (sub_1401ADB60.c)
 * Callees:
 *     sub_1400144F0 @ 0x1400144F0 (sub_1400144F0.c)
 *     sub_140016010 @ 0x140016010 (sub_140016010.c)
 *     sub_14003A710 @ 0x14003A710 (sub_14003A710.c)
 *     sub_140040448 @ 0x140040448 (sub_140040448.c)
 */

void __fastcall sub_140014460(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    sub_140040448(*(_QWORD *)(a1 + 56));
    sub_14003A710(v1);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  sub_1400144F0(a1);
  v3 = (_QWORD **)(a1 + 120);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    sub_140016010(v4 + 2);
    ExFreePoolWithTag(v4 - 2, 0x74456152u);
  }
}
