/*
 * XREFs of ?Release@CCompositionFrame@@UEAAJXZ @ 0x14001E210
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

__int64 __fastcall CCompositionFrame::Release(volatile signed __int32 *P)
{
  unsigned __int32 v2; // ebx
  bool v4; // zf
  __int64 (__fastcall ***i)(_QWORD); // rdi
  CLegacyTokenBuffer *v6; // rdi
  __int64 v7; // rbp
  CLegacyTokenBuffer **v8; // rax
  __int64 v9; // rcx
  PVOID *v10; // r14
  PVOID *v11; // rax
  PVOID v12; // rcx
  PVOID *v13; // rdi
  _QWORD *v14; // rcx
  PVOID *v15; // r14
  PVOID *v16; // rax
  PVOID v17; // rcx
  _QWORD *v18; // rdi
  __int64 v19; // r15
  char v20; // bp
  _QWORD *v21; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v23; // r14
  struct CFlipManagerSignal *v24; // r13
  __int64 v25; // r12
  PVOID *v26; // rdi
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // [rsp+60h] [rbp+8h] BYREF
  CPushLock *v30; // [rsp+68h] [rbp+10h]

  v2 = _InterlockedDecrement(P + 2);
  if ( !v2 && P )
  {
    v4 = *((_DWORD *)P + 48) == 3;
    *(_QWORD *)P = &CCompositionFrame::`vftable';
    if ( !v4 )
    {
      for ( i = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)P + 25); i; *((_QWORD *)P + 25) = i )
      {
        i = (__int64 (__fastcall ***)(_QWORD))(**i)(i);
        LOBYTE(v28) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)P + 25) + 8LL))(*((_QWORD *)P + 25), v28);
      }
      v6 = (CLegacyTokenBuffer *)*((_QWORD *)P + 26);
      *((_DWORD *)P + 48) = 3;
      if ( v6 )
      {
        v7 = *((_QWORD *)P + 37);
        CLegacyTokenBuffer::Reset(v6);
        CTokenManager::AcquireTokenManagerLock((CTokenManager *)v7);
        if ( *(_DWORD *)(v7 + 176) <= 3u )
        {
          v8 = (CLegacyTokenBuffer **)(v7 + 160);
          v9 = *(_QWORD *)(v7 + 160);
          if ( *(_QWORD *)(v9 + 8) != v7 + 160 )
            goto LABEL_42;
          *(_QWORD *)v6 = v9;
          *((_QWORD *)v6 + 1) = v8;
          *(_QWORD *)(v9 + 8) = v6;
          *v8 = v6;
          v6 = 0LL;
          ++*(_DWORD *)(v7 + 176);
        }
        *(_QWORD *)(v7 + 96) = 0LL;
        ExReleasePushLockExclusiveEx(v7 + 88, 0LL);
        if ( v6 )
        {
          CLegacyTokenBuffer::Reset(v6);
          ExFreePoolWithTag(v6, 0);
        }
        *((_QWORD *)P + 26) = 0LL;
      }
      v10 = (PVOID *)(P + 62);
      *((_BYTE *)P + 216) = 0;
      v11 = (PVOID *)*((_QWORD *)P + 31);
      if ( v11[1] != P + 62 || (v12 = *v11, *((PVOID **)*v11 + 1) != v11) )
LABEL_42:
        __fastfail(3u);
      *v10 = v12;
      for ( *((_QWORD *)v12 + 1) = v10; v11 != v10; v14[1] = v10 )
      {
        v13 = v11 - 1;
        (*((void (__fastcall **)(PVOID *))*(v11 - 1) + 7))(v11 - 1);
        (*(void (__fastcall **)(PVOID *, __int64))*v13)(v13, 1LL);
        v11 = (PVOID *)*v10;
        if ( *((PVOID **)*v10 + 1) != v10 )
          goto LABEL_42;
        v14 = *v11;
        if ( *((PVOID **)*v11 + 1) != v11 )
          goto LABEL_42;
        *v10 = v14;
      }
      v15 = (PVOID *)(P + 66);
      v16 = (PVOID *)*((_QWORD *)P + 33);
      if ( v16[1] != P + 66 )
        goto LABEL_42;
      v17 = *v16;
      if ( *((PVOID **)*v16 + 1) != v16 )
        goto LABEL_42;
      *v15 = v17;
      for ( *((_QWORD *)v17 + 1) = v15; v16 != v15; v27[1] = v15 )
      {
        v26 = v16 - 6;
        (*((void (__fastcall **)(PVOID *))*(v16 - 1) + 7))(v16 - 1);
        ObfDereferenceObject(v26);
        v16 = (PVOID *)*v15;
        if ( *((PVOID **)*v15 + 1) != v15 )
          goto LABEL_42;
        v27 = *v16;
        if ( *((PVOID **)*v16 + 1) != v16 )
          goto LABEL_42;
        *v15 = v27;
      }
      v18 = P + 70;
      v19 = *((_QWORD *)P + 23);
      v20 = 0;
      v29 = 0LL;
      if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v19 )
        {
          DxgkGetSessionTokenManager(&v29);
          if ( v29 )
            v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29);
        }
      }
      while ( 1 )
      {
        v21 = (_QWORD *)*v18;
        if ( (_QWORD *)*v18 == v18 )
          break;
        v24 = (struct CFlipManagerSignal *)(v21 - 1);
        if ( !v21 )
          v24 = 0LL;
        v25 = *((_QWORD *)v24 + 6);
        *((_QWORD *)v24 + 6) = 0LL;
        v30 = (CPushLock *)(v25 + 40);
        if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v25 + 40)) >= 0 )
        {
          CFlipManager::ProcessSignal((CFlipManager *)(v25 + 32), v24, v19, 1);
          CPushLock::ReleaseLock(v30);
        }
        ObfDereferenceObject((PVOID)v25);
      }
      IsEnabledDeviceUsageNoInline = Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline();
      v23 = v29;
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 24LL))(v29);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      }
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)P + 37) + 8LL))(*((_QWORD *)P + 37));
    ExFreePoolWithTag((PVOID)P, 0);
  }
  return v2;
}
