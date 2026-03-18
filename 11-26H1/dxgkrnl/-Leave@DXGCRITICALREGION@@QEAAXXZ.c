/*
 * XREFs of ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x14003B9D8
 * Callers:
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1401A6A7C (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGCRITICALREGION::Leave(DXGCRITICALREGION *this)
{
  int v2; // edx
  int v3; // r8d

  if ( !*((_BYTE *)this + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 743;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          743,
          v2,
          v3,
          0LL,
          2,
          -1,
          (__int64)L"m_Entered",
          743LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *((_BYTE *)this + 1) = 0;
  KeLeaveCriticalRegion();
}
