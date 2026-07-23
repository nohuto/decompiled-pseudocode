/*
 * XREFs of PpmEventParkNodeCapChange @ 0x1406116D0
 * Callers:
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeCapChange(__int16 a1, unsigned __int16 *a2, __int16 a3, __int16 a4)
{
  _UNKNOWN **v4; // rax
  PEVENT_DATA_DESCRIPTOR v5; // rbx
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // cx
  unsigned __int16 i; // dx
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rcx
  char v14; // [rsp+48h] [rbp-79h] BYREF
  char v15; // [rsp+49h] [rbp-78h] BYREF
  __int16 v16; // [rsp+4Ch] [rbp-75h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v18[4]; // [rsp+54h] [rbp-6Dh] BYREF
  int v19; // [rsp+58h] [rbp-69h] BYREF
  _DWORD v20[3]; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int16 *v22; // [rsp+78h] [rbp-49h]
  __int64 v23; // [rsp+80h] [rbp-41h]
  char *v24; // [rsp+88h] [rbp-39h]
  __int64 v25; // [rsp+90h] [rbp-31h]
  char *v26; // [rsp+98h] [rbp-29h]
  __int64 v27; // [rsp+A0h] [rbp-21h]
  _BYTE v28[64]; // [rsp+A8h] [rbp-19h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF
  __int16 v30; // [rsp+128h] [rbp+67h] BYREF
  __int16 v31; // [rsp+138h] [rbp+77h] BYREF
  __int16 v32; // [rsp+140h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v32 = a4;
  v31 = a3;
  v30 = a1;
  v5 = PpmEventPerfCheckData;
  v14 = 0;
  v15 = 0;
  v20[0] = 0;
  v19 = 0;
  if ( PpmEventPerfCheckData )
  {
    if ( PpmEtwRegistered )
    {
      LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_CAP_CHANGE);
      if ( (_BYTE)v4 )
      {
        v7 = *a2;
        v8 = 32;
        v16 = 32;
        for ( i = 0; i < v7; ++i )
        {
          if ( *(_QWORD *)&a2[4 * i + 4] )
          {
            if ( v8 != 32 )
              goto LABEL_11;
            v8 = i;
            v16 = i;
          }
        }
        if ( v8 == 32 )
        {
LABEL_11:
          *(_QWORD *)&v5->Size = 2LL;
          v5->Ptr = (ULONGLONG)&v30;
          v17 = 1;
          PpmEventAddAffinityMaskAsSubset(0LL, a2, (__int64)v18, (__int64)v28, (__int64)v5, v20, &v19, &v17);
          v10 = v17;
          v11 = v17;
          v5[v11].Ptr = (ULONGLONG)&v31;
          *(_QWORD *)&v5[v11].Size = 2LL;
          v12 = v10 + 1;
          v5[v12].Ptr = (ULONGLONG)&v32;
          *(_QWORD *)&v5[v12].Size = 2LL;
          LOBYTE(v4) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_CAP_CHANGE, 0LL, 0, 0LL, 0LL, v10 + 2, v5);
          return (char)v4;
        }
        UserData.Ptr = (ULONGLONG)&v16;
        v14 = v31;
        v15 = v32;
        v24 = &v14;
        *(_QWORD *)&UserData.Size = 2LL;
        v26 = &v15;
        v22 = &a2[4 * v8 + 4];
        v23 = 8LL;
        v25 = 1LL;
        v27 = 1LL;
        LOBYTE(v4) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_CAP_CHANGE_V1, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return (char)v4;
}
