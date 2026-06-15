/*
 * XREFs of ?TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA?AW4AppTypesBlockedTillConsoleUnlocked@@K@Z @ 0x18001F340
 * Callers:
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18001F2E0 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x18001F5D0 (-get@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicy.c)
 *     _lambda_ab89a89ea42e1cdbde82015b563aa09f_::operator() @ 0x18001F690 (_lambda_ab89a89ea42e1cdbde82015b563aa09f_--operator().c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdGetAppsBlockedTillConsoleUnlocked(int a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r10
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  bool v9; // [rsp+30h] [rbp-D0h] BYREF
  bool v10; // [rsp+31h] [rbp-CFh] BYREF
  bool v11; // [rsp+32h] [rbp-CEh] BYREF
  bool v12; // [rsp+33h] [rbp-CDh] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+58h] [rbp-A8h]
  int *v20; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+8Ch] [rbp-74h]
  int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  int *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  bool *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  bool *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  bool *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  bool *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+140h] [rbp+40h] BYREF

  v43 = a1;
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19 = v1;
  v20 = 0LL;
  *(_QWORD *)&EventDescriptor.Id = &v43;
  EventDescriptor.Keyword = (ULONGLONG)&v20;
  v2 = lambda_ab89a89ea42e1cdbde82015b563aa09f_::operator()(&EventDescriptor);
  v4 = *(_QWORD *)(wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::get(
                     v3,
                     _lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v4 > 4u )
  {
    v13 = v2;
    v14 = g_AppTypesBlockedTillConsoleUnlocked;
    v9 = g_PoBlockAudioPlayback;
    v10 = g_bApmSuspended;
    v11 = g_bLowPowerEpoch;
    v12 = g_GlobalUserPresent;
    if ( v20 )
      v5 = v20[253];
    else
      v5 = 0;
    v15 = v5;
    if ( v20 )
      v6 = v20[254];
    else
      v6 = 0;
    v16 = v6;
    if ( v20 )
      v7 = *v20;
    else
      v7 = -1;
    v17 = v7;
    v41 = (int *)&v13;
    v42 = 4LL;
    v39 = &v14;
    v40 = 4LL;
    v37 = &v9;
    v38 = 1LL;
    v35 = &v10;
    v36 = 1LL;
    v33 = &v11;
    v34 = 1LL;
    v31 = &v12;
    v32 = 1LL;
    v29 = &v15;
    v30 = 4LL;
    v27 = &v16;
    v28 = 4LL;
    v25 = &v17;
    v26 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v4 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v22 = &unk_18005B197;
    v23 = 201;
    v24 = 1;
    LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v4 + 32), &EventDescriptor, 0LL, 0LL, 0xBu, &UserData);
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v2;
}
