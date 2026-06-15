/*
 * XREFs of sub_14000F0A0 @ 0x14000F0A0
 * Callers:
 *     sub_14000EF98 @ 0x14000EF98 (sub_14000EF98.c)
 *     sub_140073470 @ 0x140073470 (sub_140073470.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000F0A0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 < 0 )
    return sub_14001DBF0(2 * v1);
  return result;
}
