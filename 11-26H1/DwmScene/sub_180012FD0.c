/*
 * XREFs of sub_180012FD0 @ 0x180012FD0
 * Callers:
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_18001323C @ 0x18001323C (sub_18001323C.c)
 *     sub_180014014 @ 0x180014014 (sub_180014014.c)
 */

void __fastcall sub_180012FD0(_QWORD *a1, _OWORD *a2, unsigned __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  void *v8; // rax

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    sub_180012A10();
  if ( a3 > 7 )
  {
    v6 = sub_180014014(a3);
    v7 = sub_18001323C(v6 + 1);
    v8 = (void *)sub_180011790(v7);
    *a1 = v8;
    a1[2] = a3;
    a1[3] = v6;
    memcpy(v8, a2, 2 * a3 + 2);
  }
  else
  {
    a1[2] = a3;
    a1[3] = 7LL;
    *(_OWORD *)a1 = *a2;
  }
}
