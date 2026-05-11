/*
 * XREFs of PinGetTerminalUnit @ 0x14003FCF4
 * Callers:
 *     PinGetDataFlow @ 0x14002E3B0 (PinGetDataFlow.c)
 *     PinGetCategoryForBridgePin @ 0x140030978 (PinGetCategoryForBridgePin.c)
 *     PinBuildDescriptors @ 0x14003F668 (PinBuildDescriptors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PinGetTerminalUnit(__int64 *a1, int a2)
{
  __int64 v2; // r8
  char v3; // al

  v2 = *a1;
  v3 = 0;
  while ( (__int64 *)v2 != a1 && !v3 )
  {
    if ( *(_DWORD *)(v2 + 20) <= 1u && *(_DWORD *)(v2 + 64) == a2 )
      v3 = 1;
    else
      v2 = *(_QWORD *)v2;
  }
  return v2 & -(__int64)(v3 != 0);
}
