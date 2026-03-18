/*
 * XREFs of PopSmartSuspendResetData @ 0x1407778AC
 * Callers:
 *     PopSmartSuspendInit @ 0x140CD4DE4 (PopSmartSuspendInit.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
