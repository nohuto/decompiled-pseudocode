/*
 * XREFs of ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14001A7BC
 * Callers:
 *     NtFlipObjectConsumerPostMessage @ 0x14001AEA0 (NtFlipObjectConsumerPostMessage.c)
 * Callees:
 *     ?ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlayInfo@@@Z @ 0x140019E2C (-ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlay.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerPostMessage(FlipManagerObject *this, struct CFlipConsumerMessage *a2)
{
  CFlipManager *v4; // rsi
  CPushLock *v5; // rdi
  int v6; // ebp
  unsigned int TracingId; // r12d
  struct PresentedContentOverlayInfo *v9; // r15
  int SessionTokenManager; // r14d
  struct PresentedContentOverlayInfo *v11; // rbx
  __int64 Win32kImportTable; // rax
  struct PresentedContentOverlayInfo *v13; // [rsp+70h] [rbp+18h] BYREF

  v4 = (FlipManagerObject *)((char *)this + 32);
  v5 = (FlipManagerObject *)((char *)this + 40);
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = CPushLock::AcquireLockExclusive(v5);
    if ( v6 >= 0 )
    {
      v13 = 0LL;
      CFlipManager::ConsumerPostMessage(v4, a2, &v13);
      TracingId = CFlipManager::GetTracingId(v4);
      CPushLock::ReleaseLock(v5);
      v9 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        SessionTokenManager = DxgkGetSessionTokenManager(&v13);
        if ( SessionTokenManager < 0
          || (v11 = v13,
              (*(void (__fastcall **)(struct PresentedContentOverlayInfo *))(*(_QWORD *)v13 + 16LL))(v13),
              SessionTokenManager = (*(__int64 (__fastcall **)(struct PresentedContentOverlayInfo *, FlipManagerObject *, struct PresentedContentOverlayInfo *, _QWORD))(*(_QWORD *)v11 + 192LL))(
                                      v11,
                                      this,
                                      v9,
                                      *((_QWORD *)v9 + 3)),
              (*(void (__fastcall **)(struct PresentedContentOverlayInfo *))(*(_QWORD *)v11 + 24LL))(v11),
              (*(void (__fastcall **)(struct PresentedContentOverlayInfo *))(*(_QWORD *)v11 + 8LL))(v11),
              Win32kImportTable = DxgkGetWin32kImportTable(),
              (*(void (__fastcall **)(_QWORD, struct PresentedContentOverlayInfo *, _QWORD, _QWORD))(Win32kImportTable + 392))(
                TracingId,
                v9,
                *((_QWORD *)v9 + 3),
                (unsigned int)SessionTokenManager),
              SessionTokenManager < 0) )
        {
          if ( (int)CPushLock::AcquireLockExclusive(v5) >= 0 )
          {
            CFlipManager::MarkAsLost(v4, (unsigned int)SessionTokenManager, 19LL);
            goto LABEL_4;
          }
        }
      }
    }
  }
  else
  {
    v6 = CPushLock::AcquireLockExclusive(v5);
    if ( v6 >= 0 )
    {
      v13 = 0LL;
      CFlipManager::ConsumerPostMessage(v4, a2, &v13);
LABEL_4:
      CPushLock::ReleaseLock(v5);
    }
  }
  return (unsigned int)v6;
}
