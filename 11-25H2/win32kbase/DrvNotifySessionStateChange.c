/*
 * XREFs of DrvNotifySessionStateChange @ 0x14006DAB0
 * Callers:
 *     InitializeGreCSRSS @ 0x14006D744 (InitializeGreCSRSS.c)
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     SysEntrySMgrNotifySessionChange @ 0x14006DB30 (SysEntrySMgrNotifySessionChange.c)
 *     ??9?$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z @ 0x14019DB10 (--9-$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z.c)
 */

__int64 __fastcall DrvNotifySessionStateChange(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int CurrentProcessSessionId; // eax

  v1 = a1;
  if ( (unsigned int)SGCRITTYPEgpresUser<_FAST_ERESOURCE *>::operator!=()
    && IS_USERCRIT_OWNED_AT_ALL()
    && (unsigned int)(v1 - 3) > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 19550;
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  WdLogSingleEntry2(4LL, v1, CurrentProcessSessionId);
  WdLogGlobalForLineNumber = 19553;
  return SysEntrySMgrNotifySessionChange((unsigned int)v1);
}
