/*
 * XREFs of ?TraceLoggingShowWindowShellCalloutResult@@YAXPEBUtagWND@@_KHIW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z @ 0x1402D24B4
 * Callers:
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1402DCA30 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapSz@D@@334@Z @ 0x140002F48 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapSz@D@@U1@U1@U2@@-.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

char __fastcall TraceLoggingShowWindowShellCalloutResult(int *a1, __int64 a2, int a3, int a4, int a5)
{
  PEPROCESS *v9; // rdi
  char result; // al
  int v11; // r10d
  PEPROCESS v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+78h] [rbp+Fh] BYREF
  int v17; // [rsp+7Ch] [rbp+13h] BYREF
  int v18; // [rsp+80h] [rbp+17h] BYREF
  int v19; // [rsp+84h] [rbp+1Bh] BYREF
  int v20; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+90h] [rbp+27h] BYREF
  __int64 ProcessImageFileName; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+A0h] [rbp+37h] BYREF
  int v24; // [rsp+C8h] [rbp+5Fh] BYREF

  v9 = *(PEPROCESS **)(*((_QWORD *)a1 + 2) + 456LL);
  result = (unsigned __int8)PsGetProcessId(*v9);
  if ( (unsigned int)dword_1403AAA30 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_1403AAA30, 0x400000000000LL);
    if ( result )
    {
      v12 = *v9;
      v21 = 0x1000000LL;
      v24 = v11;
      v16 = v11;
      v18 = a4;
      ProcessImageFileName = PsGetProcessImageFileName(v12);
      v17 = a5;
      v20 = *a1;
      v19 = a3;
      v23 = a2;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v13,
               (__int64)&unk_140376E4E,
               v14,
               v15,
               (__int64)&v20,
               (__int64)&v23,
               (__int64)&v19,
               (__int64)&v18,
               (__int64)&v17,
               (void **)&ProcessImageFileName,
               (__int64)&v16,
               (__int64)&v24,
               (__int64)&v21);
    }
  }
  return result;
}
