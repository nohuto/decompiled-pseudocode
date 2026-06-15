/*
 * XREFs of sub_14006C0A0 @ 0x14006C0A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006C0A0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147467262;
  v5 = *a2 - 0x47E1371E6EC153C1LL;
  if ( *a2 == 0x47E1371E6EC153C1LL )
    v5 = a2[1] - 0x4278EB807F2F96A8LL;
  if ( v5 )
  {
    v6 = *a2;
    if ( !*a2 )
      v6 = a2[1] - 0x46000000000000C0LL;
    if ( v6 )
      return v4;
    *a3 = a1;
  }
  else
  {
    *a3 = a1;
  }
  v4 = 0;
  sub_1400B6010(a1);
  return v4;
}
