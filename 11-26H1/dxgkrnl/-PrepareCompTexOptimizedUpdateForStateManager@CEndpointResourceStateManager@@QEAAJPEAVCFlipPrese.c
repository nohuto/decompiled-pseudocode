/*
 * XREFs of ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140024EA8
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140022F48 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D894 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1400244D8 (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140025C48 (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CCompositionSwapchainBuffer@@SAJ_NPEAUFlipManagerObject@@_K_KPEAPEAV1@@Z @ 0x140025D1C (-Create@CCompositionSwapchainBuffer@@SAJ_NPEAUFlipManagerObject@@_K_KPEAPEAV1@@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140025E14 (-RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x140026ABC (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ??$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBufferFormatInfo@@@Z @ 0x14004C2B8 (--$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBuff.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareCompTexOptimizedUpdateForStateManager(
        CEndpointResourceStateManager *this,
        struct CFlipPresentUpdate *a2,
        struct FlipManagerObject *a3,
        unsigned __int64 a4)
{
  CEndpointResourceStateManager *v4; // rdx
  struct CCompositionSwapchainBuffer *v5; // r13
  signed int v7; // ebx
  void *v8; // r15
  int v9; // r9d
  int v10; // r8d
  int v11; // edi
  __int64 v12; // rax
  char v13; // r10
  int v14; // r11d
  char *v15; // r14
  char *v16; // rcx
  unsigned int v17; // ecx
  int v18; // r10d
  __int64 v19; // rdi
  __int64 Win32kImportTable; // rax
  __int64 v21; // r8
  char v22; // si
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  int v25; // eax
  struct CCompositionSwapchainBuffer *v26; // rdi
  int v27; // eax
  struct CCompositionSwapchainBuffer *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // r14
  unsigned int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // eax
  int v38; // edi
  unsigned int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  char *v43; // rdi
  _DWORD *v44; // r13
  _DWORD *v45; // r15
  _DWORD *v46; // rbx
  char *v47; // r12
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rsi
  __int64 v51; // rax
  _DWORD *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _DWORD *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // cl
  __int64 v60; // rax
  char v61; // cl
  __int64 v62; // rax
  _QWORD *v63; // r14
  CPoolBufferResource *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  CEndpointResourceStateManager **v68; // r8
  _DWORD *v69; // r11
  _DWORD *v70; // rdi
  CEndpointResourceStateManager *v71; // rsi
  __int64 v72; // r9
  __int64 v73; // r10
  char v74; // al
  _DWORD *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  _DWORD *v78; // rdx
  struct CCompositionSwapchainBuffer *v79; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v80; // [rsp+40h] [rbp-81h]
  int v81; // [rsp+44h] [rbp-7Dh]
  char **v82; // [rsp+48h] [rbp-79h]
  void *v83; // [rsp+58h] [rbp-69h] BYREF
  int v84; // [rsp+60h] [rbp-61h]
  __int128 v85; // [rsp+68h] [rbp-59h]
  __int128 v86; // [rsp+78h] [rbp-49h]
  _DWORD *v87; // [rsp+88h] [rbp-39h]
  __int64 v88; // [rsp+90h] [rbp-31h]
  __int64 v89; // [rsp+98h] [rbp-29h]
  int v90; // [rsp+A0h] [rbp-21h]
  char *v91; // [rsp+A8h] [rbp-19h]
  _DWORD v92[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-9h]
  __int64 v94; // [rsp+C0h] [rbp-1h]
  __int64 v95; // [rsp+C8h] [rbp+7h]
  __int64 v96; // [rsp+D0h] [rbp+Fh]
  int v97; // [rsp+128h] [rbp+67h]
  int v98; // [rsp+128h] [rbp+67h]

  v4 = *(CEndpointResourceStateManager **)this;
  v5 = 0LL;
  v83 = 0LL;
  v84 = 0;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v7 = 0;
  v88 = 0LL;
  v8 = 0LL;
  v81 = 0;
  v9 = 0;
  v89 = 0LL;
  v10 = 0;
  v97 = 0;
  v11 = 0;
  v80 = 0;
  v90 = 0;
  do
  {
    if ( v4 == this )
      break;
    v12 = (__int64)v4 + 24;
    if ( !v4 )
      v12 = 32LL;
    v13 = *(_BYTE *)v12;
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      v34 = v9;
      v35 = v9 + 16;
      v9 = -1;
      if ( v35 >= v34 )
        v9 = v35;
      v7 = v35 < v34 ? 0xC0000095 : 0;
      LODWORD(v88) = v9;
    }
    if ( v7 >= 0 && (v13 & 2) != 0 )
    {
      v41 = v10;
      v42 = v10 + 16;
      v10 = -1;
      if ( v42 >= v41 )
        v10 = v42;
      v7 = v42 < v41 ? 0xC0000095 : 0;
      HIDWORD(v88) = v10;
    }
    v4 = *(CEndpointResourceStateManager **)v4;
  }
  while ( v7 >= 0 );
  v14 = 0;
  v15 = (char *)this + 16;
  v16 = (char *)*((_QWORD *)this + 2);
  v91 = (char *)this + 16;
  while ( 1 )
  {
    v82 = (char **)v16;
    if ( v7 < 0 )
      break;
    v31 = v80;
    if ( v16 == v15 )
    {
      v98 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&v83, 0x62754346u);
      v7 = v98;
      if ( v98 >= 0 )
      {
        v68 = *(CEndpointResourceStateManager ***)this;
        if ( *(CEndpointResourceStateManager **)this != this )
        {
          v69 = (_DWORD *)*((_QWORD *)&v85 + 1);
          v70 = (_DWORD *)v85;
          do
          {
            v71 = *v68;
            v72 = (__int64)(v68 + 3);
            v73 = (__int64)(v68 + 2);
            if ( !v68 )
              v72 = 32LL;
            v74 = *(_BYTE *)v72;
            if ( (*(_BYTE *)v72 & 1) != 0 )
            {
              *v70 = 2;
              v75 = v70;
              v70 += 4;
              v76 = (__int64)(v68 + 2);
              if ( !v68 )
                v76 = 24LL;
              v77 = *(_QWORD *)v76;
              *((_QWORD *)v75 + 1) = v77;
              ++*(_DWORD *)(v77 + 24);
              *(_BYTE *)v72 |= 4u;
              v74 = *(_BYTE *)v72;
            }
            if ( (v74 & 2) != 0 )
            {
              *v69 = (_DWORD)v5;
              v78 = v69;
              v69 += 4;
              if ( !v68 )
                v73 = 24LL;
              *((_QWORD *)v78 + 1) = *(_QWORD *)(*(_QWORD *)v73 + 40LL);
              *(_BYTE *)v72 |= 8u;
            }
            v68 = (CEndpointResourceStateManager **)v71;
          }
          while ( v71 != this );
          *((_QWORD *)&v85 + 1) = v69;
          v15 = (char *)this + 16;
          *(_QWORD *)&v85 = v70;
        }
        v43 = (char *)*((_QWORD *)this + 2);
        if ( v43 != v15 )
        {
          v44 = (_DWORD *)*((_QWORD *)&v86 + 1);
          v45 = (_DWORD *)v86;
          v46 = v87;
          do
          {
            v47 = *(char **)v43;
            v48 = (__int64)(v43 + 24);
            v49 = (__int64)(v43 + 16);
            if ( !v43 )
              v48 = 32LL;
            if ( (*(_BYTE *)v48 & 1) != 0 )
            {
              *v45 = 3;
              v52 = v45;
              v45 += 4;
              v53 = (__int64)(v43 + 16);
              if ( !v43 )
                v53 = 24LL;
              v54 = *(_QWORD *)v53;
              *((_QWORD *)v52 + 1) = v54;
              ++*(_DWORD *)(v54 + 24);
              *(_BYTE *)v48 |= 4u;
            }
            v50 = (__int64)(v43 + 56);
            if ( !v43 )
              v50 = 64LL;
            if ( (*(_BYTE *)v50 & 1) != 0 )
            {
              *v46 = 4;
              v62 = (__int64)(v43 + 40);
              v63 = v46;
              v46 += 10;
              if ( !v43 )
              {
                v62 = 48LL;
                v49 = 24LL;
              }
              v64 = *(CPoolBufferResource **)v62;
              v65 = (__int64)(v43 + 32);
              v63[1] = *(_QWORD *)(*(_QWORD *)v49 + 40LL);
              if ( !v43 )
                v65 = 40LL;
              v66 = *(_QWORD *)v65;
              v63[3] = *(_QWORD *)v65;
              if ( v66 )
                ++*(_DWORD *)(v66 + 8);
              v63[2] = v64;
              if ( v64 )
              {
                ++*((_DWORD *)v64 + 6);
                CPoolBufferResource::AddUsageReference(v64);
              }
              v67 = (__int64)(v43 + 48);
              if ( !v43 )
                v67 = 56LL;
              v63[4] = *(_QWORD *)v67;
              *(_BYTE *)v50 |= 2u;
              v15 = v91;
            }
            v51 = (__int64)(v43 + 24);
            if ( !v43 )
              v51 = 32LL;
            if ( (*(_BYTE *)v51 & 2) != 0 )
            {
              *v44 = 1;
              v55 = (__int64)(v43 + 16);
              v56 = v44;
              v44 += 4;
              if ( !v43 )
                v55 = 24LL;
              v57 = *(_QWORD *)(*(_QWORD *)v55 + 40LL);
              v58 = (__int64)(v43 + 24);
              if ( !v43 )
                v58 = 32LL;
              *((_QWORD *)v56 + 1) = v57;
              v59 = *(_BYTE *)v58;
              v60 = (__int64)(v43 + 24);
              v61 = v59 | 8;
              if ( !v43 )
                v60 = 32LL;
              *(_BYTE *)v60 = v61;
            }
            v43 = v47;
          }
          while ( v47 != v15 );
          v87 = v46;
          v7 = v98;
          *(_QWORD *)&v86 = v45;
          *((_QWORD *)&v86 + 1) = v44;
        }
        CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&v83, a2);
      }
      v8 = v83;
      break;
    }
    v32 = (unsigned __int64)(v16 - 8) & -(__int64)(v16 != 0LL);
    if ( (*(_BYTE *)(v32 + 0x20) & 1) != 0 )
    {
      v36 = v11;
      v37 = v11 + 16;
      v38 = -1;
      if ( v37 >= v36 )
        v38 = v37;
      v7 = v37 < v36 ? 0xC0000095 : 0;
      v81 = v38;
      LODWORD(v89) = v38;
    }
    if ( v7 >= 0 )
    {
      if ( (*(_BYTE *)(v32 + 64) & 1) == 0 )
        goto LABEL_32;
      v17 = v80 + 40;
      v18 = -1;
      if ( v80 + 40 >= v80 )
        v18 = v80 + 40;
      v7 = v17 < v80 ? 0xC0000095 : 0;
      v80 = v18;
      v90 = v18;
      if ( v17 >= v31 )
      {
        v19 = *(_QWORD *)(v32 + 24);
        if ( *(struct CCompositionSwapchainBuffer **)(v19 + 48) == v5 )
          goto LABEL_32;
        Win32kImportTable = DxgkGetWin32kImportTable();
        (*(void (__fastcall **)(__int64))(Win32kImportTable + 264))(v19);
        v22 = (char)v5;
        v5 = *(struct CCompositionSwapchainBuffer **)(v32 + 48);
        if ( v5 )
        {
          v23 = *((_QWORD *)v5 + 4);
          if ( v23 )
          {
            v79 = 0LL;
            CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(v23, &v79, v21);
            if ( v79 )
            {
              if ( *(_DWORD *)v79 != 10 && *(_DWORD *)v79 != 24 && *(_DWORD *)v79 != 28 && *(_DWORD *)v79 != 87 )
              {
                if ( *(_DWORD *)v79 != 103 && (unsigned int)(*(_DWORD *)v79 - 106) >= 2 )
                {
                  v5 = 0LL;
                  v7 = -1073741811;
                  v79 = 0LL;
LABEL_31:
                  v30 = DxgkGetWin32kImportTable();
                  (*(void (**)(void))(v30 + 280))();
                  v14 = v97;
                  if ( v7 < 0 )
                    goto LABEL_33;
LABEL_32:
                  if ( (*(_BYTE *)(v32 + 32) & 2) != 0 )
                  {
                    v39 = v14;
                    v40 = v14 + 16;
                    v14 = -1;
                    if ( v40 >= v39 )
                      v14 = v40;
                    v7 = v40 < v39 ? 0xC0000095 : 0;
                    v97 = v14;
                    HIDWORD(v89) = v14;
                  }
                  goto LABEL_33;
                }
                v22 = 1;
              }
            }
          }
        }
        v24 = *(_QWORD *)(v19 + 40);
        v79 = 0LL;
        v25 = CCompositionSwapchainBuffer::Create(0, a3, a4, v24, &v79);
        v26 = v79;
        v7 = v25;
        if ( v25 < 0 )
        {
          v5 = 0LL;
        }
        else
        {
          if ( !v5 )
            goto LABEL_27;
          v79 = 0LL;
          v96 = 0LL;
          v92[1] = 0;
          v92[0] = v22 != 0 ? 4 : 2;
          v93 = *((_QWORD *)v5 + 7);
          v94 = *((_QWORD *)v5 + 9);
          v95 = *((_QWORD *)v5 + 5);
          v27 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v92, 1, &v79);
          v28 = v79;
          v7 = v27;
          if ( v27 >= 0 )
          {
            v7 = (*(__int64 (__fastcall **)(struct CCompositionSwapchainBuffer *, struct CCompositionSwapchainBuffer *))(*(_QWORD *)v26 + 216LL))(
                   v26,
                   v79);
            if ( v7 >= 0 )
              v28 = 0LL;
          }
          if ( v28 )
            (**(void (__fastcall ***)(struct CCompositionSwapchainBuffer *, __int64))v28)(v28, 1LL);
          v29 = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(struct CCompositionSwapchainBuffer *, _QWORD))(v29 + 272))(v5, 0LL);
          v5 = 0LL;
          if ( v7 >= 0 )
          {
LABEL_27:
            v7 = CContentResourceState::RebindCompositionSurfaceBuffer((CContentResourceState *)v32, v26);
            if ( v7 >= 0 )
              v26 = v5;
          }
        }
        if ( v26 )
          (**(void (__fastcall ***)(struct CCompositionSwapchainBuffer *, __int64))v26)(v26, 1LL);
        goto LABEL_31;
      }
    }
LABEL_33:
    v15 = (char *)this + 16;
    v11 = v81;
    v16 = *v82;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v7;
}
