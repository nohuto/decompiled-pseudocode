/*
 * XREFs of ?HampPkgLeaveInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18002A138
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029E80 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F27C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F30C (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampPkgLeaveInsertion(struct _HAM_PACKAGE *a1)
{
  HampPkgAcquireLockExclusive(a1);
  *((_DWORD *)a1 + 84) = 0;
  HampPkgReleaseLockExclusive(a1);
  RtlWakeAddressSingle((char *)a1 + 336);
}
