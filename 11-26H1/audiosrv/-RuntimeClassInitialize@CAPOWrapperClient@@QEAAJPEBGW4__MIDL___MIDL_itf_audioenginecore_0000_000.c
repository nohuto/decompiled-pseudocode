/*
 * XREFs of ?RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEBU_GUID@@@Z @ 0x1800BA6B8
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEBU_GUID@@@Z @ 0x1800B97D8 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x180064B78 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperClient::RuntimeClassInitialize(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  const char *v8; // r15
  struct AudioSrvTelemetryProvider *v9; // rax
  HRESULT Instance; // eax
  unsigned int v11; // ebx
  struct AudioSrvTelemetryProvider *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int128 v16; // [rsp+70h] [rbp-168h] BYREF
  __int128 v17; // [rsp+80h] [rbp-158h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp-148h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v17 = 0LL;
  v8 = (const char *)(a1 + 132);
  StringCchPrintfA(
    (char *)(a1 + 132),
    39LL,
    "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    *(_DWORD *)a4,
    *(unsigned __int16 *)(a4 + 4),
    *(unsigned __int16 *)(a4 + 6),
    *(unsigned __int8 *)(a4 + 8),
    *(unsigned __int8 *)(a4 + 9),
    *(unsigned __int8 *)(a4 + 10),
    *(unsigned __int8 *)(a4 + 11),
    *(unsigned __int8 *)(a4 + 12),
    *(unsigned __int8 *)(a4 + 13),
    *(unsigned __int8 *)(a4 + 14),
    *(unsigned __int8 *)(a4 + 15));
  EtwEventActivityIdControl(1LL, &v17);
  v9 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(&PerformanceCount, *((const struct _tlgProvider_t **)v9 + 1), "SystemEffect_CoCreate", v8);
  Instance = CoCreateInstance(
               &GUID_3a8b5a92_80b0_48b3_8197_701ecd3261e4,
               0LL,
               0x17u,
               &GUID_67309ffa_1e7c_48f2_b96f_9b25b183ba25,
               (LPVOID *)(a1 + 88));
  v11 = Instance;
  if ( Instance >= 0 )
  {
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    v12 = AudioSrvTelemetryProvider::Instance();
    CPerfTracker::CPerfTracker(&PerformanceCount, *((const struct _tlgProvider_t **)v12 + 1), "SystemEffect_Create", v8);
    v13 = *(_QWORD *)(a1 + 88);
    v16 = v17;
    v14 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v13 + 24LL))(
            v13,
            &v16,
            a2,
            a3,
            a4,
            a1 + 96);
    v11 = v14;
    if ( v14 >= 0 )
      v11 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
        (const char *)(unsigned int)v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)(unsigned int)Instance);
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v11;
}
