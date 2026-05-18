/*
 * XREFs of sub_1800283D0 @ 0x1800283D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028A44 @ 0x180028A44 (sub_180028A44.c)
 *     sub_180029420 @ 0x180029420 (sub_180029420.c)
 *     sub_180053FD0 @ 0x180053FD0 (sub_180053FD0.c)
 */

__int64 __fastcall sub_1800283D0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  sub_180028A44(a1 + 120, &v7);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    sub_180053FD0(v4, a2);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    sub_180053FD0(v5, a2);
  v7 = a2;
  return sub_180029420(a1 + 80, &v7);
}
