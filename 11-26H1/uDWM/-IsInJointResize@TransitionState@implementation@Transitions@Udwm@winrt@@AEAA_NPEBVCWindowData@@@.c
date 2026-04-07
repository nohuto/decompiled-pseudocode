/*
 * XREFs of ?IsInJointResize@TransitionState@implementation@Transitions@Udwm@winrt@@AEAA_NPEBVCWindowData@@@Z @ 0x1800DB744
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800DBF48 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Udwm::Transitions::implementation::TransitionState::IsInJointResize(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        const struct CWindowData *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 186) & 0xFFF;
  return v2 == 95 || (unsigned int)(v2 - 96) <= 6;
}
