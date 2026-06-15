/*
 * XREFs of sub_1400219B0 @ 0x1400219B0
 * Callers:
 *     sub_1400204AC @ 0x1400204AC (sub_1400204AC.c)
 *     sub_140021650 @ 0x140021650 (sub_140021650.c)
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 *     sub_140021954 @ 0x140021954 (sub_140021954.c)
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 * Callees:
 *     sub_140037244 @ 0x140037244 (sub_140037244.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_140047AFC @ 0x140047AFC (sub_140047AFC.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     sub_140054660 @ 0x140054660 (sub_140054660.c)
 */

__int64 __fastcall sub_1400219B0(char **a1, const void *a2, unsigned __int64 a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r14
  char *v9; // rax
  size_t v10; // rbx
  char *v11; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    sub_140054660();
  if ( a3 > 7 )
  {
    v8 = sub_140037244(a3);
    if ( (unsigned __int64)(v8 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      sub_140047AFC();
    v9 = (char *)sub_140044584(2 * (v8 + 1));
    a1[2] = (char *)a3;
    v10 = 2 * a3;
    *a1 = v9;
    a1[3] = (char *)v8;
    v11 = v9;
    memcpy(v9, a2, v10);
    result = 0LL;
    *(_WORD *)&v11[v10] = 0;
  }
  else
  {
    a1[2] = (char *)a3;
    v6 = 2 * a3;
    a1[3] = (char *)7;
    memcpy(a1, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)((char *)a1 + v6) = 0;
  }
  return result;
}
