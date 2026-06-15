/*
 * XREFs of _CVolumeSoftware::LoadVolumeDefaultsForEndpoint_::_1_::catch$7 @ 0x18016AB9D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeSoftware::LoadVolumeDefaultsForEndpoint_::_1_::catch_7(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 240);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 100) = *v3;
  return 0LL;
}
