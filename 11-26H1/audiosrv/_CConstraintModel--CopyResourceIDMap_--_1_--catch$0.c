/*
 * XREFs of _CConstraintModel::CopyResourceIDMap_::_1_::catch$0 @ 0x18016C4A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConstraintModel::CopyResourceIDMap_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 32);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return 0LL;
}
