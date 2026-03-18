/*
 * XREFs of ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1401EB648
 * Callers:
 *     ?_EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXPEAUtagQMSG@@_N@Z @ 0x1400E3CF8 (-_EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXPEAUtagQMSG@@_N@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400E2300 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1400E3EB4 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400F3358 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::LogHanging(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v3; // r8
  char *v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-44h] BYREF
  const WCHAR *v12; // [rsp+48h] [rbp-40h] BYREF
  char v13[32]; // [rsp+50h] [rbp-38h] BYREF

  if ( (unsigned int)KeyboardInputTelemetry::GetKeyboardInputLatency(a2) > 0x2710 )
  {
    v3 = *((_QWORD *)a1 + 57);
    v4 = v3 ? (char *)(v3 + 976) : (char *)L"Unknown";
    RtlStringCchCopyW(v13, 16LL, v4);
    if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 0x400000000000LL) )
    {
      v8 = *((_QWORD *)a1 + 57);
      if ( v8 )
        v9 = *(unsigned int *)(v8 + 56);
      else
        v9 = v7;
      v10 = v9;
      if ( v8 )
        v7 = *(_DWORD *)(v8 + 56);
      v11 = v7;
      v12 = (const WCHAR *)v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        (__int64)&unk_1402832AF,
        v5,
        v6,
        &v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
