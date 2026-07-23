/*
 * XREFs of MiInitializeLargeMdlLeafPfnsWorker @ 0x1406F3100
 * Callers:
 *     <none>
 * Callees:
 *     MiInitializeLargeMdlLeafPfns @ 0x1406F3000 (MiInitializeLargeMdlLeafPfns.c)
 */

unsigned __int64 __fastcall MiInitializeLargeMdlLeafPfnsWorker(__int64 a1)
{
  return MiInitializeLargeMdlLeafPfns(
           a1,
           *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 496LL) + 56LL),
           (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 496LL) + 148LL) >> 5) & 1,
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 496LL) + 72LL));
}
