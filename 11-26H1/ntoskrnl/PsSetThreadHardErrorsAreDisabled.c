/*
 * XREFs of PsSetThreadHardErrorsAreDisabled @ 0x1404F3270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetThreadHardErrorsAreDisabled(__int64 a1, char a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1440), 0x10u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1440), 0xFFFFFFEF);
}
