/*
 * XREFs of ?IsInSnapUIArrangement@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18008F5CC
 * Callers:
 *     ?get_IsInSnapUIArrangement@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800DB7F0 (-get_IsInSnapUIArrangement@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@wi.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::IsInSnapUIArrangement(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 4) + 288LL) + 678LL) & 1;
}
