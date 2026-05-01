/*
 * XREFs of ?HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006E40C
 * Callers:
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018D80 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800190B4 (-HampHostComputeWaitType@@YA-AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostGetTerminateCategory@@YA?AW4_HAM_TERMINATE_REASON@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006EBBC (-HampHostGetTerminateCategory@@YA-AW4_HAM_TERMINATE_REASON@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

_BOOL8 __fastcall HampHostShouldSendDesktopWindowClose(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx

  v3 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                             + 120)
                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  return (*(_BYTE *)(v3 - 2132) & 0x40) != 0
      && *((_BYTE *)a1 + 592) == 1
      && HampHostGetTerminateCategory(a1, v3, a3) == 1024;
}
