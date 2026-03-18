/*
 * XREFs of ?SetExistingSysMemPages@VIDMM_PARAVIRTUALIZATION_HEAP@@QEAAJPEAUVIDMM_HEAP_ALLOC@@IIIPEB_K@Z @ 0x1400B55E8
 * Callers:
 *     VidMmSetExistingSysMemPages @ 0x1400A3B50 (VidMmSetExistingSysMemPages.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 */

__int64 __fastcall VIDMM_PARAVIRTUALIZATION_HEAP::SetExistingSysMemPages(
        VIDMM_PARAVIRTUALIZATION_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        void *Src)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 Pool2; // rax
  __int64 v14; // rcx

  v7 = *((_QWORD *)a2 + 1) >> 12;
  v8 = a4;
  if ( a5 >= (unsigned int)v7 || (unsigned int)v7 - a5 < a4 )
  {
    WdLogSingleEntry3(1LL, a5, a4, (unsigned int)v7);
    WdLogGlobalForLineNumber = 750;
    goto LABEL_13;
  }
  v9 = *((_DWORD *)a2 + 6);
  if ( !v9 && *((_DWORD *)a2 + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 761;
LABEL_13:
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return 3221225485LL;
  }
  if ( a4 + v9 > (unsigned int)v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 767;
    goto LABEL_13;
  }
  v11 = *((_QWORD *)a2 + 2);
  v12 = a3;
  if ( v11
    || (*((_DWORD *)a2 + 6) = 0,
        Pool2 = ExAllocatePool2(256LL, a3 + 8LL * (unsigned int)v7, 808937814LL),
        *((_QWORD *)a2 + 2) = Pool2,
        (v11 = Pool2) != 0) )
  {
    *((_DWORD *)a2 + 6) += v8;
    memmove((void *)(v11 + v12 + 8LL * a5), Src, 8 * v8);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 781;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    return 3221225495LL;
  }
}
