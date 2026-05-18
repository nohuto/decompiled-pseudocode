/*
 * XREFs of sub_18006B530 @ 0x18006B530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028A44 @ 0x180028A44 (sub_180028A44.c)
 *     sub_180029420 @ 0x180029420 (sub_180029420.c)
 *     sub_1800525C0 @ 0x1800525C0 (sub_1800525C0.c)
 *     sub_180053FD0 @ 0x180053FD0 (sub_180053FD0.c)
 */

__int64 __fastcall sub_18006B530(__int64 *a1, unsigned int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  sub_180053FD0(a1[14], a2);
  v4 = a1 + 24;
  v5 = 4LL;
  do
  {
    v6 = *(v4 - 8);
    if ( v6 )
      sub_180053FD0(v6, a2);
    if ( *v4 )
      sub_1800525C0(*v4, a2);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = a2;
  sub_180028A44(a1 + 32, &v8);
  v8 = a2;
  return sub_180029420(a1 + 10, &v8);
}
