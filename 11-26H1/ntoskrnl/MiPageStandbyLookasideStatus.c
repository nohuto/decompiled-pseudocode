/*
 * XREFs of MiPageStandbyLookasideStatus @ 0x140423010
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageStandbyLookasideStatus(ULONG_PTR a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax

  if ( a1 >= qword_140E347B0 && a1 < qword_140E347B0 + 2048 )
    return 2LL;
  v1 = *(_QWORD *)(48 * a1 - 0x21FFFFFFFFF0LL);
  if ( (v1 & 0x400) != 0 )
    v2 = v1 >> 3;
  else
    v2 = v1 >> 28;
  return (v2 & 1) == 0;
}
