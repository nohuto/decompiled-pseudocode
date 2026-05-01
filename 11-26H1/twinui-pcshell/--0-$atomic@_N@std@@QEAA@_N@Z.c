/*
 * XREFs of ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x180136944
 * Callers:
 *     ??0TouchEdgeGripperHost@@QEAA@AEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@AEBV?$function@$$A6AXXZ@2@@Z @ 0x180136190 (--0TouchEdgeGripperHost@@QEAA@AEBV-$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@.c)
 *     ??0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180136608 (--0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x1801366D8 (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 *     ??0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ @ 0x180136D2C (--0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ.c)
 *     ??0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801879D4 (--0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802B87BC (--0MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x180411AA8 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 * Callees:
 *     ??0?$_Atomic_storage@_N$00@std@@QEAA@AEB_N@Z @ 0x1803285C4 (--0-$_Atomic_storage@_N$00@std@@QEAA@AEB_N@Z.c)
 */

__int64 __fastcall std::atomic<bool>::atomic<bool>(__int64 a1, char a2)
{
  __int64 v2; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  std::_Atomic_storage<bool,1>::_Atomic_storage<bool,1>(a1, &v4);
  return v2;
}
