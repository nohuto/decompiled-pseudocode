/*
 * XREFs of HvlpCheckTscSync @ 0x1404E7EA4
 * Callers:
 *     HvlpPowerStateCallback @ 0x1404E7E80 (HvlpPowerStateCallback.c)
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpWriteEventLog @ 0x1405C3F84 (HvlpWriteEventLog.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 HvlpCheckTscSync()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rax
  unsigned __int64 v2; // rdx
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D0h]
  __int64 v13; // [rsp+38h] [rbp-C8h]
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v16; // [rsp+58h] [rbp-A8h]
  __int128 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v20; // [rsp+88h] [rbp-78h]
  __int64 v21; // [rsp+90h] [rbp-70h]
  _BYTE v22[32]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v23[2064]; // [rsp+B8h] [rbp-48h] BYREF

  v15 = 0LL;
  LODWORD(v16) = 0;
  v14 = 0LL;
  v12 = 0LL;
  LODWORD(v13) = 0;
  v11 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v0 = HvlpAcquireHypercallPage((__int64)&v14, 1, (__int64)v22, 16LL);
  v1 = HvlpAcquireHypercallPage((__int64)&v11, 2, (__int64)v23, 1032LL);
  v2 = v16;
  v3 = v1;
  *(_DWORD *)v0 = 14;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123LL, v2) )
  {
    v17 = *(_OWORD *)v3;
    v18 = v3[2];
  }
  HvlpReleaseHypercallPage((unsigned int *)&v11, v4, v5, v6);
  result = HvlpReleaseHypercallPage((unsigned int *)&v14, v7, v8, v9);
  if ( BYTE1(v17) )
  {
    if ( (_BYTE)v17 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v17 + 8;
      v21 = 8LL;
      v20 = &v18;
      return HvlpWriteEventLog(&HV_EVENTLOG_TSC_SYNC_FAILED, 2u, &UserData);
    }
  }
  return result;
}
