/*
 * XREFs of ??$?4AEAU_HIDP_VALUE_CAPS@@$0A@@?$optional@U_HIDP_VALUE_CAPS@@@std@@QEAAAEAV01@AEAU_HIDP_VALUE_CAPS@@@Z @ 0x18019D40C
 * Callers:
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::optional<_HIDP_VALUE_CAPS>::operator=<_HIDP_VALUE_CAPS &,0>(__int64 a1, __int64 a2)
{
  bool v2; // zf

  v2 = *(_BYTE *)(a1 + 72) == 0;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  if ( v2 )
    *(_BYTE *)(a1 + 72) = 1;
  return a1;
}
