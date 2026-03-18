/*
 * XREFs of ?PostInitialize@CHidInput@@EEAAJXZ @ 0x14018C0A0
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     isInputVirtualizationEnabled @ 0x1400CF034 (isInputVirtualizationEnabled.c)
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x14015B890 (ForceUpdatePointerDeviceSystemMetrics.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021EA98 (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::PostInitialize(CHidInput *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( isInputVirtualizationEnabled((__int64)this, a2) && IsInputThread(v4, v3) )
    CIVChannel::Initialize((CHidInput *)((char *)this + 1264));
  ForceUpdatePointerDeviceSystemMetrics(v4, v3);
  return 0LL;
}
