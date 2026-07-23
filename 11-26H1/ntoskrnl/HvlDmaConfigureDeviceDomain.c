/*
 * XREFs of HvlDmaConfigureDeviceDomain @ 0x1405BEAD0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaConfigureDeviceDomain(int *a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned __int16 v4; // ax
  _QWORD v6[2]; // [rsp+40h] [rbp-48h] BYREF
  int v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+54h] [rbp-34h]
  unsigned __int64 v9; // [rsp+58h] [rbp-30h]
  __int64 v10; // [rsp+60h] [rbp-28h]

  v6[0] = -1LL;
  v6[1] = 0LL;
  v7 = 1;
  v2 = *a1;
  v3 = *(unsigned __int8 *)(a2 + 16);
  v8 = v2;
  v10 = *(_QWORD *)(a2 + 8);
  v9 = (2LL * *(unsigned __int8 *)(a2 + 17)) ^ v3 & 0xFFFFFFFFFFFFFFFCuLL ^ (v3 ^ (2LL * *(unsigned __int8 *)(a2 + 17))) & 0xFFFFFFFFFFFFFFFDuLL;
  v4 = HvcallFastExtended(65742LL, (unsigned __int64)v6, 0x28u, 0LL, 0);
  return HvlpHvToNtStatus(v4);
}
