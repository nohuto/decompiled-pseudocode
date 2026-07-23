/*
 * XREFs of KiSelectTimerTableForTimer @ 0x140442FB0
 * Callers:
 *     KiInsertTimerTable @ 0x1403B6998 (KiInsertTimerTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectTimerTableForTimer(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v6; // r10
  char v7; // cl
  unsigned __int64 v8; // rax
  int v9; // eax

  v3 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a2 && (v9 = *(unsigned __int16 *)(a2 + 2), (unsigned __int16)v9 >= 0x800u) )
    {
      v3 = v9 - 2048;
    }
    else
    {
      v3 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL);
        if ( v6 )
        {
          v7 = *(_BYTE *)(a1 + 209);
          _BitScanForward64(&v8, __ROR8__(v6, v7));
          v3 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16
                                                                                         * *(unsigned __int8 *)(a1 + 208)].Flink
               + (((_BYTE)v8 + v7) & 0x3F));
        }
      }
    }
  }
  *(_WORD *)(a3 + 56) = v3;
  return KiProcessorBlock[v3] + 16640;
}
