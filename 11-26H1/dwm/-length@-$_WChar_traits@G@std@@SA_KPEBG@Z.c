/*
 * XREFs of ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x14000EE0C
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x14000DAB8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000DD18 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_WChar_traits<unsigned short>::length(__int64 a1)
{
  __int64 result; // rax

  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(a1 + 2 * result) );
  return result;
}
