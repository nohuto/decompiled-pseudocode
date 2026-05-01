/*
 * XREFs of ?SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z @ 0x1800C2530
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800C25D8 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetActiveProcess(CPrivilegedDesktopOperations *this, unsigned int a2)
{
  __int64 v2; // rbx
  signed __int32 v4; // eax
  const char *v5; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  v9 = v2;
  if ( v2 )
  {
    do
      v4 = *(_DWORD *)(v2 + 36);
    while ( v4 != 0x7FFFFFFF && v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 36), v4 + 1, v4) );
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v2 + 48));
  EnableIAMAccess(*(_QWORD *)(v2 + 40), 1LL);
  if ( (unsigned int)SetActiveProcessForMonitor(a2, 0LL) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x91,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v5);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v9);
  return LastError;
}
