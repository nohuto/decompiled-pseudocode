/*
 * XREFs of KiEnclsStatus @ 0x1403432BC
 * Callers:
 *     KeRemoveEnclavePage @ 0x140343280 (KeRemoveEnclavePage.c)
 *     KeOutPageEnclavePage @ 0x140510E6C (KeOutPageEnclavePage.c)
 *     KeBlockEnclavePage @ 0x1405F1068 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405F10B0 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405F1170 (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x1405F12AC (KeTrackEnclaveTbFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsStatus(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return 0LL;
  v2 = a1 - 7;
  if ( !v2 )
    return 3221225539LL;
  v3 = v2 - 5;
  if ( !v3 )
    return 304LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3221225539LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 3221225539LL;
  v6 = v5 - 3;
  if ( !v6 )
    return 3221225539LL;
  if ( v6 == 3 )
    return 3221225496LL;
  return 3221225473LL;
}
