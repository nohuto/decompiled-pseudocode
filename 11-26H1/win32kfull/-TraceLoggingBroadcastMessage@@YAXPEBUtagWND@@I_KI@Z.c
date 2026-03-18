/*
 * XREFs of ?TraceLoggingBroadcastMessage@@YAXPEBUtagWND@@I_KI@Z @ 0x140092484
 * Callers:
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@D@@4@Z @ 0x14009226C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@D@@U2@@-$_tlgWrit.c)
 */

void __fastcall TraceLoggingBroadcastMessage(const struct tagWND *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int v9; // ebx
  _QWORD *v10; // rcx
  void *ProcessImageFileName; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h] BYREF
  void *v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF

  v5 = a4;
  if ( (unsigned int)dword_1403AAA30 > 5 && (qword_1403AAA40 & 2) != 0 && (qword_1403AAA48 & 2) == qword_1403AAA48 )
  {
    v17 = 0x1000000LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v9 = 0;
    v10 = (_QWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = (_QWORD *)(((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process);
    ProcessImageFileName = (void *)PsGetProcessImageFileName(*v10);
    v19 = v5;
    v18 = ProcessImageFileName;
    v20 = a3;
    v15 = a2;
    if ( a1 )
      v9 = *(_DWORD *)a1;
    v16 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      v12,
      (__int64)&unk_140376BB3,
      v13,
      v14,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v20,
      (__int64)&v19,
      &v18,
      (__int64)&v17);
  }
}
