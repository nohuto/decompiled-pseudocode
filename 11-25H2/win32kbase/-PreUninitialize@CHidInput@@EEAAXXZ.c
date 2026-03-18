/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x14018C0E0
 * Callers:
 *     <none>
 * Callees:
 *     RIMRemoveInputOfType @ 0x14002D000 (RIMRemoveInputOfType.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     isInputVirtualizationEnabled @ 0x1400CF034 (isInputVirtualizationEnabled.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021EE08 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CHidInput::PreUninitialize(CHidInput *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( isInputVirtualizationEnabled((__int64)this, a2) && IsInputThread(v4, v3) )
    CIVChannel::Uninitialize((CHidInput *)((char *)this + 1264));
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    RIMRemoveInputOfType(*((_QWORD *)this + 1), 60);
}
