/*
 * XREFs of ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1401BDB04
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x14021C628 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x140221390 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140221B10 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ivrIVBroadcast(const struct CIVSerializer *a1, unsigned int a2, const struct CONTAINER_ID *a3)
{
  __int64 (__fastcall *v6)(_QWORD, _QWORD, struct _KTHREAD *, _QWORD, const struct CONTAINER_ID *); // rax

  v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KTHREAD *, _QWORD, const struct CONTAINER_ID *))(W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3) + 19616);
  if ( v6 )
    return v6(*((_QWORD *)a1 + 3), *((unsigned int *)a1 + 8), KeGetCurrentThread(), a2, a3);
  else
    return 3221225659LL;
}
