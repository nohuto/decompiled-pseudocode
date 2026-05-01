/*
 * XREFs of SdbpRemoveSDBLookupEntry @ 0x1800920B4
 * Callers:
 *     SdbReleaseDatabase @ 0x18008DDFC (SdbReleaseDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpRemoveSDBLookupEntry(__int64 a1, _QWORD **a2)
{
  if ( a2[1] == a2 )
  {
    *(_QWORD *)(a1 + 576) = 0LL;
  }
  else
  {
    if ( *(_QWORD ***)(a1 + 576) == a2 )
      *(_QWORD *)(a1 + 576) = *a2;
    *a2[1] = *a2;
    (*a2)[1] = a2[1];
  }
  return AslFree(NtCurrentPeb()->ProcessHeap, a2);
}
