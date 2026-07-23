/*
 * XREFs of PfpPartitionLogEventCallback @ 0x1404D2E50
 * Callers:
 *     <none>
 * Callees:
 *     PfLogEvent @ 0x140384750 (PfLogEvent.c)
 */

__int64 __fastcall PfpPartitionLogEventCallback(__int64 a1, __int64 a2)
{
  size_t Size; // [rsp+20h] [rbp-18h]

  LODWORD(Size) = *(_DWORD *)(a2 + 8);
  return PfLogEvent(a1, *(_DWORD *)a2, *(_DWORD *)(a2 + 4), *(const void **)(a2 + 16), Size);
}
