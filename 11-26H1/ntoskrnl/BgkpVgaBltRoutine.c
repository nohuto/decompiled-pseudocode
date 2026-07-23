/*
 * XREFs of BgkpVgaBltRoutine @ 0x1405C82A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall BgkpVgaBltRoutine(void **a1, unsigned int *a2, char a3)
{
  if ( a3 )
  {
    memset_0(a1[2], 0, *((unsigned int *)a1 + 3));
    return 3221225473LL;
  }
  else
  {
    VidBitBltEx(*a2, a2[1], *((unsigned int *)a1 + 1), *(unsigned int *)a1, a1[2]);
    return 0LL;
  }
}
