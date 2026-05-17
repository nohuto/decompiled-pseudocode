/*
 * XREFs of LdrpWaitForInitializationComplete @ 0x1800CEB74
 * Callers:
 *     LdrpInitializeInternal @ 0x1800CEA78 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 */

void __fastcall LdrpWaitForInitializationComplete(_DWORD *a1, HANDLE *a2)
{
  NTSTATUS v3; // eax
  int v4; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *a2 )
  {
    v3 = NtWaitForSingleObject(*a2, 0, 0LL);
    if ( v3 >= 0 )
      return;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      1287,
      (__int64)"LdrpWaitForInitializationComplete",
      1,
      "NtWaitForSingleObject failed with status 0x%08lx, fallback to delay loop\n",
      v3);
  }
  v5 = -300000LL;
  while ( *a1 == 1 )
  {
    v4 = ZwDelayExecution(0LL, &v5);
    if ( v4 < 0 )
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        1305,
        (__int64)"LdrpWaitForInitializationComplete",
        1,
        "Delaying execution for hot patch initialization failed with status 0x%08lx\n",
        v4);
  }
}
