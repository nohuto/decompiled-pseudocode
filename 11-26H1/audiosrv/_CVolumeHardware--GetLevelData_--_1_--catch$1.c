/*
 * XREFs of _CVolumeHardware::GetLevelData_::_1_::catch$1 @ 0x18016AADB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeHardware::GetLevelData_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 112);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 344) = *v3;
  return 0LL;
}
