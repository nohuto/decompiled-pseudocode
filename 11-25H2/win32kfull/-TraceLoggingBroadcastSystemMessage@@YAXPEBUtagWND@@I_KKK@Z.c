/*
 * XREFs of ?TraceLoggingBroadcastSystemMessage@@YAXPEBUtagWND@@I_KKK@Z @ 0x140128FF0
 * Callers:
 *     xxxSendMessageBSM @ 0x140128DF0 (xxxSendMessageBSM.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@D@@4@Z @ 0x140128B34 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@D@@U2@@-$_tlgW.c)
 */

void __fastcall TraceLoggingBroadcastSystemMessage(
        const struct tagWND *a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  __int64 CurrentProcessWin32Process; // rax
  int v10; // ebx
  __int64 ProcessImageFileName; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // [rsp+68h] [rbp+Fh] BYREF
  int v16; // [rsp+6Ch] [rbp+13h] BYREF
  int v17; // [rsp+70h] [rbp+17h] BYREF
  int v18; // [rsp+74h] [rbp+1Bh] BYREF
  __int64 v19; // [rsp+78h] [rbp+1Fh]
  __int64 v20; // [rsp+80h] [rbp+27h] BYREF
  __int64 v21; // [rsp+88h] [rbp+2Fh] BYREF

  if ( (unsigned int)dword_14039BBC0 > 5 && (qword_14039BBD0 & 2) != 0 && (qword_14039BBD8 & 2) == qword_14039BBD8 )
  {
    v19 = 0x1000000LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v10 = 0;
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)CurrentProcessWin32Process);
    v16 = a4;
    v20 = ProcessImageFileName;
    v15 = a5;
    v21 = a3;
    v17 = a2;
    if ( a1 )
      v10 = *(_DWORD *)a1;
    v18 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      v12,
      (__int64)&unk_14036951B,
      v13,
      v14,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v21,
      (__int64)&v16,
      (__int64)&v15,
      &v20);
  }
}
