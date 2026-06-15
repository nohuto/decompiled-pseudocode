/*
 * XREFs of _CConstraintModel::CopyResourceLimits_::_1_::catch$0 @ 0x18016C4E9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConstraintModel::CopyResourceLimits_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 640) = *v3;
  return 0LL;
}
