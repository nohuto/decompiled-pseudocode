/*
 * XREFs of ?EnterUpdatePageTable@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@_N@Z @ 0x140115F18
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400D5AD4 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EnterUpdatePageTable(struct VIDMM_GLOBAL *a1, struct VIDMM_SYSTEM_ADDRESS_CONTEXT *a2, char a3)
{
  int v3; // eax

  v3 = *((unsigned __int8 *)a1 + 41069);
  if ( (_BYTE)v3 && !a3 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 85LL, 1LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x140115F80LL);
  }
  *((_DWORD *)a2 + 5) = v3;
  *((_BYTE *)a1 + 41069) = 1;
}
