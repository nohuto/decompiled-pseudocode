/*
 * XREFs of ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x18019F804
 * Callers:
 *     ?ISMShutDownStatic@InputProcessManager@@CAJPEAXK0@Z @ 0x18019F970 (-ISMShutDownStatic@InputProcessManager@@CAJPEAXK0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x180004F10 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x18004D384 (-GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A1010 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z @ 0x18019FBF4 (-ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x1801A0198 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InputProcessManager::ISMShutDown(InputProcessManager *this)
{
  const char *v2; // r9
  __int64 v3; // rcx
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  struct IMessageSession *Session; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+20h] [rbp-38h]
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+10h]
  DWORD ExitCode; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF
  int v15; // [rsp+80h] [rbp+28h] BYREF
  DWORD v16; // [rsp+88h] [rbp+30h] BYREF

  ExitCode = 0;
  if ( !GetExitCodeProcess(*((HANDLE *)this + 10), &ExitCode) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
      v2);
  InputTraceLogging::InputProcessManager::ProcessShutDown(ExitCode);
  LODWORD(v14) = ExitCode;
  BYTE4(v14) = 1;
  *(_QWORD *)((char *)this + 68) = v14;
  v3 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(Microsoft::Bamo::BaseBamoConnection **)(v3 + 16);
  Session = Microsoft::Bamo::BaseBamoConnection::GetSession(v4);
  v6 = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)Session + 280LL))(
         Session,
         *((_QWORD *)this + 10));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA2,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
      (const char *)(unsigned int)v6,
      v10);
  CloseHandle(*((HANDLE *)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  if ( (unsigned int)dword_180251248 > 5 && tlgKeywordOn((__int64)&dword_180251248, 0x400000000000LL) )
  {
    v11[0] = 0x1000000LL;
    LODWORD(v14) = *((_QWORD *)this + 7) != 0LL;
    v15 = *((unsigned __int8 *)this + 64);
    v16 = ExitCode;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (__int64)&unk_180229383,
      v8,
      v9,
      (__int64)v11,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  if ( *((_BYTE *)this + 64) )
  {
    if ( !*((_QWORD *)this + 7) )
      InputProcessManager::StartProcess(this);
  }
}
