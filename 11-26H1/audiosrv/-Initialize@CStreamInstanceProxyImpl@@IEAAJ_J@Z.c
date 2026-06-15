/*
 * XREFs of ?Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z @ 0x18008C740
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_J@Z @ 0x1800FF160 (-RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStre.c)
 *     ?RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_JPEAUSystemAudioStream@@@Z @ 0x1800FFEC4 (-RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall CStreamInstanceProxyImpl::Initialize(CStreamInstanceProxyImpl *this, __int64 a2)
{
  struct AudioSrvTelemetryProvider *v4; // rax
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v4 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v4 + 1),
    "StreamInstance_CoCreate",
    0LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  Instance = CoCreateInstance(
               &GUID_00152fa5_443a_4c4b_9ebb_61ff63f10bdb,
               0LL,
               0x17u,
               &GUID_63bebbca_5863_4b8a_a2e4_ef6781e21e84,
               (LPVOID *)this + 2);
  v6 = Instance;
  if ( Instance >= 0 )
  {
    *((_QWORD *)this + 4) = a2;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF93,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance);
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v6;
}
