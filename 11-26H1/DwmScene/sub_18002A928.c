/*
 * XREFs of sub_18002A928 @ 0x18002A928
 * Callers:
 *     sub_18002A928 @ 0x18002A928 (sub_18002A928.c)
 *     sub_18002B344 @ 0x18002B344 (sub_18002B344.c)
 * Callees:
 *     sub_18002A928 @ 0x18002A928 (sub_18002A928.c)
 *     sub_18002A9AC @ 0x18002A9AC (sub_18002A9AC.c)
 */

__int64 __fastcall sub_18002A928(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002A9AC(v7, v6) )
  {
    sub_18002A928(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
