/*
 * XREFs of ?RmHamHostIsMemoryRequired@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003E730
 * Callers:
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800338CC (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 * Callees:
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall RmHamHostIsMemoryRequired(struct _RM_ACTIVITY_HOST *a1)
{
  char *v1; // rdi
  unsigned int v2; // ebx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)a1 + 56;
  v2 = 0;
  v4 = 0;
  HampHostAcquireLockSharedEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 56), 0);
  if ( (*((_QWORD *)v1 + 83) & 0x80000000000LL) != 0
    || (RmHamHostGetCurrentState((struct _RM_HAM_ACTIVITY_HOST *)v1, (union _RM_OPTIMIZATION_STATE *)&v4, 0LL),
        (v4 & 0x80u) == 0)
    && RmHamHostGetJobType((struct _RM_HAM_ACTIVITY_HOST *)v1) == 2 )
  {
    v2 = 1;
  }
  HampHostReleaseLockSharedEx((struct _RM_HAM_ACTIVITY_HOST *)v1);
  return v2;
}
