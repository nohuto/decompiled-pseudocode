/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1400BA680 (NtDCompositionProcessChannelBatchBuffer.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1400213E0 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1400216E4 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1400219B8 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x140021F60 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1400220EC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x140023F00 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     McTemplateK0qp_EtwWriteTransfer @ 0x14003FAF0 (McTemplateK0qp_EtwWriteTransfer.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     CreateSharedResourceObject @ 0x14004E81C (CreateSharedResourceObject.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x14004E990 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400502F8 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1400503C8 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140050C4C (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x140050D6C (-CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400511B4 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054168 (--0-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEA.c)
 *     ??0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1400541A4 (--0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z.c)
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x14006913C (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 *     DirectComposition::Memory::Allocate_0 @ 0x1400692E8 (DirectComposition--Memory--Allocate_0.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x140069674 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1400BEC58 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1400BFCBC (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1400DE9EC (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     ?ActivateChannelTrigger@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1400E83B8 (-ActivateChannelTrigger@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1400F098C (McTemplateK0x_EtwWriteTransfer.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1401007CC (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x140111488 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x14014B200 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_29159638__private_IsEnabledDeviceUsageNoInline @ 0x140228F1C (Feature_29159638__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        unsigned __int64 this,
        unsigned int *a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  char v5; // r14
  unsigned int v6; // r10d
  unsigned int *v7; // r11
  DirectComposition::CApplicationChannel *v8; // r13
  signed int ExternalPrivateResource; // ebx
  __int64 v10; // rdx
  void *v11; // rdi
  void *v12; // r14
  size_t v13; // rsi
  void *v14; // rax
  int v15; // r14d
  unsigned int v16; // edi
  unsigned int v17; // r14d
  struct DirectComposition::CResourceMarshaler *v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // edi
  void *v21; // rcx
  unsigned int v22; // esi
  signed __int32 v23; // eax
  PVOID v24; // rcx
  unsigned int v25; // r15d
  struct DirectComposition::CResourceMarshaler *v26; // r14
  __int64 v27; // rax
  signed __int32 v28; // eax
  DirectComposition::CVisualTargetMarshaler *v29; // rax
  _DWORD *v30; // rbx
  struct DirectComposition::CResourceMarshaler *v31; // rsi
  _QWORD *v32; // rax
  __int64 v33; // rdx
  char v34; // si
  char v35; // di
  unsigned int *v36; // r13
  LARGE_INTEGER v37; // r12
  __int64 v38; // rcx
  ULONGLONG v39; // rdi
  _DWORD *v40; // rdi
  __int64 v41; // r15
  char v42; // si
  LONGLONG v43; // r14
  LARGE_INTEGER v44; // rdi
  LARGE_INTEGER PerformanceCounter; // r8
  __int64 v46; // rdx
  int v47; // r9d
  __int64 v48; // r14
  unsigned int v49; // r15d
  unsigned int v50; // esi
  unsigned int v51; // edi
  __int64 v52; // rdx
  __int64 v53; // r8
  unsigned __int64 v54; // rbx
  _DWORD *v55; // rbx
  __int64 v56; // rax
  struct DirectComposition::CInteractionMarshaler *v57; // rdi
  int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // r14d
  unsigned __int64 v61; // rax
  void *v62; // rax
  void *v63; // rsi
  const void *v64; // rdx
  _OWORD *v65; // rax
  int v66; // eax
  unsigned int v67; // r14d
  unsigned __int64 v68; // rax
  void *v69; // rax
  void *v70; // rsi
  const void *v71; // rdx
  unsigned int v72; // ebx
  __int64 v73; // rcx
  unsigned __int64 v74; // rdi
  bool v75; // zf
  void **Handle; // rdi
  __int64 v77; // rcx
  unsigned __int64 v78; // rbx
  _DWORD *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned int v82; // r15d
  unsigned int v83; // esi
  struct DirectComposition::CBaseAnimation *v84; // r14
  unsigned __int64 v85; // rbx
  _DWORD *v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // r8
  unsigned __int64 v89; // rdi
  struct DirectComposition::CResourceMarshaler *v90; // rdi
  unsigned __int8 (__fastcall *v91)(struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD); // rbx
  unsigned int v92; // eax
  unsigned int v93; // ebx
  __int64 v94; // rcx
  unsigned __int64 v95; // rdi
  __int64 v96; // r12
  __int64 v97; // rcx
  unsigned __int64 v98; // rdi
  __int64 v99; // rdi
  __int64 *v100; // rsi
  __int64 v101; // r14
  unsigned __int64 v102; // r14
  unsigned __int64 v103; // r15
  __int64 v104; // rcx
  size_t v105; // r8
  __int64 v106; // rdx
  unsigned int v107; // esi
  __int64 v108; // rcx
  unsigned __int64 v109; // rdi
  __int64 v110; // r8
  char v111; // al
  __int64 v112; // rbx
  unsigned int v113; // esi
  __int64 v114; // rcx
  unsigned __int64 v115; // rdi
  unsigned int *v116; // r8
  unsigned int *v117; // r11
  unsigned int v118; // r10d
  unsigned __int64 v119; // rsi
  unsigned int *v120; // rbx
  unsigned int v121; // r15d
  __int64 v122; // rcx
  char *v123; // rdi
  unsigned __int64 v124; // rdx
  struct DirectComposition::CResourceMarshaler *v125; // r14
  __int64 v126; // r8
  char v127; // r9
  unsigned int v128; // r8d
  __int64 v129; // rcx
  struct DirectComposition::CResourceMarshaler *v130; // rdx
  unsigned int *v131; // rdx
  const unsigned int *v132; // r11
  unsigned int v133; // r10d
  unsigned __int64 v134; // r8
  unsigned int v135; // r14d
  unsigned int v136; // esi
  const struct tagMsgRoutingInfo *v137; // r15
  HWND v138; // r12
  __int64 v139; // rcx
  unsigned __int64 v140; // rdi
  _DWORD *v141; // rdi
  DirectComposition::CVisualMarshaler *v142; // rax
  __int64 v143; // rsi
  __int64 v144; // rcx
  unsigned __int64 v145; // rbx
  _DWORD *v146; // rbx
  DirectComposition::CVisualMarshaler *v147; // rax
  unsigned int *v148; // rdx
  unsigned int *v149; // r11
  unsigned int v150; // r10d
  unsigned __int64 v151; // rdi
  unsigned int *v152; // rsi
  unsigned int v153; // r14d
  __int64 v154; // rcx
  unsigned __int64 v155; // rbx
  struct DirectComposition::CResourceMarshaler *v156; // rbx
  __int64 v157; // rbx
  unsigned int v158; // esi
  __int64 v159; // rcx
  unsigned __int64 v160; // rdi
  int v162; // [rsp+40h] [rbp-E8h]
  unsigned int v163; // [rsp+44h] [rbp-E4h]
  char v164; // [rsp+48h] [rbp-E0h] BYREF
  char v165[7]; // [rsp+49h] [rbp-DFh] BYREF
  unsigned int *v166; // [rsp+50h] [rbp-D8h]
  char v167; // [rsp+58h] [rbp-D0h] BYREF
  char v168; // [rsp+59h] [rbp-CFh] BYREF
  char v169; // [rsp+5Ah] [rbp-CEh] BYREF
  char v170; // [rsp+5Bh] [rbp-CDh] BYREF
  char v171[4]; // [rsp+5Ch] [rbp-CCh] BYREF
  PVOID v172; // [rsp+60h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-C0h] BYREF
  unsigned int *v174; // [rsp+70h] [rbp-B8h]
  unsigned int v175; // [rsp+78h] [rbp-B0h]
  LARGE_INTEGER v176; // [rsp+80h] [rbp-A8h]
  PVOID v177; // [rsp+88h] [rbp-A0h] BYREF
  struct DirectComposition::CInteractionMarshaler *v178; // [rsp+90h] [rbp-98h] BYREF
  struct DirectComposition::CResourceMarshaler *v179; // [rsp+98h] [rbp-90h] BYREF
  struct DirectComposition::CResourceMarshaler *v180[3]; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD Src[2]; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v182; // [rsp+C8h] [rbp-60h]
  union _SLIST_HEADER *v183; // [rsp+130h] [rbp+8h]

  v183 = (union _SLIST_HEADER *)this;
  v5 = a4;
  v6 = a3;
  v163 = a3;
  v7 = a2;
  v166 = a2;
  v8 = (DirectComposition::CApplicationChannel *)this;
  ExternalPrivateResource = 0;
  while ( ExternalPrivateResource >= 0 && v6 >= 4 )
  {
    ++*a5;
    v10 = *v7;
    v162 = v10;
    v175 = *v7;
    if ( (_DWORD)v10 == 11 )
    {
      this = (unsigned __int64)v7;
      if ( v6 < 0x18 )
      {
LABEL_393:
        ExternalPrivateResource = -1073741811;
        v15 = v10;
        goto LABEL_414;
      }
      v166 = v7 + 6;
      v163 = v6 - 24;
      v157 = *((_QWORD *)v7 + 2);
      v158 = v7[2];
      v159 = v7[1];
      v165[0] = 0;
      v160 = (unsigned int)(v159 - 1);
      if ( (_DWORD)v159 && v160 < *((_QWORD *)v8 + 11) )
        v57 = *(struct DirectComposition::CInteractionMarshaler **)(*((_QWORD *)v8 + 12) * v160 + *((_QWORD *)v8 + 8));
      else
        v57 = 0LL;
      if ( (unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v159, v10, 0x140000000uLL) )
      {
        if ( !v57 )
          goto LABEL_47;
        if ( *((_DWORD *)v57 + 5) != (*((_DWORD *)v57 + 6) ^ ~(_DWORD)v57) )
          KeBugCheck(0xC000A003);
      }
      if ( !v57 )
        goto LABEL_47;
      ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, char *))(*(_QWORD *)v57 + 240LL))(
                                  v57,
                                  v8,
                                  v158,
                                  v157,
                                  v165);
      if ( ExternalPrivateResource >= 0
        && *((_QWORD *)v57 + 5)
        && DirectComposition::CApplicationChannel::UnbindAnimation(v8, v57, v158) )
      {
        v111 = 1;
        v165[0] = 1;
      }
      else
      {
        v111 = v165[0];
      }
LABEL_408:
      if ( ExternalPrivateResource < 0 )
        goto LABEL_413;
      v75 = v111 == 0;
LABEL_410:
      if ( v75 )
        goto LABEL_413;
LABEL_411:
      v130 = v57;
LABEL_412:
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v8, v130);
    }
    else if ( (_DWORD)v10 == 15 )
    {
      v148 = v7;
      if ( v6 < 0x10 )
      {
        ExternalPrivateResource = -1073741811;
        goto LABEL_413;
      }
      v149 = v7 + 4;
      v166 = v149;
      v150 = v6 - 16;
      v163 = v150;
      v151 = v148[3];
      this = ((_DWORD)v151 + 3) & 0xFFFFFFFC;
      if ( (unsigned int)this >= (unsigned int)v151 && v150 >= (unsigned int)this )
      {
        v152 = v149;
        v166 = (unsigned int *)((char *)v149 + (unsigned int)this);
        v163 = v150 - this;
        v153 = v148[2];
        v154 = v148[1];
        v155 = (unsigned int)(v154 - 1);
        if ( (_DWORD)v154 && v155 < *((_QWORD *)v8 + 11) )
          v156 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)v8 + 12) * v155 + *((_QWORD *)v8 + 8));
        else
          v156 = 0LL;
        if ( (unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v154, v148, 0x140000000uLL) )
        {
          if ( v156 )
          {
            if ( *((_DWORD *)v156 + 5) != (*((_DWORD *)v156 + 6) ^ ~(_DWORD)v156) )
LABEL_389:
              KeBugCheck(0xC000A003);
            goto LABEL_390;
          }
        }
        else
        {
LABEL_390:
          if ( v156 )
          {
            ExternalPrivateResource = DirectComposition::CApplicationChannel::SetResourceBufferProperty(
                                        v8,
                                        v156,
                                        v153,
                                        v152,
                                        v151);
            goto LABEL_413;
          }
        }
LABEL_47:
        ExternalPrivateResource = -1073741790;
        goto LABEL_413;
      }
LABEL_23:
      ExternalPrivateResource = -1073741811;
    }
    else
    {
      switch ( (int)v10 )
      {
        case 0:
          v11 = 0LL;
          v174 = 0LL;
          if ( v6 >= 0x18 && v5 )
          {
            v166 = v7 + 6;
            v163 = v6 - 24;
            v12 = (void *)*((_QWORD *)v7 + 1);
            v13 = v7[4];
            v176.LowPart = v13;
            if ( !(_DWORD)v13 )
              ExternalPrivateResource = -1073741811;
            if ( ExternalPrivateResource < 0 )
            {
              v15 = v10;
            }
            else
            {
              v14 = (void *)DirectComposition::Memory::Allocate_0((unsigned int)v13, 1717715780LL, 0x140000000LL, 0);
              v11 = v14;
              v174 = (unsigned int *)v14;
              if ( !v14 )
              {
                ExternalPrivateResource = -1073741801;
                v15 = v162;
                goto LABEL_20;
              }
              RtlCopyFromUser(v14, v12, v13);
              v15 = v162;
            }
            if ( ExternalPrivateResource >= 0 )
              ExternalPrivateResource = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
                                          v8,
                                          v11,
                                          v13,
                                          0,
                                          a5);
          }
          else
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
          }
LABEL_20:
          if ( v11 )
            GreDeleteFastMutex((char *)v11);
          goto LABEL_414;
        case 1:
          if ( v6 < 8 )
            goto LABEL_23;
          v166 = v7 + 2;
          v163 = v6 - 8;
          ExternalPrivateResource = DirectComposition::CApplicationChannel::ActivateChannelTrigger(v8, v7[1]);
          break;
        case 2:
          if ( v6 < 0x10 )
            goto LABEL_23;
          v16 = v7[2];
          if ( v16 - 1 > 0xBE )
            goto LABEL_23;
          v166 = v7 + 4;
          v163 = v6 - 16;
          if ( !v7[3] )
          {
            ExternalPrivateResource = DirectComposition::CApplicationChannel::CreateExternalPrivateResource(
                                        v8,
                                        v7[1],
                                        v16);
            break;
          }
          v17 = v7[1];
          v18 = 0LL;
          v179 = 0LL;
          v177 = 0LL;
          if ( v16 == 182 )
            goto LABEL_32;
          v19 = v16;
          if ( v16 >= 0xC0 )
            goto LABEL_32;
          do
          {
            if ( (_DWORD)v19 == 182 )
            {
              ExternalPrivateResource = -1073741811;
              goto LABEL_35;
            }
            LODWORD(v19) = dword_140274520[v19];
          }
          while ( (unsigned int)v19 < 0xC0 );
LABEL_32:
          ExternalPrivateResource = CreateSharedResourceObject(
                                      (void *)v16,
                                      (struct DirectComposition::ResourceObject **)&v177);
          if ( ExternalPrivateResource >= 0 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)v177 + 15, 1, 0);
            ExternalPrivateResource = DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
                                        v8,
                                        (DirectComposition *)v16,
                                        v177,
                                        &v179);
            v18 = v179;
          }
LABEL_35:
          if ( ExternalPrivateResource >= 0 )
            ExternalPrivateResource = DirectComposition::CApplicationChannel::RegisterExternalResource(
                                        (__int64)v8,
                                        v18,
                                        v17,
                                        v16,
                                        1);
          break;
        case 3:
          this = (unsigned __int64)v7;
          if ( v6 < 0x18 )
            goto LABEL_23;
          v20 = v7[4];
          if ( v20 - 1 > 0xBE )
            goto LABEL_23;
          v166 = v7 + 6;
          v163 = v6 - 24;
          v21 = (void *)*((_QWORD *)v7 + 1);
          if ( v7[5] )
          {
            v22 = v7[1];
            v180[0] = 0LL;
            Object = 0LL;
            ExternalPrivateResource = DirectComposition::ResourceObject::ResolveHandle(
                                        v21,
                                        2u,
                                        1,
                                        (struct DirectComposition::ResourceObject **)&Object);
            if ( ExternalPrivateResource >= 0 )
            {
              this = (unsigned __int64)Object;
              if ( *((_DWORD *)Object + 9) != v20 )
                goto LABEL_55;
              v23 = _InterlockedCompareExchange((volatile signed __int32 *)Object + 15, 1, 0);
              LOBYTE(this) = v23 == 0;
              if ( v23 )
              {
                v24 = Object;
LABEL_46:
                ObfDereferenceObject(v24);
                goto LABEL_47;
              }
            }
            if ( ExternalPrivateResource >= 0 )
            {
              ExternalPrivateResource = DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
                                          v8,
                                          (DirectComposition *)v20,
                                          Object,
                                          v180);
              if ( ExternalPrivateResource >= 0 )
                ExternalPrivateResource = DirectComposition::CApplicationChannel::RegisterExternalResource(
                                            (__int64)v8,
                                            v180[0],
                                            v22,
                                            v20,
                                            2);
            }
          }
          else
          {
            v25 = v7[1];
            v26 = 0LL;
            v172 = 0LL;
            ExternalPrivateResource = DirectComposition::ResourceObject::ResolveHandle(
                                        v21,
                                        1u,
                                        1,
                                        (struct DirectComposition::ResourceObject **)&v172);
            if ( ExternalPrivateResource >= 0 )
            {
              this = (unsigned __int64)v172;
              v27 = *((unsigned int *)v172 + 9);
              if ( (unsigned int)v27 >= 0xC0 )
              {
LABEL_55:
                ObfDereferenceObject((PVOID)this);
                ExternalPrivateResource = -1073741811;
                break;
              }
              while ( (_DWORD)v27 != v20 )
              {
                LODWORD(v27) = dword_140274520[v27];
                if ( (unsigned int)v27 >= 0xC0 )
                  goto LABEL_55;
              }
              if ( v20 == 182 )
              {
                _InterlockedCompareExchange((volatile signed __int32 *)v172 + 14, 2, 0);
                v28 = _InterlockedCompareExchange((volatile signed __int32 *)(this + 56), 3, 2);
                LOBYTE(this) = v28 == 2;
                if ( v28 != 2 )
                  goto LABEL_58;
              }
              else
              {
                _InterlockedCompareExchange((volatile signed __int32 *)v172 + 14, 1, 0);
                this = *(unsigned int *)(this + 56);
                if ( (_DWORD)this != 1 )
                {
LABEL_58:
                  v24 = v172;
                  goto LABEL_46;
                }
              }
            }
            if ( ExternalPrivateResource >= 0 )
            {
              if ( v20 == 182 )
              {
                v29 = (DirectComposition::CVisualTargetMarshaler *)DirectComposition::Memory::AllocateAndClear_0(
                                                                     0x48uLL,
                                                                     1953907524LL,
                                                                     1);
                v30 = v172;
                if ( v29 )
                {
                  v31 = DirectComposition::CVisualTargetMarshaler::CVisualTargetMarshaler(
                          v29,
                          (const struct DirectComposition::CSharedSystemResource *)((char *)v172 + 24));
LABEL_67:
                  if ( v31 )
                  {
                    ExternalPrivateResource = DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(
                                                v8,
                                                v31);
                    v26 = v31;
                    if ( ExternalPrivateResource < 0 )
                      v26 = 0LL;
                  }
                  else
                  {
                    if ( v20 == 182 )
                      v30[14] = 2;
                    ObfDereferenceObject(v30);
                    ExternalPrivateResource = -1073741801;
                  }
                  if ( ExternalPrivateResource >= 0 )
                    ExternalPrivateResource = DirectComposition::CApplicationChannel::RegisterExternalResource(
                                                (__int64)v8,
                                                v26,
                                                v25,
                                                v20,
                                                2);
                  break;
                }
              }
              else
              {
                v32 = (_QWORD *)DirectComposition::Memory::AllocateAndClear_0(0x40uLL, 812860228LL, 1);
                v30 = v172;
                if ( v32 )
                {
                  v31 = (struct DirectComposition::CResourceMarshaler *)DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>(
                                                                          v32,
                                                                          (__int64)v172 + 24,
                                                                          v20);
                  goto LABEL_67;
                }
              }
              v31 = 0LL;
              goto LABEL_67;
            }
          }
          break;
        case 4:
          if ( v6 >= 8 )
          {
            v166 = v7 + 2;
            v163 = v6 - 8;
            ExternalPrivateResource = DirectComposition::CApplicationChannel::ReleaseResource((size_t *)v8, v7[1]);
          }
          else
          {
            ExternalPrivateResource = -1073741811;
          }
          break;
        case 5:
          this = (unsigned __int64)v7;
          if ( v6 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 4;
          v163 = v6 - 16;
          v33 = *((_QWORD *)v7 + 1);
          v34 = 0;
          ExternalPrivateResource = 0;
          this = v7[1];
          if ( !(_DWORD)this )
          {
            if ( *((_BYTE *)v8 + 60) == ((_DWORD)v33 != 0) )
              goto LABEL_94;
            *((_BYTE *)v8 + 60) = (_DWORD)v33 != 0;
            *((_DWORD *)v8 + 14) |= 1u;
            goto LABEL_93;
          }
          this = (unsigned int)(this - 1);
          if ( (_DWORD)this )
          {
            if ( (_DWORD)this != 1 )
            {
              ExternalPrivateResource = -1073741811;
              goto LABEL_94;
            }
            if ( *((_BYTE *)v8 + 62) != ((_DWORD)v33 != 0) )
            {
              *((_BYTE *)v8 + 62) = (_DWORD)v33 != 0;
              *((_DWORD *)v8 + 14) |= 4u;
LABEL_93:
              v34 = 1;
            }
          }
          else
          {
            v35 = (_DWORD)v33 != 0;
            if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *, __int64, unsigned __int64))(*(_QWORD *)v8 + 8LL))(
                   v8,
                   v33,
                   0x140000000uLL) != 2 )
            {
              ExternalPrivateResource = -1073741790;
              goto LABEL_94;
            }
            if ( *((_BYTE *)v8 + 61) != v35 )
            {
              *((_BYTE *)v8 + 61) = v35;
              *((_DWORD *)v8 + 14) |= 2u;
              goto LABEL_93;
            }
          }
LABEL_94:
          if ( ExternalPrivateResource >= 0 && v34 )
            *((_BYTE *)v8 + 264) |= 1u;
          break;
        case 6:
          v36 = v7;
          v174 = v7;
          if ( v6 < 0x18 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 6;
          v163 = v6 - 24;
          v37 = *(LARGE_INTEGER *)(v7 + 2);
          v176 = v37;
          v38 = v7[1];
          ExternalPrivateResource = 0;
          v39 = (unsigned int)(v38 - 1);
          if ( (_DWORD)v38 && v39 < v183[5].Region )
            v40 = *(_DWORD **)(v183[6].Alignment * v39 + v183[4].Alignment);
          else
            v40 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v38, v10, 0x140000000uLL) )
            goto LABEL_106;
          if ( v40 )
          {
            if ( v40[5] != (v40[6] ^ ~(_DWORD)v40) )
              goto LABEL_389;
LABEL_106:
            if ( v40 )
            {
              v41 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v40 + 104LL))(v40);
              if ( v41 )
              {
                DirectComposition::CApplicationChannel::ProcessReturnedBatches(v183);
                v42 = 0;
                v43 = 0LL;
                v44.QuadPart = 0LL;
                this = *(_QWORD *)(v41 + 72);
                if ( (*(_DWORD *)(this + 24) & 3) == 0 )
                {
                  v42 = (*(_BYTE *)(v41 + 200) & 4) != 0;
                  v44 = *(LARGE_INTEGER *)(v41 + 216);
                  v43 = *(_QWORD *)(v41 + 208);
                  goto LABEL_130;
                }
                PerformanceCounter = KeQueryPerformanceCounter(0LL);
                v46 = *(_QWORD *)(v41 + 72);
                if ( !v46 )
                {
LABEL_130:
                  if ( !v42 && v37.QuadPart > (unsigned __int64)v44.QuadPart )
                    v43 = v37.QuadPart + v43 - v44.QuadPart;
                  *((_QWORD *)v36 + 2) = v43;
                  break;
                }
                while ( 2 )
                {
                  this = *(_QWORD *)(v41 + 112);
                  v42 = (*(_BYTE *)(v41 + 200) & 4) != 0;
                  v43 = *(_QWORD *)(v41 + 208);
                  v44 = *(LARGE_INTEGER *)(v41 + 216);
                  v47 = *(_DWORD *)(v46 + 24);
                  if ( (v47 & 4) != 0 )
                  {
                    if ( !*(_QWORD *)(v41 + 112) && !*(_QWORD *)(v41 + 144) )
                      this = PerformanceCounter.QuadPart;
                    v44.QuadPart = this;
                  }
                  if ( (v47 & 8) != 0 )
                  {
                    if ( PerformanceCounter.QuadPart < this )
                      goto LABEL_123;
                    if ( (*(_BYTE *)(v41 + 200) & 4) != 0 )
                      goto LABEL_424;
                    if ( *(_BYTE *)(v46 + 28) )
                    {
                      v43 = PerformanceCounter.QuadPart - v44.QuadPart + *(_QWORD *)(v41 + 208);
                      goto LABEL_123;
                    }
                    if ( (*(_BYTE *)(v41 + 200) & 4) != 0 )
                    {
LABEL_424:
                      if ( !*(_BYTE *)(v46 + 28) )
                        v44 = PerformanceCounter;
                    }
LABEL_123:
                    v42 = *(_BYTE *)(v46 + 28);
                  }
                  if ( (v47 & 0x10) != 0 )
                  {
                    v43 = *(_QWORD *)(v46 + 32);
                    if ( PerformanceCounter.QuadPart >= this )
                      v44 = PerformanceCounter;
                  }
                  v46 = *(_QWORD *)(v46 + 16);
                  if ( !v46 )
                  {
                    v36 = v174;
                    v37 = v176;
                    goto LABEL_130;
                  }
                  continue;
                }
              }
            }
          }
LABEL_134:
          ExternalPrivateResource = -1073741811;
          break;
        case 7:
          if ( v6 < 0x18 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 6;
          v163 = v6 - 24;
          v48 = *((_QWORD *)v7 + 2);
          v49 = v7[3];
          v50 = v7[2];
          v51 = v7[1];
          if ( !CInputManager::OwnsPointerId(*((_DWORD *)v8 + 684), v49) )
            goto LABEL_47;
          v54 = v51 - 1;
          if ( v51 && v54 < *((_QWORD *)v8 + 11) )
            v55 = *(_DWORD **)(*((_QWORD *)v8 + 12) * v54 + *((_QWORD *)v8 + 8));
          else
            v55 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(this, v52, v53) )
            goto LABEL_145;
          if ( !v55 )
            goto LABEL_23;
          if ( v55[5] != (v55[6] ^ ~(_DWORD)v55) )
            goto LABEL_389;
LABEL_145:
          if ( !v55 )
            goto LABEL_23;
          v56 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v55 + 152LL))(v55);
          v57 = (struct DirectComposition::CInteractionMarshaler *)v56;
          if ( !v56 )
            goto LABEL_23;
          if ( v50 )
          {
            if ( v50 != 1 )
            {
              ExternalPrivateResource = -1073741811;
              goto LABEL_186;
            }
            *(_QWORD *)&v182 = v49;
            *((_QWORD *)&v182 + 1) = v48;
            ExternalPrivateResource = 0;
            v58 = *(_DWORD *)(v56 + 304);
            this = *((unsigned int *)v57 + 77);
            if ( v58 != (_DWORD)this )
              goto LABEL_164;
            v59 = v58 + 1;
            v60 = -1;
            if ( v59 )
              v60 = v59;
            ExternalPrivateResource = v59 == 0 ? 0xC0000095 : 0;
            if ( v59 && v60 > (unsigned int)this )
            {
              this = v60;
              v61 = 8LL * v60;
              v180[1] = (struct DirectComposition::CResourceMarshaler *)((v60 * (unsigned __int128)8uLL) >> 64);
              if ( is_mul_ok(v60, 8uLL) )
              {
                ExternalPrivateResource = 0;
              }
              else
              {
                v61 = -1LL;
                ExternalPrivateResource = -1073741675;
              }
              if ( ExternalPrivateResource >= 0 )
              {
                v62 = (void *)Win32AllocPoolImpl(256LL, v61, 0x77707355u);
                v63 = v62;
                if ( v62 )
                {
                  v64 = (const void *)*((_QWORD *)v57 + 37);
                  if ( v64 )
                  {
                    memmove(v62, v64, 8LL * *((unsigned int *)v57 + 76));
                    GreDeleteFastMutex(*((char **)v57 + 37));
                  }
                  *((_QWORD *)v57 + 37) = v63;
                  *((_DWORD *)v57 + 77) = v60;
                }
                else
                {
                  ExternalPrivateResource = -1073741801;
                }
                goto LABEL_164;
              }
            }
            else
            {
LABEL_164:
              if ( ExternalPrivateResource >= 0 && *((_DWORD *)v57 + 76) >= *((_DWORD *)v57 + 77) )
                ExternalPrivateResource = -1073741823;
            }
            if ( ExternalPrivateResource < 0 )
              break;
            v65 = (_OWORD *)Win32AllocPoolZInitImpl(256LL, 0x10uLL, 0x32644344u);
            if ( v65 )
            {
              *v65 = v182;
              this = *((unsigned int *)v57 + 76);
              *(_QWORD *)(*((_QWORD *)v57 + 37) + 8 * this) = v65;
              ++*((_DWORD *)v57 + 76);
            }
            else
            {
              ExternalPrivateResource = -1073741801;
            }
            goto LABEL_186;
          }
          v66 = *(_DWORD *)(v56 + 288) + 1;
          v67 = -1;
          if ( v66 )
            v67 = v66;
          ExternalPrivateResource = v66 == 0 ? 0xC0000095 : 0;
          if ( v66 && v67 > *((_DWORD *)v57 + 73) )
          {
            this = v67;
            v68 = 4LL * v67;
            v180[2] = (struct DirectComposition::CResourceMarshaler *)((v67 * (unsigned __int128)4uLL) >> 64);
            if ( is_mul_ok(v67, 4uLL) )
            {
              ExternalPrivateResource = 0;
            }
            else
            {
              v68 = -1LL;
              ExternalPrivateResource = -1073741675;
            }
            if ( ExternalPrivateResource < 0 )
              break;
            v69 = (void *)Win32AllocPoolImpl(256LL, v68, 0x77707355u);
            v70 = v69;
            if ( v69 )
            {
              v71 = (const void *)*((_QWORD *)v57 + 35);
              if ( v71 )
              {
                memmove(v69, v71, 4LL * *((unsigned int *)v57 + 72));
                GreDeleteFastMutex(*((char **)v57 + 35));
              }
              *((_QWORD *)v57 + 35) = v70;
              *((_DWORD *)v57 + 73) = v67;
            }
            else
            {
              ExternalPrivateResource = -1073741801;
            }
          }
          if ( ExternalPrivateResource < 0 )
            break;
          this = *((unsigned int *)v57 + 72);
          *(_DWORD *)(*((_QWORD *)v57 + 35) + 4 * this) = v49;
          ++*((_DWORD *)v57 + 72);
          *((_DWORD *)v57 + 4) |= 0x80u;
LABEL_186:
          if ( ExternalPrivateResource < 0 )
            break;
          goto LABEL_411;
        case 8:
          this = (unsigned __int64)v7;
          if ( v6 < 0xC )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 3;
          v163 = v6 - 12;
          v72 = v7[2];
          v73 = v7[1];
          v167 = 0;
          v74 = (unsigned int)(v73 - 1);
          if ( (_DWORD)v73 && v74 < *((_QWORD *)v8 + 11) )
            v57 = *(struct DirectComposition::CInteractionMarshaler **)(*((_QWORD *)v8 + 12) * v74 + *((_QWORD *)v8 + 8));
          else
            v57 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v73, v10, 0x140000000uLL) )
            goto LABEL_198;
          if ( !v57 )
            goto LABEL_47;
          if ( *((_DWORD *)v57 + 5) != (*((_DWORD *)v57 + 6) ^ ~(_DWORD)v57) )
            KeBugCheck(0xC000A003);
LABEL_198:
          if ( !v57 )
            goto LABEL_47;
          ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, char *))(*(_QWORD *)v57 + 232LL))(
                                      v57,
                                      v8,
                                      v72,
                                      &v167);
          if ( ExternalPrivateResource < 0 )
            break;
          v75 = v167 == 0;
          goto LABEL_410;
        case 9:
          this = (unsigned __int64)v7;
          if ( v6 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 4;
          v163 = v6 - 16;
          Handle = (void **)(v7 + 2);
          v77 = v7[1];
          v78 = (unsigned int)(v77 - 1);
          if ( (_DWORD)v77 && v78 < *((_QWORD *)v8 + 11) )
            v79 = *(_DWORD **)(*((_QWORD *)v8 + 12) * v78 + *((_QWORD *)v8 + 8));
          else
            v79 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v77, v10, 0x140000000uLL) )
            goto LABEL_210;
          if ( !v79 )
            goto LABEL_47;
          if ( v79[5] != (v79[6] ^ ~(_DWORD)v79) )
            goto LABEL_389;
LABEL_210:
          if ( !v79 )
            goto LABEL_47;
          v80 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v79 + 72LL))(v79);
          if ( v80 )
          {
            *Handle = (void *)-1LL;
            ExternalPrivateResource = ObOpenObjectByPointer(
                                        (PVOID)(v80 - 24),
                                        0x40u,
                                        0LL,
                                        3u,
                                        ExCompositionObjectType,
                                        0,
                                        Handle);
          }
          else
          {
            ExternalPrivateResource = -1073741637;
          }
          break;
        case 10:
          this = (unsigned __int64)v7;
          if ( v6 < 0xC )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 3;
          v163 = v6 - 12;
          v93 = v7[2];
          v94 = v7[1];
          v168 = 0;
          v95 = (unsigned int)(v94 - 1);
          if ( (_DWORD)v94 && v95 < *((_QWORD *)v8 + 11) )
            v57 = *(struct DirectComposition::CInteractionMarshaler **)(*((_QWORD *)v8 + 12) * v95 + *((_QWORD *)v8 + 8));
          else
            v57 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v94, v10, 0x140000000uLL) )
            goto LABEL_248;
          if ( !v57 )
            goto LABEL_47;
          if ( *((_DWORD *)v57 + 5) != (*((_DWORD *)v57 + 6) ^ ~(_DWORD)v57) )
            KeBugCheck(0xC000A003);
LABEL_248:
          if ( !v57 )
            goto LABEL_47;
          ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, _QWORD, char *))(*(_QWORD *)v57 + 296LL))(
                                      v57,
                                      v93,
                                      &v168);
          if ( ExternalPrivateResource < 0 )
            break;
          v75 = v168 == 0;
          goto LABEL_410;
        case 12:
          this = (unsigned __int64)v7;
          if ( v6 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 4;
          v163 = v6 - 16;
          v107 = v7[2];
          v108 = v7[1];
          v164 = 0;
          v109 = (unsigned int)(v108 - 1);
          if ( (_DWORD)v108 && v109 < *((_QWORD *)v8 + 11) )
            v57 = *(struct DirectComposition::CInteractionMarshaler **)(*((_QWORD *)v8 + 12) * v109 + *((_QWORD *)v8 + 8));
          else
            v57 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v108, v10, 0x140000000uLL) )
            goto LABEL_285;
          if ( !v57 )
            goto LABEL_47;
          if ( *((_DWORD *)v57 + 5) != (*((_DWORD *)v57 + 6) ^ ~(_DWORD)v57) )
            KeBugCheck(0xC000A003);
LABEL_285:
          if ( !v57 )
            goto LABEL_47;
          ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, _QWORD, __int64, char *))(*(_QWORD *)v57 + 248LL))(
                                      v57,
                                      v107,
                                      v110,
                                      &v164);
          if ( ExternalPrivateResource >= 0
            && *((_QWORD *)v57 + 5)
            && DirectComposition::CApplicationChannel::UnbindAnimation(v8, v57, v107) )
          {
            v111 = 1;
            v164 = 1;
          }
          else
          {
            v111 = v164;
          }
          goto LABEL_408;
        case 13:
          this = (unsigned __int64)v7;
          if ( v6 < 0x18 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 6;
          v163 = v6 - 24;
          v112 = *((_QWORD *)v7 + 2);
          v113 = v7[2];
          v114 = v7[1];
          v169 = 0;
          v115 = (unsigned int)(v114 - 1);
          if ( (_DWORD)v114 && v115 < *((_QWORD *)v8 + 11) )
            v57 = *(struct DirectComposition::CInteractionMarshaler **)(*((_QWORD *)v8 + 12) * v115 + *((_QWORD *)v8 + 8));
          else
            v57 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v114, v10, 0x140000000uLL) )
            goto LABEL_301;
          if ( !v57 )
            goto LABEL_47;
          if ( *((_DWORD *)v57 + 5) != (*((_DWORD *)v57 + 6) ^ ~(_DWORD)v57) )
            KeBugCheck(0xC000A003);
LABEL_301:
          if ( !v57 )
            goto LABEL_47;
          ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, _QWORD, __int64, char *))(*(_QWORD *)v57 + 256LL))(
                                      v57,
                                      v113,
                                      v112,
                                      &v169);
          if ( ExternalPrivateResource < 0 )
            break;
          v75 = v169 == 0;
          goto LABEL_410;
        case 14:
          v116 = v7;
          if ( v6 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v117 = v7 + 4;
          v166 = v117;
          v118 = v6 - 16;
          v163 = v118;
          v119 = v116[3];
          Src[1] = (v116[3] * (unsigned __int128)8uLL) >> 64;
          this = 8 * v119;
          if ( is_mul_ok(v119, 8uLL) )
          {
            ExternalPrivateResource = 0;
          }
          else
          {
            this = -1LL;
            ExternalPrivateResource = -1073741675;
          }
          if ( ExternalPrivateResource < 0 )
            break;
          if ( v118 < this )
          {
            ExternalPrivateResource = -1073741811;
            break;
          }
          v120 = v117;
          v166 = (unsigned int *)((char *)v117 + this);
          v163 = v118 - this;
          v121 = v116[2];
          v122 = v116[1];
          v170 = 0;
          v123 = 0LL;
          v124 = (unsigned int)(v122 - 1);
          if ( (_DWORD)v122 && v124 < *((_QWORD *)v8 + 11) )
          {
            v124 *= *((_QWORD *)v8 + 12);
            v125 = *(struct DirectComposition::CResourceMarshaler **)(v124 + *((_QWORD *)v8 + 8));
          }
          else
          {
            v125 = 0LL;
          }
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v122, v124, v116) )
            goto LABEL_320;
          if ( !v125 )
            goto LABEL_321;
          if ( *((_DWORD *)v125 + 5) != (*((_DWORD *)v125 + 6) ^ ~(_DWORD)v125) )
            KeBugCheck(0xC000A003);
LABEL_320:
          if ( !v125 )
          {
LABEL_321:
            ExternalPrivateResource = -1073741790;
            goto LABEL_322;
          }
          if ( v119 )
          {
            v123 = (char *)DirectComposition::Memory::Allocate_0(8 * v119, 1717715780LL, v126, v127);
            if ( !v123 )
            {
              ExternalPrivateResource = -1073741801;
LABEL_322:
              if ( v123 )
                GreDeleteFastMutex(v123);
              break;
            }
            v128 = 0;
            v129 = 0LL;
            do
            {
              *(_QWORD *)&v123[8 * v129] = *(_QWORD *)&v120[2 * v129];
              v129 = ++v128;
            }
            while ( v128 < v119 );
          }
          ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *, unsigned __int64, char *))(*(_QWORD *)v125 + 264LL))(
                                      v125,
                                      v121,
                                      v123,
                                      v119,
                                      &v170);
          if ( ExternalPrivateResource < 0 )
            goto LABEL_322;
          if ( !v170 )
            break;
          v130 = v125;
          goto LABEL_412;
        case 16:
          if ( v6 >= 0x10 )
          {
            v166 = v7 + 4;
            v163 = v6 - 16;
            ExternalPrivateResource = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
                                        v8,
                                        v7[1],
                                        v7[2],
                                        v7[3]);
          }
          else
          {
            ExternalPrivateResource = -1073741811;
          }
          break;
        case 17:
          v131 = v7;
          if ( v6 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            break;
          }
          v132 = v7 + 4;
          v166 = (unsigned int *)v132;
          v133 = v6 - 16;
          v163 = v133;
          v134 = v131[3];
          this = 4 * v134;
          if ( v133 < 4 * v134 )
            goto LABEL_23;
          v166 = (unsigned int *)((char *)v132 + this);
          v163 = v133 - this;
          ExternalPrivateResource = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                                      v8,
                                      v131[1],
                                      v131[2],
                                      v132,
                                      v134);
          break;
        case 18:
          if ( v6 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 4;
          v163 = v6 - 16;
          v81 = v7[3];
          v82 = v7[2];
          v83 = v7[1];
          v84 = 0LL;
          v85 = (unsigned int)(v81 - 1);
          if ( (_DWORD)v81 && v85 < *((_QWORD *)v8 + 11) )
            v86 = *(_DWORD **)(*((_QWORD *)v8 + 12) * v85 + *((_QWORD *)v8 + 8));
          else
            v86 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v81, v10, 0x140000000uLL) )
            goto LABEL_223;
          if ( v86 )
          {
            if ( v86[5] != (v86[6] ^ ~(_DWORD)v86) )
              goto LABEL_389;
LABEL_223:
            if ( v86 )
              v84 = (struct DirectComposition::CBaseAnimation *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v86 + 224LL))(v86);
          }
          if ( !v84 )
          {
            ExternalPrivateResource = -1073741811;
            break;
          }
          v89 = v83 - 1;
          if ( v83 && v89 < *((_QWORD *)v8 + 11) )
            v90 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)v8 + 12) * v89 + *((_QWORD *)v8 + 8));
          else
            v90 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(this, v87, v88) )
            goto LABEL_234;
          if ( !v90 )
            goto LABEL_47;
          if ( *((_DWORD *)v90 + 5) != (*((_DWORD *)v90 + 6) ^ ~(_DWORD)v90) )
            goto LABEL_389;
LABEL_234:
          if ( !v90 )
            goto LABEL_47;
          v91 = *(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD))(*(_QWORD *)v90 + 304LL);
          v92 = (*(__int64 (__fastcall **)(struct DirectComposition::CBaseAnimation *))(*(_QWORD *)v84 + 8LL))(v84);
          if ( v91(v90, v82, v92) )
            ExternalPrivateResource = DirectComposition::CApplicationChannel::BindAnimation(v8, v90, v82, v84);
          else
            ExternalPrivateResource = -1073741811;
          break;
        case 19:
          this = (unsigned __int64)v7;
          if ( v6 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 4;
          v163 = v6 - 16;
          v96 = *((_QWORD *)v7 + 1);
          v97 = v7[1];
          v98 = (unsigned int)(v97 - 1);
          if ( (_DWORD)v97 && v98 < *((_QWORD *)v8 + 11) )
            v99 = *(_QWORD *)(*((_QWORD *)v8 + 12) * v98 + *((_QWORD *)v8 + 8));
          else
            v99 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v97, v10, 0x140000000uLL) )
            goto LABEL_260;
          if ( !v99 )
            goto LABEL_47;
          if ( *(_DWORD *)(v99 + 20) != (*(_DWORD *)(v99 + 24) ^ ~(_DWORD)v99) )
            goto LABEL_389;
LABEL_260:
          if ( !v99 )
            goto LABEL_47;
          v100 = (__int64 *)((char *)v8 + 528);
          if ( *(_QWORD *)(v99 + 48) )
          {
            ExternalPrivateResource = -1073741790;
          }
          else if ( v96 )
          {
            ExternalPrivateResource = 0;
            this = *((unsigned int *)v8 + 143);
            v101 = *((_QWORD *)v8 + 69);
            if ( (_DWORD)this + *((_DWORD *)v8 + 144) == v101 )
            {
              v102 = v101 - *((unsigned int *)v8 + 142);
              v103 = (unsigned int)this;
              ExternalPrivateResource = DirectComposition::CDCompDynamicArrayBase::Grow(
                                          (DirectComposition::CApplicationChannel *)((char *)v8 + 528),
                                          1LL,
                                          0x626E4344u);
              if ( ExternalPrivateResource >= 0 && v103 > v102 )
              {
                v104 = *((unsigned int *)v8 + 142);
                *((_DWORD *)v8 + 142) = v104 + 1;
                v105 = *((_QWORD *)v8 + 70);
                v106 = *v100;
                Src[0] = *(_QWORD *)(v105 * v104 + *v100);
                memmove((void *)(v106 + v105 * (*((_QWORD *)v8 + 69) - 1LL)), Src, v105);
              }
            }
            if ( ExternalPrivateResource < 0 )
              break;
            ++*((_DWORD *)v8 + 144);
            *(_QWORD *)(v99 + 48) = v96;
          }
          else
          {
            ExternalPrivateResource = -1073741811;
          }
          if ( ExternalPrivateResource >= 0
            && *(_QWORD *)(v99 + 24) == 1LL
            && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v99 + 24LL))(v99) )
          {
            DirectComposition::CResourceMarshaler::ReturnResourceLifetimeTag(
              (DirectComposition::CResourceMarshaler *)v99,
              (DirectComposition::CApplicationChannel *)((char *)v8 + 528));
          }
          break;
        case 20:
          if ( v6 >= 0x14 )
          {
            v166 = v7 + 5;
            v163 = v6 - 20;
            ExternalPrivateResource = DirectComposition::CApplicationChannel::AddVisualChild(
                                        v8,
                                        v7[1],
                                        v7[2],
                                        v7[3],
                                        v7[4]);
          }
          else
          {
            ExternalPrivateResource = -1073741811;
          }
          break;
        case 21:
          this = (unsigned __int64)v7;
          if ( v6 < 0x48 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 18;
          v163 = v6 - 72;
          v135 = v7[5];
          v136 = v7[4];
          v137 = (const struct tagMsgRoutingInfo *)(v7 + 8);
          if ( !v7[6] )
            v137 = 0LL;
          v138 = (HWND)*((_QWORD *)v7 + 1);
          v139 = v7[1];
          ExternalPrivateResource = 0;
          v140 = (unsigned int)(v139 - 1);
          if ( (_DWORD)v139 && v140 < *((_QWORD *)v8 + 11) )
            v141 = *(_DWORD **)(*((_QWORD *)v8 + 12) * v140 + *((_QWORD *)v8 + 8));
          else
            v141 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v139, v10, 0x140000000uLL) )
            goto LABEL_353;
          if ( !v141 )
            goto LABEL_134;
          if ( v141[5] != (v141[6] ^ ~(_DWORD)v141) )
            goto LABEL_389;
LABEL_353:
          if ( !v141 )
            goto LABEL_134;
          v142 = (DirectComposition::CVisualMarshaler *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v141 + 192LL))(v141);
          if ( !v142 )
            goto LABEL_134;
          this = v136 | v135;
          if ( (this & 0xFFFF7EC0) != 0 )
            goto LABEL_134;
          if ( v136 )
            ExternalPrivateResource = DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(
                                        v142,
                                        v8,
                                        v138,
                                        v137,
                                        v136,
                                        v135);
          break;
        case 22:
          this = (unsigned __int64)v7;
          if ( v6 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v15 = v10;
            goto LABEL_414;
          }
          v166 = v7 + 4;
          v163 = v6 - 16;
          v143 = *((_QWORD *)v7 + 1);
          v144 = v7[1];
          v178 = 0LL;
          v171[0] = 0;
          v145 = (unsigned int)(v144 - 1);
          if ( (_DWORD)v144 && v145 < *((_QWORD *)v8 + 11) )
            v146 = *(_DWORD **)(*((_QWORD *)v8 + 12) * v145 + *((_QWORD *)v8 + 8));
          else
            v146 = 0LL;
          if ( !(unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline(v144, v10, 0x140000000uLL) )
            goto LABEL_371;
          if ( !v146 )
            goto LABEL_47;
          if ( v146[5] != (v146[6] ^ ~(_DWORD)v146) )
            KeBugCheck(0xC000A003);
LABEL_371:
          if ( !v146 )
            goto LABEL_47;
          v147 = (DirectComposition::CVisualMarshaler *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v146 + 192LL))(v146);
          if ( !v147 )
          {
            ExternalPrivateResource = -1073741811;
            break;
          }
          ExternalPrivateResource = DirectComposition::CVisualMarshaler::EnsureWriteableInteraction(
                                      v147,
                                      v8,
                                      1,
                                      0,
                                      L"SetInputSink",
                                      &v178);
          v57 = v178;
          if ( ExternalPrivateResource >= 0 )
            ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, _QWORD, __int64, char *))(*(_QWORD *)v178 + 256LL))(
                                        v178,
                                        0LL,
                                        v143,
                                        v171);
          if ( ExternalPrivateResource < 0 )
            break;
          v75 = v171[0] == 0;
          goto LABEL_410;
        case 23:
          if ( v6 >= 0xC )
          {
            v166 = v7 + 3;
            v163 = v6 - 12;
            ExternalPrivateResource = DirectComposition::CApplicationChannel::RemoveVisualChild(v8, v7[1], v7[2]);
          }
          else
          {
            ExternalPrivateResource = -1073741811;
          }
          break;
        default:
          goto LABEL_393;
      }
    }
LABEL_413:
    v15 = v162;
LABEL_414:
    v8 = (DirectComposition::CApplicationChannel *)v183;
    v6 = v163;
    v7 = v166;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
    {
      McTemplateK0qp_EtwWriteTransfer(this, &DCompCommandType, 0x140000000LL, v15, ExternalPrivateResource);
      v6 = v163;
      v7 = v166;
    }
    v5 = a4;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
  {
    McTemplateK0x_EtwWriteTransfer(this, &DCompCommandsInBatch, 0x140000000uLL, *a5);
    v6 = v163;
  }
  if ( ExternalPrivateResource >= 0 && v6 )
    return (unsigned int)-1073741811;
  return (unsigned int)ExternalPrivateResource;
}
