/*
 * XREFs of EtwpGetPmcOwnership @ 0x1406C7694
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGetPmcOwnership(_DWORD *a1, unsigned int *a2)
{
  unsigned int v5; // edi
  _DWORD *Pool2; // rax
  _DWORD *v7; // rsi
  int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // r10d
  __int64 v11; // r9
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx

  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, 1) )
    return 3221225569LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225506LL;
  if ( *a2 < 8 )
    return 3221225507LL;
  if ( *a1 > (unsigned int)KeNumberProcessors_0 )
    return 3221225485LL;
  v5 = 16 * EtwpMaxPmcCounter + 8;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *a1;
    v8 = guard_dispatch_icall_no_overrides(53LL, v5);
    if ( v8 < 0 )
    {
LABEL_29:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v8;
    }
    v9 = v7[1];
    if ( v9 <= EtwpMaxPmcCounter )
    {
      v8 = 0;
      a1[1] = v9;
    }
    else
    {
      a1[1] = EtwpMaxPmcCounter;
      v8 = -2147483643;
      v9 = EtwpMaxPmcCounter;
    }
    v10 = 12 * v9 + 8;
    if ( *a2 < v10 )
    {
      v8 = -1073741789;
      goto LABEL_29;
    }
    v11 = 0LL;
    if ( !v9 )
    {
LABEL_28:
      *a2 = v10;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v12 = v7[4 * (unsigned int)v11 + 2];
      if ( !v12 )
      {
        a1[3 * v11 + 2] = 0;
        goto LABEL_27;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_25:
        a1[3 * v11 + 2] = 3;
        a1[3 * v11 + 4] = v7[4 * (unsigned int)v11 + 5];
        a1[3 * v11 + 3] = v7[4 * (unsigned int)v11 + 4];
        goto LABEL_27;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
        {
          a1[3 * v11 + 2] = 2;
          a1[3 * v11 + 4] = v7[4 * (unsigned int)v11 + 4];
          goto LABEL_27;
        }
        if ( v15 == 1 )
          goto LABEL_25;
      }
      a1[3 * v11 + 2] = 1;
LABEL_27:
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= a1[1] )
        goto LABEL_28;
    }
  }
  return (unsigned int)-1073741801;
}
