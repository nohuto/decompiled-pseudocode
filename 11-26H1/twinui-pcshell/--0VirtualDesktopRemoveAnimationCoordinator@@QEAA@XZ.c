/*
 * XREFs of ??0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ @ 0x1804E1930
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRemoveAnimationCoordinator@@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804E1864 (--$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AE.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1804D704C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Mi.c)
 */

VirtualDesktopRemoveAnimationCoordinator *__fastcall VirtualDesktopRemoveAnimationCoordinator::VirtualDesktopRemoveAnimationCoordinator(
        VirtualDesktopRemoveAnimationCoordinator *this)
{
  VirtualDesktopRemoveAnimationCoordinator *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>((__int64)this);
  *(_QWORD *)this = &VirtualDesktopRemoveAnimationCoordinator::`vftable';
  memset_0((char *)this + 248, 0, 0x90uLL);
  *(_OWORD *)((char *)this + 392) = 0LL;
  *(_OWORD *)((char *)this + 408) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  memset_0((char *)this + 440, 0, 0xB0uLL);
  memset_0((char *)this + 624, 0, 0x78uLL);
  result = this;
  *((_QWORD *)this + 77) = 0LL;
  *((_DWORD *)this + 186) = 0;
  return result;
}
