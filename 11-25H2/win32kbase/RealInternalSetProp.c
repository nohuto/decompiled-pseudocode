/*
 * XREFs of RealInternalSetProp @ 0x1400DE180
 * Callers:
 *     InternalSetProp @ 0x14019F4EC (InternalSetProp.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     CreateProp @ 0x1400DE2CC (CreateProp.c)
 */

__int64 __fastcall RealInternalSetProp(struct _KTHREAD **a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v6; // di
  __int64 v8; // rdx
  struct _KTHREAD *v9; // rax
  int v10; // ecx
  __int64 v11; // rbx
  __int64 Prop; // rax
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int16 v19; // ax

  v6 = a2;
  if ( !a2 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  LockRefactorStagingAssertOwned(a1, a2);
  LockRefactorStagingAssertOwned(a1, v8);
  v9 = a1[3];
  if ( v9 && v6 )
  {
    v10 = *((_DWORD *)v9 + 1);
    v11 = (__int64)v9 + 8;
    while ( v10 )
    {
      if ( *(_WORD *)(v11 + 8) == v6 )
      {
        v19 = *(_WORD *)(v11 + 10) & 1;
        if ( (a4 & 1) != 0 )
        {
          if ( v19 )
            goto LABEL_17;
        }
        else if ( !v19 )
        {
LABEL_17:
          if ( !v11 )
            break;
          goto LABEL_18;
        }
      }
      v11 += 16LL;
      --v10;
    }
  }
  Prop = CreateProp(a1);
  v11 = Prop;
  if ( !Prop )
    return 0LL;
  *(_WORD *)(Prop + 8) = v6;
  *(_WORD *)(Prop + 10) = a4;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v15 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v16 = v15 & CurrentProcessWin32Process;
  }
  if ( (*(_DWORD *)(v16 + 808) & 0x4000000) != 0 )
    *(_WORD *)(v11 + 10) |= 0x10u;
  v17 = PsGetCurrentProcessWin32Process(v15);
  if ( v17 )
    v17 &= -(__int64)(*(_QWORD *)v17 != 0LL);
  *(_DWORD *)(v11 + 12) = *(_DWORD *)(v17 + 868);
LABEL_18:
  *(_QWORD *)v11 = a3;
  return 1LL;
}
