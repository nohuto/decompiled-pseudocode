/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400F3360
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400F3100 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RemoveFromLockedRanges@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x14003B414 (-RemoveFromLockedRanges@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ??_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z @ 0x14003C3C4 (--_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EEPEAPEAX2EPEAE@Z @ 0x1400F66AC (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EEPEAPEAX2EPEAE@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F6F00 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1400F7424 (-VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1400F79E8 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400F8290 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x140115988 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v3; // r10
  unsigned __int64 v4; // rbp
  char *v5; // r8
  unsigned __int64 v6; // r13
  int v7; // edx
  char *v9; // rcx
  int v10; // esi
  int v11; // eax
  unsigned __int64 *v12; // rdi
  bool v13; // zf
  unsigned __int64 *v14; // rbx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  char v17; // r14
  VIDMM_MDL_RANGE *v18; // r8
  VIDMM_MDL_RANGE *v19; // r8
  __int64 v21; // rcx
  int *v22; // rax
  int v23; // edx
  int v24; // eax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v31; // rdx
  VIDMM_MDL_RANGE *v32; // rcx
  __int64 v33; // rax
  VIDMM_MDL_RANGE *v34; // r8
  VIDMM_MDL_RANGE *v35; // r14
  enum _LOCK_OPERATION v36; // r8d
  __int64 *v37; // r15
  unsigned __int64 v38; // rax
  enum _LOCK_OPERATION v39; // r8d
  unsigned __int64 v40; // rcx
  char v41; // r13
  void *v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  VIDMM_MDL_RANGE *v46; // r8
  VIDMM_MDL_RANGE *v47; // r8
  _QWORD *v48; // rax
  __int64 *v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  int *v52; // rcx
  int v53; // eax
  struct _EPROCESS *CurrentProcess; // r9
  int v55; // ecx
  int v56; // eax
  unsigned __int64 v57; // rcx
  char v58; // r14
  __int64 v59; // rax
  unsigned __int64 *v60; // rdi
  VIDMM_MDL_RANGE *v61; // r8
  VIDMM_MDL_RANGE *v62; // r8
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rcx
  char *v70; // rsi
  unsigned __int8 v71; // [rsp+20h] [rbp-98h]
  void *v72; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v73; // [rsp+58h] [rbp-60h]
  unsigned __int64 v74; // [rsp+60h] [rbp-58h]
  unsigned __int8 v75; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v76; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v77; // [rsp+D0h] [rbp+18h]
  void *v78; // [rsp+D8h] [rbp+20h] BYREF

  v77 = a3;
  v76 = a2;
  v3 = 0LL;
  v4 = a3;
  v5 = (char *)this + 8;
  v6 = a2;
  v7 = -1;
  v9 = (char *)*((_QWORD *)this + 1);
  v10 = 0;
  v11 = -1;
  v12 = 0LL;
  if ( v9 == v5 )
    goto LABEL_20;
LABEL_2:
  v13 = v11 == 0;
  if ( v11 < 0 )
  {
    v12 = (unsigned __int64 *)(v9 - 24);
    if ( *((_QWORD *)v9 - 1) <= v6 )
    {
      v11 = v7;
      goto LABEL_5;
    }
    goto LABEL_21;
  }
  while ( !v13 )
  {
LABEL_20:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 9LL, v3, v3);
    WdLogGlobalForLineNumber = 213;
LABEL_21:
    v11 = (int)v3;
    LOBYTE(v11) = v12[1] >= v4;
LABEL_5:
    v9 = *(char **)v9;
    if ( v9 != v5 )
      goto LABEL_2;
    v13 = v11 == 0;
  }
  v14 = v12;
  v15 = v12[1];
  while ( v14[2] < v4 )
  {
    v26 = v14[3];
    v27 = v14[5] + 8;
    v14 = (unsigned __int64 *)(v26 - 24);
    if ( v26 == v27 )
      v14 = v3;
  }
  v16 = v14[2];
  if ( v15 >= v6 && v16 <= v4 )
  {
    v17 = 0;
    do
    {
      VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v12);
      v18 = (VIDMM_MDL_RANGE *)v12;
      if ( v12 == v14 )
      {
        v17 = 1;
      }
      else
      {
        v28 = v12[3];
        v29 = v12[5] + 8;
        v12 = (unsigned __int64 *)(v28 - 24);
        if ( v28 == v29 )
          v12 = 0LL;
      }
      VIDMM_MDL_RANGE::RemoveFromLockedRanges(v18);
      if ( v19 )
        VIDMM_MDL_RANGE::`scalar deleting destructor'(v19);
    }
    while ( !v17 );
LABEL_17:
    memset(
      (void *)(*((_QWORD *)this + 4) + 8 * ((v6 - *(_QWORD *)(*(_QWORD *)this + 40LL)) >> 12)),
      0,
      8 * ((v4 - v6) >> 12));
    if ( *((VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)this + 1) == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
    {
      operator delete(*((void **)this + 4));
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 3) = 0LL;
    }
    return (unsigned int)v10;
  }
  v21 = *(_QWORD *)this;
  v72 = v3;
  v78 = v3;
  v75 = (unsigned __int8)v3;
  v22 = *(int **)(v21 + 32);
  v73 = v16 - v15;
  v23 = *v22;
  if ( (*v22 == 3 || v23 == 4) && v23 != 6 )
  {
    v24 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v21 + 56),
            v15,
            v16 - v15,
            v23 == 4,
            v71,
            &v72,
            &v78,
            (unsigned __int8)v3,
            &v75);
    v10 = v24;
    if ( v24 < 0 )
    {
      _InterlockedIncrement(&dword_14008A80C);
      WdLogSingleEntry4(6LL, v73, v12[1], *(_QWORD *)this, v24);
      WdLogGlobalForLineNumber = 6060;
      DxgkLogInternalTriageEvent(v25, 262145LL);
      return (unsigned int)v10;
    }
    v70 = (char *)v72;
  }
  else
  {
    v70 = (char *)v15;
  }
  if ( v15 >= v6 )
  {
    if ( v16 > v4 )
    {
      v30 = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)v14, &v70[v4 - v12[1]], v4, v14[2]);
      v10 = v30;
      if ( v30 >= 0 )
      {
        while ( v12 != v14 )
        {
          VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v12);
          v31 = v12[3];
          v32 = (VIDMM_MDL_RANGE *)v12;
          v33 = v12[5] + 8;
          v12 = (unsigned __int64 *)(v31 - 24);
          if ( v31 == v33 )
            v12 = 0LL;
          VIDMM_MDL_RANGE::RemoveFromLockedRanges(v32);
          if ( v34 )
            VIDMM_MDL_RANGE::`scalar deleting destructor'(v34);
        }
        goto LABEL_60;
      }
      _InterlockedIncrement(&dword_14008A7D4);
      WdLogSingleEntry1(6LL, v30);
      WdLogGlobalForLineNumber = 6138;
LABEL_86:
      DxgkLogInternalTriageEvent(v63, 262145LL);
      goto LABEL_60;
    }
LABEL_41:
    v35 = (VIDMM_MDL_RANGE *)operator new(48LL, 0x32316956u, 258LL);
    if ( v35 )
    {
      *((_QWORD *)v35 + 1) = v12[1];
      *(_QWORD *)v35 = 0LL;
      *((_QWORD *)v35 + 2) = v6;
      *((_QWORD *)v35 + 5) = this;
      *((_QWORD *)v35 + 3) = 0LL;
      *((_QWORD *)v35 + 4) = 0LL;
      v37 = (__int64 *)operator new(48LL, 0x32316956u, 258LL);
      if ( v37 )
      {
        v38 = v14[2];
        *v37 = 0LL;
        v37[2] = v38;
        v37[1] = v4;
        v37[5] = (__int64)this;
        v37[3] = 0LL;
        v37[4] = 0LL;
        if ( VIDMM_MDL_RANGE::Lock(v35, v70, v36, 0LL, 0LL) < 0 )
        {
          _InterlockedIncrement(&dword_14008A7D4);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 6212;
          DxgkLogInternalTriageEvent(0LL, 262145LL);
        }
        else
        {
          v10 = VIDMM_MDL_RANGE::Lock((VIDMM_MDL_RANGE *)v37, &v70[v4 - v12[1]], v39, 0LL, 0LL);
          if ( v10 >= 0 )
          {
            v40 = v12[4];
            v41 = 0;
            v13 = v40 == v12[5] + 8;
            v42 = (void *)(v40 - 24);
            v43 = v14[3];
            if ( v13 )
              v42 = 0LL;
            v44 = v14[5] + 8;
            v72 = v42;
            v45 = v43 - 24;
            if ( v43 == v44 )
              v45 = 0LL;
            v74 = v45;
            do
            {
              VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v12);
              v46 = (VIDMM_MDL_RANGE *)v12;
              if ( v12 == v14 )
              {
                v41 = 1;
              }
              else
              {
                v64 = v12[3];
                v65 = v12[5] + 8;
                v12 = (unsigned __int64 *)(v64 - 24);
                if ( v64 == v65 )
                  v12 = 0LL;
              }
              VIDMM_MDL_RANGE::RemoveFromLockedRanges(v46);
              if ( v47 )
                VIDMM_MDL_RANGE::`scalar deleting destructor'(v47);
            }
            while ( !v41 );
            if ( v72 )
              v48 = (char *)v72 + 24;
            else
              v48 = (_QWORD *)(*((_QWORD *)v35 + 5) + 8LL);
            *v48 = (char *)v35 + 24;
            v49 = v37 + 3;
            v37[4] = (__int64)v35 + 24;
            *((_QWORD *)v35 + 4) = v48;
            v50 = v74;
            *((_QWORD *)v35 + 3) = v37 + 3;
            if ( v50 )
              v51 = v50 + 24;
            else
              v51 = v37[5] + 8;
            v4 = v77;
            v6 = v76;
            *(_QWORD *)(v51 + 8) = v49;
            v37[4] = (__int64)v35 + 24;
            *v49 = v51;
            goto LABEL_60;
          }
          _InterlockedIncrement(&dword_14008A7D4);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 6232;
          DxgkLogInternalTriageEvent(0LL, 262145LL);
          VIDMM_MDL_RANGE::Unlock(v35);
        }
        VIDMM_MDL_RANGE::`scalar deleting destructor'(v35);
        VIDMM_MDL_RANGE::`scalar deleting destructor'((VIDMM_MDL_RANGE *)v37);
      }
      else
      {
        _InterlockedIncrement(&dword_14008A7D4);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 6194;
        DxgkLogInternalTriageEvent(v69, 262145LL);
        VIDMM_MDL_RANGE::`scalar deleting destructor'(v35);
      }
    }
    else
    {
      _InterlockedIncrement(&dword_14008A7D4);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 6183;
      DxgkLogInternalTriageEvent(v68, 262145LL);
    }
    v10 = -1073741801;
    goto LABEL_60;
  }
  if ( v16 > v4 )
    goto LABEL_41;
  v56 = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)v12, v70, v12[1], v6);
  v10 = v56;
  if ( v56 < 0 )
  {
    _InterlockedIncrement(&dword_14008A7D4);
    WdLogSingleEntry1(6LL, v56);
    WdLogGlobalForLineNumber = 6082;
    goto LABEL_86;
  }
  if ( v12 != v14 )
  {
    v57 = v12[3];
    v58 = 0;
    v59 = v12[5] + 8;
    v60 = (unsigned __int64 *)(v57 - 24);
    if ( v57 == v59 )
      v60 = 0LL;
    do
    {
      VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v60);
      v61 = (VIDMM_MDL_RANGE *)v60;
      if ( v60 == v14 )
      {
        v58 = 1;
      }
      else
      {
        v66 = v60[3];
        v67 = v60[5] + 8;
        v60 = (unsigned __int64 *)(v66 - 24);
        if ( v66 == v67 )
          v60 = 0LL;
      }
      VIDMM_MDL_RANGE::RemoveFromLockedRanges(v61);
      if ( v62 )
        VIDMM_MDL_RANGE::`scalar deleting destructor'(v62);
    }
    while ( !v58 );
  }
LABEL_60:
  v52 = *(int **)(*(_QWORD *)this + 32LL);
  v53 = *v52;
  if ( (*v52 == 3 || v53 == 4) && v53 != 6 )
  {
    if ( v75 )
      CurrentProcess = 0LL;
    else
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v52);
    v55 = dword_14008A524;
    if ( (unsigned __int64)qword_14008A318 > 0x53333333 )
      v55 = dword_14008A514;
    if ( v73 > (unsigned int)(v55 << 20) )
      VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(*(_QWORD *)this + 56LL), v78);
    else
      VidMmUnmapView(CurrentProcess, v78);
  }
  if ( v10 >= 0 )
    goto LABEL_17;
  return (unsigned int)v10;
}
