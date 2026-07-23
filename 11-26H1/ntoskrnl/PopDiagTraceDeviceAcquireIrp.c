/*
 * XREFs of PopDiagTraceDeviceAcquireIrp @ 0x140480728
 * Callers:
 *     PoDeviceAcquireIrp @ 0x1404806EC (PoDeviceAcquireIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceAcquireIrp(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rcx
  _WORD *v4; // r8
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  _WORD *v8; // rdx
  int v9; // r9d
  _WORD *v10; // rax
  const WCHAR *v11; // rcx
  __int64 v12; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-69h] BYREF
  __int64 *v15; // [rsp+58h] [rbp-59h]
  __int64 v16; // [rsp+60h] [rbp-51h]
  const WCHAR *v17; // [rsp+68h] [rbp-49h]
  int v18; // [rsp+70h] [rbp-41h]
  int v19; // [rsp+74h] [rbp-3Dh]
  _BYTE v20[128]; // [rsp+78h] [rbp-39h] BYREF
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF
  __int64 v22; // [rsp+118h] [rbp+67h] BYREF
  __int64 v23; // [rsp+120h] [rbp+6Fh] BYREF

  v2 = &retaddr;
  v23 = a2;
  v22 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE);
    if ( (_BYTE)v2 )
    {
      if ( !v23 )
        goto LABEL_19;
      v3 = *(_QWORD *)(v23 + 8);
      v4 = *(_WORD **)(v3 + 64);
      if ( !v4 )
        goto LABEL_19;
      v5 = *(unsigned __int16 *)(v3 + 56);
      if ( !(_WORD)v5 )
        goto LABEL_19;
      v6 = 64LL;
      v7 = v5 >> 1;
      v8 = v20;
      v9 = 1;
      do
      {
        if ( !v7 )
          break;
        if ( !*v4 )
          break;
        *v8++ = *v4++;
        --v7;
        --v6;
      }
      while ( v6 );
      v10 = v8 - 1;
      if ( v6 )
        v10 = v8;
      *v10 = 0;
      if ( !v6 )
LABEL_19:
        v9 = 0;
      *(_QWORD *)&UserData.Size = 8LL;
      v16 = 8LL;
      v11 = (const WCHAR *)v20;
      if ( !v9 )
        v11 = &SourceString;
      UserData.Ptr = (ULONGLONG)&v22;
      v15 = &v23;
      v12 = -1LL;
      v17 = v11;
      do
        ++v12;
      while ( v11[v12] );
      v18 = 2 * v12 + 2;
      v19 = 0;
      LOBYTE(v2) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}
