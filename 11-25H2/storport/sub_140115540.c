/*
 * XREFs of sub_140115540 @ 0x140115540
 * Callers:
 *     sub_140118950 @ 0x140118950 (sub_140118950.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_140115540(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r8

  if ( a3 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 184LL);
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(a2 + 56);
  }
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_BYTE *)(a2 + 126) = 0;
  return ExpInterlockedPushEntrySList(
           *(PSLIST_HEADER *)(*(_QWORD *)(a1 + 896) + 8LL * *(unsigned int *)(a2 + 120)),
           (PSLIST_ENTRY)a2);
}
