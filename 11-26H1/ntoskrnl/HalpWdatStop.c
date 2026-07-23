/*
 * XREFs of HalpWdatStop @ 0x14059A2F0
 * Callers:
 *     <none>
 * Callees:
 *     WdInstrExecuteAction @ 0x1404F6474 (WdInstrExecuteAction.c)
 */

__int64 __fastcall HalpWdatStop(__int64 a1)
{
  __int64 result; // rax

  result = WdInstrExecuteAction(a1 + 48, *(_DWORD *)(a1 + 44), 11, 0);
  *(_BYTE *)(a1 + 40) = 0;
  return result;
}
