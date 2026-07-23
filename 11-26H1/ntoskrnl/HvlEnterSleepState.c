/*
 * XREFs of HvlEnterSleepState @ 0x1405BF180
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     VslTerminateSecureServices @ 0x1405C6AEC (VslTerminateSecureServices.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlEnterSleepState(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  __int16 v6; // bx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]
  _BYTE v14[16]; // [rsp+40h] [rbp-28h] BYREF

  v12 = 0LL;
  v3 = a1;
  LODWORD(v13) = 0;
  v11 = 0LL;
  if ( (unsigned int)a1 >= 4 )
    VslTerminateSecureServices(a1, a2, a3);
  v4 = HvlpAcquireHypercallPage((__int64)&v11, 1, (__int64)v14, 8LL);
  v5 = v13;
  *(_DWORD *)v4 = v3;
  v6 = HvcallInitiateHypercall(132LL, v5);
  HvlpReleaseHypercallPage((unsigned int *)&v11, v7, v8, v9);
  return v6 != 0 ? 0xC0000001 : 0;
}
