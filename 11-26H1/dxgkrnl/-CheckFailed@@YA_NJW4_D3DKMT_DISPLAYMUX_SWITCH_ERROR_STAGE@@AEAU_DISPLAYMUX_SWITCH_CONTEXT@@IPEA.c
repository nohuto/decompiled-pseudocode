/*
 * XREFs of ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x14008A910
 * Callers:
 *     _lambda_5bf16074e78eca97c9745c10e52e39f7_::operator() @ 0x14008A5AC (_lambda_5bf16074e78eca97c9745c10e52e39f7_--operator().c)
 *     ?CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z @ 0x14008B580 (-CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z.c)
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x14008C2F8 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DxgkDisplayMuxSwitchExecute @ 0x1400911A0 (DxgkDisplayMuxSwitchExecute.c)
 *     DxgkDisplayMuxSwitchFinish @ 0x1400912B4 (DxgkDisplayMuxSwitchFinish.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@55AEBU?$_tlgWrapSz@D@@@Z @ 0x140004180 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U-$_.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14002EE60 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 */

char __fastcall CheckFailed(int a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // [rsp+50h] [rbp-61h] BYREF
  int v13; // [rsp+54h] [rbp-5Dh] BYREF
  unsigned int v14; // [rsp+58h] [rbp-59h] BYREF
  __int64 v15; // [rsp+60h] [rbp-51h] BYREF
  __int64 v16; // [rsp+68h] [rbp-49h] BYREF
  const CHAR *v17[2]; // [rsp+70h] [rbp-41h] BYREF
  int v18; // [rsp+80h] [rbp-31h] BYREF
  int v19; // [rsp+84h] [rbp-2Dh]
  __int64 v20; // [rsp+88h] [rbp-29h]
  __int128 v21; // [rsp+90h] [rbp-21h]
  __int64 v22; // [rsp+A0h] [rbp-11h]
  __int64 v23; // [rsp+A8h] [rbp-9h]
  int v24; // [rsp+B0h] [rbp-1h]
  int v25; // [rsp+B4h] [rbp+3h]
  __int64 v26; // [rsp+B8h] [rbp+7h]

  v5 = a2;
  v7 = a1;
  if ( a1 >= 0 )
  {
    WdLogSingleEntry3(4LL, a2, a4, "onecoreuap\\windows\\core\\dxkernel\\dxgkrnl\\port\\dpdisplaymux.cxx");
    WdLogGlobalForLineNumber = 4555;
    if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
    {
      v17[0] = "onecoreuap\\windows\\core\\dxkernel\\dxgkrnl\\port\\dpdisplaymux.cxx";
      v16 = a3 + 16;
      v14 = a4;
      v13 = v5;
      v12 = v7;
      v15 = 2048LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v10,
        (__int64)&unk_140144598,
        a3,
        v11,
        (__int64)&v15,
        &v16,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v14,
        v17);
    }
    if ( *(_DWORD *)(a3 + 52) && dword_1401694E8 != (_DWORD)v5 )
    {
      v23 = 0LL;
      v18 = 6;
      v20 = 0LL;
      v21 = 0LL;
      v19 = 64;
      v22 = 0LL;
      v24 = 133;
      v25 = v5;
      v26 = 0LL;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v18);
      dword_1401694E8 = v5;
    }
    return 0;
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 64) )
    {
      *(_DWORD *)(a3 + 212) |= 1u;
      *(_DWORD *)(a3 + 64) = a1;
      *(_DWORD *)(a3 + 56) = a2;
      *(_DWORD *)(a3 + 60) = 0;
      *(_DWORD *)(a3 + 68) = a4;
      RtlStringCbCopyA((char *)(a3 + 72), 128LL, "onecoreuap\\windows\\core\\dxkernel\\dxgkrnl\\port\\dpdisplaymux.cxx");
      WdLogSingleEntry4(2LL, v7, v5, a4, "onecoreuap\\windows\\core\\dxkernel\\dxgkrnl\\port\\dpdisplaymux.cxx");
      WdLogGlobalForLineNumber = 4525;
      v23 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      v18 = 6;
      v19 = 64;
      v22 = 0LL;
      v24 = 132;
      v25 = v7;
      v26 = (unsigned int)v5 | 0x100000000LL;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v18);
      if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
      {
        v15 = (__int64)"onecoreuap\\windows\\core\\dxkernel\\dxgkrnl\\port\\dpdisplaymux.cxx";
        v16 = a3 + 16;
        v12 = a4;
        v13 = v5;
        v14 = v7;
        v17[0] = (const CHAR *)2048;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          (__int64)v17,
          (__int64)&unk_14014460F,
          a3,
          v8,
          (__int64)v17,
          &v16,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (const CHAR **)&v15);
      }
      if ( *(_DWORD *)(a3 + 48) )
        __debugbreak();
    }
    return 1;
  }
}
