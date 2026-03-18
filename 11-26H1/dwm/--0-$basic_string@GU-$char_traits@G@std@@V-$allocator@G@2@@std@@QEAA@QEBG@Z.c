/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x14000DAB8
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000DD18 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E460 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x14000D6EC (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x14000EE0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 */

__int64 __fastcall std::wstring::wstring(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  const void *v4; // rdx

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = std::_WChar_traits<unsigned short>::length(a2);
  std::wstring::_Construct<1,unsigned short const *>((char **)a1, v4, v3);
  return a1;
}
