/*
 * XREFs of SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x180269630
 * Callers:
 *     ?SendTelemetryAsync@SnapInteraction@@YA?AUfire_and_forget@winrt@@U?$com_ptr@UIApplicationView@@@3@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1800E1EF4 (-SendTelemetryAsync@SnapInteraction@@YA-AUfire_and_forget@winrt@@U-$com_ptr@UIApplicationView@@@.c)
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x18008A350 (-SendTelemetry@SnapInteraction@@YAXAEBU-$com_ptr@UIApplicationView@@@winrt@@AEBV-$duration@_JU-$.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SnapInteraction::SendTelemetryAsync__ResumeCoro_1(__int64 a1, __int64 a2, void *a3)
{
  _WORD *v3; // rdi
  __int64 v4; // rbx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v3 = (_WORD *)a1;
    v4 = a1 + 8;
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
      case 5:
        goto LABEL_4;
      case 2:
        *(_WORD *)v4 = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(a1, (void (*)(void *, void *))a1, a3);
        break;
      case 4:
        try
        {
          SnapInteraction::SendTelemetry(
            (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))(a1 + 24),
            (__int64 *)(a1 + 32));
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x26,
            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
            v5);
          v3 = (_WORD *)a1;
          v4 = a1 + 8;
        }
LABEL_4:
        winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((_QWORD *)(v4 + 16));
        if ( v3[5] )
          operator delete(v3, (const struct std::nothrow_t *)0x30);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
