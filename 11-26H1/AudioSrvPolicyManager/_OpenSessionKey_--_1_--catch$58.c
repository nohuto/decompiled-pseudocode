/*
 * XREFs of _OpenSessionKey_::_1_::catch$58 @ 0x18004BA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OpenSessionKey_::_1_::catch_58(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 144);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 104) = *v3;
  return 0LL;
}
