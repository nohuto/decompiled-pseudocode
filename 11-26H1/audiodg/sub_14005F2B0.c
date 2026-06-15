/*
 * XREFs of sub_14005F2B0 @ 0x14005F2B0
 * Callers:
 *     sub_1400205E0 @ 0x1400205E0 (sub_1400205E0.c)
 * Callees:
 *     sub_140037244 @ 0x140037244 (sub_140037244.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_140047AFC @ 0x140047AFC (sub_140047AFC.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 */

__int64 *__fastcall sub_14005F2B0(__int64 *a1, unsigned __int64 a2, __int64 a3, const void *a4)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  char *v9; // rax
  size_t v10; // rbx
  char *v11; // rsi

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  v7 = a1[3];
  v8 = sub_140037244(a2, v7, 0x7FFFFFFFFFFFFFFEuLL);
  if ( v8 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    sub_140047AFC();
  v9 = (char *)sub_140044584(2 * (v8 + 1));
  a1[2] = a2;
  v10 = 2 * a2;
  a1[3] = v8;
  v11 = v9;
  memcpy(v9, a4, v10);
  *(_WORD *)&v11[v10] = 0;
  if ( v7 > 7 )
    sub_1400453E4(*a1, 2 * v7 + 2);
  *a1 = (__int64)v11;
  return a1;
}
