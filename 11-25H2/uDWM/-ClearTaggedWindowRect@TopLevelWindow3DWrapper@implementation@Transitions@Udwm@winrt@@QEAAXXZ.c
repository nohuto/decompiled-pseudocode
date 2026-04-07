/*
 * XREFs of ?ClearTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18008662C
 * Callers:
 *     ?ClearTaggedWindowRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHXZ @ 0x180086600 (-ClearTaggedWindowRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::ClearTaggedWindowRect(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)this + 4) + 288LL);
  if ( v1 )
    *(_BYTE *)(v1 + 678) &= ~0x20u;
}
