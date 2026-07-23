/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x1405C01F0
 * Callers:
 *     PopHiberCheckResume @ 0x140C008A0 (PopHiberCheckResume.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     VslReinitializeIumDebuggerTransport @ 0x1405C64A0 (VslReinitializeIumDebuggerTransport.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  _QWORD *v0; // rax
  unsigned __int64 v1; // rdx
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]
  _BYTE v13[16]; // [rsp+40h] [rbp-28h] BYREF

  v11 = 0LL;
  LODWORD(v12) = 0;
  v10 = 0LL;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    v0 = HvlpAcquireHypercallPage((__int64)&v10, 1, (__int64)v13, 8LL);
    v1 = v12;
    *(_DWORD *)v0 = 1;
    v2 = HvcallInitiateHypercall(135LL, v1);
    HvlpReleaseHypercallPage((unsigned int *)&v10, v3, v4, v5);
    if ( v2 )
      return 3221225473LL;
    if ( VslVsmEnabled )
      VslReinitializeIumDebuggerTransport(v7, v6, v8);
  }
  return 0LL;
}
