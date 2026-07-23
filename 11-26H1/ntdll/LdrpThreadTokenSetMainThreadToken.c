/*
 * XREFs of LdrpThreadTokenSetMainThreadToken @ 0x1800E154C
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     NtOpenThreadToken @ 0x18015F2C0 (NtOpenThreadToken.c)
 */

__int64 LdrpThreadTokenSetMainThreadToken()
{
  unsigned __int32 v0; // ebx
  HANDLE TokenHandle; // [rsp+40h] [rbp+8h] BYREF

  TokenHandle = 0LL;
  v0 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x2001Cu, 0, &TokenHandle);
  LdrpMainThreadToken = TokenHandle;
  if ( v0 != -1073741700 )
    LdrpLogInternal(
      "minkernel\\ldr\\ldrapi.c",
      4383,
      (__int64)"LdrpThreadTokenSetMainThreadToken",
      2,
      "Status: 0x%x\n",
      v0);
  return v0;
}
