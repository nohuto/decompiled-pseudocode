/*
 * XREFs of MiGetPfnPidSafe @ 0x14040A730
 * Callers:
 *     MiIdentifyPageType @ 0x1402D3640 (MiIdentifyPageType.c)
 *     MiIdentifyAwePage @ 0x140409D94 (MiIdentifyAwePage.c)
 *     MiLogMdlRangeEvent @ 0x1406F34E8 (MiLogMdlRangeEvent.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 */

__int64 __fastcall MiGetPfnPidSafe(__int64 a1, unsigned int a2)
{
  char v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v2 = a2;
  v4 = (a2 >> 1) & 1;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    return 0LL;
  if ( (v2 & 1) != 0 )
    return *(unsigned int *)(MiGetLeafPfnBuddy(a1, v4) + 464);
  v5 = *(_QWORD *)a1 >> 1;
  LODWORD(v5) = v5 & 0x7FFFFFFF;
  v6 = v5 | ((unsigned __int64)(*(_DWORD *)(a1 + 36) & 0x3FF0000) << 15);
  if ( !v6 )
    return MEMORY[0x1D0];
  if ( v6 - 0x10000000000LL > 1 )
  {
    v6 = qword_140E37D10 + 16 * (v6 - 1);
    return *(unsigned int *)(v6 + 464);
  }
  if ( v6 != 0x10000000001LL || !PsInitialSystemProcess )
    return *(unsigned int *)(v6 + 464);
  return LODWORD(PsInitialSystemProcess[1].Header.WaitListHead.Flink);
}
