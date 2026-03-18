/*
 * XREFs of ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14001ACD0
 * Callers:
 *     ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14001AB70 (-PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropert.c)
 * Callees:
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x140019B5C (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x140019C80 (-CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140019D4C (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CContentResourceState::CreateUpdateTokens(
        CContentResourceState *this,
        struct CEndpointResourceStateManager **a2,
        struct CFlipPropertySet *a3,
        char a4,
        struct _LIST_ENTRY *a5)
{
  unsigned int v5; // esi
  struct CEndpointResourceStateManager *v7; // r10
  struct CompositionSurfaceObject *v9; // r14
  const struct tagRECT *v10; // rbp
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  const struct tagRECT *v16; // rdx
  unsigned int i; // r10d
  unsigned __int64 v18; // rcx
  __int64 Win32kImportTable; // rax
  struct CFlipContentToken *v20; // r8
  struct _LIST_ENTRY *v21; // rax
  __int64 v22; // r8
  struct _LIST_ENTRY *v23; // r8
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // ecx
  struct CFlipContentToken *v30; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v7 = (struct CEndpointResourceStateManager *)a2;
  v9 = *(struct CompositionSurfaceObject **)(*((_QWORD *)this + 3) + 48LL);
  if ( !v9 || !*((_QWORD *)this + 7) || (*((_BYTE *)this + 64) & 1) == 0 )
    return v5;
  v10 = 0LL;
  if ( a4 )
    goto LABEL_15;
  v11 = *((_QWORD *)this + 6);
  if ( v11 )
  {
    v12 = 0;
    while ( 1 )
    {
      a2 = (struct CEndpointResourceStateManager **)*a2;
      if ( a2 == (struct CEndpointResourceStateManager **)v7 )
        break;
      v13 = (__int64)(a2 + 3);
      if ( !a2 )
        v13 = 32LL;
      if ( (*(_BYTE *)v13 & 2) == 0 )
      {
        v14 = (__int64)(a2 + 2);
        if ( !a2 )
          v14 = 24LL;
        if ( *(_QWORD *)(*(_QWORD *)v14 + 40LL) == *(_QWORD *)(v11 + 40) )
          goto LABEL_16;
        ++v12;
      }
    }
LABEL_15:
    v12 = 0;
    goto LABEL_16;
  }
  v12 = -1;
LABEL_16:
  if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
  {
    v15 = *((_QWORD *)this + 5);
    if ( v15 )
    {
      v16 = *(const struct tagRECT **)(v15 + 24);
      for ( i = 0; i < *(_DWORD *)(v15 + 12); ++i )
      {
        v25 = *(_QWORD *)(v15 + 16);
        v26 = 32LL * i;
        v27 = *(_QWORD *)(v26 + v25) - 0x4CF5EBCF93AD0D4FLL;
        if ( *(_QWORD *)(v26 + v25) == 0x4CF5EBCF93AD0D4FLL )
          v27 = *(_QWORD *)(v26 + v25 + 8) - 0x14118C426EF65292LL;
        if ( !v27 )
        {
          v28 = *(_DWORD *)(v26 + v25 + 16);
          v10 = v16;
          if ( v16 && (v28 & 0xF) == 0 )
            v5 = v28 >> 4;
          break;
        }
        v16 = (const struct tagRECT *)((char *)v16 + *(unsigned int *)(v26 + v25 + 16));
      }
    }
  }
  v18 = *((_QWORD *)this + 7);
  v30 = 0LL;
  v5 = CFlipContentToken::CreateCompleted(v18, v5, v10, v9, &v30);
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(Win32kImportTable + 296))(
    *((_QWORD *)this + 3),
    *((_QWORD *)v9 + 3),
    *((_QWORD *)this + 7),
    v12);
  if ( (v5 & 0x80000000) == 0 )
  {
    v20 = v30;
    *((_DWORD *)v30 + 28) = v12;
    CContentResourceState::ApplyPresentAttributeMetadataToUpdateToken(this, a3, v20);
    v21 = a5;
    v23 = (struct _LIST_ENTRY *)(v22 + 8);
    Blink = a5->Blink;
    if ( Blink->Flink != a5 )
      __fastfail(3u);
    v23->Flink = a5;
    v23->Blink = Blink;
    Blink->Flink = v23;
    v21->Blink = v23;
  }
  return v5;
}
