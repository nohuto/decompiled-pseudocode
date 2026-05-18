/*
 * XREFs of sub_18002A8D0 @ 0x18002A8D0
 * Callers:
 *     sub_18002A8A0 @ 0x18002A8A0 (sub_18002A8A0.c)
 *     sub_18002A8D0 @ 0x18002A8D0 (sub_18002A8D0.c)
 *     sub_18002B31C @ 0x18002B31C (sub_18002B31C.c)
 *     sub_18006F8B8 @ 0x18006F8B8 (sub_18006F8B8.c)
 * Callees:
 *     sub_18002A8D0 @ 0x18002A8D0 (sub_18002A8D0.c)
 *     sub_18002A980 @ 0x18002A980 (sub_18002A980.c)
 */

__int64 __fastcall sub_18002A8D0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002A980(v7, v6) )
  {
    sub_18002A8D0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
