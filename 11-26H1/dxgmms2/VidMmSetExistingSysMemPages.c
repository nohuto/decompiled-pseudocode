/*
 * XREFs of VidMmSetExistingSysMemPages @ 0x1400A3B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SetExistingSysMemPages@VIDMM_PARAVIRTUALIZATION_HEAP@@QEAAJPEAUVIDMM_HEAP_ALLOC@@IIIPEB_K@Z @ 0x1400B55E8 (-SetExistingSysMemPages@VIDMM_PARAVIRTUALIZATION_HEAP@@QEAAJPEAUVIDMM_HEAP_ALLOC@@IIIPEB_K@Z.c)
 */

__int64 __fastcall VidMmSetExistingSysMemPages(
        __int64 **a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void *Src)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  VIDMM_PARAVIRTUALIZATION_HEAP *v11; // rcx
  unsigned int v12; // ebx
  _BYTE v13[16]; // [rsp+50h] [rbp-18h] BYREF

  v8 = **a1;
  if ( (*(_DWORD *)(v8 + 28) & 0x40) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(v8 + 136), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    v12 = VIDMM_PARAVIRTUALIZATION_HEAP::SetExistingSysMemPages(
            v11,
            *(struct VIDMM_HEAP_ALLOC **)(v8 + 224),
            a2,
            a3,
            a4,
            Src);
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v13);
    return v12;
  }
  else
  {
    WdLogSingleEntry1(1LL, **a1);
    WdLogGlobalForLineNumber = 2381;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225485LL;
  }
}
