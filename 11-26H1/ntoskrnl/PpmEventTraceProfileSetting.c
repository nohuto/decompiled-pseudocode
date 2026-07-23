/*
 * XREFs of PpmEventTraceProfileSetting @ 0x140AF8800
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1409FB634 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceProfileSetting(
        char a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  _UNKNOWN **v8; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  BOOL v15; // [rsp+38h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-49h] BYREF
  __int64 v17; // [rsp+58h] [rbp-39h]
  int v18; // [rsp+60h] [rbp-31h]
  int v19; // [rsp+64h] [rbp-2Dh]
  BOOL *v20; // [rsp+68h] [rbp-29h]
  __int64 v21; // [rsp+70h] [rbp-21h]
  char *v22; // [rsp+78h] [rbp-19h]
  __int64 v23; // [rsp+80h] [rbp-11h]
  __int64 v24; // [rsp+88h] [rbp-9h]
  __int64 v25; // [rsp+90h] [rbp-1h]
  int *v26; // [rsp+98h] [rbp+7h]
  __int64 v27; // [rsp+A0h] [rbp+Fh]
  __int64 v28; // [rsp+A8h] [rbp+17h]
  int v29; // [rsp+B0h] [rbp+1Fh]
  int v30; // [rsp+B4h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+3Fh] BYREF
  char v32; // [rsp+D8h] [rbp+47h] BYREF
  char v33; // [rsp+F0h] [rbp+5Fh] BYREF

  v8 = &retaddr;
  v33 = a4;
  v32 = a1;
  if ( PpmEtwRegistered )
  {
    v11 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_CHANGE;
    if ( a8 )
      v11 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN;
    LOBYTE(v8) = EtwEventEnabled(PpmEtwHandle, v11);
    if ( (_BYTE)v8 )
    {
      *(_QWORD *)&UserData.Size = 1LL;
      v17 = a2;
      v15 = a7 != 0;
      UserData.Ptr = (ULONGLONG)&v32;
      v12 = -1LL;
      do
        ++v12;
      while ( *(_BYTE *)(a2 + v12) );
      v13 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN;
      v19 = 0;
      v18 = v12 + 1;
      v21 = 4LL;
      v20 = &v15;
      v23 = 1LL;
      v22 = &v33;
      v26 = &a6;
      v28 = a5;
      v29 = a6;
      v24 = a3;
      v25 = 16LL;
      v27 = 4LL;
      v30 = 0;
      if ( !a8 )
        v13 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_CHANGE;
      LOBYTE(v8) = EtwWrite(PpmEtwHandle, v13, 0LL, 7u, &UserData);
    }
  }
  return (char)v8;
}
