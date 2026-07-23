/*
 * XREFs of CcNotifyWriteBehindAllVolumesHelper @ 0x1403E37F0
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindVolume @ 0x1403E3A34 (CcNotifyWriteBehindVolume.c)
 */

char __fastcall CcNotifyWriteBehindAllVolumesHelper(__int64 a1, __int64 a2, unsigned int *a3)
{
  if ( !CcInitializationComplete || !*(_BYTE *)(a1 + 1364) || !*(_BYTE *)(a2 + 1236) )
    return 0;
  CcNotifyWriteBehindVolume(a2, *a3);
  return 1;
}
