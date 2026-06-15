/*
 * XREFs of ?GetdBFromUserPreference@CDuckingManager@@CAMW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@@Z @ 0x180028454
 * Callers:
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x180040520 (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CDuckingManager::GetdBFromUserPreference(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return FLOAT_N96_0;
  v1 = a1 - 1;
  if ( !v1 )
    return FLOAT_N18_0;
  if ( v1 == 1 )
    return FLOAT_N6_0;
  return 0.0;
}
