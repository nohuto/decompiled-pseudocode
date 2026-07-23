/*
 * XREFs of PfpPartitionCanDoAccessLoggingCallback @ 0x140602AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionCanDoAccessLoggingCallback(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 600);
  v3 = *(_DWORD *)(a1 + 604);
  result = v2 >= v3 ? 0xC0000189 : 0;
  *a2 = v2 < v3;
  return result;
}
