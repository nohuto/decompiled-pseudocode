/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1402198D0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     RIMRemoveInputOfType @ 0x140092800 (RIMRemoveInputOfType.c)
 *     isInputVirtualizationEnabled @ 0x140117990 (isInputVirtualizationEnabled.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1402225A0 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CHidInput::PreUninitialize(char **this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r8d

  if ( isInputVirtualizationEnabled((int)this, a2, a3) && IsInputThread(v5, v4, v6) )
    CIVChannel::Uninitialize((CIVChannel *)(this + 158));
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    RIMRemoveInputOfType(this[1], 60, v7);
}
