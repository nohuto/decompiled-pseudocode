/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F58E8
 * Callers:
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F5444 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     FastZeroMemory @ 0x1400F5B00 (FastZeroMemory.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EEPEAPEAX2EPEAE@Z @ 0x1400F66AC (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EEPEAPEAX2EPEAE@Z.c)
 *     ?VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1400F7424 (-VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400F8290 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(VIDMM_RECYCLE_MULTIRANGE *this)
{
  struct _EPROCESS *CurrentProcess; // rbx
  void *v3; // rdx
  unsigned __int64 v4; // r15
  __int64 v5; // r10
  int v6; // ecx
  __int64 v7; // rdi
  char v8; // r14
  __int64 v9; // rcx
  size_t v10; // rdx
  char *v11; // rcx
  __int64 v12; // r8
  int *v13; // rcx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  unsigned __int8 v19; // [rsp+20h] [rbp-58h]
  unsigned __int8 v20; // [rsp+80h] [rbp+8h] BYREF
  void *v21; // [rsp+88h] [rbp+10h] BYREF
  void *v22; // [rsp+90h] [rbp+18h] BYREF

  CurrentProcess = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v3 = (void *)*((_QWORD *)this + 4);
  v4 = *((_QWORD *)this + 5) - (_QWORD)v3;
  v20 = 0;
  v5 = *((_QWORD *)this + 10);
  v6 = **(_DWORD **)(v5 + 32);
  if ( (v6 == 3 || (unsigned int)(v6 - 4) <= 2) && (unsigned int)(v6 - 5) > 1 )
  {
    v17 = VidMmRecycleHeapMapSection(*(PVOID *)(v5 + 56), (unsigned __int64)v3, v4, v6 == 4, v19, &v21, &v22, 0, &v20);
    if ( v17 < 0 )
    {
      WdLogSingleEntry5(
        3LL,
        v4,
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 10),
        v17,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL) + 16LL));
      WdLogGlobalForLineNumber = 2568;
      return;
    }
  }
  else
  {
    v21 = v3;
  }
  v7 = *((_QWORD *)this + 8);
  v8 = 0;
  while ( !v8 )
  {
    if ( *(_DWORD *)(v7 + 80) == 3 && *(_BYTE *)(v7 + 84) )
    {
      v9 = *(_QWORD *)(v7 + 32);
      v10 = *(_QWORD *)(v7 + 40) - v9;
      v11 = (char *)v21 + v9 - *((_QWORD *)this + 4);
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      *(_QWORD *)(v12 + 248) += v10;
      FastZeroMemory(v11, v10);
    }
    if ( v7 == *((_QWORD *)this + 9) )
    {
      v8 = 1;
    }
    else
    {
      v15 = *(_QWORD *)(v7 + 120);
      v16 = *(_QWORD *)(v7 + 72) + 72LL;
      v7 = 0LL;
      if ( v15 != v16 )
        v7 = v15 - 120;
    }
  }
  v13 = *(int **)(*((_QWORD *)this + 10) + 32LL);
  v14 = *v13;
  if ( (*v13 == 3 || (unsigned int)(v14 - 4) <= 2) && (unsigned int)(v14 - 5) > 1 )
  {
    if ( !v20 )
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v13);
    v18 = dword_14008A524;
    if ( (unsigned __int64)qword_14008A318 > 0x53333333 )
      v18 = dword_14008A514;
    if ( v4 > (unsigned int)(v18 << 20) )
      VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(*((_QWORD *)this + 10) + 56LL), v22);
    else
      VidMmUnmapView(CurrentProcess, v22);
  }
}
