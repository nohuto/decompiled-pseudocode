/*
 * XREFs of MmIsFileMapped @ 0x1409BCA98
 * Callers:
 *     IopQueryProcessIdsUsingFile @ 0x1409BBA80 (IopQueryProcessIdsUsingFile.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiLockVadShared @ 0x14027DE40 (MiLockVadShared.c)
 *     MiUnlockVadShared @ 0x14027E1C0 (MiUnlockVadShared.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MmIsFileMapped(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r13
  unsigned int v5; // r15d
  struct _KTHREAD *CurrentThread; // rbp
  int v8; // r12d
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD **v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *i; // rcx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // r14
  ULONG_PTR v18; // rdx
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a2 + 40);
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)a1 )
  {
    v8 = 0;
  }
  else
  {
    KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
    v8 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, a3, a4);
  v9 = *(_QWORD **)(a1 + 1368);
  v10 = 0LL;
  while ( v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
  }
  while ( v10 )
  {
    v11 = (_QWORD **)v10[1];
    v12 = (__int64)v10;
    v13 = v10;
    if ( v11 )
    {
      v10 = (_QWORD *)v10[1];
      for ( i = *v11; i; i = (_QWORD *)*i )
        v10 = i;
    }
    else
    {
      while ( 1 )
      {
        v10 = (_QWORD *)(v10[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 || (_QWORD *)*v10 == v13 )
          break;
        v13 = v10;
      }
    }
    if ( (MiReadVadFlags(v12) & 0x80000) == 0 )
    {
      MiLockVadShared((__int64)CurrentThread, v12, v15, v16);
      if ( !(unsigned int)MiVadDeleted(v12) )
      {
        v17 = **(_QWORD **)(v12 + 80);
        if ( *(_QWORD *)(v17 + 64) )
        {
          v18 = MiReferenceControlAreaFile(**(_QWORD **)(v12 + 80));
          if ( *(_QWORD *)(v18 + 40) == v4 )
            v5 = 1;
          MiDereferenceControlAreaFile(v17, v18);
        }
      }
      MiUnlockVadShared((__int64)CurrentThread, v12);
      if ( v5 )
        break;
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v8 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  return v5;
}
