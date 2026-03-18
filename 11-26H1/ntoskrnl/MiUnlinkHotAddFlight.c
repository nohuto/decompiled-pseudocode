/*
 * XREFs of MiUnlinkHotAddFlight @ 0x140867064
 * Callers:
 *     MiPerformMemoryChange @ 0x1406E9974 (MiPerformMemoryChange.c)
 *     MiReturnAddMemoryResources @ 0x1406EA170 (MiReturnAddMemoryResources.c)
 *     MiHonorExistingHotMemoryFlights @ 0x14086654C (MiHonorExistingHotMemoryFlights.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUnlinkHotAddFlight(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 **v2; // rax

  if ( *a1 )
  {
    --dword_140E2D7E8;
    dword_140E2D7EC -= *((_DWORD *)a1 + 38);
    v1 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v2 = (__int64 **)a1[1], *v2 != a1) )
      __fastfail(3u);
    *v2 = v1;
    v1[1] = (__int64)v2;
    *a1 = 0LL;
  }
}
