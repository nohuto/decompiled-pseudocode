/*
 * XREFs of _TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806CF215
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 256) + 268LL;
  *(_DWORD *)(a2 + 104) = **(_DWORD **)(a2 + 96);
  result = *(_DWORD *)(a2 + 104) & 2;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 256) + 268LL;
    *(_QWORD *)(a2 + 120) = *(_QWORD *)(a2 + 256) + 268LL;
    *(_DWORD *)(a2 + 104) = **(_DWORD **)(a2 + 120);
    *(_DWORD *)(a2 + 128) = *(_DWORD *)(a2 + 104) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 112) = *(_DWORD *)(a2 + 128);
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 256) + 16LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 136));
  }
  return result;
}
