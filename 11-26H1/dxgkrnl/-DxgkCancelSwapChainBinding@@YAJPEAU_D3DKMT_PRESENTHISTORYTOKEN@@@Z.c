/*
 * XREFs of ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400A2AE4
 * Callers:
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234070 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140331FD4 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x140332AC8 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x14001F9F0 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?ResolveHandle@CompositionTokenObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400454AC (-ResolveHandle@CompositionTokenObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?Discard@CompositionTokenObject@@QEAAXXZ @ 0x14004D7E4 (-Discard@CompositionTokenObject@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkCancelSwapChainBinding(struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  int v2; // ebx
  __int64 Win32kImportTable; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  struct _KPROCESS *v9; // rax
  struct _KPROCESS *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  void *FenceValue; // rsi
  CompositionTokenObject *v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rax
  void *hCompSurf; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  PVOID Object; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (**)(void))(Win32kImportTable + 520))();
  v4 = DxgkGetWin32kImportTable();
  if ( (*(unsigned int (**)(void))(v4 + 552))()
    || !(unsigned int)IsTokenManagerReady()
    || (v5 = DxgkGetWin32kImportTable(), !(*(unsigned int (**)(void))(v5 + 536))()) )
  {
    v2 = -1071775730;
  }
  v6 = DxgkGetWin32kImportTable();
  (*(void (**)(void))(v6 + 568))();
  if ( v2 >= 0 )
  {
    v7 = DxgkGetWin32kImportTable();
    (*(void (**)(void))(v7 + 456))();
    v8 = DxgkGetWin32kImportTable();
    v9 = (struct _KPROCESS *)(*(__int64 (**)(void))(v8 + 584))();
    v10 = v9;
    if ( v9 )
    {
      KeStackAttachProcess(v9, &ApcState);
      if ( a1->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
      {
        FenceValue = (void *)a1->Token.Flip.FenceValue;
        if ( FenceValue )
        {
          Object = 0LL;
          v2 = CompositionTokenObject::ResolveHandle(FenceValue, v11, v12, (struct CompositionTokenObject **)&Object);
          if ( v2 >= 0 )
          {
            v14 = (CompositionTokenObject *)Object;
            v15 = *((_QWORD *)Object + 15);
            if ( v15 )
            {
              v16 = DxgkGetWin32kImportTable();
              (*(void (__fastcall **)(__int64))(v16 + 64))(v15);
            }
            CompositionTokenObject::Discard(v14);
            ObfDereferenceObject(v14);
            v2 = ObCloseHandle(FenceValue, 1);
            if ( v2 >= 0 )
              a1->Token.Flip.FenceValue = 0LL;
          }
        }
      }
      else if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
      {
        hCompSurf = (void *)a1->Token.Flip.hCompSurf;
        if ( hCompSurf )
        {
          v2 = ObCloseHandle(hCompSurf, 1);
          if ( v2 >= 0 )
            a1->Token.Flip.hCompSurf = 0LL;
        }
      }
      KeUnstackDetachProcess(&ApcState);
      v18 = DxgkGetWin32kImportTable();
      (*(void (__fastcall **)(struct _KPROCESS *))(v18 + 512))(v10);
    }
    v19 = DxgkGetWin32kImportTable();
    (*(void (**)(void))(v19 + 496))();
  }
  return (unsigned int)v2;
}
