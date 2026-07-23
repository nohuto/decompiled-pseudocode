/*
 * XREFs of MiDetermineNewPfnHeatState @ 0x1404911B4
 * Callers:
 *     MiPurgePartitionStandby @ 0x140461F1C (MiPurgePartitionStandby.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MiEnableNewPfns @ 0x1406ED114 (MiEnableNewPfns.c)
 *     MiMoveHibernatePageFreeToZero @ 0x1406F4C70 (MiMoveHibernatePageFreeToZero.c)
 *     MxInsertFreePages @ 0x140CFD680 (MxInsertFreePages.c)
 *     MxInsertEnclaveBootPages @ 0x140D0350C (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDetermineNewPfnHeatState(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( !a1
    && ((stru_140E366D8.WaitRegister.Flags & 2) != 0
     && (a2 <= 1 || (stru_140E366D8.WaitRegister.Flags & 4) == 0)
     && (!a3 || (*(_DWORD *)(a3 + 14096) & 2) == 0)
     || (stru_140E366D8.WaitRegister.Flags & 1) != 0 && (!a3 || (*(_DWORD *)(a3 + 14096) & 2) == 0)) )
  {
    return 1;
  }
  return v3;
}
