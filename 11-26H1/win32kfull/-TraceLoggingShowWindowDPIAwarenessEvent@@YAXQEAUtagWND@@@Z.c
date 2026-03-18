/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1401F53DC
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1401F5540 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401F5584 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 i; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // [rsp+78h] [rbp+10h] BYREF
  __int64 ProcessImageFileName; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 2236LL) & 0x20) == 0 )
  {
    v3 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
    v4 = v3;
    LOBYTE(v4) = v3 & 0xF;
    if ( (v3 & 0xF) == 2 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
      if ( CurrentProcessWin32Process )
      {
        v4 = -*(_QWORD *)CurrentProcessWin32Process;
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      }
      for ( i = *(_QWORD *)(CurrentProcessWin32Process + 328); i; i = *(_QWORD *)(i + 696) )
      {
        v4 = **(unsigned int **)(i + 512);
        if ( (v4 & 0x20000000) != 0 )
        {
          v3 = 128;
          break;
        }
      }
    }
    if ( (unsigned int)dword_1403AAA30 > 5
      && (qword_1403AAA40 & 0x400000000000LL) != 0
      && (qword_1403AAA48 & 0x400000000000LL) == qword_1403AAA48 )
    {
      v12 = v3;
      v7 = PsGetCurrentProcessWin32Process(v4);
      v8 = (_QWORD *)v7;
      if ( v7 )
        v8 = (_QWORD *)(((unsigned __int128)-(__int128)*(unsigned __int64 *)v7 >> 64) & v7);
      ProcessImageFileName = PsGetProcessImageFileName(*v8);
      v14 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v9,
        (unsigned int)&unk_140377A74,
        v10,
        v11,
        (__int64)&v14,
        (__int64)&ProcessImageFileName,
        (__int64)&v12);
    }
  }
}
