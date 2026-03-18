/*
 * XREFs of DrvNotifySessionStateChange @ 0x1401804C0
 * Callers:
 *     InitializeGreCSRSS @ 0x140180418 (InitializeGreCSRSS.c)
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     SysEntrySMgrNotifySessionChange @ 0x140180540 (SysEntrySMgrNotifySessionChange.c)
 *     ??9?$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z @ 0x140180588 (--9-$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z.c)
 */

__int64 __fastcall DrvNotifySessionStateChange(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int CurrentProcessSessionId; // eax

  v1 = a1;
  if ( (unsigned int)SGCRITTYPEgpresUser<_FAST_ERESOURCE *>::operator!=()
    && (unsigned int)GET_USERCRIT_DISPOSITION(v3, v2)
    && (unsigned int)(v1 - 3) > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 19384;
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  WdLogSingleEntry2(4LL, v1, CurrentProcessSessionId);
  WdLogGlobalForLineNumber = 19387;
  return SysEntrySMgrNotifySessionChange((unsigned int)v1);
}
