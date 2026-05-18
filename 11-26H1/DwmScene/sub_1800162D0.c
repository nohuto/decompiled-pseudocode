/*
 * XREFs of sub_1800162D0 @ 0x1800162D0
 * Callers:
 *     sub_180016F1C @ 0x180016F1C (sub_180016F1C.c)
 *     sub_180024B24 @ 0x180024B24 (sub_180024B24.c)
 *     sub_1800291F0 @ 0x1800291F0 (sub_1800291F0.c)
 *     sub_18002A0A4 @ 0x18002A0A4 (sub_18002A0A4.c)
 *     sub_18002AF84 @ 0x18002AF84 (sub_18002AF84.c)
 *     sub_18002BA80 @ 0x18002BA80 (sub_18002BA80.c)
 *     sub_18002D960 @ 0x18002D960 (sub_18002D960.c)
 *     sub_18002E04C @ 0x18002E04C (sub_18002E04C.c)
 *     sub_180032574 @ 0x180032574 (sub_180032574.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_180033C00 @ 0x180033C00 (sub_180033C00.c)
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 *     sub_1800351DC @ 0x1800351DC (sub_1800351DC.c)
 *     sub_18003587C @ 0x18003587C (sub_18003587C.c)
 *     sub_180035A5C @ 0x180035A5C (sub_180035A5C.c)
 *     sub_180035EE0 @ 0x180035EE0 (sub_180035EE0.c)
 *     sub_1800369D4 @ 0x1800369D4 (sub_1800369D4.c)
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 *     sub_180038C7C @ 0x180038C7C (sub_180038C7C.c)
 *     sub_18003A5B8 @ 0x18003A5B8 (sub_18003A5B8.c)
 *     sub_180040BE4 @ 0x180040BE4 (sub_180040BE4.c)
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 *     sub_1800433C4 @ 0x1800433C4 (sub_1800433C4.c)
 *     sub_180054E00 @ 0x180054E00 (sub_180054E00.c)
 *     sub_1800552D0 @ 0x1800552D0 (sub_1800552D0.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18005C6C0 @ 0x18005C6C0 (sub_18005C6C0.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_180063CC0 @ 0x180063CC0 (sub_180063CC0.c)
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 *     sub_180066AA4 @ 0x180066AA4 (sub_180066AA4.c)
 *     sub_18006D8E8 @ 0x18006D8E8 (sub_18006D8E8.c)
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 *     sub_18007A800 @ 0x18007A800 (sub_18007A800.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800162D0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2[1] )
  {
    *a1 = *a2;
    v2 = a2[1];
    a1[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  }
  return a1;
}
