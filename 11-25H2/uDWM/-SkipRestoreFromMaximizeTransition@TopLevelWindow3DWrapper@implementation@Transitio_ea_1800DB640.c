/*
 * XREFs of ?SkipRestoreFromMaximizeTransition@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEB_N@Z @ 0x1800DB640
 * Callers:
 *     ?put_SkipRestoreFromMaximizeTransition@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAH_N@Z @ 0x1800DB890 (-put_SkipRestoreFromMaximizeTransition@-$produce@UTopLevelWindow3DWrapper@implementation@Transit.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::SkipRestoreFromMaximizeTransition(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        const bool *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(*((_QWORD *)this + 4) + 288LL);
  if ( v2 )
    *(_BYTE *)(v2 + 678) ^= (*(_BYTE *)(v2 + 678) ^ (8 * *a2)) & 8;
}
