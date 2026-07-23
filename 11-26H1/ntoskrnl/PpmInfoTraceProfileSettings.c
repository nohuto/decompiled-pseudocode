/*
 * XREFs of PpmInfoTraceProfileSettings @ 0x140ADBEA4
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char PpmInfoTraceProfileSettings()
{
  unsigned int *p_ReservedPreviousReadyTimeValue; // rdi
  unsigned int *v1; // r15
  char **v2; // rbx
  unsigned int v3; // esi
  unsigned int v4; // r14d
  __int64 v5; // rax
  char *v6; // r13
  char *v7; // r12
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v10; // edx
  __int64 v11; // rax
  char *v12; // r12
  __int64 v13; // rax
  unsigned __int8 i; // [rsp+38h] [rbp-D0h]
  char v16; // [rsp+40h] [rbp-C8h] BYREF
  char v17; // [rsp+48h] [rbp-C0h] BYREF
  char v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+58h] [rbp-B0h] BYREF
  int v20; // [rsp+60h] [rbp-A8h] BYREF
  int v21; // [rsp+68h] [rbp-A0h] BYREF
  int v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h]
  char *v25; // [rsp+88h] [rbp-80h]
  __int128 v26; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  char *v28; // [rsp+B8h] [rbp-50h]
  int v29; // [rsp+C0h] [rbp-48h]
  int v30; // [rsp+C4h] [rbp-44h]
  int *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  char *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int128 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  char *v39; // [rsp+108h] [rbp+0h]
  int v40; // [rsp+110h] [rbp+8h]
  int v41; // [rsp+114h] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+118h] [rbp+10h] BYREF
  char *v43; // [rsp+128h] [rbp+20h]
  int v44; // [rsp+130h] [rbp+28h]
  int v45; // [rsp+134h] [rbp+2Ch]
  int *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  int *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  __int128 *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  __int64 *v52; // [rsp+168h] [rbp+60h]
  __int64 v53; // [rsp+170h] [rbp+68h]
  char *v54; // [rsp+178h] [rbp+70h]
  int v55; // [rsp+180h] [rbp+78h]
  int v56; // [rsp+184h] [rbp+7Ch]

  p_ReservedPreviousReadyTimeValue = &PopDirectedDripsDiagLock.ReservedPreviousReadyTimeValue;
  v26 = 0LL;
  for ( i = 0; ; ++i )
  {
    v1 = p_ReservedPreviousReadyTimeValue + 10;
    v24 = 75LL;
    v2 = &PpmPolicyConfigTable;
    do
    {
      v3 = 0;
      v4 = (*((_BYTE *)v2 + 37) & 4 | 2u) >> 1;
      v26 = *(_OWORD *)v2[1];
      do
      {
        v5 = *(_QWORD *)&v1[4 * v3 + 2 * ((unsigned __int64)*((unsigned __int8 *)v2 + 36) >> 6)];
        v6 = &v2[3][v3 * *((_DWORD *)v2 + 8) + (_QWORD)v1];
        if ( _bittest64(&v5, *((_BYTE *)v2 + 36) & 0x3F) )
        {
          v7 = *v2;
          v21 = *((_DWORD *)v2 + 8);
          v17 = v3;
          v16 = *((_BYTE *)p_ReservedPreviousReadyTimeValue + 8);
          v20 = 0;
          if ( PpmEtwRegistered )
          {
            if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
            {
              v20 = 0;
              UserData.Ptr = (ULONGLONG)&v16;
              v8 = -1LL;
              *(_QWORD *)&UserData.Size = 1LL;
              v28 = v7;
              do
                ++v8;
              while ( v7[v8] );
              v30 = 0;
              v29 = v8 + 1;
              v41 = 0;
              v31 = &v20;
              v32 = 4LL;
              v33 = &v17;
              v35 = &v26;
              v37 = &v21;
              v40 = v21;
              v34 = 1LL;
              v36 = 16LL;
              v38 = 4LL;
              v39 = v6;
              EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN, 0LL, 7u, &UserData);
            }
          }
        }
        v9 = *((unsigned __int8 *)v2 + 36);
        v10 = *((_DWORD *)v2 + 8);
        v25 = &v2[3][v3 * v10 + 752 + (_QWORD)p_ReservedPreviousReadyTimeValue];
        v11 = *(_QWORD *)&p_ReservedPreviousReadyTimeValue[4 * v3 + 188 + 2 * ((unsigned __int64)v9 >> 6)];
        if ( _bittest64(&v11, v9 & 0x3F) )
        {
          v12 = *v2;
          LODWORD(v23) = v10;
          LOBYTE(v19) = v3;
          LOBYTE(v11) = *((_BYTE *)p_ReservedPreviousReadyTimeValue + 8);
          v18 = v11;
          v22 = 0;
          if ( PpmEtwRegistered )
          {
            LOBYTE(v11) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN);
            if ( (_BYTE)v11 )
            {
              v22 = 1;
              v42.Ptr = (ULONGLONG)&v18;
              v13 = -1LL;
              *(_QWORD *)&v42.Size = 1LL;
              v43 = v12;
              do
                ++v13;
              while ( v12[v13] );
              v45 = 0;
              v44 = v13 + 1;
              v56 = 0;
              v46 = &v22;
              v47 = 4LL;
              v48 = &v19;
              v50 = &v26;
              v52 = &v23;
              v54 = v25;
              v55 = v23;
              v49 = 1LL;
              v51 = 16LL;
              v53 = 4LL;
              LOBYTE(v11) = EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN, 0LL, 7u, &v42);
            }
          }
        }
        ++HIBYTE(v26);
        ++v3;
      }
      while ( v3 < v4 );
      v2 += 5;
      --v24;
    }
    while ( v24 );
    if ( i == PpmProfileCount )
      break;
    p_ReservedPreviousReadyTimeValue = (unsigned int *)(PpmProfiles + 1504LL * i);
  }
  return v11;
}
