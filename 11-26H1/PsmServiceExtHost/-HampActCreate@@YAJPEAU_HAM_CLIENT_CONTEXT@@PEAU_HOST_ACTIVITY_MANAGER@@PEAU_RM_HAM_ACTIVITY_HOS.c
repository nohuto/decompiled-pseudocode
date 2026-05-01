/*
 * XREFs of ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002A6FC
 * Callers:
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001AD9C (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180041E8C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180046760 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 * Callees:
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180010D20 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x1800299BC (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180029A08 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18002B1F0 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ??0HAM_ACTIVITY_RM_CONTEXT@@QEAA@PEAU_HAM_ACTIVITY@@@Z @ 0x18002BE3C (--0HAM_ACTIVITY_RM_CONTEXT@@QEAA@PEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180070958 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall HampActCreate(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HOST_ACTIVITY_MANAGER *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4,
        unsigned int a5,
        unsigned __int64 a6,
        struct _HAM_ACTIVITY **a7)
{
  char *Heap; // rax
  char *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v16; // rax
  __int128 v17; // xmm1
  struct _HOST_ACTIVITY_MANAGER *v18; // rdx
  int v19; // edi
  HAM_ACTIVITY_RM_CONTEXT *v20; // rax
  HAM_ACTIVITY_RM_CONTEXT *v21; // rax
  struct _RM_HAM_ACTIVITY_HOST *v23; // rcx
  unsigned int v24; // edx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x238uLL);
  v12 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  memset_0(Heap + 40, 0, 0x210uLL);
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 1) = 0LL;
  *((_QWORD *)v12 + 4) = (char *)a2 + 440;
  *((_QWORD *)v12 + 3) = 1LL;
  *((_QWORD *)v12 + 2) = -1LL;
  v13 = HamObjectIdGenerate(5);
  v14 = 3LL;
  *((_QWORD *)v12 + 5) = v13;
  *((_WORD *)v12 + 281) = 1536;
  v15 = v12 + 112;
  v16 = a4;
  do
  {
    *v15 = *(_OWORD *)v16;
    v15[1] = *((_OWORD *)v16 + 1);
    v15[2] = *((_OWORD *)v16 + 2);
    v15[3] = *((_OWORD *)v16 + 3);
    v15[4] = *((_OWORD *)v16 + 4);
    v15[5] = *((_OWORD *)v16 + 5);
    v15[6] = *((_OWORD *)v16 + 6);
    v15 += 8;
    v17 = *((_OWORD *)v16 + 7);
    v16 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v16 + 128);
    *(v15 - 1) = v17;
    --v14;
  }
  while ( v14 );
  *(_QWORD *)v15 = *(_QWORD *)v16;
  RmpAcquireGlobalLock();
  *((_QWORD *)v12 + 10) = RmHamHostReference(a3);
  RmpReleaseGlobalLock();
  *((_QWORD *)v12 + 64) = 0LL;
  if ( a6 || (*(_DWORD *)a4 & 0x40000) == 0 )
  {
    *((_QWORD *)v12 + 65) = a6;
  }
  else
  {
    HampHostAcquireLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)v12 + 10), 0);
    v23 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v12 + 10);
    *((_QWORD *)v12 + 65) = *((_QWORD *)a3 + 101);
    HampHostReleaseLockSharedEx(v23, v24);
  }
  v18 = (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)v12 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 440);
  *((_QWORD *)v12 + 8) = a1;
  v19 = HampRmPopulateDefaultProperties((struct _HAM_ACTIVITY_PROPERTIES *)(v12 + 112), v18, a5);
  if ( v19 < 0 )
    goto LABEL_13;
  v20 = (HAM_ACTIVITY_RM_CONTEXT *)operator new(0x20uLL);
  if ( !v20 || (v21 = HAM_ACTIVITY_RM_CONTEXT::HAM_ACTIVITY_RM_CONTEXT(v20, (struct _HAM_ACTIVITY *)v12)) == 0LL )
  {
    v19 = -1073741801;
    goto LABEL_13;
  }
  *((_QWORD *)v12 + 11) = v21;
  v19 = HampActInsert((struct _HAM_ACTIVITY *)v12);
  if ( v19 < 0 )
  {
LABEL_13:
    CemRcObjectDereference(v12);
    return (unsigned int)v19;
  }
  v19 = 0;
  *a7 = (struct _HAM_ACTIVITY *)v12;
  return (unsigned int)v19;
}
