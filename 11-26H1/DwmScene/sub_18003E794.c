/*
 * XREFs of sub_18003E794 @ 0x18003E794
 * Callers:
 *     sub_18003E794 @ 0x18003E794 (sub_18003E794.c)
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 * Callees:
 *     sub_18003E794 @ 0x18003E794 (sub_18003E794.c)
 *     sub_18003EA0C @ 0x18003EA0C (sub_18003EA0C.c)
 */

__int64 __fastcall sub_18003E794(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18003EA0C(v7, v6) )
  {
    sub_18003E794(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
