/*
 * XREFs of CmpAssignSecurityToKcb @ 0x140A5B410
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140472390 (CmpFindSecurityCellCacheIndex.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmLockHiveSecurityShared @ 0x140C58B30 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140C58BA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpAssignSecurityToKcb(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        char a4,
        char a5)
{
  ULONG_PTR v5; // r14
  unsigned __int8 v9; // bp
  __int64 v10; // rbx
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF

  v5 = (unsigned int)BugCheckParameter4;
  v12 = 0;
  v9 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( !a4 )
      CmLockHiveSecurityShared(*(_QWORD *)(BugCheckParameter3 + 32));
    if ( CmpFindSecurityCellCacheIndex(v10, v5, &v12) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v10 + 1896) + 16LL * v12 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v5);
      v9 = 0;
    }
    if ( !a4 )
      CmUnlockHiveSecurity(v10);
  }
  return v9;
}
