/*
 * XREFs of PopDiagTraceAdaptiveSessionState @ 0x1409F940C
 * Callers:
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409F935C (PopAdaptiveGetSessionStateUnsafe.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceAdaptiveSessionState(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        unsigned __int8 a7,
        char a8,
        char a9,
        char a10)
{
  _UNKNOWN **v10; // rax
  int v13; // [rsp+38h] [rbp-99h] BYREF
  int v14; // [rsp+3Ch] [rbp-95h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-89h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-79h]
  __int64 v17; // [rsp+60h] [rbp-71h]
  __int64 *v18; // [rsp+68h] [rbp-69h]
  __int64 v19; // [rsp+70h] [rbp-61h]
  int *v20; // [rsp+78h] [rbp-59h]
  __int64 v21; // [rsp+80h] [rbp-51h]
  char *v22; // [rsp+88h] [rbp-49h]
  __int64 v23; // [rsp+90h] [rbp-41h]
  char *v24; // [rsp+98h] [rbp-39h]
  __int64 v25; // [rsp+A0h] [rbp-31h]
  int *v26; // [rsp+A8h] [rbp-29h]
  __int64 v27; // [rsp+B0h] [rbp-21h]
  char *v28; // [rsp+B8h] [rbp-19h]
  __int64 v29; // [rsp+C0h] [rbp-11h]
  char *v30; // [rsp+C8h] [rbp-9h]
  __int64 v31; // [rsp+D0h] [rbp-1h]
  char *v32; // [rsp+D8h] [rbp+7h]
  __int64 v33; // [rsp+E0h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+2Fh] BYREF
  int v35; // [rsp+108h] [rbp+37h] BYREF
  __int64 v36; // [rsp+110h] [rbp+3Fh] BYREF
  __int64 v37; // [rsp+118h] [rbp+47h] BYREF

  v10 = &retaddr;
  v37 = a3;
  v36 = a2;
  v35 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v10) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ADAPTIVE_SESSION_STATE);
    if ( (_BYTE)v10 )
    {
      v14 = a7;
      v13 = a4;
      UserData.Ptr = (ULONGLONG)&v35;
      v16 = &v36;
      v18 = &v37;
      v20 = &v13;
      v22 = &a5;
      v24 = &a6;
      v26 = &v14;
      v28 = &a8;
      v30 = &a9;
      v32 = &a10;
      *(_QWORD *)&UserData.Size = 4LL;
      v17 = 8LL;
      v19 = 8LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      LOBYTE(v10) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ADAPTIVE_SESSION_STATE, 0LL, 0xAu, &UserData);
    }
  }
  return (char)v10;
}
