/*
 * XREFs of LdrpCreateKey @ 0x180141E10
 * Callers:
 *     RtlpSetMachineUILanguagesImmediate @ 0x18014303C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     ZwCreateKey @ 0x18015F2E0 (ZwCreateKey.c)
 */

__int64 __fastcall LdrpCreateKey(__int64 a1, __int64 a2, int a3, unsigned int a4, _QWORD *a5)
{
  _QWORD v6[4]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v7; // [rsp+60h] [rbp-18h]

  v6[2] = a1;
  v6[1] = a2;
  v6[0] = 48LL;
  v6[3] = 64LL;
  *a5 = 0LL;
  v7 = 0LL;
  return ZwCreateKey(a5, a4, v6, 0LL, 0LL, a3, 0LL);
}
