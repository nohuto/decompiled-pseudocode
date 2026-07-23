/*
 * XREFs of EtwpTraceSavePersistedLoggerStop @ 0x140835210
 * Callers:
 *     EtwpSavePersistedLogger @ 0x140834B24 (EtwpSavePersistedLogger.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwpTraceSavePersistedLoggerStop(unsigned __int16 *a1, int a2, int a3, int a4, char a5, int a6)
{
  const EVENT_DESCRIPTOR *v7; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-49h] BYREF
  __int64 *v10; // [rsp+48h] [rbp-39h]
  __int64 v11; // [rsp+50h] [rbp-31h]
  int *v12; // [rsp+58h] [rbp-29h]
  __int64 v13; // [rsp+60h] [rbp-21h]
  int *v14; // [rsp+68h] [rbp-19h]
  __int64 v15; // [rsp+70h] [rbp-11h]
  int *v16; // [rsp+78h] [rbp-9h]
  __int64 v17; // [rsp+80h] [rbp-1h]
  int *v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  char *v20; // [rsp+98h] [rbp+17h]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  int v22; // [rsp+E0h] [rbp+5Fh] BYREF
  int v23; // [rsp+E8h] [rbp+67h] BYREF
  int v24; // [rsp+F0h] [rbp+6Fh] BYREF

  v24 = a4;
  v23 = a3;
  v22 = a2;
  v7 = (const EVENT_DESCRIPTOR *)ETW_EVENT_SAVE_PERSISTED_LOGGER_STOP;
  if ( a6 < 0 )
    v7 = &ETW_EVENT_SAVE_PERSISTED_LOGGER_ERROR;
  result = EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, v7);
  if ( result )
  {
    UserData.Ptr = *((_QWORD *)a1 + 1);
    UserData.Size = *a1;
    v10 = &EtwpNull;
    v12 = &v22;
    v14 = &v23;
    v16 = &v24;
    v18 = &a6;
    v20 = &a5;
    UserData.Reserved = 0;
    v11 = 2LL;
    v13 = 4LL;
    v15 = 4LL;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    return EtwWrite((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, v7, 0LL, 7u, &UserData);
  }
  return result;
}
