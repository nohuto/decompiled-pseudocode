/*
 * XREFs of sub_140039DC0 @ 0x140039DC0
 * Callers:
 *     sub_140039D80 @ 0x140039D80 (sub_140039D80.c)
 * Callees:
 *     sub_140039E0C @ 0x140039E0C (sub_140039E0C.c)
 *     sub_140039E2C @ 0x140039E2C (sub_140039E2C.c)
 */

__int64 __fastcall sub_140039DC0(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_1400B8790;
  if ( *(_BYTE *)(a1 + 24) )
  {
    sub_140039E2C(*(_QWORD *)(a1 + 16));
    *(_BYTE *)(a1 + 24) = 0;
  }
  result = sub_140039E0C(a1 + 16);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
