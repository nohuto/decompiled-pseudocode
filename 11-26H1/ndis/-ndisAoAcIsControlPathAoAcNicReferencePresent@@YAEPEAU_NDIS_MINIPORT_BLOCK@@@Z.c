/*
 * XREFs of ?ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009122C
 * Callers:
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006280 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisAoAcIsControlPathAoAcNicReferencePresent(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KSPIN_LOCK *AoAc; // rdi
  char v2; // bl
  KIRQL v3; // dl
  unsigned int i; // ecx

  AoAc = (KSPIN_LOCK *)a1->AoAc;
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(AoAc);
  for ( i = 0; i < 0x11; ++i )
  {
    if ( i != 4 && i - 15 > 1 && *((int *)AoAc + i + 117) > 0 )
    {
      v2 = 1;
      break;
    }
  }
  KeReleaseSpinLock(AoAc, v3);
  return v2;
}
