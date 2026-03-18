/*
 * XREFs of ?TraceLoggingBroadcastSystemMessage@@YAXPEBUtagWND@@I_KKK@Z @ 0x1400056B0
 * Callers:
 *     xxxSendMessageBSM @ 0x140004CE0 (xxxSendMessageBSM.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@D@@4@Z @ 0x140093AC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@D@@U2@@-$_tlgW.c)
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
  _QWORD *v11; // rcx
  __int64 ProcessImageFileName; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // [rsp+68h] [rbp+Fh] BYREF
  int v17; // [rsp+6Ch] [rbp+13h] BYREF
  int v18; // [rsp+70h] [rbp+17h] BYREF
  int v19; // [rsp+74h] [rbp+1Bh] BYREF
  __int64 v20; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+80h] [rbp+27h] BYREF
  __int64 v22; // [rsp+88h] [rbp+2Fh] BYREF

  if ( (unsigned int)dword_1403AAA30 > 5 && (qword_1403AAA40 & 2) != 0 && (qword_1403AAA48 & 2) == qword_1403AAA48 )
  {
    v20 = 0x1000000LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v10 = 0;
    v11 = (_QWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v11 = (_QWORD *)(((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process);
    ProcessImageFileName = PsGetProcessImageFileName(*v11);
    v17 = a4;
    v21 = ProcessImageFileName;
    v16 = a5;
    v22 = a3;
    v18 = a2;
    if ( a1 )
      v10 = *(_DWORD *)a1;
    v19 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      v13,
      (unsigned int)&unk_140376ADF,
      v14,
      v15,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v22,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v21,
      (__int64)&v20);
  }
}
