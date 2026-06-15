/*
 * XREFs of sub_1400A9518 @ 0x1400A9518
 * Callers:
 *     sub_1400A9A10 @ 0x1400A9A10 (sub_1400A9A10.c)
 *     sub_1400A9B50 @ 0x1400A9B50 (sub_1400A9B50.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400A90C4 @ 0x1400A90C4 (sub_1400A90C4.c)
 */

__int64 __fastcall sub_1400A9518(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 28) = 0;
    result = sub_1400A90C4((_QWORD *)(a1 + 8));
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    return sub_140007588(v3);
  return result;
}
