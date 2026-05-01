/*
 * XREFs of ??$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEBG00@Z @ 0x1800685F0
 * Callers:
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180067D04 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x180068ACC (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::OnEventQueued::OnEventQueued_EventName<unsigned short const *,unsigned short const *,unsigned short const *>(
        const WCHAR **a1,
        const WCHAR **a2,
        const WCHAR **a3)
{
  __int64 v6; // rax
  __int64 v7; // r10
  const WCHAR *v8; // r8
  __int64 v9; // rax
  const WCHAR *v10; // rdx
  const WCHAR *v11; // r9
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  void *v20; // [rsp+68h] [rbp+7h]
  int v21; // [rsp+70h] [rbp+Fh]
  int v22; // [rsp+74h] [rbp+13h]
  const WCHAR *v23; // [rsp+78h] [rbp+17h]
  int v24; // [rsp+80h] [rbp+1Fh]
  int v25; // [rsp+84h] [rbp+23h]
  const WCHAR *v26; // [rsp+88h] [rbp+27h]
  int v27; // [rsp+90h] [rbp+2Fh]
  int v28; // [rsp+94h] [rbp+33h]
  const WCHAR *v29; // [rsp+98h] [rbp+37h]
  int v30; // [rsp+A0h] [rbp+3Fh]
  int v31; // [rsp+A4h] [rbp+43h]

  v6 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
         a1,
         _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  v7 = *(_QWORD *)(v6 + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a3;
    v9 = -1LL;
    v10 = *a2;
    v11 = *a1;
    if ( *a3 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v8[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v8 = &pvData;
      v13 = 2;
    }
    v29 = v8;
    v30 = v13;
    v31 = 0;
    if ( v10 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v10[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v10 = &pvData;
      v15 = 2;
    }
    v26 = v10;
    v27 = v15;
    v28 = 0;
    if ( v11 )
    {
      do
        ++v9;
      while ( v11[v9] );
      v16 = 2 * v9 + 2;
    }
    else
    {
      v11 = &pvData;
      v16 = 2;
    }
    v24 = v16;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    v23 = v11;
    v25 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v20 = &unk_18082F6DD;
    UserData.Reserved = 2;
    v21 = 59;
    v22 = 1;
    LODWORD(v6) = EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return v6;
}
