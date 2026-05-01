/*
 * XREFs of ??$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@_EP85@EAAJ02@_E@Details@WRL@Microsoft@@YAJPEAPEAVIInputHostLayoutChangesHandler@Shell@Internal@Windows@@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP87@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@33@_E$$QEAP87@EAAJ24@_E@Z @ 0x1801E9B98
 * Callers:
 *     ?RegisterTouchKeyboardEventHandlers@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801E9A8C (-RegisterTouchKeyboardEventHandlers@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801D1180 (-InternalRelease@-$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@22@ZP84@EAAJ13@Z@Z @ 0x18039F27C (--$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@S.c)
 *     ??0IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAA@XZ @ 0x1803A49FC (--0IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall ___MakeAndInitialize_VIInputHostLayoutChangesHandler_Shell_Internal_Windows__V1234_PEAVUndockedSearchAppExperienceManager__P85_EAAJPEAUHWND____PEAUtagRECT__W4IHM_DISPLAY_MODE__11__EP85_EAAJ02__E_Details_WRL_Microsoft__YAJPEAPEAVIInputHostLayoutChangesHandler_Shell_Internal_Windows____QEAPEAVUndockedSearchAppExperienceManager____QEAP87_EAAJPEAUHWND____PEAUtagRECT__W4IHM_DISPLAY_MODE__33__E__QEAP87_EAAJ24__E_Z(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3,
        __int128 *a4)
{
  void *v8; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rdx
  __int128 v13; // xmm1
  __int64 v14; // rbx
  volatile int *v15; // rdx
  int v16; // edi
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  __int128 v21; // [rsp+40h] [rbp-28h] BYREF
  void *v22; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v8;
  if ( !v8 )
    return 2147942414LL;
  v10 = Windows::Internal::Shell::IInputHostLayoutChangesHandler::IInputHostLayoutChangesHandler((Windows::Internal::Shell::IInputHostLayoutChangesHandler *)v8);
  v11 = *a4;
  v12 = *a2;
  v13 = *a3;
  v22 = 0LL;
  v20 = v11;
  v14 = v10;
  v21 = v13;
  v16 = Windows::Internal::Shell::IInputHostLayoutChangesHandler::RuntimeClassInitialize<UndockedSearchAppExperienceManager>(
          v10,
          v12,
          &v21,
          &v20,
          v10);
  if ( v16 >= 0 )
  {
    if ( v14 )
    {
      v17 = *(_QWORD *)(v14 + 32);
      while ( v17 >= 0 )
      {
        if ( (_DWORD)v17 != 0x7FFFFFFF )
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 32), v17 + 1, v17);
          if ( v18 != v17 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v17 + 16), v15);
    }
LABEL_11:
    *a1 = v14;
    v16 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(&v19);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v22);
  return (unsigned int)v16;
}
