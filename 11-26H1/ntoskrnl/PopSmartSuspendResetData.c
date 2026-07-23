/*
 * XREFs of PopSmartSuspendResetData @ 0x14077A74C
 * Callers:
 *     PopSmartSuspendInit @ 0x140CDB184 (PopSmartSuspendInit.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PopSmartSuspendResetData(_QWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x68uLL);
  result = -1LL;
  a1[5] = -1LL;
  a1[7] = -1LL;
  return result;
}
