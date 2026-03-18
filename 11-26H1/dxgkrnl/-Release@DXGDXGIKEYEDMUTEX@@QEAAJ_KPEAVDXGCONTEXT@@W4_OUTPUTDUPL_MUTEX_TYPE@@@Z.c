/*
 * XREFs of ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B2CF4
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1402B0E60 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402B1274 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402B2FA4 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::Release(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  unsigned __int64 v8; // r9
  int v9; // esi
  __int64 v11; // r9
  const wchar_t *v12; // r9
  size_t Size; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  _DWORD v15[4]; // [rsp+50h] [rbp-28h] BYREF

  v4 = a4;
  if ( a3 )
  {
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*(_QWORD *)(a1 + 8) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 730;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pContext == NULL) || (m_pProducerDevice->GetRenderCore()->IsCoreResourceSharedOwner())",
        730LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = *(_QWORD *)(a1 + 120);
    if ( a3 != v11 )
    {
      WdLogSingleEntry3(1LL, a3, a1, v11);
      v14 = *(_QWORD *)(a1 + 120);
      WdLogGlobalForLineNumber = 735;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Context 0x%I64x does not own DxgiKeyedMutex 0x%I64x, context 0x%I64x does",
        a3,
        a1,
        v14,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( !*(_DWORD *)(a1 + 128) )
  {
    WdLogSingleEntry1(1LL);
    WdLogGlobalForLineNumber = 740;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DxgiKeyedMutex 0x%I64x has not been acquired",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a3
    && (++*(_QWORD *)(a1 + 112),
        v15[0] = *(_DWORD *)(a1 + 96),
        HIDWORD(Size) = 0,
        v9 = SignalSynchronizationObjectInternal(1LL, v15, 0LL),
        v9 < 0) )
  {
    WdLogSingleEntry1(2LL);
    v12 = L"Failed to submit GPU signal for DxgiKeyedMutex 0x%I64x";
    WdLogGlobalForLineNumber = 777;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_DWORD *)(a1 + 128) = 0;
    LODWORD(Size) = 0;
    v9 = DXGKEYEDMUTEX::ReleaseSync(
           *(DXGKEYEDMUTEX **)(a1 + 24 * v4 + 24),
           *(_DWORD *)(a1 + 24 * v4 + 16),
           a2,
           v8,
           0LL,
           Size,
           0);
    if ( v9 >= 0 )
      return 0LL;
    WdLogSingleEntry1(2LL);
    v12 = L"Failed to release DxgiKeyedMutex 0x%I64x";
    WdLogGlobalForLineNumber = 790;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, a1, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v9;
}
