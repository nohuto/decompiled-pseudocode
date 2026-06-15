/*
 * XREFs of _CVolumeSoftware::LoadDefaultVolumeForEndpoint_::_1_::catch$8 @ 0x180166AF6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeSoftware::LoadDefaultVolumeForEndpoint_::_1_::catch_8(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 88);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 320) = *v3;
  return 0LL;
}
