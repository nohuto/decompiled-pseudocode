/*
 * XREFs of ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18001A85C
 * Callers:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x1800314AC (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18001AABC (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     ??$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@1@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x18001ABBC (--$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionM.c)
 *     ?_InsertAt@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@AEBU_InsertPosResult@12@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@Z @ 0x18001AC80 (-_InsertAt@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStat.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18001AD24 (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 *     ?_FindInsertPos@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AU_InsertPosResult@12@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18001B238 (-_FindInsertPos@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWn.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028E2C (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ??$find@X@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@1@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18002A180 (--$find@X@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfState.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180070998 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(
        struct _RM_SERVICE_GLOBALS **this,
        unsigned int a2,
        union _RM_SID *a3,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  __int64 result; // rax
  union _LARGE_INTEGER *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rbx
  unsigned int *v14; // rsi
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  char v17[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v18[8]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-B0h] BYREF
  struct _WNF_STATE_NAME v20; // [rsp+68h] [rbp-98h] BYREF
  struct _WNF_STATE_NAME v21; // [rsp+70h] [rbp-90h] BYREF
  __int128 v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h]
  _BYTE v24[560]; // [rsp+90h] [rbp-70h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  P = 0LL;
  v23 = 0LL;
  v16 = 0LL;
  v22 = 0LL;
  memset_0(v24, 0, 0x228uLL);
  result = (*((__int64 (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*this + 5))(this, a2, v24);
  if ( (int)result >= 0 )
  {
    v10 = *(union _LARGE_INTEGER **)utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::find<void>(
                                      this + 21,
                                      v17,
                                      v24);
    if ( v10 == (union _LARGE_INTEGER *)(this + 21) )
    {
      result = ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(a3, &v20, &v21);
      if ( (int)result < 0 )
        return result;
      v12 = utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_NewNodeConstruct<_RM_PSM_HOST_INFO &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &>(
              v11,
              v24,
              &v20);
      v13 = (void *)v12;
      if ( v12 )
      {
        utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_FindInsertPos(
          this + 21,
          v19,
          v12 + 24);
        if ( !v19[16] )
        {
          v10 = *(union _LARGE_INTEGER **)utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_InsertAt(
                                            this + 21,
                                            v18,
                                            v19,
                                            v13);
          if ( RmpActivityHostFindByPsmId(this[16], (struct _RM_PSM_HOST_INFO *)v24, (struct _RM_ACTIVITY_HOST **)&P) < 0 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
              v21,
              0LL,
              &v22,
              24LL,
              0LL);
            HIDWORD(v16) = 1;
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
              v20,
              0LL,
              &v16,
              8LL,
              0LL);
          }
          else
          {
            v14 = (unsigned int *)P;
            HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 56), 0);
            RmpActivityHostPublishCommitLimit((struct _RM_ACTIVITY_HOST *)v14, *((_QWORD *)v14 + 172), 1u);
            (*((void (__fastcall **)(struct _RM_SERVICE_GLOBALS **, unsigned int *, _QWORD, _QWORD))*this + 4))(
              this,
              v14,
              0LL,
              v14[346]);
            HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)(v14 + 14));
            RmpObjectRelease((char *)v14);
          }
          goto LABEL_8;
        }
        operator delete(v13);
      }
      NtDeleteWnfStateName(&v20);
      NtDeleteWnfStateName(&v21);
      return 2147942414LL;
    }
LABEL_8:
    *a4 = v10[72];
    *a5 = v10[73];
    return 0LL;
  }
  return result;
}
