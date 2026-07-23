/*
 * XREFs of MiCombineInitialInstance @ 0x1402EB42C
 * Callers:
 *     MiConvertStandbyToProto @ 0x1402E8EE8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1402E9B0C (MiConvertPrivateToProto.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiTranslateCacheAttribute @ 0x1402EBD60 (MiTranslateCacheAttribute.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 *     MiMapSinglePage @ 0x14036C61C (MiMapSinglePage.c)
 *     MiComputeHash64 @ 0x1403DD3F0 (MiComputeHash64.c)
 *     MiRecheckCombineVm @ 0x1403FD34C (MiRecheckCombineVm.c)
 *     MiHashIsCommon @ 0x140481C18 (MiHashIsCommon.c)
 *     MiStandbyPageStillCombineCandidate @ 0x1404BF3B4 (MiStandbyPageStillCombineCandidate.c)
 *     KeCopyPageNoOverride @ 0x140735430 (KeCopyPageNoOverride.c)
 */

__int64 __fastcall MiCombineInitialInstance(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r11
  __int64 v5; // r10
  ULONG_PTR BugCheckParameter2; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 *v11; // rcx
  unsigned int v12; // eax
  __int64 TransitionPte; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r11
  __int64 v18; // rax
  unsigned __int64 DemandZeroPte; // rax
  unsigned int v20; // ebx
  int IsCommon; // ebx
  __int64 v22; // r8
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // r11
  int v26; // ebx
  int v27; // r14d
  int v29; // edx
  int v30; // edx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // [rsp+40h] [rbp-E8h]
  __int64 v34; // [rsp+48h] [rbp-E0h]
  __int64 v35; // [rsp+50h] [rbp-D8h]
  int v36; // [rsp+58h] [rbp-D0h] BYREF
  unsigned int v37; // [rsp+5Ch] [rbp-CCh]
  unsigned int v38; // [rsp+60h] [rbp-C8h]
  __int64 v39; // [rsp+68h] [rbp-C0h]
  __int64 v40; // [rsp+70h] [rbp-B8h]
  __int64 v41; // [rsp+78h] [rbp-B0h]
  __int64 v42; // [rsp+80h] [rbp-A8h]
  __int64 *v43; // [rsp+88h] [rbp-A0h]
  __int64 *v44; // [rsp+90h] [rbp-98h]
  __int64 v45; // [rsp+98h] [rbp-90h]
  ULONG_PTR v46; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v47; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v48; // [rsp+B0h] [rbp-78h]
  __int64 v49; // [rsp+B8h] [rbp-70h]
  __int64 v50; // [rsp+C0h] [rbp-68h]
  __int64 v51; // [rsp+C8h] [rbp-60h]
  __int64 v52; // [rsp+D0h] [rbp-58h]
  _DWORD *v53; // [rsp+D8h] [rbp-50h]
  __int64 v54; // [rsp+E0h] [rbp-48h]
  __int64 v55; // [rsp+E8h] [rbp-40h]
  unsigned int v59; // [rsp+148h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 296);
  v33 = (_QWORD *)v3;
  v52 = v3;
  v35 = v3;
  v4 = *(_QWORD *)(a1 + 304);
  v40 = v4;
  v45 = v4;
  v44 = *(__int64 **)a1;
  v38 = *(_DWORD *)(a1 + 140);
  v39 = *(_QWORD *)(a1 + 112);
  v49 = v39;
  v34 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v39 + 174));
  v50 = v34;
  v5 = *(_QWORD *)(a1 + 144);
  BugCheckParameter2 = 48 * v5 - 0x220000000000LL;
  v46 = BugCheckParameter2;
  v7 = *(_QWORD *)(a1 + 96);
  v47 = v7;
  v8 = (v4 + 0x220000000000LL) / 48;
  v9 = *v44;
  v51 = *v44;
  v10 = v7 + 4096;
  v48 = v7 + 4096;
  v11 = (__int64 *)(((*(_QWORD *)(a2 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v43 = v11;
  v53 = (_DWORD *)(a2 + 32);
  v12 = *(_DWORD *)(a2 + 32) & 0x1F;
  v37 = v12;
  if ( a3 )
  {
    TransitionPte = *v11;
    v42 = *v11;
    MiMapSinglePage(v7, v5, 3221225488LL, 0LL);
    v41 = 56LL;
    v17 = v40;
  }
  else
  {
    TransitionPte = MiMakeTransitionPte((v4 + 0x220000000000LL) / 48, v12);
    v42 = TransitionPte;
    v41 = a1 + 72;
  }
  v54 = v3 + 32;
  v55 = v3 + 32;
  *(_OWORD *)(v3 + 32) = 0LL;
  *(_OWORD *)(v3 + 48) = 0LL;
  v18 = *(_QWORD *)(v17 + 16);
  if ( v18 )
    DemandZeroPte = v18 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(v17 + 16) = DemandZeroPte;
  v20 = (*(_DWORD *)(BugCheckParameter2 + 32) >> 22) & 3;
  if ( ((*(_DWORD *)(v17 + 32) >> 22) & 3) != v20 )
    MiChangePageAttribute(v17, v20);
  v59 = MiTranslateCacheAttribute(v20, v14, v15, v16);
  MiMapSinglePage(v7 + 4096, v8, 1073741840LL, 0LL);
  IsCommon = 1;
  if ( a3 )
  {
    KeCopyPageNoOverride(v7 + 4096, v7, v59);
  }
  else
  {
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v36);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    if ( (**(_QWORD **)v41 & 1) != 0
      && (unsigned int)MiStandbyPageStillCombineCandidate(BugCheckParameter2, v34, v43, v37)
      && (unsigned int)MiRecheckCombineVm(v44, v38, BugCheckParameter2, v39) )
    {
      KeCopyPageNoOverride(v7 + 4096, v7, v59);
    }
    else
    {
      IsCommon = 0;
    }
  }
  v22 = a3;
  if ( a3 )
    *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v23 = a2;
  if ( IsCommon )
  {
    v24 = MiComputeHash64(v10, 0x7FFFFFFFF8LL);
    if ( v24 == v25 )
    {
      if ( *(_QWORD *)(a2 + 24) == qword_140E2EBD0 )
      {
        IsCommon = MiHashIsCommon(a1, v25, v10);
        v22 = a3;
      }
    }
    else
    {
      IsCommon = 0;
    }
  }
  *(_QWORD *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( IsCommon )
  {
    *(_QWORD *)(v54 + 16) = *v53 & 0x1F;
    v33[3] = *(_QWORD *)(a2 + 8);
    v33[8] = *(_QWORD *)(a2 + 24);
    v26 = 0;
    if ( v22 )
    {
      v59 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32) != 1 )
      {
        v26 = -1073741800;
LABEL_22:
        v27 = (int)v33;
        goto LABEL_23;
      }
      v29 = 0;
      if ( v34 != v9 && !*(_QWORD *)(v35 + 40) )
        v29 = 5;
      if ( !v29 || (unsigned int)MiGetCloneCharges(v9) )
      {
        v23 = a2;
        if ( v34 != v9 )
          ++*(_QWORD *)(v35 + 40);
        goto LABEL_22;
      }
      v26 = -1073741800;
    }
    else
    {
      v30 = 0;
      if ( v34 != v9 && !*(_QWORD *)(v35 + 40) )
        v30 = 5;
      if ( v30 && !(unsigned int)MiGetCloneCharges(v9) )
      {
        v26 = -1073741800;
LABEL_55:
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return (unsigned int)v26;
      }
      if ( v34 != v9 )
        ++*(_QWORD *)(v35 + 40);
      if ( (MiUnlinkPageFromListEx(BugCheckParameter2, 0) & 3) != 0 )
      {
        MiDiscardTransitionPfnEx(BugCheckParameter2, 0LL, v31, v32);
        v27 = (int)v33;
        v33[7] = 1LL;
        MiDecrementCloneBlock(v9, v39, v55, 4, (__int64)&v59);
        v26 = -1073741800;
        v23 = a2;
LABEL_23:
        if ( v26 >= 0 )
        {
          MiCombineInitialFinish(a1, v27, v23, a3, v40, BugCheckParameter2, TransitionPte);
          return 0LL;
        }
        goto LABEL_55;
      }
    }
    v23 = a2;
    goto LABEL_22;
  }
  if ( !v22 )
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 3221225496LL;
}
