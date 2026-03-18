/*
 * XREFs of ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x14001F544
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001EDE0 (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001F0D0 (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z @ 0x1400584A0 (-DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403CBDB4 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkCompositionObject::OpenDwmHandle(PVOID Object, PHANDLE Handle)
{
  char v4; // si
  struct _KPROCESS *v5; // rax
  struct _KPROCESS *v6; // rdi
  unsigned int v7; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  *Handle = (void *)-1LL;
  v4 = 0;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2650;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v10,
          v9,
          v11,
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
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 544LL))() )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2650;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v22,
            v21,
            v23,
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
    if ( !(*(unsigned int (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 448LL))() )
    {
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2650;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v25,
              v24,
              v26,
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
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 456LL))();
      v4 = 1;
    }
  }
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2650;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v13,
          v12,
          v14,
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
  v5 = (struct _KPROCESS *)(*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 584LL))();
  v6 = v5;
  if ( v5 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v5, &ApcState);
    v7 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2650;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v16,
            v15,
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
    (*(void (__fastcall **)(struct _KPROCESS *))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 512LL))(v6);
  }
  else
  {
    v7 = -1073741823;
  }
  if ( v4 )
  {
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
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 496LL))();
  }
  return v7;
}
