/*
 * XREFs of ?HampSystemEdpIsManaged@@YAKXZ @ 0x18004A89C
 * Callers:
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x1800498A8 (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004A620 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     EdpGetEdpEnforcementLevel2 @ 0x18004A570 (EdpGetEdpEnforcementLevel2.c)
 */

__int64 HampSystemEdpIsManaged(void)
{
  unsigned int v0; // ebx
  NTSTATUS EdpEnforcementLevel2; // eax
  signed int v2; // eax
  bool v3; // sf
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v5 = 0;
  EdpEnforcementLevel2 = EdpGetEdpEnforcementLevel2(&v5);
  v2 = RtlNtStatusToDosError(EdpEnforcementLevel2);
  v3 = v2 < 0;
  if ( v2 > 0 )
    v3 = 1;
  if ( !v3 )
    LOBYTE(v0) = v5 != 0;
  return v0;
}
