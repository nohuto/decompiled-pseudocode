/*
 * XREFs of ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x180021738
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002098C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002229C (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        bool a5,
        bool a6,
        bool a7)
{
  const struct _tlgProvider_t *v11; // rax
  const struct _tlgProvider_t *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  const GUID *v15; // rdx
  const GUID *v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // eax
  bool v21; // [rsp+30h] [rbp-D0h] BYREF
  bool v22; // [rsp+31h] [rbp-CFh] BYREF
  bool v23; // [rsp+32h] [rbp-CEh] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v25[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  __int64 *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  _DWORD *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+ACh] [rbp-54h]
  const unsigned __int16 *v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+BCh] [rbp-44h]
  int *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  bool *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  bool *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  bool *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v11 = SingleViewExperienceLogging::Provider();
  v12 = v11;
  if ( *(_DWORD *)v11 > 5u
    && (*((_QWORD *)v11 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v11 + 3) & 0x200000000000LL) == *((_QWORD *)v11 + 3) )
  {
    v21 = a7;
    v22 = a6;
    v23 = a5;
    v24 = a4;
    CurrentThreadId = GetCurrentThreadId();
    v14 = *((_QWORD *)this + 34);
    v15 = 0LL;
    v25[0] = CurrentThreadId;
    v26 = 0x1000000LL;
    if ( !*(_BYTE *)(v14 + 4) || _tlgGuidIsZero((const struct _GUID *)(v14 + 24)) )
      v16 = v15;
    v43 = 4LL;
    v49 = 1LL;
    v48 = &v21;
    v46 = &v22;
    v44 = &v23;
    v47 = 1LL;
    v42 = &v24;
    v17 = -1LL;
    v45 = 1LL;
    if ( a3 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a3[v18] != (_WORD)v15 );
      v19 = 2 * v18 + 2;
    }
    else
    {
      a3 = &pvData;
      v19 = 2;
    }
    v39 = a3;
    v40 = v19;
    v41 = (int)v15;
    if ( a2 )
    {
      do
        ++v17;
      while ( a2[v17] != (_WORD)v15 );
      v20 = 2 * v17 + 2;
    }
    else
    {
      a2 = &pvData;
      v20 = 2;
    }
    v37 = v20;
    v38 = (int)v15;
    v34 = v25;
    v36 = a2;
    v32 = &v26;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v12 + 1);
    v35 = 4LL;
    v33 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x200000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v29 = &unk_180830AB1;
    UserData.Reserved = 2;
    v30 = 182;
    v31 = 1;
    v25[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v12 + 4), &EventDescriptor, (LPCGUID)(v14 + 8), v16, 0xAu, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
