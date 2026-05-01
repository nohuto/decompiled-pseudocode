/*
 * XREFs of ??$DashboardInteracted@Uguid@winrt@@IAEA_NPEBGPEBGAEAY0BD@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEA_N$$QEAPEBG3AEAY0BD@$$CBGAEAPEBG@Z @ 0x18018C990
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180278C40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 * Callees:
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18018CBE4 (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool &,unsigned short const *,unsigned short const *,unsigned short const (&)[19],unsigned short const * &>(
        __int128 *a1,
        _DWORD *a2,
        _BYTE *a3,
        const WCHAR **a4,
        const WCHAR **a5,
        int a6,
        const WCHAR **a7)
{
  const struct _tlgProvider_t *v11; // rax
  const struct _tlgProvider_t *v12; // r10
  __int128 v13; // xmm0
  const WCHAR *v14; // r9
  const WCHAR *v15; // r8
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // eax
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v25[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v30; // [rsp+88h] [rbp-80h]
  int v31; // [rsp+90h] [rbp-78h]
  int v32; // [rsp+94h] [rbp-74h]
  __int128 *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  _DWORD *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  int *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  const WCHAR *v39; // [rsp+C8h] [rbp-40h]
  int v40; // [rsp+D0h] [rbp-38h]
  int v41; // [rsp+D4h] [rbp-34h]
  const WCHAR *v42; // [rsp+D8h] [rbp-30h]
  int v43; // [rsp+E0h] [rbp-28h]
  int v44; // [rsp+E4h] [rbp-24h]
  const wchar_t *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  const WCHAR *v47; // [rsp+F8h] [rbp-10h]
  int v48; // [rsp+100h] [rbp-8h]
  int v49; // [rsp+104h] [rbp-4h]
  __int64 *v50; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]

  v11 = DashboardManagerTelemetry::Provider();
  v12 = v11;
  if ( *(_DWORD *)v11 > 5u
    && (*((_QWORD *)v11 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v11 + 3) & 0x400000000000LL) == *((_QWORD *)v11 + 3) )
  {
    v13 = *a1;
    v14 = *a4;
    v26 = 50331648LL;
    v15 = *a7;
    v28 = v13;
    v51 = 8LL;
    v16 = *a5;
    LOBYTE(v24) = *a3;
    v25[0] = *a2;
    v50 = &v26;
    v17 = -1LL;
    if ( v15 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v15[v18] );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v15 = &pvData;
      v19 = 2;
    }
    v48 = v19;
    v45 = L"ShowDashboardAsync";
    v47 = v15;
    v49 = 0;
    v46 = 38LL;
    if ( v16 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v16[v20] );
      v21 = 2 * v20 + 2;
    }
    else
    {
      v16 = &pvData;
      v21 = 2;
    }
    v42 = v16;
    v43 = v21;
    v44 = 0;
    if ( v14 )
    {
      do
        ++v17;
      while ( v14[v17] );
      v22 = 2 * v17 + 2;
    }
    else
    {
      v14 = &pvData;
      v22 = 2;
    }
    v40 = v22;
    v39 = v14;
    v37 = &v24;
    v38 = 1LL;
    v35 = v25;
    v41 = 0;
    v33 = &v28;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v12 + 1);
    v36 = 4LL;
    v34 = 16LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v30 = &unk_180825F44;
    v32 = 1;
    UserData.Reserved = 2;
    v31 = 145;
    v25[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v11) = EventWriteTransfer(*((_QWORD *)v12 + 4), &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
  return (int)v11;
}
