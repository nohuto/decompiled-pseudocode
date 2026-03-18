/*
 * XREFs of ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400F4754
 * Callers:
 *     ?LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_N@Z @ 0x1400F5F40 (-LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_.c)
 * Callees:
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1400ADBBC (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1400EFF20 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400F21B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400F4BF0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F5444 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x14010A59C (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Lock(
        VIDMM_RECYCLE_MULTIRANGE *this,
        const struct VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_GLOBAL *a6)
{
  VIDMM_RECYCLE_RANGE *v6; // rbx
  __int64 v7; // rsi
  __int64 v10; // rcx
  char v11; // bp
  __int64 result; // rax
  VIDMM_RECYCLE_RANGE *v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  VIDMM_RECYCLE_RANGE *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  VIDMM_RECYCLE_RANGE *v28; // rsi
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ebp
  enum _LOCK_OPERATION v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // r13d
  __int64 v37; // rdx
  VIDMM_RECYCLE_RANGE *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // r8
  VIDMM_RECYCLE_RANGE *v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  VIDMM_RECYCLE_RANGE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // [rsp+80h] [rbp+18h]

  v48 = a3;
  v7 = a4;
  if ( *((_BYTE *)this + 96) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 12LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_50;
  }
  if ( !a3 )
  {
    v10 = *((_QWORD *)this + 6);
    if ( a4 == *((_QWORD *)this + 5) - v10 && v10 == *((_QWORD *)this + 4) )
    {
      v6 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
      v11 = 0;
      while ( 1 )
      {
        if ( v11 )
        {
          ++*((_DWORD *)this + 23);
          VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(this);
          WdLogSingleEntry3(4LL, this, 0LL, a4);
          WdLogGlobalForLineNumber = 3077;
          goto LABEL_11;
        }
        LODWORD(v7) = VIDMM_RECYCLE_RANGE::Lock(v6, a2, (enum _LOCK_OPERATION)a3, a6);
        if ( (int)v7 < 0 )
          break;
        if ( v6 == *((VIDMM_RECYCLE_RANGE **)this + 9) )
        {
          v11 = 1;
        }
        else
        {
          v24 = *((_QWORD *)v6 + 15);
          v25 = *((_QWORD *)v6 + 9);
          v6 = 0LL;
          if ( v24 != v25 + 72 )
            v6 = (VIDMM_RECYCLE_RANGE *)(v24 - 120);
        }
      }
      while ( v6 != *((VIDMM_RECYCLE_RANGE **)this + 8) )
      {
LABEL_50:
        v34 = *((_QWORD *)v6 + 16);
        v35 = *((_QWORD *)v6 + 9);
        v6 = 0LL;
        if ( v34 != v35 + 72 )
          v6 = (VIDMM_RECYCLE_RANGE *)(v34 - 120);
        VIDMM_RECYCLE_RANGE::Unlock(v6);
      }
      return (unsigned int)v7;
    }
  }
  v13 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v14 = a3 + *((_QWORD *)this + 6);
  v15 = v14 + a4;
  while ( v13 && *((_QWORD *)v13 + 5) <= v14 )
  {
    v22 = *((_QWORD *)v13 + 15);
    v23 = *((_QWORD *)v13 + 9);
    v13 = 0LL;
    if ( v22 != v23 + 72 )
      v13 = (VIDMM_RECYCLE_RANGE *)(v22 - 120);
  }
  v16 = *((_QWORD *)v13 + 5);
  v17 = *((_QWORD *)v13 + 4);
  if ( v16 >= v15 )
  {
    v18 = v13;
    if ( v14 == v17 )
    {
      if ( v16 == v15 )
        goto LABEL_27;
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(v13, v15 - v17, (bool *)&a5);
    }
    else
    {
      v19 = v14 - v17;
      if ( v16 != v15 )
      {
        v18 = VIDMM_RECYCLE_RANGE::SplitMiddle(v13, v19, v15 - v17);
LABEL_27:
        result = VIDMM_RECYCLE_RANGE::Lock(v18, a2, (enum _LOCK_OPERATION)a3, a6);
        if ( (int)result >= 0 )
        {
LABEL_28:
          ++*((_DWORD *)this + 23);
          VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(this);
          WdLogSingleEntry3(4LL, this, v48, v7);
          WdLogGlobalForLineNumber = 3020;
LABEL_11:
          *((_DWORD *)this + 42) = 4;
          VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this);
          return 0LL;
        }
        return result;
      }
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(v13, v19, (bool *)&a5);
      if ( (_BYTE)a5 )
      {
        v20 = *((_QWORD *)v13 + 15);
        v21 = *((_QWORD *)v13 + 9);
        v13 = 0LL;
        if ( v20 != v21 + 72 )
          v13 = (VIDMM_RECYCLE_RANGE *)(v20 - 120);
      }
    }
    v18 = v13;
    goto LABEL_27;
  }
  v26 = *((_QWORD *)v13 + 15);
  v27 = *((_QWORD *)v13 + 9) + 72LL;
  while ( 1 )
  {
    v28 = 0LL;
    if ( v26 != v27 )
      v28 = (VIDMM_RECYCLE_RANGE *)(v26 - 120);
    if ( !v28 || *((_QWORD *)v28 + 5) >= v15 )
      break;
    v36 = VIDMM_RECYCLE_RANGE::Lock(v28, a2, (enum _LOCK_OPERATION)a3, a6);
    v27 = *((_QWORD *)v28 + 9) + 72LL;
    if ( v36 < 0 )
    {
      v37 = *((_QWORD *)v28 + 16);
      while ( 1 )
      {
        v38 = 0LL;
        if ( v37 != v27 )
          v38 = (VIDMM_RECYCLE_RANGE *)(v37 - 120);
        if ( v38 == v13 )
          break;
        VIDMM_RECYCLE_RANGE::Unlock(v38);
        v37 = *((_QWORD *)v38 + 16);
        v27 = *((_QWORD *)v38 + 9) + 72LL;
      }
      return (unsigned int)v36;
    }
    v26 = *((_QWORD *)v28 + 15);
  }
  v29 = *((_QWORD *)v28 + 5);
  if ( v14 != v17 )
  {
    v30 = v14 - *((_QWORD *)v13 + 4);
    LOBYTE(a5) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(v13, v30, (bool *)&a5);
    if ( (_BYTE)a5 )
    {
      a3 = *((_QWORD *)v13 + 15);
      v31 = *((_QWORD *)v13 + 9);
      v13 = 0LL;
      if ( a3 != v31 + 72 )
        v13 = (VIDMM_RECYCLE_RANGE *)(a3 - 120);
    }
  }
  if ( v29 != v15 )
  {
    v39 = v15 - *((_QWORD *)v28 + 4);
    LOBYTE(a5) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(v28, v39, (bool *)&a5);
  }
  v32 = VIDMM_RECYCLE_RANGE::Lock(v13, a2, (enum _LOCK_OPERATION)a3, a6);
  if ( v32 < 0 )
  {
    v40 = *((_QWORD *)v28 + 16);
    v41 = 0LL;
    if ( v40 != *((_QWORD *)v28 + 9) + 72LL )
      v41 = (VIDMM_RECYCLE_RANGE *)(v40 - 120);
    while ( v41 != v13 )
    {
      VIDMM_RECYCLE_RANGE::Unlock(v41);
      v42 = *((_QWORD *)v41 + 16);
      v43 = *((_QWORD *)v41 + 9);
      v41 = 0LL;
      if ( v42 != v43 + 72 )
        v41 = (VIDMM_RECYCLE_RANGE *)(v42 - 120);
    }
  }
  else
  {
    v32 = VIDMM_RECYCLE_RANGE::Lock(v28, a2, v33, a6);
    if ( v32 >= 0 )
    {
      v7 = a4;
      goto LABEL_28;
    }
    v44 = *((_QWORD *)v28 + 16);
    v45 = 0LL;
    if ( v44 != *((_QWORD *)v28 + 9) + 72LL )
      v45 = (VIDMM_RECYCLE_RANGE *)(v44 - 120);
    while ( v45 != v13 )
    {
      VIDMM_RECYCLE_RANGE::Unlock(v45);
      v46 = *((_QWORD *)v45 + 16);
      v47 = *((_QWORD *)v45 + 9);
      v45 = 0LL;
      if ( v46 != v47 + 72 )
        v45 = (VIDMM_RECYCLE_RANGE *)(v46 - 120);
    }
    VIDMM_RECYCLE_RANGE::Unlock(v13);
  }
  return (unsigned int)v32;
}
