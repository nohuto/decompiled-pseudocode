/*
 * XREFs of ??1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ @ 0x14000EF48
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E460 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x14000ED84 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall BlackScreenDiagnostics::CWatsonErrorReporting::~CWatsonErrorReporting(
        BlackScreenDiagnostics::CWatsonErrorReporting *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 && *((_BYTE *)this + 8) )
    WerReportCloseHandle(v2);
  std::wstring::_Tidy_deallocate((__int64)this + 80);
  std::wstring::_Tidy_deallocate((__int64)this + 48);
  std::wstring::_Tidy_deallocate((__int64)this + 16);
}
