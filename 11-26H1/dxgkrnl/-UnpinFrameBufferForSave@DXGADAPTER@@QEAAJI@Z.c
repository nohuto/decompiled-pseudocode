/*
 * XREFs of ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1403F6678
 * Callers:
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1400347B0 (DxgkUnpinFrameBufferForSaveCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14003EF40 (-SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x14003F6B0 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x1400533B0 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::UnpinFrameBufferForSave(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  struct _MDL *v5; // r14
  struct _DXGK_ADL *v6; // rdx
  char *v7; // rbx
  __int64 result; // rax

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 74) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11660;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UnpinFrameBufferForSave Invalid physical adapter index. Index=%u",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v3 = *((_QWORD *)this + 379);
    v4 = 352LL * a2;
    v5 = *(struct _MDL **)(v4 + v3 + 72);
    if ( !v5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 11666;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pMdl != nullptr", 11666LL, 0LL, 0LL, 0LL, 0LL);
    }
    v6 = *(struct _DXGK_ADL **)(v4 + v3 + 80);
    if ( v6 )
      SysMmFreeAdl(*(struct SYSMM_ADAPTER_OBJECT **)(v4 + v3 + 96), v6);
    SysMmClosePhysicalObject(*(struct SYSMM_ADAPTER_OBJECT **)(v4 + v3 + 96));
    SysMmUnreferencePhysicalObject(*(struct SYSMM_PHYSICAL_OBJECT **)(v4 + v3 + 88));
    v7 = (char *)v5->StartVa + v5->ByteOffset;
    MmUnlockPages(v5);
    IoFreeMdl(v5);
    MmUnmapViewInSystemSpace(v7);
    result = 0LL;
    *(_QWORD *)(v4 + v3 + 88) = 0LL;
    *(_QWORD *)(v4 + v3 + 96) = 0LL;
    *(_QWORD *)(v4 + v3 + 72) = 0LL;
    *(_QWORD *)(v4 + v3 + 80) = 0LL;
  }
  return result;
}
