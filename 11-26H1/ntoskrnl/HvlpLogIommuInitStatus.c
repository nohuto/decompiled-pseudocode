/*
 * XREFs of HvlpLogIommuInitStatus @ 0x1405C3CC4
 * Callers:
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpWriteEventLog @ 0x1405C3F84 (HvlpWriteEventLog.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 HvlpLogIommuInitStatus()
{
  _QWORD *v0; // rbx
  __int128 *v1; // rax
  unsigned __int64 v2; // rdx
  __int128 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+24h] [rbp-DCh] BYREF
  __int128 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  __int64 v15; // [rsp+40h] [rbp-C0h]
  __int128 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v18; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+68h] [rbp-98h] BYREF
  __int128 v20; // [rsp+78h] [rbp-88h] BYREF
  __int128 v21; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  int *v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  char *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int128 *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  char *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  __int128 *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  char *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  _BYTE v35[32]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v36[2064]; // [rsp+130h] [rbp+30h] BYREF

  v17 = 0LL;
  LODWORD(v18) = 0;
  v16 = 0LL;
  v14 = 0LL;
  LODWORD(v15) = 0;
  v13 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v0 = HvlpAcquireHypercallPage((__int64)&v16, 1, (__int64)v35, 16LL);
  v1 = (__int128 *)HvlpAcquireHypercallPage((__int64)&v13, 2, (__int64)v36, 1032LL);
  v2 = v18;
  v3 = v1;
  *(_DWORD *)v0 = 5;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123LL, v2) )
  {
    v19 = *v3;
    v20 = v3[1];
    v21 = v3[2];
  }
  HvlpReleaseHypercallPage((unsigned int *)&v13, v4, v5, v6);
  HvlpReleaseHypercallPage((unsigned int *)&v16, v7, v8, v9);
  v11 = (unsigned __int8)v19;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v11;
  v12 = BYTE1(v19);
  v23 = &v12;
  v25 = (char *)&v19 + 8;
  v27 = &v20;
  v29 = (char *)&v20 + 8;
  v31 = &v21;
  v33 = (char *)&v21 + 8;
  v24 = 4LL;
  v26 = 8LL;
  v28 = 8LL;
  v30 = 8LL;
  v32 = 8LL;
  v34 = 8LL;
  HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT, 7u, &UserData);
  result = v21;
  if ( (_DWORD)v21 )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&v21;
    HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT_ERROR, 1u, &UserData);
    result = v21;
  }
  if ( BYTE1(v19) && *((_QWORD *)&v19 + 1) == 1LL )
  {
    if ( result )
      return HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT_POLICY_ENABLE, 0, 0LL);
  }
  return result;
}
