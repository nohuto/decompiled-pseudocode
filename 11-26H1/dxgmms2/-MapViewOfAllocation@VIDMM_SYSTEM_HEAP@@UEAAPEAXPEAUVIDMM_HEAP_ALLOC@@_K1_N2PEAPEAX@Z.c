/*
 * XREFs of ?MapViewOfAllocation@VIDMM_SYSTEM_HEAP@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K1_N2PEAPEAX@Z @ 0x14011B240
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

char *__fastcall VIDMM_SYSTEM_HEAP::MapViewOfAllocation(
        VIDMM_SYSTEM_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        bool a6,
        void **a7)
{
  char *v7; // r15
  int v11; // edi
  int v12; // esi
  __int64 CurrentProcess; // rax
  __int64 v14; // r14
  int v15; // ebx
  __int64 v16; // rbp
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v18; // eax
  char *v19; // rax
  __int64 v21[9]; // [rsp+60h] [rbp-48h] BYREF
  char *v22; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+20h] BYREF

  v23 = a4;
  v7 = 0LL;
  v22 = 0LL;
  if ( a5 )
  {
    v11 = *((_DWORD *)a2 + 12);
    v21[0] = a3;
    v12 = 2 * !a6 + 2;
    CurrentProcess = PsGetCurrentProcess(this);
    v14 = *(_QWORD *)a2;
    v15 = v12 | 0x400;
    v16 = CurrentProcess;
    if ( (v11 & 1) != 0 )
      v15 = v12;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v18 = (*((__int64 (__fastcall **)(__int64, __int64, char **, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
           + 3))(
            v14,
            v16,
            &v22,
            0LL,
            a4,
            v21,
            &v23,
            2,
            0,
            v15);
    if ( v18 < 0 )
    {
      WdLogSingleEntry1(3LL, v18);
      v19 = v22;
      WdLogGlobalForLineNumber = 552;
    }
    else
    {
      v19 = v22;
      v7 = &v22[a3 - v21[0]];
    }
  }
  else
  {
    v7 = (char *)(a3 + *((_QWORD *)a2 + 1));
    v19 = v7;
  }
  *a7 = v19;
  return v7;
}
