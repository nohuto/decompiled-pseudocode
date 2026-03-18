/*
 * XREFs of CreatePhysicalAllocation_0 @ 0x140112F14
 * Callers:
 *     ?CreatePhysicalAllocation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K11W4_DXGK_PAGESIZE@@2IKKU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x140099010 (-CreatePhysicalAllocation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CreatePhysicalAllocation_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10)
{
  int v11; // ebp
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  __int64 result; // rax
  unsigned int v19; // edx
  __int64 v20; // rcx

  v11 = a8;
  if ( (*(_BYTE *)(a1 + 556) & 0x48) != 0
    && (v16 = *(_DWORD *)(a2 + 24), v17 = 1 << *(_BYTE *)(a1 + 144), v11 = v17 | a8, (v16 & 1) != 0)
    && (**(_DWORD **)(a2 + 368) & 0x8000) == 0 )
  {
    v15 = v17 | a7;
  }
  else
  {
    v15 = a7;
  }
  result = operator new(224LL, 0x6D4D6956u, 64LL);
  if ( result )
  {
    v19 = *(_DWORD *)(result + 52) & 0xFFFFFFFE;
    *(_QWORD *)result = a2;
    *(_QWORD *)(result + 8) = a3;
    *(_QWORD *)(result + 16) = a4;
    *(_QWORD *)(result + 24) = a5;
    *(_DWORD *)(result + 32) = a6;
    *(_DWORD *)(result + 44) = a9;
    *(_DWORD *)(result + 52) = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(4 * a10)) & 0xFC | 2;
    *(_DWORD *)(result + 36) = v11;
    *(_DWORD *)(result + 40) = v15;
  }
  else
  {
    _InterlockedIncrement(&dword_14008A888);
    WdLogSingleEntry2(6LL, a2, a1);
    WdLogGlobalForLineNumber = 955;
    DxgkLogInternalTriageEvent(v20, 262145LL);
    return 0LL;
  }
  return result;
}
