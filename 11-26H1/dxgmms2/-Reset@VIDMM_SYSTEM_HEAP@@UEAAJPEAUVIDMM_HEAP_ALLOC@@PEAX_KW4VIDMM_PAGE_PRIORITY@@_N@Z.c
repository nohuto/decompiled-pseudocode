/*
 * XREFs of ?Reset@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F8560
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z @ 0x1400F7960 (-VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z.c)
 */

__int64 VIDMM_SYSTEM_HEAP::Reset(__int64 a1, __int64 *a2, ...)
{
  ULONG_PTR v2; // r14
  int v4; // ebx
  __int64 CurrentProcess; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v9; // eax
  unsigned int v10; // edi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  void *v14; // rsi
  __int64 v15; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v16; // rax
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF
  void *v19; // [rsp+A8h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp+40h] BYREF
  va_list BaseAddressa; // [rsp+B0h] [rbp+40h]
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+B8h] [rbp+48h] BYREF
  va_list NumberOfBytesToUnlocka; // [rsp+B8h] [rbp+48h]
  __int64 v24; // [rsp+C0h] [rbp+50h]
  __int64 v25; // [rsp+C8h] [rbp+58h]
  va_list va2; // [rsp+D0h] [rbp+60h] BYREF

  va_start(va2, a2);
  va_start(NumberOfBytesToUnlocka, a2);
  va_start(BaseAddressa, a2);
  BaseAddress = va_arg(NumberOfBytesToUnlocka, PVOID);
  va_copy(va2, NumberOfBytesToUnlocka);
  NumberOfBytesToUnlock = va_arg(va2, _QWORD);
  v24 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, _QWORD);
  v19 = 0LL;
  v2 = NumberOfBytesToUnlock;
  if ( !BaseAddress )
  {
    v4 = a2[6] & 1;
    v18 = 0LL;
    CurrentProcess = PsGetCurrentProcess(a1);
    v6 = *a2;
    v7 = CurrentProcess;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v9 = (*((__int64 (__fastcall **)(__int64, __int64, void **, _QWORD, ULONG_PTR, __int64 *, ULONG_PTR *, int, _DWORD, unsigned int))VirtualMemoryInterface
          + 3))(
           v6,
           v7,
           &v19,
           0LL,
           v2,
           &v18,
           (ULONG_PTR *)NumberOfBytesToUnlocka,
           2,
           0,
           ((v4 ^ 1u) << 10) + 4);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(3LL, v9);
      WdLogGlobalForLineNumber = 372;
      goto LABEL_8;
    }
    BaseAddress = v19;
  }
  v11 = DxgkGetVirtualMemoryInterface();
  v12 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, ULONG_PTR *, int, int))v11)(
          -1LL,
          (PVOID *)BaseAddressa,
          0LL,
          (ULONG_PTR *)NumberOfBytesToUnlocka,
          0x80000,
          4);
  v10 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 386;
  }
  else
  {
    VidMmiSetPriorityForMemoryPages((__int64)BaseAddress, NumberOfBytesToUnlock, v24);
    if ( (_BYTE)v25 )
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)BaseAddressa, (PSIZE_T)NumberOfBytesToUnlocka, 1u);
    v10 = 0;
  }
LABEL_8:
  v14 = v19;
  if ( v19 )
  {
    v15 = PsGetCurrentProcess(v13);
    v16 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, void *))v16 + 4))(v15, v14);
  }
  return v10;
}
