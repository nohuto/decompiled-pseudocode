/*
 * XREFs of HvlHvDebuggerPowerHandler @ 0x1405BFD90
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlHvDebuggerPowerHandler(char a1)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v11; // [rsp+38h] [rbp-B0h]
  _BYTE v12[144]; // [rsp+40h] [rbp-A8h] BYREF

  v10 = 0LL;
  LODWORD(v11) = 0;
  v9 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v9, 1, (__int64)v12, 72LL);
  v3 = v11;
  *(_DWORD *)v2 = 10;
  *((_BYTE *)v2 + 8) = a1;
  v4 = HvcallInitiateHypercall(111LL, v3);
  HvlpReleaseHypercallPage((unsigned int *)&v9, v5, v6, v7);
  return HvlpHvToNtStatus(v4);
}
