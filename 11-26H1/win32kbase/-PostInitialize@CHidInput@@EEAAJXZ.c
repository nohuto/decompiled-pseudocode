/*
 * XREFs of ?PostInitialize@CHidInput@@EEAAJXZ @ 0x140219890
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     isInputVirtualizationEnabled @ 0x140117990 (isInputVirtualizationEnabled.c)
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x1401919F0 (ForceUpdatePointerDeviceSystemMetrics.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x140222284 (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::PostInitialize(CHidInput *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( isInputVirtualizationEnabled((int)this, a2, a3) && IsInputThread(v5, v4, v6) )
    CIVChannel::Initialize((CHidInput *)((char *)this + 1264));
  ForceUpdatePointerDeviceSystemMetrics(v5, v4, v6);
  return 0LL;
}
