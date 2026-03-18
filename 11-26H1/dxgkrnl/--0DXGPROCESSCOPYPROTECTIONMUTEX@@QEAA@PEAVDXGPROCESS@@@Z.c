/*
 * XREFs of ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003D3C0
 * Callers:
 *     DxgkSetDisplayMode @ 0x1402D1030 (DxgkSetDisplayMode.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DXGPROCESSCOPYPROTECTIONMUTEX *__fastcall DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
        DXGPROCESSCOPYPROTECTIONMUTEX *this,
        struct DXGPROCESS *a2)
{
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  int v7; // r8d

  *((_BYTE *)this + 8) = 0;
  *(_QWORD *)this = (char *)a2 + 360;
  if ( a2 == (struct DXGPROCESS *)-360LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          628,
          v4,
          v5,
          0LL,
          2,
          -1,
          (__int64)L"m_pMutex != NULL",
          628LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( DXGFASTMUTEX::IsOwner(*(DXGFASTMUTEX **)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          635,
          v6,
          v7,
          0LL,
          2,
          -1,
          (__int64)L"!m_pMutex->IsOwner()",
          635LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return this;
}
