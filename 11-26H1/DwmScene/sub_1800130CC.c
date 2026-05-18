/*
 * XREFs of sub_1800130CC @ 0x1800130CC
 * Callers:
 *     sub_180013374 @ 0x180013374 (sub_180013374.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_180014048 @ 0x180014048 (sub_180014048.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180024EC4 @ 0x180024EC4 (sub_180024EC4.c)
 *     sub_1800259D4 @ 0x1800259D4 (sub_1800259D4.c)
 *     sub_180025C5C @ 0x180025C5C (sub_180025C5C.c)
 *     sub_180026DB0 @ 0x180026DB0 (sub_180026DB0.c)
 *     sub_18002DC64 @ 0x18002DC64 (sub_18002DC64.c)
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 *     sub_180031D68 @ 0x180031D68 (sub_180031D68.c)
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 *     sub_18003A924 @ 0x18003A924 (sub_18003A924.c)
 *     sub_1800597B4 @ 0x1800597B4 (sub_1800597B4.c)
 *     sub_18005F9E0 @ 0x18005F9E0 (sub_18005F9E0.c)
 *     sub_18005FB08 @ 0x18005FB08 (sub_18005FB08.c)
 *     sub_18006D644 @ 0x18006D644 (sub_18006D644.c)
 *     sub_18006DB8C @ 0x18006DB8C (sub_18006DB8C.c)
 *     sub_18008F0C0 @ 0x18008F0C0 (sub_18008F0C0.c)
 *     sub_18008F17C @ 0x18008F17C (sub_18008F17C.c)
 *     sub_18008F2DC @ 0x18008F2DC (sub_18008F2DC.c)
 *     sub_18008F33C @ 0x18008F33C (sub_18008F33C.c)
 *     sub_18008F734 @ 0x18008F734 (sub_18008F734.c)
 *     sub_18008FBE0 @ 0x18008FBE0 (sub_18008FBE0.c)
 *     sub_180093AD0 @ 0x180093AD0 (sub_180093AD0.c)
 *     sub_18009B754 @ 0x18009B754 (sub_18009B754.c)
 *     sub_1800D4C18 @ 0x1800D4C18 (sub_1800D4C18.c)
 *     sub_1800D4F08 @ 0x1800D4F08 (sub_1800D4F08.c)
 *     sub_1800D51D4 @ 0x1800D51D4 (sub_1800D51D4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_1800130CC(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        result = sub_180010EC8(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
