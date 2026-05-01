/*
 * XREFs of ?HampSystemCdplIsManaged@@YAKXZ @ 0x18004A8E8
 * Callers:
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x1800498A8 (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004A620 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x18004A918 (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 */

__int64 HampSystemCdplIsManaged(void)
{
  unsigned int v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( (int)CdplIsSupportedInl(&v2) >= 0 )
    LOBYTE(v0) = v2 != 0;
  return v0;
}
