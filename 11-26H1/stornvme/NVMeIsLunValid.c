/*
 * XREFs of NVMeIsLunValid @ 0x1400119D0
 * Callers:
 *     ProcessIrpCommand @ 0x14002B710 (ProcessIrpCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeIsLunValid(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 8LL * a2 + 1672);
  return v2 && !*(_BYTE *)(v2 + 66) && !*(_WORD *)(v2 + 48);
}
