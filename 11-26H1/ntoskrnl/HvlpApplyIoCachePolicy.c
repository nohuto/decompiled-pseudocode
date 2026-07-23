/*
 * XREFs of HvlpApplyIoCachePolicy @ 0x1405C231C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 HvlpApplyIoCachePolicy()
{
  __int64 result; // rax
  _QWORD *v1; // rax
  unsigned __int64 v2; // rdx
  __int16 v3; // bx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v9; // [rsp+38h] [rbp-B0h]
  _BYTE v10[144]; // [rsp+40h] [rbp-A8h] BYREF

  result = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( VslpReservedTransferLock.AffinityVersion )
  {
    v1 = HvlpAcquireHypercallPage((__int64)&v7, 1, (__int64)v10, 72LL);
    v2 = v9;
    *(_DWORD *)v1 = 49;
    v1[1] = VslpReservedTransferLock.AffinityVersion;
    v3 = HvcallInitiateHypercall(111LL, v2);
    HvlpReleaseHypercallPage((unsigned int *)&v7, v4, v5, v6);
    return v3 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
