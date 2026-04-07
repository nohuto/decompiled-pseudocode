/*
 * XREFs of ?GetMidpoint@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAA?AUtagPOINT@@UtagRECT@@UtagSIZE@@H@Z @ 0x1800E0720
 * Callers:
 *     ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E0B1C (-UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::GetMidpoint(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        struct tagRECT *a2,
        struct tagSIZE a3,
        __int64 a4,
        int a5)
{
  int v5; // ecx
  int v6; // r10d
  int v7; // r8d
  int v8; // eax

  v5 = *(_DWORD *)(*(_QWORD *)&a3 + 8LL) - *(_DWORD *)a3.cx;
  v6 = *(_DWORD *)(*(_QWORD *)&a3 + 12LL) - *(_DWORD *)(*(_QWORD *)&a3 + 4LL);
  v7 = 0;
  v8 = 0;
  if ( v5 >= 0 )
    v8 = v5;
  a2->left = a5 + (v8 - (int)a4) / 2;
  if ( v6 >= 0 )
    v7 = v6;
  a2->top = a5 + (v7 - HIDWORD(a4)) / 2;
  return (struct tagPOINT)a2;
}
