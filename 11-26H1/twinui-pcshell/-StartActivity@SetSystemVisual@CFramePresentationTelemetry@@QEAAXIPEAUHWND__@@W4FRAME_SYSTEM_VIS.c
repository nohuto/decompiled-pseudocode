/*
 * XREFs of ?StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VISUAL@@PEBG@Z @ 0x1800B2344
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800B0A80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180043B24 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180203838 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflecto.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::StartActivity(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        const WCHAR *a5)
{
  const struct _tlgProvider_t *v9; // rax
  const struct _tlgProvider_t *v10; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  const GUID *v13; // r10
  const GUID *v14; // r9
  const WCHAR *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // [rsp+30h] [rbp-91h] BYREF
  int v19; // [rsp+34h] [rbp-8Dh] BYREF
  _DWORD v20[2]; // [rsp+38h] [rbp-89h] BYREF
  __int64 v21; // [rsp+40h] [rbp-81h] BYREF
  __int64 v22; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-61h] BYREF
  void *v25; // [rsp+70h] [rbp-51h]
  int v26; // [rsp+78h] [rbp-49h]
  int v27; // [rsp+7Ch] [rbp-45h]
  __int64 *v28; // [rsp+80h] [rbp-41h]
  __int64 v29; // [rsp+88h] [rbp-39h]
  _DWORD *v30; // [rsp+90h] [rbp-31h]
  __int64 v31; // [rsp+98h] [rbp-29h]
  int *v32; // [rsp+A0h] [rbp-21h]
  __int64 v33; // [rsp+A8h] [rbp-19h]
  __int64 *v34; // [rsp+B0h] [rbp-11h]
  __int64 v35; // [rsp+B8h] [rbp-9h]
  int *v36; // [rsp+C0h] [rbp-1h]
  __int64 v37; // [rsp+C8h] [rbp+7h]
  const WCHAR *v38; // [rsp+D0h] [rbp+Fh]
  int v39; // [rsp+D8h] [rbp+17h]
  int v40; // [rsp+DCh] [rbp+1Bh]

  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = CAppManagerLogging::Provider();
  v10 = v9;
  if ( *(_DWORD *)v9 > 5u
    && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
  {
    v18 = a4;
    v21 = a3;
    v19 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v12 = *(_QWORD *)(a1 + 272);
    v13 = 0LL;
    v20[0] = CurrentThreadId;
    v22 = 0x1000000LL;
    if ( !*(_BYTE *)(v12 + 4) || _tlgGuidIsZero((const struct _GUID *)(v12 + 24)) )
      v14 = v13;
    v15 = a5;
    if ( a5 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a5[v16] != (_WORD)v13 );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v15 = &pvData;
      v17 = 2;
    }
    v39 = v17;
    v38 = v15;
    v36 = &v18;
    v35 = 8LL;
    v34 = &v21;
    v29 = 8LL;
    v32 = &v19;
    v30 = v20;
    v28 = &v22;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v10 + 1);
    v40 = (int)v13;
    v37 = 4LL;
    v33 = 4LL;
    v31 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x200000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v25 = &unk_1807E6A33;
    UserData.Reserved = 2;
    v26 = 106;
    v27 = 1;
    v20[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v10 + 4), &EventDescriptor, (LPCGUID)(v12 + 8), v14, 8u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
