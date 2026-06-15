/*
 * XREFs of sub_14006EEF4 @ 0x14006EEF4
 * Callers:
 *     sub_140027D7C @ 0x140027D7C (sub_140027D7C.c)
 * Callees:
 *     sub_14006EF48 @ 0x14006EF48 (sub_14006EF48.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006EEF4(__int64 *a1, int a2)
{
  __int64 v3; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(*a1 - 12) >= a2 || a2 <= 0 || (v3 = sub_1400B6010(*(_QWORD *)(*a1 - 24))) == 0 )
    sub_14006EF48();
  result = v3 + 24;
  *a1 = result;
  return result;
}
