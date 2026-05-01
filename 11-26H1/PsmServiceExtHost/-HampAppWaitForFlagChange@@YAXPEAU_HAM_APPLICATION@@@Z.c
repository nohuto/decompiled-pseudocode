/*
 * XREFs of ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180067138
 * Callers:
 *     ?HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180024610 (-HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800256C0 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025F10 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023F34 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026554 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppWaitForFlagChange(struct _HAM_APPLICATION *a1)
{
  char *v1; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)a1 + 616;
  v3 = *((_DWORD *)a1 + 154);
  HampAppReleaseLockExclusive(a1);
  RtlWaitOnAddress(v1, &v3, 4LL);
  HampAppAcquireLockExclusive(a1);
}
