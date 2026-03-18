/*
 * XREFs of ?VidMmQueryAllocationContiguity@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@_K1PEA_K2@Z @ 0x1400B4BC8
 * Callers:
 *     ?DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x140099884 (-DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z.c)
 *     CheckForLargePageUpgrade @ 0x1400B1318 (CheckForLargePageUpgrade.c)
 * Callees:
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z @ 0x14003B56C (--0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     McTemplateK0txx_EtwWriteTransfer @ 0x14004F7A4 (McTemplateK0txx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall VidMmQueryAllocationContiguity(
        const struct VIDMM_PHYSICAL_ALLOC *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int8 v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v10; // r8
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  int v14; // ecx
  __int64 v16; // [rsp+30h] [rbp-A1h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-99h]
  unsigned __int64 v18; // [rsp+40h] [rbp-91h]
  _QWORD MemoryInformation[5]; // [rsp+48h] [rbp-89h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v21[64]; // [rsp+A0h] [rbp-31h] BYREF

  *a4 = 0LL;
  v6 = 1;
  v7 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  v10 = *(_QWORD *)a1;
  v16 = v10;
  BaseAddress = *(PVOID *)(*(_QWORD *)(v10 + 48) + 16LL);
  v11 = a3 & 0xFFFFFFFFFFFF0000uLL;
  v12 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v18 = (v11 - v12) >> 16;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (byte_14008A201 & 1) != 0 )
  {
    McTemplateK0pp_EtwWriteTransfer(
      v11 - v12,
      &VidMmUpgradeQueryAllocationContiguity,
      v10,
      (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL,
      v11 - v12);
    v10 = v16;
  }
  if ( v12 < v11 )
  {
    VIDMM_PROCESS_AUTOATTACH::VIDMM_PROCESS_AUTOATTACH(
      (VIDMM_PROCESS_AUTOATTACH *)v21,
      *(struct VIDMM_PROCESS **)(*(_QWORD *)(v10 + 48) + 8LL),
      1);
    while ( v12 != v11 )
    {
      LODWORD(v16) = 0;
      MemoryInformation[4] = &v16;
      MemoryInformation[3] = 0LL;
      MemoryInformation[0] = v12;
      MemoryInformation[1] = 0x10000LL;
      MemoryInformation[2] = 0x10000LL;
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BaseAddress,
             MemoryBasicVlmInformation|0x8,
             MemoryInformation,
             0x28uLL,
             0LL) < 0 )
      {
        ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryBasicVlmInformation|0x8,
          MemoryInformation,
          0x28uLL,
          0LL);
        KeUnstackDetachProcess(&ApcState);
        v6 = 0;
        VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v21);
        goto LABEL_18;
      }
      v13 = v7 + 1;
      v14 = v16 & 3;
      v12 += 0x10000LL;
      if ( v14 != 1 )
        v13 = v7;
      v7 = v13;
      if ( v14 != 1 )
        ++v8;
    }
    VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v21);
    if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 64) & 0x10) != 0 && !v8 )
    {
      v8 = v7;
      v7 = (unsigned int)v18 - v7;
    }
    *a4 = v7;
    *a5 = v8;
  }
  else
  {
    v6 = 0;
  }
LABEL_18:
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0txx_EtwWriteTransfer(*a4, a2, v10, v6, *a4, *a5);
  return v6;
}
