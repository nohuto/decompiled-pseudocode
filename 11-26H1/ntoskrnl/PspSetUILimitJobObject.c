/*
 * XREFs of PspSetUILimitJobObject @ 0x1407FF958
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PsSystemSetUILimitJobObject @ 0x1407FD470 (PsSystemSetUILimitJobObject.c)
 * Callees:
 *     PspLockJobChain @ 0x140AAC814 (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x140AACA94 (PspUnlockJobChain.c)
 *     PspBindProcessSessionToJob @ 0x140AEFF08 (PspBindProcessSessionToJob.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140B811F8 (PspDoesJobHierarchyPermitUILimits.c)
 */

__int64 __fastcall PspSetUILimitJobObject(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int v8; // edi
  int v9; // r14d

  if ( (a3 & 0xFFFFFC00) != 0 )
    return (unsigned int)-1073741811;
  PspLockJobChain(a1, a2, 0LL);
  v9 = a4 & 1;
  v8 = 0;
  if ( !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a1) )
  {
    v8 = -1073741637;
LABEL_5:
    PspUnlockJobChain(a1, a2);
    return v8;
  }
  if ( *(_DWORD *)(a1 + 576) == -2 )
  {
    v8 = -1073741790;
    goto LABEL_5;
  }
  PspBindProcessSessionToJob(a1);
  if ( *(_DWORD *)(a1 + 576) > 0xFFFFFFFD
    || *(_DWORD *)(a1 + 544) == a3
    || !(unsigned __int8)IsWin32kJobNotifyCallOutPresent() )
  {
    goto LABEL_5;
  }
  *(_DWORD *)(a1 + 544) = a3;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x10u);
  if ( v9 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1556), 0x10u);
  PspUnlockJobChain(a1, a2);
  Win32kJobUpdateUIRestrictionsNotify(a1);
  return v8;
}
