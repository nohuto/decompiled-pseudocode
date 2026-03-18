/*
 * XREFs of ?MapViewOfAllocation@VIDMM_EXISTINGSYSMEM_HEAP@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K1_N2PEAPEAX@Z @ 0x1400AC5B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

char *__fastcall VIDMM_EXISTINGSYSMEM_HEAP::MapViewOfAllocation(
        VIDMM_EXISTINGSYSMEM_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        bool a6,
        void **a7)
{
  char *v7; // rbx
  char *v8; // rdi
  __int64 v9; // rcx
  char *result; // rax

  v7 = 0LL;
  v8 = 0LL;
  if ( !a5 || (*((_DWORD *)a2 + 8) & 1) != 0 )
  {
    v8 = (char *)*((_QWORD *)a2 + 1);
    v7 = &v8[a3];
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 376;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
  result = v7;
  *a7 = v8;
  return result;
}
