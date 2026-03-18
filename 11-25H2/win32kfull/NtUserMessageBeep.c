/*
 * XREFs of NtUserMessageBeep @ 0x140110730
 * Callers:
 *     <none>
 * Callees:
 *     xxxMessageBeep @ 0x1401107D4 (xxxMessageBeep.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x14011157C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall NtUserMessageBeep(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v7; // r9d
  __int64 v8; // r8
  int v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  v2 = xxxMessageBeep(a1);
  v4 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v3 = -*(_QWORD *)CurrentProcessWin32Process;
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( (unsigned int)dword_14039BBC0 > 4 )
    {
      v10 = v8 + 976;
      v9 = *(_DWORD *)(v8 + 56);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v3,
        (unsigned int)&unk_140369157,
        v8,
        v7,
        (__int64)&v9,
        (__int64)&v10);
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
