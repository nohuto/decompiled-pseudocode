/*
 * XREFs of HvIsRangeDirty @ 0x14077B624
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     RtlAreBitsClear @ 0x140478820 (RtlAreBitsClear.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 */

bool __fastcall HvIsRangeDirty(__int64 a1, int a2, ULONG a3)
{
  BOOLEAN v6; // bl

  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 || a2 < 0 )
    return 1;
  HvLockHiveWriter();
  v6 = RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), (unsigned int)a2 >> 9, a3);
  HvUnlockHiveWriter(a1);
  return v6 == 0;
}
