/*
 * XREFs of ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x140104750
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall CVirtualAddressAllocator::GetPageDirectoryData(
        CVirtualAddressAllocator *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned __int64 *a6)
{
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  v7 = *((_QWORD *)this + 16) + 32LL * a2;
  if ( v7
    && (v8 = *(_QWORD *)v7) != 0
    && (v9 = *(_QWORD *)(v8 + 24)) != 0
    && (*(_DWORD *)(*(_QWORD *)v9 + 56LL) & 1) != 0 )
  {
    *a3 = *(_QWORD *)(v7 + 8);
    *a4 = *(_DWORD *)(v7 + 16);
    *a6 = *(_QWORD *)(v8 + 8);
    *a5 = *(_DWORD *)(v7 + 24);
  }
  else
  {
    *a4 = 0;
    *a6 = 0LL;
    *a5 = 0;
    WdLogSingleEntry2(1LL, this, a2);
    WdLogGlobalForLineNumber = 3401;
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
  }
}
