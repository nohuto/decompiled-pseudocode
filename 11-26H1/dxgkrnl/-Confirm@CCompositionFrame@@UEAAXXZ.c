/*
 * XREFs of ?Confirm@CCompositionFrame@@UEAAXXZ @ 0x14001E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionFrame::Confirm(CCompositionFrame *this)
{
  CCompositionFrame *v1; // rbx
  CCompositionFrame *v2; // rdi
  CCompositionFrame **v4; // rbx
  CCompositionFrame **v5; // rax
  CCompositionFrame *v6; // rcx
  __int64 v7; // rbp
  _QWORD *v8; // rsi
  char v9; // di
  _QWORD *v10; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v12; // rbx
  struct CFlipManagerSignal *v13; // r14
  __int64 v14; // r15
  CCompositionFrame **v15; // rdi
  CCompositionFrame *v16; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = (CCompositionFrame *)((char *)this + 248);
  *((_DWORD *)this + 48) = 1;
  v2 = (CCompositionFrame *)*((_QWORD *)this + 31);
  if ( v2 != (CCompositionFrame *)((char *)this + 248) )
  {
    do
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v2 - 1) + 40LL))((__int64)v2 - 8);
      v2 = *(CCompositionFrame **)v2;
    }
    while ( v2 != v1 );
  }
  v4 = (CCompositionFrame **)((char *)this + 264);
  v5 = (CCompositionFrame **)*((_QWORD *)this + 33);
  if ( v5[1] != (CCompositionFrame *)((char *)this + 264) )
    goto LABEL_25;
  v6 = *v5;
  if ( *((CCompositionFrame ***)*v5 + 1) != v5 )
    goto LABEL_25;
  *v4 = v6;
  *((_QWORD *)v6 + 1) = v4;
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      v15 = v5 - 6;
      (*((void (__fastcall **)(CCompositionFrame **))*(v5 - 1) + 7))(v5 - 1);
      ObfDereferenceObject(v15);
      v5 = (CCompositionFrame **)*v4;
      if ( *((CCompositionFrame ***)*v4 + 1) != v4 )
        break;
      v16 = *v5;
      if ( *((CCompositionFrame ***)*v5 + 1) != v5 )
        break;
      *v4 = v16;
      *((_QWORD *)v16 + 1) = v4;
      if ( v5 == v4 )
        goto LABEL_5;
    }
LABEL_25:
    __fastfail(3u);
  }
LABEL_5:
  v7 = *((_QWORD *)this + 23);
  v8 = (_QWORD *)((char *)this + 280);
  v9 = 0;
  v17 = 0LL;
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v7 )
    {
      DxgkGetSessionTokenManager(&v17);
      if ( v17 )
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17);
    }
  }
  while ( 1 )
  {
    v10 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    v13 = (struct CFlipManagerSignal *)(v10 - 1);
    if ( !v10 )
      v13 = 0LL;
    v14 = *((_QWORD *)v13 + 6);
    *((_QWORD *)v13 + 6) = 0LL;
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v14 + 40)) >= 0 )
    {
      CFlipManager::ProcessSignal((CFlipManager *)(v14 + 32), v13, v7, 1);
      CPushLock::ReleaseLock((CPushLock *)(v14 + 40));
    }
    ObfDereferenceObject((PVOID)v14);
  }
  IsEnabledDeviceUsageNoInline = Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline();
  v12 = v17;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
}
