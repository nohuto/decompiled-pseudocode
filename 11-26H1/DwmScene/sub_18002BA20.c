/*
 * XREFs of sub_18002BA20 @ 0x18002BA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_18009888C @ 0x18009888C (sub_18009888C.c)
 */

__int64 __fastcall sub_18002BA20(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = sub_180041DBC(*(_QWORD *)(a1 + 440) + 184LL);
  if ( (_BYTE)result )
    result = sub_18009888C(v3, *(_QWORD *)(v3 + 192));
  ++*(_QWORD *)(a1 + 480);
  return result;
}
