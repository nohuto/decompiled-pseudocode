/*
 * XREFs of _TouchEdgeGripperHost::XamlHostThreadProc_::_1_::catch$27 @ 0x1806CF5E9
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800A589C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800D2B94 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall TouchEdgeGripperHost::XamlHostThreadProc_::_1_::catch_27(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rbx
  void *v6; // rdx

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0xC7,
    (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
    a4);
  v5 = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(v5 + 24) = 0;
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a2 + 88), (RTL_SRWLOCK *)(v5 + 232));
  wil::details::SetEvent(*(wil::details **)(v5 + 32), v6);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(v5 + 40),
    0LL);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 88));
  MicrosoftTelemetryAssertTriggeredNoArgs();
  return 0LL;
}
