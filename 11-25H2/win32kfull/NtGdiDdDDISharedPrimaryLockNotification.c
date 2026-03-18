/*
 * XREFs of NtGdiDdDDISharedPrimaryLockNotification @ 0x140326A50
 * Callers:
 *     <none>
 * Callees:
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x140325818 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiDdDDISharedPrimaryLockNotification(const void *a1)
{
  struct _LUID v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]

  *(_OWORD *)&v3[0].LowPart = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( (unsigned int)DxDdIsTearDownLddmSpriteDisabled() )
    return 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v3, a1, 0x1CuLL);
  return DxLddmSharedPrimaryLockNotification(v3[0], v3[1].LowPart, (const struct _RECTL *)&v3[1].HighPart);
}
