/*
 * XREFs of ?SkipRestoreFromMaximizeTransition@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEB_N@Z @ 0x1800D8520
 * Callers:
 *     ?put_SkipRestoreFromMaximizeTransition@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAH_N@Z @ 0x1800D87E0 (-put_SkipRestoreFromMaximizeTransition@-$produce@UTopLevelWindow3DWrapper@implementation@Transit.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::SkipRestoreFromMaximizeTransition(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        const bool *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(*((_QWORD *)this + 4) + 232LL);
  if ( v2 )
    *(_BYTE *)(v2 + 742) ^= (*(_BYTE *)(v2 + 742) ^ (4 * *a2)) & 4;
}
