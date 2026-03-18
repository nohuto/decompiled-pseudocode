/*
 * XREFs of HvlNotifyAllProcessorsStarted @ 0x1405BD8F8
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1405B9968 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
