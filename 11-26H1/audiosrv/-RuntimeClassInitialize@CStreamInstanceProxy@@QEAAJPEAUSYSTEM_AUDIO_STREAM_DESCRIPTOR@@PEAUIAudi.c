/*
 * XREFs of ?RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_JPEAUSystemAudioStream@@@Z @ 0x1800FFEC4
 * Callers:
 *     ??$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_JAEAPEAUSystemAudioStream@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEA_JAEAPEAUSystemAudioStream@@@Z @ 0x1800F8BA0 (--$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18006C48C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z @ 0x18008C740 (-Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z.c)
 *     _lambda_e5de096e72d24c347efd3ae2652dd6e2_::operator() @ 0x1800FA300 (_lambda_e5de096e72d24c347efd3ae2652dd6e2_--operator().c)
 */

__int64 CStreamInstanceProxy::RuntimeClassInitialize(
        CStreamInstanceProxyImpl *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        ...)
{
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  CStreamInstanceProxyImpl *v16; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v17[5]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v19; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+48h] BYREF

  va_start(va, a5);
  v20 = a3;
  v19 = a2;
  v7 = CStreamInstanceProxyImpl::Initialize(a1, a5);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v17[0] = a1;
    v17[2] = &v19;
    v17[1] = a4;
    v17[3] = &v20;
    va_copy((va_list)&v17[4], va);
    v8 = lambda_e5de096e72d24c347efd3ae2652dd6e2_::operator()((__int64)v17);
    v9 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v9 > 4u && tlgKeywordOn((__int64)v9, 512LL) )
    {
      v15 = *((_QWORD *)a1 + 4);
      v16 = a1;
      v14 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v10,
        byte_1801A6092,
        v11,
        v12,
        (__int64)&v14,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFCC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
  }
  return v8;
}
