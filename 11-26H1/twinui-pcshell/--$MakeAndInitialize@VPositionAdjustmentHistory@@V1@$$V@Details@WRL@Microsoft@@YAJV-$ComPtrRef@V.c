/*
 * XREFs of ??$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@@012@@Z @ 0x1800D8688
 * Callers:
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8D44 (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D8604 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D8630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyRec.c)
 *     ??0PositionAdjustmentHistory@@QEAA@XZ @ 0x1801EC5F0 (--0PositionAdjustmentHistory@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PositionAdjustmentHistory,PositionAdjustmentHistory,>(
        __int64 *a1)
{
  unsigned int v2; // edi
  PositionAdjustmentHistory *v3; // rax
  PositionAdjustmentHistory *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // r8
  volatile int *v7; // rdx

  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(a1);
  v2 = 0;
  *a1 = 0LL;
  v3 = (PositionAdjustmentHistory *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = PositionAdjustmentHistory::PositionAdjustmentHistory(v3);
    if ( v4 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((PositionAdjustmentHistory *)((char *)v4 + 20), v5);
      *a1 = v6;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapter,IMessageProxyListener>::Release(
        v6,
        v7);
    }
    else
    {
      *a1 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
