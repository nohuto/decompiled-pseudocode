/*
 * XREFs of SymCryptMarvin32Init @ 0x140558624
 * Callers:
 *     HvpGenerateLogEntryChecksums @ 0x140AA86B4 (HvpGenerateLogEntryChecksums.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptMarvin32Init(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 16) = *a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = a2;
}
