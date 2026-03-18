/*
 * XREFs of ?VidMmValidateLockedPages@@YAJPEAVVIDMM_LOCKED_PAGE_HISTORY@@T_LARGE_INTEGER@@PEBU_MDL@@_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F7330
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z @ 0x1400A4C5C (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F6F00 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockHeapAllocation@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_N@Z @ 0x1400F7AE0 (-LockHeapAllocation@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_.c)
 *     ?LockHeapAllocation@VIDMM_EXISTINGSYSMEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_N@Z @ 0x1400F8700 (-LockHeapAllocation@VIDMM_EXISTINGSYSMEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidMmValidateLockedPages(
        struct VIDMM_LOCKED_PAGE_HISTORY *a1,
        union _LARGE_INTEGER a2,
        const struct _MDL *a3,
        __int64 a4,
        const struct VIDMM_GLOBAL_ALLOC *a5)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r11
  unsigned __int64 i; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v12; // rcx

  v6 = (unsigned __int64)a2.QuadPart >> 12;
  v7 = (((LODWORD(a3->StartVa) + a3->ByteOffset) & 0xFFF) + (unsigned __int64)a3->ByteCount + 4095) >> 12;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v7 )
      return 0LL;
    v9 = *((_QWORD *)a1 + 1);
    v10 = *((_QWORD *)&a3[1].Next + i);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 16LL * *((unsigned int *)a1 + 1)) = v10;
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * (unsigned int)(*((_DWORD *)a1 + 1))++ + 8) = a5;
      if ( *((_DWORD *)a1 + 1) >= *(_DWORD *)a1 )
        *((_DWORD *)a1 + 1) = 0;
    }
    if ( v10 > v6 )
      break;
  }
  WdLogSingleEntry2(1LL, i, v10);
  WdLogGlobalForLineNumber = 1631;
  DxgkLogInternalTriageEvent(v12, 0x40000LL);
  return 3223191809LL;
}
