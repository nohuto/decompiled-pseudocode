/*
 * XREFs of ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1801989B0
 * Callers:
 *     _lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator() @ 0x18045ED54 (_lambda_ff3af0abcf4100822182f80ac5bd56ae_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180198A5C (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::InitializeViewInfosIfNeeded(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  struct KBViewInfo **Ptr; // rbp
  struct KBViewInfo **i; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 28;
  AcquireSRWLockExclusive(this + 28);
  Ptr = (struct KBViewInfo **)this[30].Ptr;
  for ( i = (struct KBViewInfo **)this[29].Ptr; i != Ptr; i += 2 )
  {
    v5 = TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded((TouchKeyboardExperienceManager *)&this[-25], *i);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1463,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
