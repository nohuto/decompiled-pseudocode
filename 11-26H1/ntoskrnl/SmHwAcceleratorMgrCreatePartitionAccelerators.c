/*
 * XREFs of SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x140821320
 * Callers:
 *     SmHwAcceleratorMgrPartitionRegister @ 0x1408214A8 (SmHwAcceleratorMgrPartitionRegister.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     SmHwAcceleratorPartitionMgrInsertAccelerator @ 0x140643AF0 (SmHwAcceleratorPartitionMgrInsertAccelerator.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14082179C (SmHwAcceleratorParitionCtxCreate.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x1408219D8 (SmHwAcceleratorPartitionCtxCleanup.c)
 */

__int64 __fastcall SmHwAcceleratorMgrCreatePartitionAccelerators(
        __int64 a1,
        __int64 a2,
        __int64 **a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 i; // rdi
  __int64 *v7; // r14
  __int64 *j; // rdx
  int v9; // esi
  int v10; // ebx
  PPRIVILEGE_SET *v11; // rcx
  PPRIVILEGE_SET v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v18; // [rsp+28h] [rbp-8h]
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp+40h] BYREF

  Privileges = 0LL;
  v18 = (__int64 **)&v17;
  v17 = (__int64)&v17;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= (unsigned __int16)KeNumberNodes )
    {
      while ( 1 )
      {
        v13 = v17;
        if ( (__int64 *)v17 == &v17 )
        {
          v10 = 0;
          goto LABEL_21;
        }
        if ( *(__int64 **)(v17 + 8) != &v17 )
          break;
        v14 = *(_QWORD *)v17;
        if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
          break;
        v17 = *(_QWORD *)v17;
        *(_QWORD *)(v14 + 8) = &v17;
        Privileges = (PPRIVILEGE_SET)v13;
        SmHwAcceleratorPartitionMgrInsertAccelerator(a2, v13, (__int64)a3, a4);
      }
LABEL_26:
      __fastfail(3u);
    }
    if ( *(_DWORD *)(a1 + 4 * i + 1048) )
      break;
LABEL_15:
    ;
  }
  v7 = 0LL;
  a3 = (__int64 **)(16LL * (unsigned int)i + a1 + 24);
  for ( j = *a3; j != (__int64 *)a3; j = (__int64 *)*j )
  {
    if ( !v7 || *((_DWORD *)j + 17) < *((_DWORD *)v7 + 17) )
      v7 = j;
  }
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= 2 )
      goto LABEL_15;
    v10 = SmHwAcceleratorParitionCtxCreate(&Privileges, v7, (unsigned int)v9);
    if ( v10 < 0 )
      break;
    v11 = (PPRIVILEGE_SET *)v18;
    v12 = Privileges;
    if ( *v18 != &v17 )
      goto LABEL_26;
    Privileges->Privilege[0].Luid = (LUID)v18;
    *(_QWORD *)&v12->PrivilegeCount = &v17;
    ++v9;
    *v11 = v12;
    v18 = (__int64 **)v12;
    Privileges = 0LL;
  }
  while ( 1 )
  {
    v13 = v17;
LABEL_21:
    if ( (__int64 *)v13 == &v17 )
      return (unsigned int)v10;
    if ( *(__int64 **)(v13 + 8) != &v17 )
      goto LABEL_26;
    v15 = *(_QWORD *)v13;
    if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 )
      goto LABEL_26;
    v17 = *(_QWORD *)v13;
    *(_QWORD *)(v15 + 8) = &v17;
    Privileges = (PPRIVILEGE_SET)v13;
    SmHwAcceleratorPartitionCtxCleanup(v13);
    CmSiFreeMemory(Privileges);
  }
}
