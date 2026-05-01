/*
 * XREFs of ?StoreShellPreference@ROTATION_INFORMATION@CRotationManagerSync@@QEAAXW4ORIENTATION_PREFERENCE@@W4STORE_OPTION@12@@Z @ 0x1802EDBF0
 * Callers:
 *     ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18005B1C0 (-SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersive.c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18005B668 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1802ED9C0 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1802EDC30 (-UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall CRotationManagerSync::ROTATION_INFORMATION::StoreShellPreference(__int64 a1, ORIENTATION_PREFERENCE a2)
{
  bool v2; // zf
  BOOL result; // eax

  v2 = *(_BYTE *)(a1 + 9) == 0;
  *(_DWORD *)(a1 + 4) = a2;
  *(_BYTE *)(a1 + 8) = 0;
  if ( v2 )
  {
    result = SetDisplayAutoRotationPreferences(a2);
    *(_BYTE *)(a1 + 8) = 1;
  }
  return result;
}
