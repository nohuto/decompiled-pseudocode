/*
 * XREFs of ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C14
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x140095930 (GreSfmCloseCompositorRef.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     GreDwmStartup @ 0x1401D500C (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1401E887C (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x140267064 (GreDwmShutdown.c)
 * Callees:
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x140095900 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 */

GreAcquireUnownedDMCLockShared *__fastcall GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared(
        GreAcquireUnownedDMCLockShared *this,
        struct Gre::Base::SESSION_GLOBALS *a2)
{
  ULONG IsResourceAcquiredSharedLite; // eax

  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)(*(_QWORD *)a2 + 624LL));
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(this, a2, IsResourceAcquiredSharedLite == 0);
  return this;
}
