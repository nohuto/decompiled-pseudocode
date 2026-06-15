/*
 * XREFs of _CDuckingManager::NotifyFilteredClientsAutoUnduck_::_1_::catch$0 @ 0x18004E19D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoUnduck_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 144) = *v3;
  return 0LL;
}
