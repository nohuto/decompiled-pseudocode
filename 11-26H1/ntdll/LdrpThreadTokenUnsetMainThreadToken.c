/*
 * XREFs of LdrpThreadTokenUnsetMainThreadToken @ 0x1800ED158
 * Callers:
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 LdrpThreadTokenUnsetMainThreadToken()
{
  unsigned int v0; // ebx

  v0 = NtClose(LdrpMainThreadToken);
  LdrpMainThreadToken = 0LL;
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrapi.c",
    4421,
    (__int64)"LdrpThreadTokenUnsetMainThreadToken",
    2,
    "Status: 0x%x\n",
    v0);
  return v0;
}
