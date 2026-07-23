/*
 * XREFs of MiLogCombinedPteDelete @ 0x140709680
 * Callers:
 *     MiDecommitSharedPageTail @ 0x1402BDD20 (MiDecommitSharedPageTail.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiDecrementCombinedPteEx @ 0x14036BF5C (MiDecrementCombinedPteEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogCombinedPteDelete(__int64 a1)
{
  _QWORD v2[2]; // [rsp+30h] [rbp-38h] BYREF
  int v3; // [rsp+40h] [rbp-28h]
  int v4; // [rsp+44h] [rbp-24h]
  _QWORD v5[2]; // [rsp+48h] [rbp-20h] BYREF

  v4 = 0;
  v2[0] = a1;
  v2[1] = a1;
  v3 = -1;
  v5[0] = v2;
  v5[1] = 24LL;
  return EtwTraceKernelEvent((int)v5, 1, 0x28000001u, 591, 290462466);
}
