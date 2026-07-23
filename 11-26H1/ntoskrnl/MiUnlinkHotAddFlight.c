/*
 * XREFs of MiUnlinkHotAddFlight @ 0x14086D444
 * Callers:
 *     MiPerformMemoryChange @ 0x1406EE614 (MiPerformMemoryChange.c)
 *     MiReturnAddMemoryResources @ 0x1406EEE10 (MiReturnAddMemoryResources.c)
 *     MiHonorExistingHotMemoryFlights @ 0x14086C92C (MiHonorExistingHotMemoryFlights.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUnlinkHotAddFlight(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 **v2; // rax

  if ( *a1 )
  {
    --dword_140E2D968;
    dword_140E2D96C -= *((_DWORD *)a1 + 38);
    v1 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v2 = (__int64 **)a1[1], *v2 != a1) )
      __fastfail(3u);
    *v2 = v1;
    v1[1] = (__int64)v2;
    *a1 = 0LL;
  }
}
