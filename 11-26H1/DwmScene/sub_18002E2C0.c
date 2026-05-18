/*
 * XREFs of sub_18002E2C0 @ 0x18002E2C0
 * Callers:
 *     sub_18002E290 @ 0x18002E290 (sub_18002E290.c)
 *     sub_18002E2C0 @ 0x18002E2C0 (sub_18002E2C0.c)
 *     sub_1800759E0 @ 0x1800759E0 (sub_1800759E0.c)
 * Callees:
 *     sub_18002E2C0 @ 0x18002E2C0 (sub_18002E2C0.c)
 *     sub_18002EBEC @ 0x18002EBEC (sub_18002EBEC.c)
 */

__int64 __fastcall sub_18002E2C0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002EBEC(v7, v6) )
  {
    sub_18002E2C0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
