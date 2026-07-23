/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x1405C1CE0
 * Callers:
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlPrepareForSecureHibernate(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-98h]
  unsigned __int64 v13; // [rsp+38h] [rbp-90h]
  _BYTE v14[8]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-80h]

  v12 = 0LL;
  LODWORD(v13) = 0;
  v11 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v11, 1, 0LL, 88LL);
  v3 = a1[1];
  *v2 = *a1;
  v4 = a1[2];
  v2[1] = v3;
  v5 = a1[3];
  v2[2] = v4;
  v6 = a1[4];
  v2[3] = v5;
  v2[4] = v6;
  memset_0(v14, 0, 0x68uLL);
  v15 = v13 >> 12;
  LODWORD(a1) = VslpEnterIumSecureMode(2u, 0x115u, 0, (__int64)v14);
  HvlpReleaseHypercallPage((unsigned int *)&v11, v7, v8, v9);
  return (unsigned int)a1;
}
