/*
 * XREFs of _OpenSessionKey_::_1_::catch$56 @ 0x18004B9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OpenSessionKey_::_1_::catch_56(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 128);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 92) = *v3;
  return 0LL;
}
