/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_K3@Z @ 0x1400F6B6C
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400F4BF0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z @ 0x14003C3C4 (--_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EEPEAPEAX2EPEAE@Z @ 0x1400F66AC (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EEPEAPEAX2EPEAE@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F6F00 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1400F70D0 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?UpdatePfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@AEAAXPEAVVIDMM_MDL_RANGE@@_K1@Z @ 0x1400F7114 (-UpdatePfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@AEAAXPEAVVIDMM_MDL_RANGE@@_K1@Z.c)
 *     ?VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1400F7424 (-VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400F8290 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        const struct VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_GLOBAL *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v10; // rax
  int v11; // edx
  VIDMM_MDL_RANGE *v12; // rax
  enum _LOCK_OPERATION v13; // r8d
  VIDMM_MDL_RANGE *v14; // rbx
  void *v15; // r14
  char v16; // r15
  __int64 v17; // rcx
  int v18; // edx
  int v19; // eax
  __int64 v20; // rbp
  void *v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  struct _EPROCESS *CurrentProcess; // r9
  int v30; // ecx
  unsigned __int8 v31; // [rsp+20h] [rbp-88h]
  struct VIDMM_MDL_RANGE *v32; // [rsp+50h] [rbp-58h]
  struct VIDMM_MDL_RANGE *v33; // [rsp+B0h] [rbp+8h]
  enum _LOCK_OPERATION v35; // [rsp+C0h] [rbp+18h] BYREF
  struct VIDMM_GLOBAL *v36; // [rsp+C8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v6 = (unsigned __int64)a6;
  v7 = (unsigned __int64)a5;
  v8 = a6 - a5;
  if ( !*((_QWORD *)this + 4) )
  {
    v26 = (*(_QWORD *)(*(_QWORD *)this + 48LL) - *(_QWORD *)(*(_QWORD *)this + 40LL)) >> 12;
    *((_QWORD *)this + 3) = v26;
    v27 = 8 * v26;
    if ( !is_mul_ok(v26, 8uLL) )
      v27 = -1LL;
    v28 = operator new[](v27, 0x35336956u, 256LL);
    *((_QWORD *)this + 4) = v28;
    if ( !v28 )
    {
      _InterlockedIncrement(&dword_14008A7D8);
      WdLogSingleEntry0(6LL);
      v25 = 5777;
      goto LABEL_20;
    }
  }
  v32 = 0LL;
  v10 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v11 = -1;
  v33 = 0LL;
  while ( v10 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) && v11 < 0 )
  {
    if ( *((_QWORD *)v10 - 1) > v7 )
    {
      if ( *((_QWORD *)v10 - 2) < v6 )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        v33 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v10 - 24);
      }
    }
    else
    {
      v11 = -1;
      v32 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v10 - 24);
    }
    v10 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v10;
  }
  v12 = (VIDMM_MDL_RANGE *)operator new(48LL, 0x32316956u, 258LL);
  v14 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    v15 = 0LL;
    *((_QWORD *)v12 + 1) = v7;
    v16 = 0;
    *((_QWORD *)v12 + 2) = v6;
    *((_QWORD *)v12 + 5) = this;
    *((_QWORD *)v12 + 3) = 0LL;
    *((_QWORD *)v12 + 4) = 0LL;
    v17 = *(_QWORD *)this;
    a6 = 0LL;
    a5 = 0LL;
    LOBYTE(v35) = 0;
    v18 = **(_DWORD **)(v17 + 32);
    if ( v18 == 3 || v18 == 4 )
    {
      v19 = VidMmRecycleHeapMapSection(
              *(PVOID *)(v17 + 56),
              v7,
              v8,
              v18 == 4,
              v31,
              (void **)&a6,
              (void **)&a5,
              0,
              (unsigned __int8 *)&v35);
      v20 = v19;
      if ( v19 < 0 )
      {
        VIDMM_MDL_RANGE::`scalar deleting destructor'(v14);
        WdLogSingleEntry5(
          3LL,
          v8,
          v7,
          *(_QWORD *)this,
          v20,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 8LL) + 16LL));
        WdLogGlobalForLineNumber = 5860;
        return (unsigned int)v20;
      }
      v21 = a6;
      v15 = a5;
      v16 = v35;
    }
    else
    {
      v21 = (void *)v7;
    }
    LODWORD(v20) = VIDMM_MDL_RANGE::Lock(v14, v21, v13, v36, a2);
    v22 = **(unsigned int **)(*(_QWORD *)this + 32LL);
    if ( (_DWORD)v22 == 3 || (_DWORD)v22 == 4 )
    {
      if ( v16 )
        CurrentProcess = 0LL;
      else
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v22);
      v30 = dword_14008A524;
      if ( (unsigned __int64)qword_14008A318 > 0x53333333 )
        v30 = dword_14008A514;
      if ( v8 > (unsigned int)(v30 << 20) )
        VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(*(_QWORD *)this + 56LL), v15);
      else
        VidMmUnmapView(CurrentProcess, v15);
    }
    if ( (int)v20 < 0 )
    {
      VIDMM_MDL_RANGE::`scalar deleting destructor'(v14);
    }
    else
    {
      VIDMM_MDL_RANGE::InsertBetween(v14, v32, v33);
      VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UpdatePfnArray(this, v14, v7, v6);
    }
    return (unsigned int)v20;
  }
  _InterlockedIncrement(&dword_14008A7D4);
  WdLogSingleEntry0(6LL);
  v25 = 5834;
LABEL_20:
  WdLogGlobalForLineNumber = v25;
  DxgkLogInternalTriageEvent(v24, 262145LL);
  return 3221225495LL;
}
