/*
 * XREFs of ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18006E324
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000C624 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003CF44 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005CA70 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18006B3E4 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F27C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F30C (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampPkgPushUpdate(struct _HAM_PACKAGE *a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  HampPkgAcquireLockExclusive(a1);
  *((_DWORD *)a1 + 85) |= 0x20u;
  if ( (*((_BYTE *)a1 + 340) & 0x10) != 0 )
    goto LABEL_7;
  HampPkgReleaseLockExclusive(a1);
  if ( (int)TpAllocWork(&v3, HampPkgUpdateWorker, a1, 0LL) < 0 )
    goto LABEL_8;
  HampPkgAcquireLockExclusive(a1);
  v2 = *((_DWORD *)a1 + 85);
  if ( (v2 & 0x10) != 0 )
  {
LABEL_7:
    HampPkgReleaseLockExclusive(a1);
  }
  else
  {
    *((_DWORD *)a1 + 85) = v2 | 0x10;
    HampPkgReleaseLockExclusive(a1);
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    TpPostWork(v3);
  }
LABEL_8:
  if ( v3 )
    TpReleaseWork(v3);
}
