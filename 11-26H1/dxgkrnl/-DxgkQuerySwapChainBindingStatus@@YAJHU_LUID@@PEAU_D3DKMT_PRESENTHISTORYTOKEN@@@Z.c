/*
 * XREFs of ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001EDE0
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140331FD4 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403CBDB4 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001F0D0 (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x14001F4D4 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x14001F544 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x14001F9F0 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140045760 (-NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkQuerySwapChainBindingStatus(int a1, struct _LUID a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v3; // ebx
  void *FenceValue; // rbp
  NTSTATUS v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  __int64 Win32kImportTable; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  CompositionTokenObject *v15; // rsi
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  UINT64 CompositionSyncKey; // rsi
  __int64 v22; // rax
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  void *Handle; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  if ( a3->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
  {
    FenceValue = (void *)a3->Token.Flip.FenceValue;
    if ( !FenceValue )
      return v3;
    v9 = 0;
    Handle = 0LL;
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2650;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v16,
            a2.LowPart,
            v17,
            0LL,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2650LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    (*(void (__fastcall **)(_QWORD, struct _LUID))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 520LL))(
      *(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL),
      a2);
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2650;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v19,
            v18,
            v20,
            0LL,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2650LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    v10 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 552LL))();
    if ( !a1
      || v10
      || !(unsigned int)IsTokenManagerReady()
      || (Win32kImportTable = DxgkGetWin32kImportTable(v11), !(*(unsigned int (**)(void))(Win32kImportTable + 536))()) )
    {
      v9 = -1071775730;
    }
    v13 = DxgkGetWin32kImportTable(v11);
    (*(void (**)(void))(v13 + 568))();
    if ( v9 >= 0 )
    {
      Object = 0LL;
      v15 = 0LL;
      v9 = ObReferenceObjectByHandle(FenceValue, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
      if ( v9 < 0
        || (v15 = (CompositionTokenObject *)Object,
            (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 2) )
      {
        if ( v9 >= 0 )
        {
          v9 = CompositionTokenObject::MarkPending(v15);
          if ( v9 >= 0 )
          {
            v9 = DxgkCompositionObject::OpenDwmHandle(v15, &Handle);
            if ( v9 >= 0 )
              a3->Token.Flip.FenceValue = (UINT64)Handle;
          }
          ObfDereferenceObject(v15);
          if ( v9 >= 0 )
            return (unsigned int)v9;
        }
      }
      else
      {
        ObfDereferenceObject(v15);
        v9 = -1073741788;
      }
    }
    CompositionSyncKey = a3->Token.Flip.CompositionSyncKey;
    if ( CompositionSyncKey )
    {
      v22 = DxgkGetWin32kImportTable(v14);
      (*(void (__fastcall **)(UINT64))(v22 + 64))(CompositionSyncKey);
    }
    return (unsigned int)v9;
  }
  if ( a3->Model == D3DKMT_PM_FLIPMANAGER )
    return (unsigned int)NotifyPendingFlipManagerPresent(a1, a2, a3);
  else
    return (unsigned int)NotifyPendingFlipPresent(a1, a2, a3);
}
