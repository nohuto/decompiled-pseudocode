/*
 * XREFs of sub_1400CC020 @ 0x1400CC020
 * Callers:
 *     <none>
 * Callees:
 *     sub_14003F8D8 @ 0x14003F8D8 (sub_14003F8D8.c)
 */

PSLIST_ENTRY __fastcall sub_1400CC020(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 1088));
  if ( a2[4].LowPart == 1 )
    KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 1088));
  return sub_14003F8D8((union _SLIST_HEADER *)(v2 + 608), (__int64)a2);
}
