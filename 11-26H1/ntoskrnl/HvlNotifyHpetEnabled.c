/*
 * XREFs of HvlNotifyHpetEnabled @ 0x1405C02A0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 HvlNotifyHpetEnabled()
{
  _QWORD *v0; // rax
  unsigned __int64 v1; // rdx
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v7; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v9; // [rsp+38h] [rbp-B0h]
  _BYTE v10[144]; // [rsp+40h] [rbp-A8h] BYREF

  v8 = 0LL;
  LODWORD(v9) = 0;
  v7 = 0LL;
  v0 = HvlpAcquireHypercallPage((__int64)&v7, 1, (__int64)v10, 72LL);
  v1 = v9;
  *(_DWORD *)v0 = 8;
  *((_BYTE *)v0 + 8) = 1;
  v2 = HvcallInitiateHypercall(111LL, v1);
  HvlpReleaseHypercallPage((unsigned int *)&v7, v3, v4, v5);
  return v2 != 0 ? 0xC0000001 : 0;
}
