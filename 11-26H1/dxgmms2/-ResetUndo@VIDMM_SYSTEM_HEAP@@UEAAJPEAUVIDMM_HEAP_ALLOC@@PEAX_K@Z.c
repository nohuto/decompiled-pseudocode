/*
 * XREFs of ?ResetUndo@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_K@Z @ 0x1400AE2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_SYSTEM_HEAP::ResetUndo(
        VIDMM_SYSTEM_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        void *a3,
        __int64 a4)
{
  int v6; // ebx
  __int64 CurrentProcess; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v14; // rax
  int v15; // eax
  void *v16; // rsi
  __int64 v17; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v18; // rax
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  void *v21; // [rsp+A8h] [rbp+38h] BYREF
  void *v22; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+48h] BYREF

  v23 = a4;
  v22 = a3;
  v21 = 0LL;
  if ( !a3 )
  {
    v6 = *((_DWORD *)a2 + 12) & 1;
    v20 = 0LL;
    CurrentProcess = PsGetCurrentProcess(this);
    v8 = *(_QWORD *)a2;
    v9 = CurrentProcess;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v11 = (*((__int64 (__fastcall **)(__int64, __int64, void **, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, unsigned int))VirtualMemoryInterface
           + 3))(
            v8,
            v9,
            &v21,
            0LL,
            a4,
            &v20,
            &v23,
            2,
            0,
            ((v6 ^ 1u) << 10) + 4);
    v12 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(3LL, v11);
      WdLogGlobalForLineNumber = 458;
      goto LABEL_8;
    }
    v22 = v21;
  }
  v14 = DxgkGetVirtualMemoryInterface();
  v15 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, __int64 *, int, int))v14)(
          -1LL,
          &v22,
          0LL,
          &v23,
          0x1000000,
          4);
  v12 = v15;
  if ( v15 >= 0 )
  {
    v12 = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v15);
    WdLogGlobalForLineNumber = 472;
  }
LABEL_8:
  v16 = v21;
  if ( v21 )
  {
    v17 = PsGetCurrentProcess(v13);
    v18 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, void *))v18 + 4))(v17, v16);
  }
  return v12;
}
