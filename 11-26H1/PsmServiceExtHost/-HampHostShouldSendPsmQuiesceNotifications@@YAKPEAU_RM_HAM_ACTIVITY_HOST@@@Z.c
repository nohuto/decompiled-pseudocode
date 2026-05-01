/*
 * XREFs of ?HampHostShouldSendPsmQuiesceNotifications@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019188
 * Callers:
 *     ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800190B4 (-HampHostComputeWaitType@@YA-AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostGetTerminateCategory@@YA?AW4_HAM_TERMINATE_REASON@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006EBBC (-HampHostGetTerminateCategory@@YA-AW4_HAM_TERMINATE_REASON@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostShouldSendPsmQuiesceNotifications(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v5; // ecx

  v3 = *((_BYTE *)a1 + 592);
  v5 = 1;
  if ( v3 )
    return v3 == 1
        && *(char *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                            + 120)
                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                   - 2132) < 0
        && (unsigned int)HampHostGetTerminateCategory(a1, a1, a3) == 4352;
  return v5;
}
