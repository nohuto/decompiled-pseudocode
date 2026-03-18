/*
 * XREFs of ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140039698
 * Callers:
 *     DestroyThreadsObjects @ 0x140038840 (DestroyThreadsObjects.c)
 *     HandleInputDestDestruction @ 0x140039868 (HandleInputDestDestruction.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005E70C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1400AB1C4 (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015ED90 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     PostEvent @ 0x140216918 (PostEvent.c)
 *     PostThreadEvent @ 0x140216A38 (PostThreadEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall AtomicExecutionCheck::Disarm(AtomicExecutionCheck *this)
{
  if ( *(_BYTE *)this )
  {
    --*(_DWORD *)(*((_QWORD *)this + 1) + 28LL);
    *((_QWORD *)this + 1) = 0LL;
    *(_BYTE *)this = 0;
  }
}
