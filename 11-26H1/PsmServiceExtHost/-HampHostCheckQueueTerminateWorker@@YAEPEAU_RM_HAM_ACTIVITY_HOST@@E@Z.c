/*
 * XREFs of ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18000C220
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 * Callees:
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB40 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023628 (-RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064250 (-HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800648F0 (-HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

unsigned __int8 __fastcall HampHostCheckQueueTerminateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  char v4; // bl
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // rax
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  if ( (unsigned int)HampHostShouldTerminate(a1) )
  {
    v6 = *((_QWORD *)a1 + 83);
    if ( (v6 & 0x800000000LL) == 0 )
    {
      v10 = 0;
      v11 = 0;
      if ( (v6 & 0x10000000000LL) != 0
        || (RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v10, (union _RM_OPTIMIZATION_STATE *)&v11),
            (v10 & 0x80u) != 0)
        && (v11 & 0x80u) == 0
        || (v10 & 0x100) != 0 && (v11 & 0x100) == 0
        || (v8 = *((_QWORD *)a1 + 83), (v8 & 0x800000000LL) != 0) )
      {
        v7 = 0;
      }
      else if ( (v8 & 0x40000000000LL) == 0 || (v7 = 0, (v8 & 0x30000) == 0) )
      {
        v7 = 1;
      }
      *((_QWORD *)a1 + 83) |= 0x800000000uLL;
      RmActivityHostReferenceFromHam(a1);
      TpPostWork(*((_QWORD *)a1 + 79));
      HampHostCheckUpdateSuspendWaitState(a1, v7);
    }
    if ( a2 && (*((_DWORD *)a1 + 166) & 0x30000LL) != 0 )
    {
      do
      {
        v9[0] = *((_QWORD *)a1 + 101);
        HamReleaseEnforcementLocks(a1);
        RtlWaitOnAddress((char *)a1 + 808, v9, 8LL);
        HamAcquireEnforcementLocks(a1);
      }
      while ( (*((_DWORD *)a1 + 166) & 0x30000LL) != 0 );
    }
    return 1;
  }
  return v4;
}
