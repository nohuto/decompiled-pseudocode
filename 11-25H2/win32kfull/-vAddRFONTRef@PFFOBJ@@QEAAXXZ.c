/*
 * XREFs of ?vAddRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14017BD10
 * Callers:
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140178748 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262AA0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PFFOBJ::vAddRFONTRef(PFFOBJ *this, __int64 a2)
{
  W32GetSessionState((_DWORD)this, a2);
  ++*(_DWORD *)(*(_QWORD *)this + 68LL);
}
