/*
 * XREFs of ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140060E30
 * Callers:
 *     ndisCsResiliencyCallback @ 0x140060D00 (ndisCsResiliencyCallback.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140045EC0 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140048D80 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

void __fastcall ndisCsResiliencyChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int8 v1; // di
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v3; // al
  KIRQL v4; // si
  int v5; // ecx
  __int64 v6; // rcx

  v1 = ndisCsResiliency;
  AoAc = a1->AoAc;
  if ( (a1->Flags & 0x80u) == 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->AoAc);
    *((_BYTE *)AoAc + 1081) = v1;
    v4 = v3;
    if ( v1 )
    {
      v5 = *((_DWORD *)AoAc + 94);
      if ( !v5 || ((v5 - 1) & 0xFFFFFFFD) == 0 )
      {
        *((_QWORD *)AoAc + 105) = MEMORY[0xFFFFF78000000008];
        ndisAoAcStartRefTimeStats(AoAc);
      }
    }
    else
    {
      ndisAoAcPauseRefTimeStats(AoAc);
      v6 = *((_QWORD *)AoAc + 105);
      if ( v6 )
      {
        *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - v6;
        *((_QWORD *)AoAc + 105) = 0LL;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
  }
}
