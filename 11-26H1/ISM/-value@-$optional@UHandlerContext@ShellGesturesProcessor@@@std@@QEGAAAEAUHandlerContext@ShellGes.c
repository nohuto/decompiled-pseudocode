/*
 * XREFs of ?value@?$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEGAAAEAUHandlerContext@ShellGesturesProcessor@@XZ @ 0x18009972C
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<ShellGesturesProcessor::HandlerContext>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 32) )
    std::_Throw_bad_optional_access();
  return a1;
}
