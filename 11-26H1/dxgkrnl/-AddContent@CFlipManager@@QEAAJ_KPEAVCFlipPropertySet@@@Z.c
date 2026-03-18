/*
 * XREFs of ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1400449B8
 * Callers:
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x140044948 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x14001C474 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?AddResourceState@CEndpointResourceStateManager@@AEAAXPEAVCFlipResourceState@@PEAU_LIST_ENTRY@@@Z @ 0x140044DE0 (-AddResourceState@CEndpointResourceStateManager@@AEAAXPEAVCFlipResourceState@@PEAU_LIST_ENTRY@@@.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentationSurfaceInfo@@@Z @ 0x1400450C8 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentat.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::AddContent(CFlipManager *this, __int64 a2, struct CFlipPropertySet *a3)
{
  unsigned __int64 v5; // r11
  int v6; // esi
  int v7; // eax
  struct CFlipResourceState *v8; // r14
  __int64 v9; // rcx
  __int64 Win32kImportTable; // rax
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, _QWORD, __int64); // rdi
  unsigned int TracingId; // eax
  __int64 Pool2; // rax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  struct CFlipResourceState *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 72)) )
    return (unsigned int)-1073741811;
  v7 = CContentResource::Create(v5, a3, &v17, (struct PresentationSurfaceInfo *)&v16);
  v8 = v17;
  v6 = v7;
  if ( v7 >= 0 )
  {
    v9 = *((_QWORD *)v17 + 3);
    if ( !*(_QWORD *)(v9 + 48) )
      goto LABEL_11;
    Win32kImportTable = DxgkGetWin32kImportTable();
    v11 = *((_QWORD *)v8 + 3);
    v12 = *(void (__fastcall **)(__int64, _QWORD, __int64))(Win32kImportTable + 288);
    TracingId = CFlipManager::GetTracingId(this);
    v12(1LL, TracingId, v11);
    if ( !*((_QWORD *)this + 3) )
    {
      if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
        *((_QWORD *)this + 41) = *((_QWORD *)&v16 + 1);
      Pool2 = ExAllocatePool2(257LL, 22536LL, 1752187718LL);
      *((_QWORD *)this + 3) = Pool2;
      v9 = 3221225495LL;
      if ( !Pool2 )
        v6 = -1073741801;
      if ( v6 < 0 )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( *((_QWORD *)this + 6) == 1LL )
    {
LABEL_11:
      CEndpointResourceStateManager::AddResourceState(
        (CEndpointResourceStateManager *)v9,
        v8,
        (struct _LIST_ENTRY *)((char *)this + 72));
      v8 = 0LL;
      goto LABEL_12;
    }
    v6 = -1073741790;
  }
LABEL_12:
  if ( v8 )
    (*(void (__fastcall **)(struct CFlipResourceState *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
  return (unsigned int)v6;
}
