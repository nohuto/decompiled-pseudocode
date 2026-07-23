/*
 * XREFs of HvlNotifyAllProcessorsStarted @ 0x1405C0168
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 HvlNotifyAllProcessorsStarted()
{
  _QWORD *v0; // rax
  unsigned __int64 v1; // rdx
  unsigned __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]
  _BYTE v10[16]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0LL;
  LODWORD(v9) = 0;
  v7 = 0LL;
  v0 = HvlpAcquireHypercallPage((__int64)&v7, 1, (__int64)v10, 8LL);
  v1 = v9;
  *(_DWORD *)v0 = 4;
  v2 = HvcallInitiateHypercall(135LL, v1);
  HvlpReleaseHypercallPage((unsigned int *)&v7, v3, v4, v5);
  return HvlpHvToNtStatus(v2);
}
