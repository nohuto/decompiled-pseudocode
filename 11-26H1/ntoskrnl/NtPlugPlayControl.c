/*
 * XREFs of NtPlugPlayControl @ 0x1409A6850
 * Callers:
 *     DifNtPlugPlayControlWrapper @ 0x14067FC40 (DifNtPlugPlayControlWrapper.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409A6B58 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtPlugPlayControl(unsigned int a1, void *a2, int a3)
{
  __int64 v5; // r14
  char PreviousMode; // di
  __int64 *v7; // rbx
  void *v8; // rsi
  unsigned int v9; // ebx
  int v11; // eax
  void *Pool2; // rax
  int v13; // r12d

  v5 = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return 3221225569LL;
  if ( (unsigned int)v5 >= 0x18 )
    return 3221225711LL;
  v7 = &PlugPlayHandlerTable[3 * v5];
  if ( *(_DWORD *)v7 != (_DWORD)v5 )
    return 3221225701LL;
  if ( !v7 )
    return 3221225711LL;
  if ( !v7[1] )
    return 3221225474LL;
  if ( *((_DWORD *)v7 + 1) != a3 )
    return 3221225520LL;
  if ( PsIsCurrentThreadInServerSilo() && !*((_BYTE *)v7 + 16) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      Pool2 = (void *)ExAllocatePool2(0x101uLL);
      v8 = Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      v13 = PiControlCopyUserModeCallersBuffer(Pool2, PreviousMode, 1);
      if ( v13 < 0 )
      {
        ExFreePoolWithTag(v8, 0);
        return (unsigned int)v13;
      }
    }
    else
    {
      v8 = 0LL;
    }
  }
  else
  {
    v8 = a2;
  }
  v9 = guard_dispatch_icall_no_overrides((unsigned int)v5, (__int64)v8);
  if ( (v9 & 0xC0000000) != 0xC0000000 || v9 == -1073741789 )
  {
    if ( PreviousMode )
    {
      if ( a3 )
      {
        if ( a2 )
        {
          v11 = PiControlCopyUserModeCallersBuffer(a2, PreviousMode, 0);
          if ( v11 < 0 )
            v9 = v11;
        }
      }
    }
  }
  if ( v9 == -1073741738 )
    v9 = -1073741810;
  if ( PreviousMode )
  {
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  return v9;
}
