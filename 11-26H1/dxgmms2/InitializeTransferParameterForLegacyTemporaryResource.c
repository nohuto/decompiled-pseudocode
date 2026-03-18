/*
 * XREFs of InitializeTransferParameterForLegacyTemporaryResource @ 0x1400BEC48
 * Callers:
 *     ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@@Z @ 0x1400BF250 (-TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_T.c)
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@PEA_N@Z @ 0x14011BE88 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_T.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

unsigned __int64 __fastcall InitializeTransferParameterForLegacyTemporaryResource(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned __int64 a6)
{
  __int64 v8; // r8
  unsigned __int64 result; // rax
  __int64 LogicalAddress; // rax
  bool v11; // zf
  __int64 v12; // rcx

  if ( a5 )
  {
    if ( (*(_DWORD *)(a4 + 40) & 1) != 0 )
      LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(a2 + 45288));
    else
      LogicalAddress = VidMmiGetLogicalAddress(*(void **)(a3 + 344), a6);
    v11 = (*(_DWORD *)(a4 + 40) & 4) == 0;
    v12 = LogicalAddress;
    result = *(_QWORD *)(a4 + 16);
    a1[1] = v12;
    if ( !v11 )
    {
      a1[4] = result;
      result += 48LL;
    }
    a1[5] = result;
  }
  else
  {
    v8 = *(_QWORD *)(a4 + 64);
    *a1 = *(_QWORD *)(a4 + 56);
    a1[2] = (v8 + 8) & -(__int64)(v8 != 0);
    result = a6;
    a1[3] = a6;
  }
  return result;
}
