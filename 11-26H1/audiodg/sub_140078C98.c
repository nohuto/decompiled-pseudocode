/*
 * XREFs of sub_140078C98 @ 0x140078C98
 * Callers:
 *     sub_14001A3A8 @ 0x14001A3A8 (sub_14001A3A8.c)
 *     sub_14001CE88 @ 0x14001CE88 (sub_14001CE88.c)
 *     sub_14003435C @ 0x14003435C (sub_14003435C.c)
 *     sub_14007C270 @ 0x14007C270 (sub_14007C270.c)
 *     sub_14007C350 @ 0x14007C350 (sub_14007C350.c)
 *     sub_14007C510 @ 0x14007C510 (sub_14007C510.c)
 *     sub_14007C5D0 @ 0x14007C5D0 (sub_14007C5D0.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_140078CE0 @ 0x140078CE0 (sub_140078CE0.c)
 */

__int64 __fastcall sub_140078C98(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 result; // rax

  if ( sub_14001FC10(a2, &xmmword_1400C6688) )
  {
    *v2 = v3;
    return 0LL;
  }
  else
  {
    result = sub_140078CE0(v3 + 8);
    if ( (_DWORD)result == -2147467262 )
      return 2147500034LL;
  }
  return result;
}
