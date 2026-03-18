/*
 * XREFs of ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1401FB028
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402599A0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     GetProcessImageFilename @ 0x1401FB14C (GetProcessImageFilename.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1401FEC64 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

char __fastcall TraceChildWindowDpiTelemetry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  const wchar_t *v4; // rdi
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 ProcessImageFilename; // rax
  const wchar_t *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  const wchar_t *v17; // [rsp+80h] [rbp+40h] BYREF
  const wchar_t *v18; // [rsp+88h] [rbp+48h] BYREF
  const wchar_t *v19; // [rsp+98h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = &pszFormat;
  v17 = &pszFormat;
  v18 = &pszFormat;
  v7 = 0LL;
  v8 = *(_QWORD *)(v3 + 464);
  ProcessImageFilename = GetProcessImageFilename(v8, &v17);
  v10 = v17;
  v11 = ProcessImageFilename;
  if ( a2 )
  {
    ProcessImageFilename = *(_QWORD *)(a2 + 16);
    v12 = *(_QWORD *)(ProcessImageFilename + 464);
    if ( v8 == v12 )
    {
      v4 = v17;
    }
    else
    {
      ProcessImageFilename = GetProcessImageFilename(v12, &v18);
      v4 = v18;
      v7 = ProcessImageFilename;
    }
  }
  if ( (unsigned int)dword_14039BBC0 > 5 )
  {
    LOBYTE(ProcessImageFilename) = tlgKeywordOn((__int64)&dword_14039BBC0, 0x400000000000LL);
    if ( (_BYTE)ProcessImageFilename )
    {
      v18 = v4;
      v19 = v10;
      LODWORD(v17) = a3;
      LOBYTE(ProcessImageFilename) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                                       v13,
                                       (unsigned int)&unk_14036AA30,
                                       v14,
                                       v15,
                                       (__int64)&v17,
                                       (__int64)&v19,
                                       (__int64)&v18);
    }
  }
  if ( v11 )
    LOBYTE(ProcessImageFilename) = FreeTmpBuffer(v11);
  if ( v7 )
    LOBYTE(ProcessImageFilename) = FreeTmpBuffer(v7);
  return ProcessImageFilename;
}
