/*
 * XREFs of ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021AFF0
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140217458 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground @ 0x14021B8E0 (IVForegroundSync--_anonymous_namespace_--ivBroadcastSetNullForeground.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x14021C174 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x14021DC10 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021E3BC (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ivrIVBroadcast(const struct CIVSerializer *a1, __int64 a2, const struct CONTAINER_ID *a3)
{
  unsigned int v4; // esi
  __int64 (__fastcall *v6)(_QWORD, _QWORD, struct _KTHREAD *, _QWORD, const struct CONTAINER_ID *); // rax

  v4 = a2;
  v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KTHREAD *, _QWORD, const struct CONTAINER_ID *))(W32GetUserSessionState(a1, a2) + 19584);
  if ( v6 )
    return v6(*((_QWORD *)a1 + 3), *((unsigned int *)a1 + 8), KeGetCurrentThread(), v4, a3);
  else
    return 3221225659LL;
}
