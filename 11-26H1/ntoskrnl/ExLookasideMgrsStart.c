/*
 * XREFs of ExLookasideMgrsStart @ 0x14083A910
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ?ExpLookasideMgrCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x140846B6C (-ExpLookasideMgrCleanup@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 *     ?ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x140846D5C (-ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 ExLookasideMgrsStart()
{
  __int16 v0; // si
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // r15
  void *Pool2; // rax
  _DWORD *v5; // rdi
  int v6; // ebx
  int v7; // ebx

  v0 = KeNumberNodes;
  v1 = (unsigned int)(10000 * dword_140E0EC6C);
  v2 = (unsigned int)(10000 * dword_140E0EC68);
  v3 = (unsigned int)(10000 * dword_140E0EC64);
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  ExpPerProcLookasideMgr = Pool2;
  v5 = Pool2;
  if ( Pool2 )
  {
    v7 = ExpLookasideMgrConfig;
    memset_0(Pool2, 0, 0x268uLL);
    v5[10] = v7;
    *((_QWORD *)v5 + 3) = v3;
    *((_QWORD *)v5 + 6) = ExpLookasideMgrPerProcWorkerRoutine;
    *((_QWORD *)v5 + 1) = ExpLookasideMgrTimerCallback;
    v5[11] = 3;
    *((_QWORD *)v5 + 4) = v1;
    *((_WORD *)v5 + 298) = v0;
    memset_0(&ExpGeneralLookasideMgr, 0, 0x268uLL);
    qword_140E28950 = v1;
    dword_140E28940 = 1;
    word_140E28B84 = 1;
    dword_140E28958 = 0;
    qword_140E28948 = v2;
    qword_140E28938 = (__int64)ExpLookasideMgrTimerCallback;
    qword_140E28960 = (__int64)ExpLookasideMgrGeneralWorkerRoutine;
    dword_140E2895C = 3;
    v6 = ExpLookasideMgrStart((struct _EXP_LOOKASIDE_MGR *)v5);
    if ( v6 >= 0 )
    {
      v6 = ExpLookasideMgrStart((struct _EXP_LOOKASIDE_MGR *)&ExpGeneralLookasideMgr);
      if ( v6 >= 0 )
        return (unsigned int)v6;
    }
  }
  else
  {
    v6 = -1073741670;
  }
  ExpLookasideMgrCleanup((struct _EXP_LOOKASIDE_MGR *)ExpPerProcLookasideMgr);
  ExpLookasideMgrCleanup((struct _EXP_LOOKASIDE_MGR *)&ExpGeneralLookasideMgr);
  if ( ExpPerProcLookasideMgr )
    ExFreePoolWithTag(ExpPerProcLookasideMgr, 0);
  return (unsigned int)v6;
}
