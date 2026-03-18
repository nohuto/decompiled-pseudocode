/*
 * XREFs of MiDetermineNewPfnHeatState @ 0x140497664
 * Callers:
 *     MiPurgePartitionStandby @ 0x14046886C (MiPurgePartitionStandby.c)
 *     MiInitializeNewPfns @ 0x1406E6548 (MiInitializeNewPfns.c)
 *     MiEnableNewPfns @ 0x1406E8478 (MiEnableNewPfns.c)
 *     MiMoveHibernatePageFreeToZero @ 0x1406F0000 (MiMoveHibernatePageFreeToZero.c)
 *     MxInsertFreePages @ 0x140CF7300 (MxInsertFreePages.c)
 *     MxInsertEnclaveBootPages @ 0x140CFD18C (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDetermineNewPfnHeatState(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( !a1
    && ((stru_140E36558.WaitRegister.Flags & 2) != 0
     && (a2 <= 1 || (stru_140E36558.WaitRegister.Flags & 4) == 0)
     && (!a3 || (*(_DWORD *)(a3 + 14096) & 2) == 0)
     || (stru_140E36558.WaitRegister.Flags & 1) != 0 && (!a3 || (*(_DWORD *)(a3 + 14096) & 2) == 0)) )
  {
    return 1;
  }
  return v3;
}
