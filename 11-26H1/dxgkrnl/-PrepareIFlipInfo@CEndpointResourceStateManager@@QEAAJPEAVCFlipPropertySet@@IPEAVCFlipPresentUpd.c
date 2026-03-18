/*
 * XREFs of ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140023B84
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140022F48 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x14001949C (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140019D4C (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x14001C474 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x140023F8C (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1400419C0 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ??$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateInfo@@@Z @ 0x140054C20 (--$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContent.c)
 *     ??$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo@@@Z @ 0x14005577C (--$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIFlipInfo(
        struct _LIST_ENTRY *this,
        struct CFlipPropertySet *a2,
        int a3,
        struct CFlipPresentUpdate *a4,
        struct FlipManagerTokenIFlipInfo **a5)
{
  unsigned int v5; // ebx
  CompositionSurfaceObject *v8; // r15
  void *Pool2; // rax
  void *v10; // r14
  CEndpointResourceStateManager *v11; // rcx
  struct CFlipResourceState *ResourceState; // rax
  __int64 v14; // r11
  __int64 v15; // rsi
  struct CFlipResourceState *v16; // r13
  __int64 v17; // r8
  unsigned int i; // r10d
  __int64 v19; // r15
  int v20; // r8d
  __int128 v21; // xmm0
  __int64 v22; // r9
  __int128 v23; // xmm1
  CompositionSurfaceObject *v24; // rax
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int128 v27; // xmm1
  CEndpointResourceStateManager *Flink; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  struct _LIST_ENTRY *v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // eax
  bool v40; // [rsp+20h] [rbp-60h] BYREF
  _BYTE *v41; // [rsp+28h] [rbp-58h] BYREF
  CompositionSurfaceObject *v42; // [rsp+30h] [rbp-50h]
  _QWORD v43[9]; // [rsp+38h] [rbp-48h] BYREF

  v5 = 0;
  v41 = 0LL;
  v43[0] = 0LL;
  v42 = 0LL;
  v8 = 0LL;
  Pool2 = (void *)ExAllocatePool2(257LL, 112LL, 1768506182LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x70uLL);
    *((_QWORD *)v10 + 4) = this[2].Flink;
    *((_QWORD *)v10 + 6) = this[2].Blink;
    if ( CEndpointResourceStateManager::IsSimpleUpdatePresent(a4) )
    {
      ResourceState = CEndpointResourceStateManager::FindResourceState(
                        v11,
                        *(_QWORD *)(*((_QWORD *)a4 + 6) + 8LL),
                        this + 1);
      v15 = *(_QWORD *)(v14 + 24);
      v16 = ResourceState;
      if ( v15 )
      {
        CFlipPropertySetBase::FindProperty<PresentedContentUpdateInfo>(*(_QWORD *)(v14 + 24), &v41);
        if ( v41 )
        {
          if ( (*v41 & 8) == 0 )
          {
            v43[0] = *((_QWORD *)v16 + 6);
            if ( v43[0] )
            {
              v8 = *(CompositionSurfaceObject **)(*((_QWORD *)v16 + 3) + 48LL);
              v42 = v8;
            }
          }
        }
        if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
        {
          v17 = *(_QWORD *)(v15 + 24);
          for ( i = 0; i < *(_DWORD *)(v15 + 12); ++i )
          {
            v36 = *(_QWORD *)(v15 + 16);
            v37 = 32LL * i;
            v38 = *(_QWORD *)(v37 + v36) - 0x4CF5EBCF93AD0D4FLL;
            if ( *(_QWORD *)(v37 + v36) == 0x4CF5EBCF93AD0D4FLL )
              v38 = *(_QWORD *)(v37 + v36 + 8) - 0x14118C426EF65292LL;
            if ( !v38 )
            {
              v39 = *(_DWORD *)(v37 + v36 + 16);
              if ( v17 && (v39 & 0xF) == 0 )
              {
                *((_DWORD *)v10 + 6) = v39 >> 4;
                *((_QWORD *)v10 + 2) = v17;
              }
              break;
            }
            v17 += *(unsigned int *)(v37 + v36 + 16);
          }
        }
        if ( v8 )
        {
          v19 = ExAllocatePool2(65LL, 64LL, 1767981894LL);
          if ( !v19 )
          {
            v5 = -1073741801;
            FlipManagerTokenIFlipInfo::`scalar deleting destructor'((FlipManagerTokenIFlipInfo *)v10);
            return v5;
          }
          memset(&v43[1], 0, 0x40uLL);
          v20 = 0;
          v21 = *(_OWORD *)&v43[1];
          v22 = v43[0];
          v23 = *(_OWORD *)&v43[3];
          *((_QWORD *)v10 + 6) = *((_QWORD *)v16 + 7);
          v24 = v42;
          *(_OWORD *)v19 = v21;
          *((_BYTE *)v10 + 92) = 1;
          v25 = *(_OWORD *)&v43[5];
          v26 = *((_QWORD *)v24 + 3);
          *(_OWORD *)(v19 + 16) = v23;
          *((_QWORD *)v10 + 4) = v26;
          v27 = *(_OWORD *)&v43[7];
          Flink = (CEndpointResourceStateManager *)this->Flink;
          *(_OWORD *)(v19 + 32) = v25;
          *(_OWORD *)(v19 + 48) = v27;
          *(_QWORD *)v19 = 64LL;
          while ( Flink != (CEndpointResourceStateManager *)this )
          {
            v29 = (__int64)Flink + 24;
            if ( !Flink )
              v29 = 32LL;
            if ( (*(_BYTE *)v29 & 2) == 0 )
            {
              v30 = (__int64)Flink + 16;
              if ( !Flink )
                v30 = 24LL;
              if ( *(_QWORD *)(*(_QWORD *)v30 + 40LL) == *(_QWORD *)(v22 + 40) )
                goto LABEL_26;
              ++v20;
            }
            Flink = *(CEndpointResourceStateManager **)Flink;
          }
          v20 = 0;
LABEL_26:
          v31 = 0LL;
          *(_QWORD *)v10 = v41;
          *((_DWORD *)v10 + 10) = v20;
          v32 = *((_QWORD *)v16 + 3);
          v43[0] = 0LL;
          v33 = *(_QWORD *)(v32 + 40);
          *(_DWORD *)(v19 + 8) = a3;
          v34 = (struct _LIST_ENTRY *)*((_QWORD *)v10 + 4);
          *((_QWORD *)v10 + 12) = v33;
          *((_QWORD *)v10 + 13) = v19;
          this[2].Flink = v34;
          this[2].Blink = (struct _LIST_ENTRY *)*((_QWORD *)v10 + 6);
          if ( a2 )
          {
            CFlipPropertySetBase::FindProperty<PresentParametersInfo>(a2, v43);
            v31 = v43[0];
            if ( v43[0] )
            {
              *(_DWORD *)(v19 + 12) = *(_DWORD *)(v43[0] + 8LL);
              if ( *(_BYTE *)(v31 + 12) )
              {
                v35 = *((_QWORD *)v10 + 6);
                v40 = 0;
                if ( (int)CompositionSurfaceObject::GetIndependentFlipNotifyDwm(v42, v35, &v40) >= 0 && v40 )
                {
                  *(_BYTE *)(v31 + 12) = 0;
                  if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
                    *(_BYTE *)(v31 + 13) = 0;
                }
              }
            }
          }
          *((_QWORD *)v10 + 1) = v31;
        }
      }
    }
    *a5 = (struct FlipManagerTokenIFlipInfo *)v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
