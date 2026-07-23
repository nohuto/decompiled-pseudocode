/*
 * XREFs of PpmEventTraceProfiles @ 0x1409C136C
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PpmRegisterProfiles @ 0x1407E6B9C (PpmRegisterProfiles.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PpmEndProfileAccumulation @ 0x1409C1A84 (PpmEndProfileAccumulation.c)
 */

char __fastcall PpmEventTraceProfiles(char a1)
{
  _UNKNOWN **v1; // rax
  const EVENT_DESCRIPTOR *v3; // rdx
  _QWORD *v4; // rdi
  unsigned __int8 v5; // bl
  ULONGLONG *v6; // r8
  ULONGLONG v7; // r9
  __int64 v8; // rdx
  _WORD *v9; // rax
  __int64 v10; // rax
  ULONGLONG v11; // kr00_8
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v14; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-69h] BYREF
  __int64 v17; // [rsp+50h] [rbp-61h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-59h] BYREF
  ULONGLONG *v19; // [rsp+68h] [rbp-49h]
  __int64 v20; // [rsp+70h] [rbp-41h]
  ULONGLONG *v21; // [rsp+78h] [rbp-39h]
  __int64 v22; // [rsp+80h] [rbp-31h]
  char *v23; // [rsp+88h] [rbp-29h]
  __int64 v24; // [rsp+90h] [rbp-21h]
  char *v25; // [rsp+98h] [rbp-19h]
  __int64 v26; // [rsp+A0h] [rbp-11h]
  ULONGLONG *v27; // [rsp+A8h] [rbp-9h]
  __int64 v28; // [rsp+B0h] [rbp-1h]
  unsigned __int64 *v29; // [rsp+B8h] [rbp+7h]
  __int64 v30; // [rsp+C0h] [rbp+Fh]
  unsigned __int64 *v31; // [rsp+C8h] [rbp+17h]
  __int64 v32; // [rsp+D0h] [rbp+1Fh]
  unsigned __int64 *v33; // [rsp+D8h] [rbp+27h]
  __int64 v34; // [rsp+E0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( PpmEtwRegistered )
  {
    v3 = &PPM_ETW_PROCESSOR_PROFILE_REGISTERED;
    if ( a1 )
      v3 = &PPM_ETW_PROCESSOR_PROFILE_RUNDOWN;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v1 )
    {
      v4 = PpmCurrentProfile;
      v5 = 0;
      v17 = MEMORY[0xFFFFF78000000008];
      PpmEndProfileAccumulation(
        PpmCurrentProfile,
        MEMORY[0xFFFFF78000000008],
        &PopDirectedDripsDiagLock.ReservedPreviousReadyTimeValue);
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          goto LABEL_17;
        v8 = 0x7FFFFFFFLL;
        v9 = (_WORD *)*v6;
        do
        {
          if ( !*v9 )
            break;
          ++v9;
          --v8;
        }
        while ( v8 );
        v10 = (0x7FFFFFFF - v8) & -(__int64)(v8 != 0);
        if ( !v8 )
LABEL_17:
          LODWORD(v10) = 0;
        UserData.Size = 2 * v10 + 2;
        v19 = v6 + 1;
        v21 = v6 + 4;
        v23 = (char *)v6 + 28;
        v25 = (char *)v6 + 12;
        UserData.Ptr = v7;
        UserData.Reserved = 0;
        v20 = 1LL;
        v22 = 1LL;
        v24 = 4LL;
        v26 = 16LL;
        v14 = v6[185] / 0xA;
        v15 = v6[186] / 0xA;
        v11 = v6[187];
        v28 = 8LL;
        v27 = v6 + 184;
        v29 = &v14;
        v31 = &v15;
        v33 = &v16;
        v16 = v11 / 0xA;
        v12 = &PPM_ETW_PROCESSOR_PROFILE_RUNDOWN;
        v30 = 8LL;
        v32 = 8LL;
        v34 = 8LL;
        if ( !a1 )
          v12 = &PPM_ETW_PROCESSOR_PROFILE_REGISTERED;
        LOBYTE(v1) = EtwWrite(PpmEtwHandle, v12, 0LL, 9u, &UserData);
        if ( v5 == PpmProfileCount )
          break;
        v6 = (ULONGLONG *)(PpmProfiles + 1504LL * v5++);
      }
      v4[183] = v17;
    }
  }
  return (char)v1;
}
