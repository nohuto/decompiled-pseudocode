/*
 * XREFs of MiObtainFreePages @ 0x140533DBC
 * Callers:
 *     MiDecreaseAvailablePages @ 0x1402DAD50 (MiDecreaseAvailablePages.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     CcNotifyWriteBehindEx @ 0x1403E364C (CcNotifyWriteBehindEx.c)
 *     MiWakeModifiedPageWriter @ 0x1403E4038 (MiWakeModifiedPageWriter.c)
 */

char __fastcall MiObtainFreePages(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi

  v1 = *(_DWORD *)(a1 + 4);
  if ( (v1 & 0x10) == 0 )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 21256);
    if ( !(_BYTE)v1 )
    {
      v3 = *(_QWORD *)(a1 + 256);
      if ( PsReferencePartitionSafe(v3) )
      {
        CcNotifyWriteBehindEx(1u, v3);
        PsDereferencePartition(v3);
      }
      v4 = *(_QWORD *)(a1 + 23456);
      if ( *(_QWORD *)(a1 + 23248) - v4 >= 0x10 )
        KeSetEvent((PRKEVENT)(a1 + 920), 0, 0);
      if ( v4 >= 0x10 )
        MiWakeModifiedPageWriter(a1, -1LL);
      LOBYTE(v1) = *(_BYTE *)(a1 + 21388);
      if ( (_BYTE)v1 )
        LOBYTE(v1) = KeSetEvent((PRKEVENT)(a1 + 21360), 0, 0);
    }
  }
  return v1;
}
