/*
 * XREFs of LdrpThreadTokenSetImpersonationToken @ 0x180087118
 * Callers:
 *     LdrpWorkCallback @ 0x180086FF0 (LdrpWorkCallback.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 */

__int64 __fastcall LdrpThreadTokenSetImpersonationToken(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  v1 = NtSetInformationThread(-2LL, 5LL, &v3, 8LL);
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrapi.c",
    4480,
    (__int64)"LdrpThreadTokenSetImpersonationToken",
    2,
    "Status: 0x%x\n",
    v1);
  return v1;
}
