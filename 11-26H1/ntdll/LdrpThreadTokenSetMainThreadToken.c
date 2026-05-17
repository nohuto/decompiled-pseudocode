/*
 * XREFs of LdrpThreadTokenSetMainThreadToken @ 0x1800E2CEC
 * Callers:
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     NtOpenThreadToken @ 0x18015F3C0 (NtOpenThreadToken.c)
 */

__int64 LdrpThreadTokenSetMainThreadToken()
{
  unsigned int v0; // ebx
  void *v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = NtOpenThreadToken(-2LL, 131100LL, 0LL, &v2);
  LdrpMainThreadToken = v2;
  if ( v0 != -1073741700 )
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrapi.c",
      4383,
      (__int64)"LdrpThreadTokenSetMainThreadToken",
      2,
      "Status: 0x%x\n",
      v0);
  return v0;
}
