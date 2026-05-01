/*
 * XREFs of ?HandleDeactivation@CImmersiveWindowManager@@UEAAJW4IWM_ACTION_TYPE@@W4ZBID@@@Z @ 0x18018E940
 * Callers:
 *     <none>
 * Callees:
 *     ?_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z @ 0x18018E9B8 (-_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z.c)
 */

__int64 __fastcall CImmersiveWindowManager::HandleDeactivation(__int64 a1, int a2, unsigned int a3)
{
  int ActiveApp; // r9d
  int v5; // edx
  __int64 v7; // rcx

  ActiveApp = -2147024809;
  v5 = a2 - 3;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      ActiveApp = 0;
      if ( !*(_BYTE *)(a1 + 88)
        || (ActiveApp = CImmersiveWindowManager::_DeactivatePrevActiveApp(a1 - 160, a3), ActiveApp >= 0) )
      {
        if ( *(_BYTE *)(a1 + 88) )
          goto LABEL_11;
      }
    }
  }
  else
  {
    v7 = a1 - 160;
    if ( *(_BYTE *)(v7 + 248) )
    {
      ActiveApp = CImmersiveWindowManager::_DeactivatePrevActiveApp(v7, 0LL);
      if ( ActiveApp >= 0 )
LABEL_11:
        *(_BYTE *)(a1 + 88) = 0;
    }
  }
  return (unsigned int)ActiveApp;
}
