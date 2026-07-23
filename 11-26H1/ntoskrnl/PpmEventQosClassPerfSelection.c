/*
 * XREFs of PpmEventQosClassPerfSelection @ 0x1404AEB64
 * Callers:
 *     PpmPerfApplyDomainState @ 0x140483F90 (PpmPerfApplyDomainState.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventQosClassPerfSelection(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  __int64 v5; // r8
  char *v6; // rcx
  int *v7; // rdx
  int v8; // eax
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-B8h] BYREF
  int *v12; // [rsp+58h] [rbp-A8h]
  __int64 v13; // [rsp+60h] [rbp-A0h]
  char *v14; // [rsp+68h] [rbp-98h]
  __int64 v15; // [rsp+70h] [rbp-90h]
  char v16; // [rsp+80h] [rbp-80h] BYREF
  char v17; // [rsp+88h] [rbp-78h] BYREF

  v2 = &PPM_ETW_PERF_QOS_CLASS_PERF_SELECTION;
  v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_PERF_QOS_CLASS_PERF_SELECTION_RUNDOWN;
  if ( !a2 )
    v3 = &PPM_ETW_PERF_QOS_CLASS_PERF_SELECTION;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v2 )
    {
      v5 = 7LL;
      v6 = &v17;
      v10 = 7;
      v7 = (int *)(a1 + 892);
      do
      {
        *((_QWORD *)v6 - 1) = *(_QWORD *)(v7 - 5);
        *(_DWORD *)v6 = *(v7 - 1);
        v6 += 56;
        v8 = *v7;
        v7 += 20;
        *((_DWORD *)v6 - 13) = v8;
        *((_DWORD *)v6 - 12) = *(v7 - 19);
        *((_DWORD *)v6 - 11) = *(v7 - 18);
        *((_DWORD *)v6 - 10) = *(v7 - 17);
        *((_DWORD *)v6 - 9) = *(v7 - 16);
        *((_DWORD *)v6 - 8) = *(v7 - 15);
        *((_DWORD *)v6 - 7) = *((unsigned __int8 *)v7 - 28);
        *((_DWORD *)v6 - 6) = *((unsigned __int8 *)v7 - 27);
        *(_QWORD *)(v6 - 20) = *(_QWORD *)(v7 - 23);
        *((_DWORD *)v6 - 3) = *(v7 - 14);
        --v5;
      }
      while ( v5 );
      UserData.Ptr = a1 + 448;
      *(_QWORD *)&UserData.Size = 4LL;
      v12 = &v10;
      v13 = 2LL;
      v14 = &v16;
      v15 = 392LL;
      LOBYTE(v2) = EtwWriteEx(PpmEtwHandle, v3, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}
