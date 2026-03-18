/*
 * XREFs of ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x140218E4C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x140218948 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     GetProcessImageFilename @ 0x140218F80 (GetProcessImageFilename.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1402190F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall TraceChildWindowDpiTelemetry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  const wchar_t *v4; // rbx
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  const wchar_t *v13; // r14
  __int64 v14; // rsi
  const wchar_t *v15; // [rsp+80h] [rbp+40h] BYREF
  const wchar_t *v16; // [rsp+88h] [rbp+48h] BYREF
  const wchar_t *v17; // [rsp+98h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = &pszFormat;
  v15 = &pszFormat;
  v16 = &pszFormat;
  v7 = 0LL;
  v8 = *(_QWORD *)(v3 + 456);
  result = GetProcessImageFilename(v8, &v15);
  v13 = v15;
  v14 = result;
  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 16);
    v10 = *(_QWORD *)(result + 456);
    if ( v8 == v10 )
    {
      v4 = v15;
    }
    else
    {
      result = GetProcessImageFilename(v10, &v16);
      v4 = v16;
      v7 = result;
    }
  }
  if ( (unsigned int)dword_1403AAA30 > 5 && (qword_1403AAA40 & 0x400000000000LL) != 0 )
  {
    result = qword_1403AAA48 & 0x400000000000LL;
    if ( (qword_1403AAA48 & 0x400000000000LL) == qword_1403AAA48 )
    {
      v16 = v4;
      v17 = v13;
      LODWORD(v15) = a3;
      result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                 v10,
                 (unsigned int)&unk_140377FF4,
                 v11,
                 v12,
                 (__int64)&v15,
                 (__int64)&v17,
                 (__int64)&v16);
    }
  }
  if ( v14 )
    result = FreeTmpBuffer(v14);
  if ( v7 )
    return FreeTmpBuffer(v7);
  return result;
}
