/*
 * XREFs of sub_14001DBF0 @ 0x14001DBF0
 * Callers:
 *     sub_14000F0A0 @ 0x14000F0A0 (sub_14000F0A0.c)
 *     sub_140016EDC @ 0x140016EDC (sub_140016EDC.c)
 *     sub_140017A94 @ 0x140017A94 (sub_140017A94.c)
 *     sub_140017CE0 @ 0x140017CE0 (sub_140017CE0.c)
 *     sub_14001B398 @ 0x14001B398 (sub_14001B398.c)
 *     sub_14001DBC0 @ 0x14001DBC0 (sub_14001DBC0.c)
 *     sub_140050010 @ 0x140050010 (sub_140050010.c)
 *     sub_14005FD8C @ 0x14005FD8C (sub_14005FD8C.c)
 *     sub_140064ABC @ 0x140064ABC (sub_140064ABC.c)
 *     sub_140077E70 @ 0x140077E70 (sub_140077E70.c)
 *     sub_140077EA4 @ 0x140077EA4 (sub_140077EA4.c)
 *     sub_1400897DC @ 0x1400897DC (sub_1400897DC.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001DBF0(__int64 a1)
{
  signed __int32 v1; // r8d
  unsigned __int32 v2; // ebx

  do
    v1 = *(_DWORD *)(a1 + 12);
  while ( v1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 12), v1 - 1, v1) );
  v2 = v1 - 1;
  if ( v1 == 1 )
  {
    if ( a1 )
      sub_1400B6010(a1);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v2;
}
