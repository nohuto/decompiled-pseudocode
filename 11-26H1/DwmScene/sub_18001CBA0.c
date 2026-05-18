/*
 * XREFs of sub_18001CBA0 @ 0x18001CBA0
 * Callers:
 *     sub_18001CB70 @ 0x18001CB70 (sub_18001CB70.c)
 *     sub_18001CBA0 @ 0x18001CBA0 (sub_18001CBA0.c)
 *     sub_18001D5EC @ 0x18001D5EC (sub_18001D5EC.c)
 *     sub_18001E024 @ 0x18001E024 (sub_18001E024.c)
 *     sub_1800D2A48 @ 0x1800D2A48 (sub_1800D2A48.c)
 *     sub_1800D39C8 @ 0x1800D39C8 (sub_1800D39C8.c)
 *     sub_1800D4970 @ 0x1800D4970 (sub_1800D4970.c)
 * Callees:
 *     sub_18001CBA0 @ 0x18001CBA0 (sub_18001CBA0.c)
 *     sub_18001CD08 @ 0x18001CD08 (sub_18001CD08.c)
 */

__int64 __fastcall sub_18001CBA0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18001CD08(v7, v6) )
  {
    sub_18001CBA0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
