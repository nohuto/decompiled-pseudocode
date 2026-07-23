/*
 * XREFs of PopDiagTraceSetThreadExecutionState @ 0x1407D7C6C
 * Callers:
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSetThreadExecutionState(__int64 a1, int a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  __int64 *v7; // r9
  __int64 v8; // rax
  unsigned __int16 *v9; // rcx
  int v10; // edx
  REGHANDLE v11; // rcx
  char *v12; // r9
  __int16 v14; // [rsp+38h] [rbp-49h] BYREF
  int v15; // [rsp+3Ch] [rbp-45h] BYREF
  int v16; // [rsp+40h] [rbp-41h] BYREF
  int v17; // [rsp+44h] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  __int16 *v19; // [rsp+58h] [rbp-29h]
  __int64 v20; // [rsp+60h] [rbp-21h]
  __int64 v21; // [rsp+68h] [rbp-19h] BYREF
  int v22; // [rsp+70h] [rbp-11h]
  int v23; // [rsp+74h] [rbp-Dh]
  char v24; // [rsp+78h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  int v26; // [rsp+F0h] [rbp+6Fh] BYREF
  int v27; // [rsp+F8h] [rbp+77h] BYREF

  v4 = &retaddr;
  v27 = a3;
  v26 = a2;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STES);
    if ( (_BYTE)v4 )
    {
      v7 = &v21;
      v15 = *(_DWORD *)(a1 + 1288);
      v16 = *(_DWORD *)(a1 + 1296);
      v8 = *(_QWORD *)(a1 + 544);
      v17 = a4;
      v9 = *(unsigned __int16 **)(v8 + 848);
      v14 = *v9 >> 1;
      UserData.Ptr = (ULONGLONG)&v26;
      v19 = &v14;
      *(_QWORD *)&UserData.Size = 4LL;
      v20 = 2LL;
      v10 = *v9;
      if ( (_WORD)v10 )
      {
        v7 = (__int64 *)&v24;
        v21 = *((_QWORD *)v9 + 1);
        v22 = v10;
        v23 = 0;
      }
      v11 = PopDiagHandle;
      *v7 = (__int64)&v15;
      v7[1] = 4LL;
      v7[2] = (__int64)&v16;
      v7[3] = 4LL;
      v7[4] = (__int64)&v27;
      v7[5] = 4LL;
      v12 = (char *)(v7 + 6);
      *(_QWORD *)v12 = &v17;
      *((_QWORD *)v12 + 1) = 4LL;
      LOBYTE(v4) = EtwWrite(v11, &POP_ETW_EVENT_STES, 0LL, (v12 - (char *)&UserData + 16) >> 4, &UserData);
    }
  }
  return (char)v4;
}
