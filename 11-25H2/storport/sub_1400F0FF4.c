/*
 * XREFs of sub_1400F0FF4 @ 0x1400F0FF4
 * Callers:
 *     sub_1400E8030 @ 0x1400E8030 (sub_1400E8030.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

PSLIST_ENTRY __fastcall sub_1400F0FF4(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 1416) )
    {
      memset_0(*(void **)a2, 0, 0x10B0uLL);
      *(_DWORD *)(a2 + 48) &= ~1u;
      return ExpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1416) + 16LL), (PSLIST_ENTRY)(a2 + 16));
    }
  }
  return result;
}
