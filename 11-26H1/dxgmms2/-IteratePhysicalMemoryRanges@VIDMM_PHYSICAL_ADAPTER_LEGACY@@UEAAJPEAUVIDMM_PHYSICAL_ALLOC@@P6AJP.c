/*
 * XREFs of ?IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAUVIDMM_PHYSICAL_ADAPTER@@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3III@Z @ 0x14010F8B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::IteratePhysicalMemoryRanges(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        __int64 (__fastcall *a3)(VIDMM_PHYSICAL_ADAPTER_LEGACY *, struct VIDMM_PHYSICAL_ALLOC *, const unsigned __int64 **, void *),
        void *a4,
        char a5)
{
  __int64 v9; // rdi
  unsigned int v10; // edx
  int v11; // ecx
  const unsigned __int64 *FullPfnArray; // r8
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // rcx
  const unsigned __int64 *v18; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-18h]
  unsigned int v20; // [rsp+5Ch] [rbp-14h]
  int v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]

  if ( (a5 & 1) == 0 && (*((_DWORD *)a2 + 14) & 1) == 0 )
    return 0;
  v9 = 0LL;
  v10 = 0;
  v11 = *((_DWORD *)a2 + 14) & 1;
  v20 = *((_QWORD *)a2 + 2) >> 12;
  FullPfnArray = 0LL;
  v21 = 0;
  v18 = 0LL;
  v19 = 0;
  v22 = v11;
  if ( v11 )
  {
    v13 = *((_QWORD *)a2 + 8);
    LOWORD(v21) = *(_WORD *)(v13 + 70);
    if ( (a5 & 2) != 0 )
    {
      if ( *(_DWORD *)(v13 + 108) == 1 )
      {
        v9 = *((__int64 *)a2 + 9) >> 12;
      }
      else
      {
        FullPfnArray = VidMmGetFullPfnArray(*(const struct VIDMM_GLOBAL_ALLOC **)a2);
        if ( !FullPfnArray )
        {
          _InterlockedIncrement(&dword_14008A7D4);
          WdLogSingleEntry1(6LL, *(_QWORD *)a2);
          WdLogGlobalForLineNumber = 1652;
          DxgkLogInternalTriageEvent(v17, 262145LL);
          return (unsigned int)-1073741801;
        }
        v10 = v19;
      }
      if ( *(_DWORD *)(v13 + 108) == 1 )
        v18 = (const unsigned __int64 *)(v9 + v10);
      else
        v18 = &FullPfnArray[v10];
    }
  }
  v14 = a3(this, a2, &v18, a4);
  v15 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry4(3LL, a3, v14, v19, v20);
    WdLogGlobalForLineNumber = 1681;
  }
  else
  {
    return 0;
  }
  return v15;
}
