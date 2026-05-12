/*
 * XREFs of sub_140115430 @ 0x140115430
 * Callers:
 *     sub_1400F73A0 @ 0x1400F73A0 (sub_1400F73A0.c)
 *     sub_1401172A0 @ 0x1401172A0 (sub_1401172A0.c)
 *     sub_140117A50 @ 0x140117A50 (sub_140117A50.c)
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 *     sub_14011EBD0 @ 0x14011EBD0 (sub_14011EBD0.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_140115430(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  __int64 v6; // r9
  PSLIST_ENTRY result; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx

  if ( a4 )
  {
    v5 = *(_QWORD *)(a4 + 184);
    v6 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v6 + 64);
    result = *(PSLIST_ENTRY *)(v6 + 72);
    *(_QWORD *)(v5 + 24) = result;
  }
  if ( a3 )
  {
    v8 = 8LL * a2;
    do
    {
      v9 = *(_QWORD *)(a3 + 96);
      *(_QWORD *)(a3 + 88) = 0LL;
      *(_DWORD *)(a3 + 108) = 0;
      *(_DWORD *)(a3 + 104) = 0;
      result = ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 888) + v8), (PSLIST_ENTRY)a3);
      a3 = v9;
    }
    while ( v9 );
  }
  return result;
}
