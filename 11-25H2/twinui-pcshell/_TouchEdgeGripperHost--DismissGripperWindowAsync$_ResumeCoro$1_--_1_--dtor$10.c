/*
 * XREFs of _TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$10 @ 0x1806CF448
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall TouchEdgeGripperHost::DismissGripperWindowAsync__ResumeCoro_1_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 256) + 236LL;
  *(_DWORD *)(a2 + 88) = **(_DWORD **)(a2 + 80);
  result = *(_DWORD *)(a2 + 88) & 2;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 256) + 236LL;
    *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 256) + 236LL;
    *(_DWORD *)(a2 + 88) = **(_DWORD **)(a2 + 104);
    *(_DWORD *)(a2 + 112) = *(_DWORD *)(a2 + 88) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 96) = *(_DWORD *)(a2 + 112);
    *(_QWORD *)(a2 + 120) = *(_QWORD *)(a2 + 256) + 16LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 120));
  }
  return result;
}
