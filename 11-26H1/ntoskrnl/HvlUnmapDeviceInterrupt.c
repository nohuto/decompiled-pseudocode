/*
 * XREFs of HvlUnmapDeviceInterrupt @ 0x1405C0E80
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlUnmapDeviceInterrupt(__int64 a1, __int128 *a2)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  __int128 v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+20h] [rbp-88h] BYREF
  __int64 v12; // [rsp+30h] [rbp-78h]
  unsigned __int64 v13; // [rsp+38h] [rbp-70h]
  _BYTE v14[80]; // [rsp+40h] [rbp-68h] BYREF

  v12 = 0LL;
  LODWORD(v13) = 0;
  v11 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v11, 1, (__int64)v14, 40LL);
  v5 = v13;
  *v4 = -1LL;
  v4[1] = a1;
  v6 = *a2;
  *((_DWORD *)v4 + 8) = 0;
  *((_OWORD *)v4 + 1) = v6;
  LOWORD(a1) = HvcallInitiateHypercall(125LL, v5);
  HvlpReleaseHypercallPage((unsigned int *)&v11, v7, v8, v9);
  return HvlpHvToNtStatus(a1);
}
