/*
 * XREFs of ?AllocateLocal@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@_NPEAPEAX2@Z @ 0x1400BA480
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateLocal(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        char a3,
        void **a4,
        void **a5)
{
  void **v5; // rsi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  char v14; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v16 = 0LL;
  *a4 = 0LL;
  if ( !v5 )
    return 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v8 = *((_DWORD *)a2 + 6);
    if ( v8 == 3 || (unsigned int)(v8 - 4) <= 2 )
      goto LABEL_10;
    v9 = *((_QWORD *)a2 + 1);
  }
  else
  {
    v10 = *((_QWORD *)a2 + 1);
    v11 = *(_DWORD *)(v10 + 80);
    if ( v11 == 3 || (unsigned int)(v11 - 4) <= 2 )
      goto LABEL_10;
    v9 = *((_QWORD *)a2 + 2) + *(_QWORD *)(v10 + 32);
  }
  if ( v9 )
  {
LABEL_14:
    *v5 = (void *)v9;
    return 0LL;
  }
LABEL_10:
  v14 = 1;
  v9 = (*(__int64 (__fastcall **)(VIDMM_PROCESS_HEAP *, struct VIDMM_HEAP_ALLOC *, _QWORD, _QWORD, char, char, __int64 *))(*(_QWORD *)this + 56LL))(
         this,
         a2,
         0LL,
         0LL,
         v14,
         a3,
         &v16);
  if ( v9 )
    goto LABEL_14;
  WdLogSingleEntry2(1LL, a2, -1073741801LL);
  WdLogGlobalForLineNumber = 2766;
  DxgkLogInternalTriageEvent(v12, 0x40000LL);
  if ( v16 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct VIDMM_HEAP_ALLOC *, _QWORD))(*(_QWORD *)this + 64LL))(
      this,
      a2,
      0LL);
  return 3221225495LL;
}
