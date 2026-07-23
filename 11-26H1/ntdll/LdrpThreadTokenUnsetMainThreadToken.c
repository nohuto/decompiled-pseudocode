/*
 * XREFs of LdrpThreadTokenUnsetMainThreadToken @ 0x1800EC5F8
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

__int64 LdrpThreadTokenUnsetMainThreadToken()
{
  unsigned __int32 v0; // ebx

  v0 = NtClose(LdrpMainThreadToken);
  LdrpMainThreadToken = 0LL;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrapi.c",
    4421,
    (__int64)"LdrpThreadTokenUnsetMainThreadToken",
    2,
    "Status: 0x%x\n",
    v0);
  return v0;
}
