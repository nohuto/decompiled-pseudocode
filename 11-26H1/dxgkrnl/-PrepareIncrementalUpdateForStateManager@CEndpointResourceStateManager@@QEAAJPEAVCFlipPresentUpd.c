/*
 * XREFs of ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140023164
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140022F48 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140019D4C (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D894 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1400244D8 (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140025C48 (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CCompositionSwapchainBuffer@@SAJ_NPEAUFlipManagerObject@@_K_KPEAPEAV1@@Z @ 0x140025D1C (-Create@CCompositionSwapchainBuffer@@SAJ_NPEAUFlipManagerObject@@_K_KPEAPEAV1@@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140025E14 (-RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x140026ABC (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ??$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBufferFormatInfo@@@Z @ 0x14004C2B8 (--$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBuff.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x14005FB9C (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(
        CEndpointResourceStateManager *this,
        struct CFlipPresentUpdate *a2,
        struct FlipManagerObject *a3,
        unsigned __int64 a4)
{
  CEndpointResourceStateManager *v4; // rdx
  __int64 v5; // r11
  int v6; // ebx
  signed int v8; // edi
  int v9; // r14d
  char v10; // r10
  bool v11; // r15
  __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // r8
  unsigned int i; // r9d
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // r8
  char *v21; // rax
  char *v22; // rsi
  int v23; // r8d
  CContentResourceState *v24; // r13
  int v25; // r9d
  _QWORD *v26; // rbx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  int v29; // r9d
  __int64 Win32kImportTable; // rax
  unsigned __int64 v31; // r9
  int v32; // eax
  CEndpointResourceStateManager *v33; // r14
  struct CCompositionSwapchainBuffer *v34; // rbx
  __int64 v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  char v39; // si
  char v40; // r15
  int v41; // eax
  struct CCompositionSwapchainBuffer *v42; // rsi
  __int64 v43; // rax
  unsigned int v44; // r15d
  __int64 v45; // rax
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // eax
  struct CCompositionSwapchainBuffer *v51; // rdi
  CEndpointResourceStateManager **v52; // r8
  _DWORD *v53; // r11
  _DWORD *v54; // rbx
  CEndpointResourceStateManager *v55; // rsi
  __int64 v56; // r9
  __int64 v57; // r10
  char v58; // al
  char *v59; // rbx
  char *v60; // r12
  _DWORD *v61; // rdi
  _DWORD *v62; // r15
  char *v63; // r13
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rsi
  _QWORD *v67; // r14
  __int64 v68; // rax
  CPoolBufferResource *v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  _DWORD *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _DWORD *v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  char v81; // cl
  __int64 v82; // rax
  char v83; // cl
  _DWORD *v84; // rdx
  _DWORD *v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  signed int v88; // eax
  unsigned int v89; // ecx
  unsigned int v90; // eax
  bool v91; // [rsp+38h] [rbp-99h]
  int v92; // [rsp+3Ch] [rbp-95h]
  struct CCompositionSwapchainBuffer *v93; // [rsp+40h] [rbp-91h] BYREF
  unsigned int v94; // [rsp+48h] [rbp-89h]
  int v95; // [rsp+4Ch] [rbp-85h]
  char *v96; // [rsp+50h] [rbp-81h]
  _QWORD *v97; // [rsp+58h] [rbp-79h]
  PVOID P; // [rsp+68h] [rbp-69h] BYREF
  int v99; // [rsp+70h] [rbp-61h]
  __int128 v100; // [rsp+78h] [rbp-59h]
  __int128 v101; // [rsp+88h] [rbp-49h]
  _DWORD *v102; // [rsp+98h] [rbp-39h]
  int v103; // [rsp+A0h] [rbp-31h]
  int v104; // [rsp+A4h] [rbp-2Dh]
  int v105; // [rsp+A8h] [rbp-29h]
  int v106; // [rsp+ACh] [rbp-25h]
  int v107; // [rsp+B0h] [rbp-21h]
  _DWORD v108[2]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v109; // [rsp+C0h] [rbp-11h]
  __int64 v110; // [rsp+C8h] [rbp-9h]
  __int64 v111; // [rsp+D0h] [rbp-1h]
  int v112; // [rsp+D8h] [rbp+7h]
  int v113; // [rsp+DCh] [rbp+Bh]
  char v114; // [rsp+138h] [rbp+67h]
  int v115; // [rsp+138h] [rbp+67h]

  v4 = *(CEndpointResourceStateManager **)this;
  v5 = 0LL;
  P = 0LL;
  v99 = 0;
  v100 = 0LL;
  v6 = 0;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0;
  v104 = 0;
  v8 = 0;
  v105 = 0;
  v9 = 0;
  v92 = 0;
  v106 = 0;
  v10 = 0;
  v95 = 0;
  v11 = 1;
  v107 = 0;
  v114 = 0;
  do
  {
    if ( v4 == this )
      break;
    v12 = (__int64)v4 + 16;
    if ( !v4 )
      v12 = 24LL;
    v13 = *(_QWORD *)(*(_QWORD *)v12 + 32LL);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 24);
      for ( i = 0; i < *(_DWORD *)(v13 + 12); ++i )
      {
        v16 = *(_QWORD *)(v13 + 16);
        v17 = 32LL * i;
        v18 = *(_QWORD *)(v17 + v16) - *(_QWORD *)&GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data1;
        if ( !v18 )
          v18 = *(_QWORD *)(v17 + v16 + 8) - *(_QWORD *)GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data4;
        if ( !v18 && *(_DWORD *)(v17 + v16 + 16) == 8 )
        {
          v5 = 0LL;
          if ( v14 && *(_BYTE *)(v14 + 4) )
            goto LABEL_15;
          goto LABEL_14;
        }
        v14 += *(unsigned int *)(v17 + v16 + 16);
      }
    }
    v5 = 0LL;
LABEL_14:
    v11 = 0;
LABEL_15:
    v19 = (__int64)v4 + 24;
    if ( !v4 )
      v19 = 32LL;
    v20 = *(_BYTE *)v19;
    if ( (*(_BYTE *)v19 & 1) != 0 )
    {
      v47 = v9;
      v48 = v9 + 16;
      v9 = -1;
      v10 = 1;
      v114 = 1;
      if ( v48 >= v47 )
        v9 = v48;
      v8 = v48 < v47 ? 0xC0000095 : 0;
      v103 = v9;
    }
    else
    {
      v10 = v114;
    }
    if ( v8 >= 0 && (v20 & 2) != 0 )
    {
      v49 = v6;
      v50 = v6 + 16;
      v6 = -1;
      v10 = 1;
      v114 = 1;
      if ( v50 >= v49 )
        v6 = v50;
      v8 = v50 < v49 ? 0xC0000095 : 0;
      v104 = v6;
    }
    v4 = *(CEndpointResourceStateManager **)v4;
  }
  while ( v8 >= 0 );
  v91 = v11;
  v21 = (char *)this + 16;
  v22 = (char *)*((_QWORD *)this + 2);
  v96 = v22;
  if ( v8 >= 0 )
  {
    v23 = 0;
    while ( v22 != v21 )
    {
      v24 = (CContentResourceState *)((unsigned __int64)(v22 - 8) & -(__int64)(v22 != 0LL));
      if ( (*((_BYTE *)v24 + 32) & 1) != 0 )
      {
        v88 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
        v23 = v106;
        v8 = v88;
        v25 = v107;
        v92 = v106;
        v95 = v107;
      }
      else
      {
        v25 = v95;
      }
      if ( v8 >= 0 )
      {
        if ( (*(_BYTE *)(((unsigned __int64)(v22 - 8) & -(__int64)(v22 != 0LL)) + 0x40) & 1) == 0 )
          goto LABEL_56;
        v26 = *(_QWORD **)(((unsigned __int64)(v22 - 8) & -(__int64)(v22 != 0LL)) + 0x18);
        v27 = v25 + 40;
        v28 = v25;
        v29 = -1;
        if ( v27 >= v28 )
          v29 = v27;
        v8 = v27 < v28 ? 0xC0000095 : 0;
        v95 = v29;
        v107 = v29;
        if ( v27 >= v28 )
        {
          if ( v26[6] == v5 || !v10 && v26[7] != v5 )
            goto LABEL_56;
          Win32kImportTable = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(_QWORD *))(Win32kImportTable + 264))(v26);
          v31 = v26[5];
          v93 = 0LL;
          v32 = CCompositionSwapchainBuffer::Create(v11, a3, a4, v31, &v93);
          v33 = *(CEndpointResourceStateManager **)this;
          v34 = v93;
          v8 = v32;
          v94 = 0;
          if ( v32 >= 0 )
          {
            while ( v33 != this )
            {
              v35 = (__int64)v33 + 16;
              if ( !v33 )
                v35 = 24LL;
              v36 = *(_QWORD **)v35;
              v37 = (__int64)v33 + 24;
              if ( !v33 )
                v37 = 32LL;
              v97 = v36;
              if ( (*(_BYTE *)v37 & 2) == 0 )
              {
                v38 = v36[4];
                v39 = 0;
                v40 = 0;
                if ( v38 )
                {
                  v93 = 0LL;
                  CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(v38, &v93, 32LL);
                  v51 = v93;
                  if ( v93 )
                  {
                    if ( *(_DWORD *)v93 == 103 || *(_DWORD *)v93 == 104 || (unsigned int)(*(_DWORD *)v93 - 106) <= 1 )
                      v39 = 1;
                    if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
                      v40 = *((_BYTE *)v51 + 5);
                  }
                }
                v93 = 0LL;
                v113 = 0;
                v108[0] = v39 != 0 ? 4 : 2;
                v108[1] = v94;
                v109 = v97[7];
                v110 = v97[9];
                v111 = v97[11];
                if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
                  v113 = v40 & 1;
                v112 = 0;
                v41 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v108, 1, &v93);
                v42 = v93;
                v8 = v41;
                if ( v41 >= 0 )
                {
                  v8 = (*(__int64 (__fastcall **)(struct CCompositionSwapchainBuffer *, struct CCompositionSwapchainBuffer *))(*(_QWORD *)v34 + 216LL))(
                         v34,
                         v93);
                  if ( v8 >= 0 )
                    v42 = 0LL;
                }
                if ( v42 )
                  (**(void (__fastcall ***)(struct CCompositionSwapchainBuffer *, __int64))v42)(v42, 1LL);
                v43 = DxgkGetWin32kImportTable();
                v44 = v94;
                (*(void (__fastcall **)(_QWORD *, _QWORD))(v43 + 272))(v97, v94);
                v94 = v44 + 1;
              }
              v33 = *(CEndpointResourceStateManager **)v33;
              if ( v8 < 0 )
                goto LABEL_52;
            }
            v8 = CContentResourceState::RebindCompositionSurfaceBuffer(v24, v34);
            if ( v8 >= 0 )
              v34 = 0LL;
LABEL_52:
            v11 = v91;
            v22 = v96;
          }
          if ( v34 )
            (**(void (__fastcall ***)(struct CCompositionSwapchainBuffer *, __int64))v34)(v34, 1LL);
          v45 = DxgkGetWin32kImportTable();
          (*(void (**)(void))(v45 + 280))();
          v23 = v92;
          v5 = 0LL;
          if ( v8 >= 0 )
          {
LABEL_56:
            if ( (*((_BYTE *)v24 + 32) & 2) != 0 )
            {
              v89 = v23;
              v90 = v23 + 16;
              v23 = -1;
              if ( v90 >= v89 )
                v23 = v90;
              v8 = v90 < v89 ? 0xC0000095 : 0;
              v92 = v23;
              v106 = v23;
            }
          }
        }
      }
      v22 = *(char **)v22;
      v21 = (char *)this + 16;
      v10 = v114;
      v96 = v22;
      if ( v8 < 0 )
        goto LABEL_62;
    }
    v115 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x62754346u);
    v8 = v115;
    if ( v115 >= 0 )
    {
      v52 = *(CEndpointResourceStateManager ***)this;
      if ( *(CEndpointResourceStateManager **)this != this )
      {
        v53 = (_DWORD *)*((_QWORD *)&v100 + 1);
        v54 = (_DWORD *)v100;
        do
        {
          v55 = *v52;
          v56 = (__int64)(v52 + 3);
          v57 = (__int64)(v52 + 2);
          if ( !v52 )
            v56 = 32LL;
          v58 = *(_BYTE *)v56;
          if ( (*(_BYTE *)v56 & 1) != 0 )
          {
            *v54 = 2;
            v85 = v54;
            v54 += 4;
            v86 = (__int64)(v52 + 2);
            if ( !v52 )
              v86 = 24LL;
            v87 = *(_QWORD *)v86;
            *((_QWORD *)v85 + 1) = v87;
            ++*(_DWORD *)(v87 + 24);
            *(_BYTE *)v56 |= 4u;
            v58 = *(_BYTE *)v56;
          }
          if ( (v58 & 2) != 0 )
          {
            *v53 = 0;
            v84 = v53;
            v53 += 4;
            if ( !v52 )
              v57 = 24LL;
            *((_QWORD *)v84 + 1) = *(_QWORD *)(*(_QWORD *)v57 + 40LL);
            *(_BYTE *)v56 |= 8u;
          }
          v52 = (CEndpointResourceStateManager **)v55;
        }
        while ( v55 != this );
        v8 = v115;
        *((_QWORD *)&v100 + 1) = v53;
        *(_QWORD *)&v100 = v54;
      }
      v59 = (char *)*((_QWORD *)this + 2);
      v60 = (char *)this + 16;
      if ( v59 != v60 )
      {
        v61 = (_DWORD *)*((_QWORD *)&v101 + 1);
        v62 = (_DWORD *)v101;
        do
        {
          v63 = *(char **)v59;
          v64 = (__int64)(v59 + 24);
          v65 = (__int64)(v59 + 16);
          if ( !v59 )
            v64 = 32LL;
          if ( (*(_BYTE *)v64 & 1) != 0 )
          {
            *v62 = 3;
            v74 = v62;
            v62 += 4;
            v75 = (__int64)(v59 + 16);
            if ( !v59 )
              v75 = 24LL;
            v76 = *(_QWORD *)v75;
            *((_QWORD *)v74 + 1) = v76;
            ++*(_DWORD *)(v76 + 24);
            *(_BYTE *)v64 |= 4u;
          }
          v66 = (__int64)(v59 + 56);
          if ( !v59 )
            v66 = 64LL;
          if ( (*(_BYTE *)v66 & 1) != 0 )
          {
            v67 = v102;
            *v102 = 4;
            v102 = v67 + 5;
            v68 = (__int64)(v59 + 40);
            if ( !v59 )
            {
              v68 = 48LL;
              v65 = 24LL;
            }
            v69 = *(CPoolBufferResource **)v68;
            v70 = (__int64)(v59 + 32);
            v67[1] = *(_QWORD *)(*(_QWORD *)v65 + 40LL);
            if ( !v59 )
              v70 = 40LL;
            v71 = *(_QWORD *)v70;
            v67[3] = *(_QWORD *)v70;
            if ( v71 )
              ++*(_DWORD *)(v71 + 8);
            v67[2] = v69;
            if ( v69 )
            {
              ++*((_DWORD *)v69 + 6);
              CPoolBufferResource::AddUsageReference(v69);
            }
            v72 = (__int64)(v59 + 48);
            if ( !v59 )
              v72 = 56LL;
            v67[4] = *(_QWORD *)v72;
            *(_BYTE *)v66 |= 2u;
          }
          v73 = (__int64)(v59 + 24);
          if ( !v59 )
            v73 = 32LL;
          if ( (*(_BYTE *)v73 & 2) != 0 )
          {
            *v61 = 1;
            v77 = (__int64)(v59 + 16);
            v78 = v61;
            v61 += 4;
            if ( !v59 )
              v77 = 24LL;
            v79 = *(_QWORD *)(*(_QWORD *)v77 + 40LL);
            v80 = (__int64)(v59 + 24);
            if ( !v59 )
              v80 = 32LL;
            *((_QWORD *)v78 + 1) = v79;
            v81 = *(_BYTE *)v80;
            v82 = (__int64)(v59 + 24);
            v83 = v81 | 8;
            if ( !v59 )
              v82 = 32LL;
            *(_BYTE *)v82 = v83;
          }
          v59 = v63;
        }
        while ( v63 != v60 );
        *((_QWORD *)&v101 + 1) = v61;
        v8 = v115;
        *(_QWORD *)&v101 = v62;
      }
      CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, a2);
    }
  }
LABEL_62:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}
