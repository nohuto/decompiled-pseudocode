/*
 * XREFs of RealInternalSetProp @ 0x1400DEB70
 * Callers:
 *     InternalSetProp @ 0x1400DEB14 (InternalSetProp.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     _FindProp @ 0x140048A20 (_FindProp.c)
 *     CreateProp @ 0x14004A490 (CreateProp.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401CF888 (Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RealInternalSetProp(struct _KTHREAD **a1, __int64 a2, __int64 a3, __int16 a4)
{
  int v6; // edi
  int v9; // edx
  __int64 Prop; // rbx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  tagPROCESSINFO *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax

  v6 = a2;
  if ( !a2 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  LockRefactorStagingAssertOwned(a1, a2, a3);
  Prop = FindProp((__int64)a1, v6, a4 & 1);
  if ( !Prop )
  {
    v12 = CreateProp((__int64)a1, v9, v11);
    Prop = v12;
    if ( !v12 )
      return 0LL;
    *(_WORD *)(v12 + 8) = v6;
    *(_WORD *)(v12 + 10) = a4;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    v15 = (tagPROCESSINFO *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v15 = (tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
    if ( (unsigned int)Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (*((_DWORD *)v15 + 202) & 0x4000000) != 0 || tagPROCESSINFO::HasUILimit(v15, 0x20u) )
        *(_WORD *)(Prop + 10) |= 0x10u;
    }
    else
    {
      v17 = PsGetCurrentProcessWin32Process(v16);
      v19 = v17;
      if ( v17 )
      {
        v18 = -(__int64)(*(_QWORD *)v17 != 0LL);
        v19 = v18 & v17;
      }
      if ( (*(_DWORD *)(v19 + 808) & 0x4000000) != 0 )
        *(_WORD *)(Prop + 10) |= 0x10u;
      v20 = PsGetCurrentProcessWin32Process(v18);
      if ( v20 )
        v20 &= -(__int64)(*(_QWORD *)v20 != 0LL);
      *(_DWORD *)(Prop + 12) = *(_DWORD *)(v20 + 868);
    }
  }
  *(_QWORD *)Prop = a3;
  return 1LL;
}
