/*
 * XREFs of HvlpLogGuestStateScrubbingStatus @ 0x1405C3A2C
 * Callers:
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpWriteEventLog @ 0x1405C3F84 (HvlpWriteEventLog.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 HvlpLogGuestStateScrubbingStatus()
{
  _QWORD *v0; // rbx
  int *v1; // rax
  unsigned __int64 v2; // rdx
  int *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  const EVENT_DESCRIPTOR *v11; // rcx
  unsigned int v12; // [rsp+28h] [rbp-E0h] BYREF
  int v13; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v14; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-D4h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v18; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  __m256i v22; // [rsp+50h] [rbp-B8h] BYREF
  __m256i v23; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  unsigned int *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __m256i *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  unsigned int *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  unsigned int *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  unsigned int *v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  unsigned int *v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]
  unsigned int *v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+38h]
  unsigned int *v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  _BYTE v47[32]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v48[2064]; // [rsp+178h] [rbp+70h] BYREF

  LODWORD(v24) = 0;
  v23.m256i_i32[0] = 0;
  HvlpGuestStateScrubbingStatus = 0;
  memset(&v23.m256i_u64[1], 0, 24);
  memset(&v22.m256i_u64[1], 0, 24);
  v0 = HvlpAcquireHypercallPage((__int64)&v23.m256i_i64[1], 1, (__int64)v47, 16LL);
  v1 = (int *)HvlpAcquireHypercallPage((__int64)&v22.m256i_i64[1], 2, (__int64)v48, 1032LL);
  v2 = v24;
  v3 = v1;
  *(_DWORD *)v0 = 25;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123LL, v2) )
    HvlpGuestStateScrubbingStatus = *v3;
  HvlpReleaseHypercallPage(&v22.m256i_u32[2], v4, v5, v6);
  result = HvlpReleaseHypercallPage(&v23.m256i_u32[2], v7, v8, v9);
  if ( HvlpGuestStateScrubbingStatus )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    v34 = 4LL;
    v13 = HvlpGuestStateScrubbingStatus & 1;
    UserData.Ptr = (ULONGLONG)&v13;
    v36 = 4LL;
    v38 = 4LL;
    v12 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 1) & 1;
    v33 = &v12;
    v40 = 4LL;
    v14 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 2) & 1;
    v35 = &v14;
    v42 = 4LL;
    v15 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 3) & 1;
    v37 = &v15;
    v44 = 4LL;
    v16 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 4) & 1;
    v39 = &v16;
    v46 = 4LL;
    v17 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 5) & 1;
    v41 = &v17;
    v18 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 7) & 1;
    v19 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 8) & 1;
    v43 = &v18;
    v45 = &v19;
    HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING, 8u, &UserData);
    *(_QWORD *)&v25.Size = 4LL;
    v20 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 11) & 1;
    v25.Ptr = (ULONGLONG)&v20;
    v27 = 4LL;
    v12 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 1) & 1;
    v26 = &v12;
    v29 = 4LL;
    v21 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 9) & 1;
    v28 = &v21;
    v30 = &v22;
    v22.m256i_i32[0] = ((unsigned int)HvlpGuestStateScrubbingStatus >> 10) & 1;
    v31 = 4LL;
    HvlpWriteEventLog(&HV_EVENTLOG_MDS_MITIGATION_STATUS, 4u, &v25);
    result = (unsigned int)HvlpGuestStateScrubbingStatus;
    if ( (HvlpGuestStateScrubbingStatus & 0x40) != 0 )
    {
      v11 = (const EVENT_DESCRIPTOR *)HV_EVENTLOG_GUEST_STATE_SCRUBBING_INCOMPLETE_NO_CORE_SCHEDULER;
      if ( !(_BYTE)dword_140FBF22C )
        v11 = &HV_EVENTLOG_GUEST_STATE_SCRUBBING_INCOMPLETE;
    }
    else
    {
      if ( (HvlpGuestStateScrubbingStatus & 0x8000) == 0 )
        return result;
      v11 = &HV_EVENTLOG_GUEST_STATE_SCRUBBING_INCOMPLETE;
    }
    return HvlpWriteEventLog(v11, 0, 0LL);
  }
  return result;
}
