/*
 * XREFs of bKillPFFOBJ @ 0x14010C008
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14010FBC0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x14010C034 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 */

__int64 __fastcall bKillPFFOBJ(PFFOBJ *a1, struct PFFCLEANUP *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 68LL) && !*(_DWORD *)(*(_QWORD *)a1 + 64LL) )
  {
    PFFOBJ::vPFFC_Delete(a1, a2);
    return 1LL;
  }
  return result;
}
