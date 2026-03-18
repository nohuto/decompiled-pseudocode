/*
 * XREFs of ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670
 * Callers:
 *     DestroyThreadsObjects @ 0x140038840 (DestroyThreadsObjects.c)
 *     HandleInputDestDestruction @ 0x140039868 (HandleInputDestDestruction.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005E70C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1400AB1C4 (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015ED90 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1401741B0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     PostEvent @ 0x140216918 (PostEvent.c)
 *     PostThreadEvent @ 0x140216A38 (PostThreadEvent.c)
 * Callees:
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

AtomicExecutionCheck *__fastcall AtomicExecutionCheck::AtomicExecutionCheck(AtomicExecutionCheck *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_BYTE *)this = 0;
  AtomicExecutionCheck::Arm(this);
  return this;
}
