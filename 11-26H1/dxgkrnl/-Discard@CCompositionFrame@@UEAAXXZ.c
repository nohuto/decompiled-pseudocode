/*
 * XREFs of ?Discard@CCompositionFrame@@UEAAXXZ @ 0x14001E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001EB30 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x14001EB9C (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionFrame::Discard(CCompositionFrame *this)
{
  __int64 (__fastcall ***i)(_QWORD); // rdi
  CLegacyTokenBuffer *v3; // rdi
  __int64 v4; // rsi
  CLegacyTokenBuffer **v5; // rax
  __int64 v6; // rcx
  CCompositionFrame **v7; // rsi
  CCompositionFrame **v8; // rax
  CCompositionFrame *v9; // rcx
  CCompositionFrame **v10; // rdi
  CCompositionFrame *v11; // rcx
  CCompositionFrame **v12; // rsi
  CCompositionFrame **v13; // rax
  CCompositionFrame *v14; // rcx
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  char v17; // si
  _QWORD *v18; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v20; // rdi
  struct CFlipManagerSignal *v21; // r14
  __int64 v22; // r15
  CCompositionFrame **v23; // rdi
  CCompositionFrame *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  for ( i = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 25); i; *((_QWORD *)this + 25) = i )
  {
    i = (__int64 (__fastcall ***)(_QWORD))(**i)(i);
    LOBYTE(v25) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 25) + 8LL))(*((_QWORD *)this + 25), v25);
  }
  v3 = (CLegacyTokenBuffer *)*((_QWORD *)this + 26);
  *((_DWORD *)this + 48) = 3;
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 37);
    CLegacyTokenBuffer::Reset(v3);
    CTokenManager::AcquireTokenManagerLock((CTokenManager *)v4);
    if ( *(_DWORD *)(v4 + 176) <= 3u )
    {
      v5 = (CLegacyTokenBuffer **)(v4 + 160);
      v6 = *(_QWORD *)(v4 + 160);
      if ( *(_QWORD *)(v6 + 8) != v4 + 160 )
        goto LABEL_38;
      *(_QWORD *)v3 = v6;
      *((_QWORD *)v3 + 1) = v5;
      *(_QWORD *)(v6 + 8) = v3;
      *v5 = v3;
      v3 = 0LL;
      ++*(_DWORD *)(v4 + 176);
    }
    *(_QWORD *)(v4 + 96) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 88, 0LL);
    if ( v3 )
    {
      CLegacyTokenBuffer::Reset(v3);
      ExFreePoolWithTag(v3, 0);
    }
    *((_QWORD *)this + 26) = 0LL;
  }
  v7 = (CCompositionFrame **)((char *)this + 248);
  *((_BYTE *)this + 216) = 0;
  v8 = (CCompositionFrame **)*((_QWORD *)this + 31);
  if ( v8[1] != (CCompositionFrame *)((char *)this + 248) || (v9 = *v8, *((CCompositionFrame ***)*v8 + 1) != v8) )
LABEL_38:
    __fastfail(3u);
  *v7 = v9;
  for ( *((_QWORD *)v9 + 1) = v7; v8 != v7; *((_QWORD *)v11 + 1) = v7 )
  {
    v10 = v8 - 1;
    (*((void (__fastcall **)(CCompositionFrame **))*(v8 - 1) + 7))(v8 - 1);
    (*(void (__fastcall **)(CCompositionFrame **, __int64))*v10)(v10, 1LL);
    v8 = (CCompositionFrame **)*v7;
    if ( *((CCompositionFrame ***)*v7 + 1) != v7 )
      goto LABEL_38;
    v11 = *v8;
    if ( *((CCompositionFrame ***)*v8 + 1) != v8 )
      goto LABEL_38;
    *v7 = v11;
  }
  v12 = (CCompositionFrame **)((char *)this + 264);
  v13 = (CCompositionFrame **)*((_QWORD *)this + 33);
  if ( v13[1] != (CCompositionFrame *)((char *)this + 264) )
    goto LABEL_38;
  v14 = *v13;
  if ( *((CCompositionFrame ***)*v13 + 1) != v13 )
    goto LABEL_38;
  *v12 = v14;
  for ( *((_QWORD *)v14 + 1) = v12; v13 != v12; *((_QWORD *)v24 + 1) = v12 )
  {
    v23 = v13 - 6;
    (*((void (__fastcall **)(CCompositionFrame **))*(v13 - 1) + 7))(v13 - 1);
    ObfDereferenceObject(v23);
    v13 = (CCompositionFrame **)*v12;
    if ( *((CCompositionFrame ***)*v12 + 1) != v12 )
      goto LABEL_38;
    v24 = *v13;
    if ( *((CCompositionFrame ***)*v13 + 1) != v13 )
      goto LABEL_38;
    *v12 = v24;
  }
  v15 = *((_QWORD *)this + 23);
  v16 = (_QWORD *)((char *)this + 280);
  v17 = 0;
  v26 = 0LL;
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v15 )
    {
      DxgkGetSessionTokenManager(&v26);
      if ( v26 )
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
    }
  }
  while ( 1 )
  {
    v18 = (_QWORD *)*v16;
    if ( (_QWORD *)*v16 == v16 )
      break;
    v21 = (struct CFlipManagerSignal *)(v18 - 1);
    if ( !v18 )
      v21 = 0LL;
    v22 = *((_QWORD *)v21 + 6);
    *((_QWORD *)v21 + 6) = 0LL;
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v22 + 40)) >= 0 )
    {
      CFlipManager::ProcessSignal((CFlipManager *)(v22 + 32), v21, v15, 1);
      CPushLock::ReleaseLock((CPushLock *)(v22 + 40));
    }
    ObfDereferenceObject((PVOID)v22);
  }
  IsEnabledDeviceUsageNoInline = Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline();
  v20 = v26;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  }
}
