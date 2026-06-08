/*
 * XREFs of ProcLibTraceRegisterParameterEvents @ 0x140005854
 * Callers:
 *     ProcLibTraceRegisterGroupEvents @ 0x1400055D4 (ProcLibTraceRegisterGroupEvents.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceRegisterParameterEvents(__int64 *a1, int a2)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int16 v10; // [rsp+38h] [rbp-39h] BYREF
  int v11; // [rsp+3Ch] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  int *v13; // [rsp+58h] [rbp-19h]
  __int64 v14; // [rsp+60h] [rbp-11h]
  __int64 v15; // [rsp+68h] [rbp-9h]
  __int64 v16; // [rsp+70h] [rbp-1h]
  __int64 v17; // [rsp+78h] [rbp+7h]
  __int64 v18; // [rsp+80h] [rbp+Fh]
  __int64 v19; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+90h] [rbp+1Fh]
  __int16 *v21; // [rsp+98h] [rbp+27h]
  __int64 v22; // [rsp+A0h] [rbp+2Fh]
  __int64 v23; // [rsp+A8h] [rbp+37h]
  int v24; // [rsp+B0h] [rbp+3Fh]
  int v25; // [rsp+B4h] [rbp+43h]
  __int64 *v26; // [rsp+D8h] [rbp+67h] BYREF

  v26 = a1;
  if ( a2 )
  {
    v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_HARDWARE_DEBUG_PARAMETER_DEALLOC;
    if ( a2 != 1 )
      v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_HARDWARE_DEBUG_PARAMETER_RUNDOWN;
  }
  else
  {
    v2 = &PPM_ETW_HARDWARE_DEBUG_PARAMETER_ALLOC;
  }
  LOBYTE(v3) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v2);
  if ( (_BYTE)v3 )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (unsigned __int64)&v26;
    LOBYTE(v3) = (_BYTE)v26;
    v11 = 0;
    v4 = *v26;
    if ( *(_BYTE *)(*v26 + 16) )
    {
      v5 = 0LL;
      do
      {
        v6 = *(_QWORD *)(v4 + 24);
        v13 = &v11;
        v7 = 16 * v5;
        v14 = 4LL;
        v16 = 1LL;
        v18 = 1LL;
        v15 = v7 + v6 + 8;
        v20 = 1LL;
        v17 = v7 + v6 + 9;
        v19 = v7 + v6 + 10;
        v8 = -1LL;
        do
          ++v8;
        while ( *(_WORD *)(*(_QWORD *)(v7 + v6) + 2 * v8) );
        v10 = v8;
        v21 = &v10;
        v22 = 2LL;
        v23 = *(_QWORD *)(v7 + v6);
        v25 = 0;
        v24 = 2 * (unsigned __int16)v8;
        EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v2, 0LL, (ULONG)7, &UserData);
        v5 = (unsigned int)(v11 + 1);
        v11 = v5;
        v4 = *v26;
        v3 = *(unsigned __int8 *)(*v26 + 16);
      }
      while ( (unsigned int)v5 < v3 );
    }
  }
  return v3;
}
