/*
 * XREFs of ??$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4GHOST_STATUS@@2@Z @ 0x18005E9B8
 * Callers:
 *     ?_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z @ 0x18005E85C (-_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005E8DC (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 * Callees:
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180043B24 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall IamTraceLogging::GhostStatusChange<unsigned short * &,unsigned long &,enum GHOST_STATUS &,enum GHOST_STATUS &>(
        const WCHAR **a1,
        int *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *v8; // rax
  const struct _tlgProvider_t *v9; // r10
  int v10; // r8d
  int v11; // edx
  const WCHAR *v12; // rcx
  int v13; // r9d
  __int64 v14; // rax
  int v15; // eax
  int v17; // [rsp+38h] [rbp-39h] BYREF
  int v18; // [rsp+3Ch] [rbp-35h] BYREF
  _DWORD v19[2]; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-19h] BYREF
  void *v22; // [rsp+68h] [rbp-9h]
  int v23; // [rsp+70h] [rbp-1h]
  int v24; // [rsp+74h] [rbp+3h]
  const WCHAR *v25; // [rsp+78h] [rbp+7h]
  int v26; // [rsp+80h] [rbp+Fh]
  int v27; // [rsp+84h] [rbp+13h]
  _DWORD *v28; // [rsp+88h] [rbp+17h]
  __int64 v29; // [rsp+90h] [rbp+1Fh]
  int *v30; // [rsp+98h] [rbp+27h]
  __int64 v31; // [rsp+A0h] [rbp+2Fh]
  int *v32; // [rsp+A8h] [rbp+37h]
  __int64 v33; // [rsp+B0h] [rbp+3Fh]

  v8 = CAppManagerLogging::Provider();
  v9 = v8;
  if ( *(_DWORD *)v8 > 5u )
  {
    v10 = *a3;
    v11 = *a2;
    v12 = *a1;
    v13 = *a4;
    v32 = &v17;
    v18 = v10;
    v30 = &v18;
    v19[0] = v11;
    v28 = v19;
    v17 = v13;
    v33 = 4LL;
    v31 = 4LL;
    v29 = 4LL;
    if ( v12 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v12 = &pvData;
      v15 = 2;
    }
    v26 = v15;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v9 + 1);
    v25 = v12;
    v27 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v22 = &unk_1807E5D45;
    UserData.Reserved = 2;
    v23 = 77;
    v24 = 1;
    v19[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v8) = EventWriteTransfer(*((_QWORD *)v9 + 4), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return (int)v8;
}
