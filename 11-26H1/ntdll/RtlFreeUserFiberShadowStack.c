/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x180106000
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18015F2C0 (NtSetInformationProcess.c)
 */

__int64 __fastcall RtlFreeUserFiberShadowStack(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return NtSetInformationProcess(-1LL, 99LL, &v2, 8LL);
}
