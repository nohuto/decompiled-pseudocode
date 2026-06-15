/*
 * XREFs of PbmCastingAppStateChanged @ 0x180041AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18002328C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180024B30 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall PbmCastingAppStateChanged(void *a1, int a2)
{
  int v4; // ebx
  int Process; // eax
  int v6; // edi
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+40h] [rbp-19h] BYREF
  _BYTE *v13; // [rsp+48h] [rbp-11h] BYREF
  int v14; // [rsp+50h] [rbp-9h]
  __int64 v15[2]; // [rsp+58h] [rbp-1h] BYREF
  int v16; // [rsp+68h] [rbp+Fh]
  __int64 *v17; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v19; // [rsp+C8h] [rbp+6Fh] BYREF
  int v20; // [rsp+D0h] [rbp+77h] BYREF
  struct CProcess *v21; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( a2 > 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x201,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v4 = 0;
  if ( g_ApplicationManager )
  {
    v21 = 0LL;
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v21);
    v6 = Process;
    if ( Process < 0 )
    {
      v7 = (unsigned int)Process;
      v8 = 518LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)v7);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v21);
      return (unsigned int)v6;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      (__int64 *)&v13,
      (__int64 *)&v21);
    v14 = a2;
    v15[0] = (__int64)off_1800537A8;
    v15[1] = (__int64)v13;
    v17 = v15;
    v13 = 0LL;
    v16 = a2;
    v6 = QueueGenericWorkItem(v15);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v13);
    if ( v6 < 0 )
    {
      v7 = (unsigned int)v6;
      v8 = 523LL;
      goto LABEL_8;
    }
    v9 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 0x8000LL) )
    {
      LOBYTE(v4) = a2 == 0;
      v19 = v4;
      v20 = *((_DWORD *)v21 + 40);
      v12 = *((_QWORD *)v21 + 26);
      v13 = (_BYTE *)*((_QWORD *)v21 + 22);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_18005AFB2,
        v10,
        v11,
        &v13,
        (__int64)&v12,
        (__int64)&v20,
        (__int64)&v19);
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v21);
  }
  return 0LL;
}
