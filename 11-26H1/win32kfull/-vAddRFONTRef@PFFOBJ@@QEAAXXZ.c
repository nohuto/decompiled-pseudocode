/*
 * XREFs of ?vAddRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1401B5008
 * Callers:
 *     ?GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z @ 0x1401DCE60 (-GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PFFOBJ::vAddRFONTRef(PFFOBJ *this, __int64 a2, __int64 a3)
{
  W32GetSessionState(this, a2, a3);
  ++*(_DWORD *)(*(_QWORD *)this + 68LL);
}
