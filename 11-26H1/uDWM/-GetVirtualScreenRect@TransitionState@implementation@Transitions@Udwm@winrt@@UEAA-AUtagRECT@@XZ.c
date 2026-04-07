/*
 * XREFs of ?GetVirtualScreenRect@TransitionState@implementation@Transitions@Udwm@winrt@@UEAA?AUtagRECT@@XZ @ 0x1800DB500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall winrt::Udwm::Transitions::implementation::TransitionState::GetVirtualScreenRect(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct tagRECT *__return_ptr retstr)
{
  CDesktopManager *v2; // r8
  struct tagRECT *result; // rax
  LONG v4; // ecx
  LONG v5; // ecx

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  result = retstr;
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
  retstr->left = v4;
  retstr->right = *((_DWORD *)v2 + 97) + v4;
  v5 = *((_DWORD *)v2 + 96);
  retstr->top = v5;
  retstr->bottom = *((_DWORD *)v2 + 98) + v5;
  return result;
}
