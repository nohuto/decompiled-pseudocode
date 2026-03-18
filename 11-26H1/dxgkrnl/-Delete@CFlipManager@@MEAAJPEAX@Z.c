/*
 * XREFs of ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x1400A4570
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140018534 (-DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x14001862C (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x140019678 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     ?UnregisterWithRegistry@CFlipManager@@AEAAXXZ @ 0x1400A4798 (-UnregisterWithRegistry@CFlipManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::Delete(CFlipManager *this, void *a2)
{
  __int64 v3; // rsi
  char v4; // bl
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  _QWORD *v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  void (__fastcall *v16)(_QWORD); // rbx
  unsigned int TracingId; // eax
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    v19 = 0LL;
    if ( (int)DxgkGetSessionTokenManager(&v19) >= 0 )
    {
      v3 = v19;
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
      (*(void (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v3 + 208LL))(
        v3,
        (char *)this + 328,
        (char *)this - 32);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    }
    CFlipManager::UnregisterWithRegistry(this);
  }
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 28);
  if ( v5 )
  {
    (**v5)(v5, 1LL);
    *((_QWORD *)this + 28) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 36);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)this + 36) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 37);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *((_QWORD *)this + 37) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 40);
  if ( v8 )
  {
    ObfDereferenceObject(v8);
    *((_QWORD *)this + 40) = 0LL;
  }
  CFlipManager::FreeCurrentUpdates(this);
  CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 56));
  CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 104));
  CFlipManager::FreeQueuedUpdates(this);
  v9 = (_QWORD *)((char *)this + 192);
  while ( (_QWORD *)*v9 != v9 )
  {
    v10 = (void (__fastcall ***)(_QWORD, __int64))((*v9 - 8LL) & -(__int64)(*v9 != 0LL));
    v11 = (_QWORD *)((unsigned __int64)(v10 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64));
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11
      || (v13 = *(_QWORD **)(((unsigned __int64)(v10 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64))
                           + 8),
          (_QWORD *)*v13 != v11) )
    {
      __fastfail(3u);
    }
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    v11[1] = v11;
    *v11 = v11;
    if ( v10 )
      (**v10)(v10, 1LL);
  }
  v14 = (void *)*((_QWORD *)this + 38);
  if ( v14 )
  {
    ObfDereferenceObject(v14);
    *((_QWORD *)this + 38) = 0LL;
  }
  v15 = (void *)*((_QWORD *)this + 3);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)this + 3) = 0LL;
  }
  v16 = *(void (__fastcall **)(_QWORD))(DxgkGetWin32kImportTable() + 336);
  TracingId = CFlipManager::GetTracingId(this);
  v16(TracingId);
  return 0LL;
}
