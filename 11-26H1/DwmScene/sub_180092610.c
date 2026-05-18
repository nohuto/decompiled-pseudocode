/*
 * XREFs of sub_180092610 @ 0x180092610
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

__int64 __fastcall sub_180092610(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v4; // rcx
  void *v5; // rdx

  switch ( a3 )
  {
    case 0:
      v5 = &unk_1801CBFF8;
      goto LABEL_12;
    case 1:
      v5 = &unk_1801CC038;
      goto LABEL_12;
    case 2:
      v5 = &unk_1801CC018;
      goto LABEL_12;
    case 3:
      v5 = &unk_1801CBFD8;
LABEL_12:
      v4 = (_QWORD *)a2;
      goto LABEL_13;
  }
  v4 = (_QWORD *)a2;
  if ( a3 == 5 )
  {
    v5 = &unk_1801CC058;
LABEL_13:
    sub_1800181BC(v4, (__int64)v5);
    return a2;
  }
  sub_1800143C0(a2);
  return a2;
}
