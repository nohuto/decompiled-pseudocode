/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1400AA4A0 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x140056340 (-OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1400A9B44 (-OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1400A9D68 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_ID@@PEAX@Z @ 0x1400A9E08 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_I.c)
 *     ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1400A9E94 (-CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1400A9F40 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqxxqtt_EtwWriteTransfer @ 0x1400AA254 (McTemplateK0qqqxxqtt_EtwWriteTransfer.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1400AA3D4 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@0@Z @ 0x1400AA434 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     McTemplateK0qp_EtwWriteTransfer @ 0x1400ABEA4 (McTemplateK0qp_EtwWriteTransfer.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_K@Z @ 0x1400ABF14 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400ABFFC (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     DirectComposition::Memory::Allocate_0 @ 0x1400B3D64 (DirectComposition--Memory--Allocate_0.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x140137620 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x14014141C (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x140145750 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x14014B790 (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x14017E000 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x140197C50 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJUDCOMPOSITION_PROPERTY_ID@@_J@Z @ 0x1401B62B4 (-SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJUDCOMPOSITION_PROPERTY_ID.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_ID@@PEB_K_K@Z @ 0x1401B8BF8 (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPE.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_ID@@I@Z @ 0x1401BBFF8 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERT.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1401BC1EC (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?ActivateResourceTrigger@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1401BF314 (-ActivateResourceTrigger@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022AECC (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSI.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        __int64 this,
        char *a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  char v5; // r10
  unsigned int v6; // r11d
  char *v7; // r15
  DirectComposition::CApplicationChannel *v8; // r13
  __int64 v9; // r8
  signed int ExternalSharedResource; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // esi
  unsigned int v14; // edi
  int v15; // ebx
  unsigned int v16; // r12d
  struct DirectComposition::CResourceMarshaler *v17; // r15
  __int64 v18; // r8
  __int64 v19; // rdi
  unsigned int v20; // ebx
  struct DirectComposition::CResourceMarshaler *v21; // rax
  struct DirectComposition::CResourceMarshaler *v22; // r14
  char v23; // al
  struct DirectComposition::CResourceMarshaler *v24; // rdx
  unsigned int *v26; // rdx
  char *v27; // r15
  unsigned int v28; // r11d
  __int64 v29; // rdi
  unsigned int v30; // ebx
  struct DirectComposition::CResourceMarshaler *v31; // rdx
  unsigned int v32; // r12d
  unsigned __int64 v33; // r13
  DirectComposition::CApplicationChannel *v34; // r14
  struct DirectComposition::CResourceMarshaler *v35; // rbx
  __int64 v36; // rcx
  unsigned int *v37; // rbx
  unsigned __int64 v38; // rax
  __int64 v39; // r15
  unsigned int v40; // ebx
  struct DirectComposition::CResourceMarshaler *v41; // rax
  __int64 v42; // r14
  int v43; // eax
  __int64 i; // rax
  unsigned int v45; // ebx
  struct DirectComposition::CResourceMarshaler *v46; // rax
  __int64 v47; // r8
  struct DirectComposition::CResourceMarshaler *v48; // r14
  char v49; // al
  char *v50; // rax
  int v51; // r15d
  struct DirectComposition::CResourceMarshaler *v52; // rax
  struct DirectComposition::CResourceMarshaler *v53; // rbx
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 j; // rax
  __int64 v57; // rdx
  unsigned int *v58; // rdx
  unsigned int v59; // r15d
  unsigned int v60; // r14d
  unsigned int v61; // ebx
  __int64 v62; // rdi
  DirectComposition::CApplicationChannel *v63; // rax
  __int64 v64; // r12
  struct DirectComposition::CResourceMarshaler *v65; // rax
  __int64 v66; // rbx
  struct DirectComposition::CResourceMarshaler *v67; // rax
  int v68; // eax
  __int64 k; // rax
  __int64 v70; // r15
  unsigned __int64 v71; // r14
  __int64 v72; // rax
  unsigned int v73; // edi
  __int64 v74; // rbx
  DirectComposition::CApplicationChannel *v75; // rax
  struct DirectComposition::CResourceMarshaler *v76; // rax
  __int64 v77; // rax
  int v78; // eax
  int v79; // eax
  __int64 n; // rax
  unsigned int *v81; // rdx
  char *v82; // r15
  unsigned int v83; // r11d
  unsigned __int64 v84; // r12
  unsigned int v85; // ebx
  char *v86; // r15
  unsigned __int64 v87; // r14
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  struct DirectComposition::CResourceMarshaler *v91; // r13
  __int64 ii; // rax
  __int64 m; // rax
  __int64 v94; // rdx
  struct DirectComposition::CResourceMarshaler *v95; // r14
  char v96; // bl
  int v97; // eax
  int v98; // eax
  int v99; // eax
  unsigned int v100; // r8d
  void *v101; // r9
  unsigned int v102; // edx
  struct DirectComposition::CResourceMarshaler *v103; // r14
  char *v104; // rbx
  void *v105; // r15
  unsigned int v106; // ebx
  struct DirectComposition::CResourceMarshaler *v107; // rax
  unsigned int *v108; // r10
  char *v109; // r15
  unsigned int v110; // r11d
  unsigned __int64 v111; // r8
  unsigned int v112; // r15d
  unsigned int v113; // r14d
  const struct tagMsgRoutingInfo *v114; // rbx
  HWND v115; // r12
  struct DirectComposition::CResourceMarshaler *v116; // rax
  DirectComposition::CVisualMarshaler *v117; // rax
  unsigned __int64 v118; // kr00_8
  unsigned __int64 v119; // rdx
  unsigned __int64 v120; // rcx
  __int64 v121; // rax
  unsigned __int64 v122; // rax
  char *v123; // rax
  char *v124; // rbx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  DirectComposition::CApplicationChannel *v130; // rax
  char *v131; // rcx
  unsigned int v132; // r14d
  char *v133; // r13
  struct DirectComposition::CResourceMarshaler *v134; // rax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  int v139; // eax
  int v140; // eax
  _BYTE v141[4]; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v142; // [rsp+64h] [rbp-94h]
  char *v143; // [rsp+68h] [rbp-90h]
  struct DirectComposition::CResourceMarshaler *v144; // [rsp+70h] [rbp-88h] BYREF
  __int64 v145; // [rsp+78h] [rbp-80h]
  struct DirectComposition::CResourceMarshaler *v146; // [rsp+80h] [rbp-78h]
  unsigned __int64 Src; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 v148; // [rsp+90h] [rbp-68h] BYREF
  struct DirectComposition::CResourceMarshaler *v149; // [rsp+98h] [rbp-60h]
  __int64 v150; // [rsp+A0h] [rbp-58h]
  char *v151; // [rsp+A8h] [rbp-50h]
  DirectComposition::CApplicationChannel *v152; // [rsp+100h] [rbp+8h]

  v152 = (DirectComposition::CApplicationChannel *)this;
  v5 = a4;
  v6 = a3;
  v142 = a3;
  v7 = a2;
  v143 = a2;
  v8 = (DirectComposition::CApplicationChannel *)this;
  v145 = this;
  v150 = this;
  v9 = 0LL;
  ExternalSharedResource = 0;
LABEL_2:
  v11 = 3221225485LL;
  v12 = 0x140000000uLL;
  while ( ExternalSharedResource >= 0 && v6 >= 4 )
  {
    ++*a5;
    v13 = *(_DWORD *)v7;
    LODWORD(v144) = v13;
    LODWORD(v148) = v13;
    if ( v13 == 11 )
    {
      if ( v6 >= 0x18 )
      {
        v143 = v7 + 24;
        v142 = v6 - 24;
        v19 = *((_QWORD *)v7 + 2);
        v20 = *((_DWORD *)v7 + 2);
        v141[0] = 0;
        v21 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, *((_DWORD *)v7 + 1));
        v22 = v21;
        if ( v21 )
        {
          ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, _BYTE *))(*(_QWORD *)v21 + 232LL))(
                                     v21,
                                     v8,
                                     v20,
                                     v19,
                                     v141);
          if ( ExternalSharedResource >= 0
            && *((_QWORD *)v22 + 5)
            && (unsigned __int8)DirectComposition::CApplicationChannel::UnbindAnimation(v8, v22, v20) )
          {
            v23 = 1;
            v141[0] = 1;
          }
          else
          {
            v23 = v141[0];
          }
          if ( ExternalSharedResource >= 0 && v23 )
          {
            v24 = v22;
LABEL_25:
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v8, v24);
          }
        }
        else
        {
          ExternalSharedResource = -1073741790;
        }
        goto LABEL_27;
      }
    }
    else
    {
      if ( v13 != 15 )
      {
        switch ( v13 )
        {
          case 0u:
            v103 = 0LL;
            v144 = 0LL;
            v104 = v7;
            if ( v6 >= 0x18 && v5 )
            {
              v143 = v7 + 24;
              v142 = v6 - 24;
              v105 = (void *)*((_QWORD *)v7 + 1);
              v106 = *((_DWORD *)v104 + 4);
              LODWORD(v146) = v106;
              if ( !v106 )
                ExternalSharedResource = -1073741811;
              if ( ExternalSharedResource >= 0 )
              {
                v107 = (struct DirectComposition::CResourceMarshaler *)DirectComposition::Memory::Allocate_0(
                                                                         v106,
                                                                         1717715780LL);
                v103 = v107;
                v144 = v107;
                if ( v107 )
                {
                  RtlCopyFromUser(v107, v105, v106);
                  ExternalSharedResource = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
                                             v8,
                                             v103,
                                             v106,
                                             0,
                                             a5);
                }
                else
                {
                  ExternalSharedResource = -1073741801;
                }
              }
            }
            else
            {
              ExternalSharedResource = -1073741811;
            }
            if ( v103 )
              GreDeleteFastMutex((char *)v103, v12, v9, v11);
            goto LABEL_27;
          case 1u:
            if ( v6 < 8 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_27;
            }
            v143 = v7 + 8;
            v142 = v6 - 8;
            v96 = 0;
            ExternalSharedResource = 0;
            v97 = *((_DWORD *)v7 + 1);
            if ( v97 == 3 )
            {
              ExternalSharedResource = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *, unsigned __int64, _QWORD, __int64))(*(_QWORD *)v8 + 64LL))(
                                         v8,
                                         0x140000000uLL,
                                         0LL,
                                         3221225485LL);
              if ( ExternalSharedResource >= 0 )
              {
                v98 = *((_DWORD *)v8 + 14);
                if ( (v98 & 0x40) == 0 )
                {
                  v99 = v98 | 0x40;
LABEL_160:
                  *((_DWORD *)v8 + 14) = v99;
                  v96 = 1;
                }
              }
            }
            else if ( v97 )
            {
              v136 = v97 - 1;
              if ( v136 )
              {
                v137 = v136 - 1;
                if ( v137 )
                {
                  if ( v137 == 2 )
                  {
                    ExternalSharedResource = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *, unsigned __int64, _QWORD, __int64))(*(_QWORD *)v8 + 64LL))(
                                               v8,
                                               0x140000000uLL,
                                               0LL,
                                               3221225485LL);
                    if ( ExternalSharedResource >= 0 )
                    {
                      v139 = *((_DWORD *)v8 + 14);
                      if ( (v139 & 0x80u) == 0 )
                      {
                        v99 = v139 | 0x80;
                        goto LABEL_160;
                      }
                    }
                  }
                  else
                  {
                    ExternalSharedResource = -1073741811;
                  }
                }
                else
                {
                  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *, unsigned __int64, _QWORD, __int64))(*(_QWORD *)v8 + 8LL))(
                         v8,
                         0x140000000uLL,
                         0LL,
                         3221225485LL) != 2 )
                  {
                    ExternalSharedResource = -1073741790;
                    goto LABEL_27;
                  }
                  v138 = *((_DWORD *)v8 + 14);
                  if ( (v138 & 0x20) == 0 )
                  {
                    v99 = v138 | 0x20;
                    goto LABEL_160;
                  }
                }
              }
              else
              {
                if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *, unsigned __int64, _QWORD, __int64))(*(_QWORD *)v8 + 8LL))(
                       v8,
                       0x140000000uLL,
                       0LL,
                       3221225485LL) != 2 )
                {
                  ExternalSharedResource = -1073741790;
                  goto LABEL_27;
                }
                v140 = *((_DWORD *)v8 + 14);
                if ( (v140 & 0x10) == 0 )
                {
                  v99 = v140 | 0x10;
                  goto LABEL_160;
                }
              }
            }
            else
            {
              ExternalSharedResource = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *, unsigned __int64, _QWORD, __int64))(*(_QWORD *)v8 + 64LL))(
                                         v8,
                                         0x140000000uLL,
                                         0LL,
                                         3221225485LL);
              if ( ExternalSharedResource >= 0 )
              {
                v135 = *((_DWORD *)v8 + 14);
                if ( (v135 & 8) == 0 )
                {
                  v99 = v135 | 8;
                  goto LABEL_160;
                }
              }
            }
            if ( ExternalSharedResource >= 0 && v96 )
              *((_BYTE *)v8 + 264) |= 1u;
            break;
          case 2u:
            this = (__int64)v7;
            if ( v6 < 0x10 )
              goto LABEL_26;
            v32 = *((_DWORD *)v7 + 2);
            if ( v32 - 1 > 0xA4 )
              goto LABEL_26;
            v143 = v7 + 16;
            v142 = v6 - 16;
            if ( *((_DWORD *)v7 + 3) )
            {
              ExternalSharedResource = DirectComposition::CApplicationChannel::CreateExternalSharedResource(
                                         v8,
                                         *((_DWORD *)v7 + 1),
                                         v32);
              goto LABEL_27;
            }
            v33 = *((unsigned int *)v7 + 1);
            v146 = 0LL;
            v144 = 0LL;
            v34 = v152;
            ExternalSharedResource = DirectComposition::CApplicationChannel::CreatePrivateMarshaler(v152, v32, &v144);
            if ( ExternalSharedResource >= 0 )
            {
              v35 = v144;
              ExternalSharedResource = 0;
              if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v144 + 32LL))(v144) )
                ExternalSharedResource = DirectComposition::CConnection::AcquireShellResourceAccess(*((DirectComposition::CConnection **)v152 + 5));
              if ( ExternalSharedResource < 0
                || (ExternalSharedResource = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))v35)(v35),
                    ExternalSharedResource < 0)
                || (ExternalSharedResource = DirectComposition::CApplicationChannel::RegisterResource(v152, v35),
                    ExternalSharedResource < 0) )
              {
                (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v35 + 208LL))(
                  v35,
                  v152);
                (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v35 + 88LL))(
                  v35,
                  1LL);
              }
            }
            if ( ExternalSharedResource < 0 )
            {
LABEL_58:
              v8 = v152;
              goto LABEL_27;
            }
            if ( v32 == 3 )
            {
              v36 = *(_QWORD *)((*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v144 + 96LL))(v144)
                              + 80);
              if ( (*(_DWORD *)(v36 + 24) & 1) == 0 )
              {
                *(_QWORD *)(v36 + 8) = *((_QWORD *)v152 + 61);
                *((_QWORD *)v152 + 61) = v36;
                *(_DWORD *)(v36 + 24) |= 1u;
                _InterlockedIncrement((volatile signed __int32 *)(v36 + 48));
              }
            }
            v37 = (unsigned int *)v144;
            v146 = v144;
            ExternalSharedResource = 0;
            if ( !(_DWORD)v33 )
            {
              ExternalSharedResource = -1073741811;
LABEL_165:
              DirectComposition::CApplicationChannel::ReleaseResource(
                v34,
                (struct DirectComposition::CResourceMarshaler *)v37);
              goto LABEL_58;
            }
            v38 = *((_QWORD *)v152 + 11);
            if ( v33 > v38 )
            {
              v70 = v33 - v38;
              v71 = *((_QWORD *)v152 + 10);
              if ( v33 > v71 )
              {
                if ( !v71 )
                  v71 = 64LL;
                do
                {
                  if ( v71 >= v33 || v71 >= 0x400 )
                    break;
                  v149 = 0LL;
                  v118 = v71;
                  v71 *= 2LL;
                  if ( is_mul_ok(v118, 2uLL) )
                  {
                    ExternalSharedResource = 0;
                  }
                  else
                  {
                    ExternalSharedResource = -1073741675;
                    v71 = -1LL;
                  }
                }
                while ( ExternalSharedResource >= 0 );
                if ( ExternalSharedResource >= 0 )
                {
                  do
                  {
                    v119 = v71;
                    if ( v71 >= v33 )
                      break;
                    v120 = v71 + 1024;
                    v121 = -1LL;
                    if ( v71 + 1024 >= v71 )
                      v121 = v71 + 1024;
                    v71 = v121;
                    ExternalSharedResource = v120 < v119 ? 0xC0000095 : 0;
                  }
                  while ( v120 >= v119 );
                }
                v122 = 0LL;
                if ( ExternalSharedResource >= 0 )
                {
                  v149 = 0LL;
                  v122 = v71 * *(_QWORD *)(v145 + 96);
                  if ( is_mul_ok(v71, *(_QWORD *)(v145 + 96)) )
                  {
                    ExternalSharedResource = 0;
                  }
                  else
                  {
                    v122 = -1LL;
                    ExternalSharedResource = -1073741675;
                  }
                }
                if ( ExternalSharedResource >= 0 )
                {
                  if ( *(_BYTE *)(v145 + 72) )
                    v123 = (char *)Win32AllocPoolWithQuotaImpl(0LL, v122, 0x746C4344u);
                  else
                    v123 = (char *)Win32AllocPoolImpl(256LL, v122, 0x746C4344u);
                  v124 = v123;
                  if ( !v123 )
                    goto LABEL_263;
                  v125 = v145;
                  v126 = *(_QWORD *)(v145 + 88);
                  if ( v126 )
                  {
                    memmove(v123, *((const void **)v152 + 8), *(_QWORD *)(v145 + 96) * v126);
                    v125 = v145;
                  }
                  memset(
                    &v124[*(_QWORD *)(v125 + 96) * *(_QWORD *)(v125 + 88)],
                    0,
                    *(_QWORD *)(v125 + 96) * (v71 - *(_QWORD *)(v125 + 88)));
                  v130 = v152;
                  v131 = (char *)*((_QWORD *)v152 + 8);
                  if ( v131 )
                  {
                    GreDeleteFastMutex(v131, v127, v128, v129);
                    v130 = v152;
                  }
                  *((_QWORD *)v130 + 8) = v124;
                  v72 = v145;
                  *(_QWORD *)(v145 + 80) = v71;
LABEL_111:
                  if ( ExternalSharedResource >= 0 )
                    *(_QWORD *)(v72 + 88) += v70;
                  else
LABEL_263:
                    ExternalSharedResource = -1073741801;
                  v37 = (unsigned int *)v146;
                  v34 = v152;
                  v39 = v145;
                  goto LABEL_56;
                }
              }
              v72 = v145;
              goto LABEL_111;
            }
            v39 = v145;
            if ( *(_QWORD *)(*(_QWORD *)(v145 + 96) * (unsigned int)(v33 - 1) + *((_QWORD *)v152 + 8)) )
            {
              ExternalSharedResource = -1073741790;
              goto LABEL_165;
            }
LABEL_56:
            if ( ExternalSharedResource < 0 )
              goto LABEL_165;
            Src = (unsigned __int64)v37;
            memmove(
              (void *)(*((_QWORD *)v34 + 8) + *(_QWORD *)(v39 + 96) * (unsigned int)(v33 - 1)),
              &Src,
              *(_QWORD *)(v39 + 96));
            ++*(_QWORD *)(v39 + 104);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000000LL) == 0 )
              goto LABEL_58;
            McTemplateK0qqqxxqtt_EtwWriteTransfer(
              0LL,
              ((unsigned __int64)*((unsigned int *)v34 + 7) << 32) | v33 | 0x8000000000000000uLL,
              v37[8],
              *((_DWORD *)v34 + 7),
              v37[8],
              v33,
              v37[8],
              v33,
              v32,
              0,
              0);
            v8 = v152;
            goto LABEL_27;
          case 3u:
            this = (__int64)v7;
            if ( v6 < 0x18 )
              goto LABEL_26;
            v100 = *((_DWORD *)v7 + 4);
            if ( v100 - 1 > 0xA4 )
              goto LABEL_26;
            v143 = v7 + 24;
            v142 = v6 - 24;
            v101 = (void *)*((_QWORD *)v7 + 1);
            v102 = *((_DWORD *)v7 + 1);
            if ( *((_DWORD *)v7 + 5) )
              ExternalSharedResource = DirectComposition::CApplicationChannel::OpenExternalSharedWriteResource(
                                         v8,
                                         v102,
                                         v100,
                                         v101);
            else
              ExternalSharedResource = DirectComposition::CApplicationChannel::OpenExternalSharedReadResource(
                                         v8,
                                         v102,
                                         v100,
                                         v101);
            goto LABEL_27;
          case 4u:
            v50 = v7;
            if ( v6 < 8 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 8;
              v142 = v6 - 8;
              v51 = *((_DWORD *)v7 + 1);
              ExternalSharedResource = 0;
              v52 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, *((_DWORD *)v50 + 1));
              v53 = v52;
              if ( v52 )
              {
                v54 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v52 + 184LL))(v52);
                if ( v54 )
                {
                  v95 = *(struct DirectComposition::CResourceMarshaler **)(v54 + 192);
                  if ( v95 )
                  {
                    if ( (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v95 + 120LL))(v95) )
                      DirectComposition::CApplicationChannel::ReleaseResource(v8, v95);
                  }
                }
                v55 = (unsigned int)(v51 - 1);
                if ( v51 && v55 < *((_QWORD *)v8 + 11) )
                {
                  Src = 0LL;
                  memmove((void *)(*((_QWORD *)v8 + 8) + *((_QWORD *)v8 + 12) * v55), &Src, *((_QWORD *)v8 + 12));
                  --*((_QWORD *)v8 + 13);
                }
                DirectComposition::CApplicationChannel::ReleaseResource(v8, v53);
              }
              else
              {
                ExternalSharedResource = -1073741790;
              }
            }
            goto LABEL_27;
          case 5u:
            if ( v6 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 16;
              v142 = v6 - 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetChannelIntegerProperty(
                                         v8,
                                         *((unsigned int *)v7 + 1),
                                         *((_QWORD *)v7 + 1),
                                         3221225485LL);
            }
            goto LABEL_27;
          case 6u:
            if ( v6 < 0x18 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 24;
              v142 = v6 - 24;
              ExternalSharedResource = DirectComposition::CApplicationChannel::GetAnimationTime(
                                         v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_QWORD *)v7 + 1),
                                         (__int64 *)v7 + 2);
            }
            goto LABEL_27;
          case 7u:
            if ( v6 < 0x18 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 24;
              v142 = v6 - 24;
              ExternalSharedResource = DirectComposition::CApplicationChannel::CapturePointer(
                                         v8,
                                         *((unsigned int *)v7 + 1),
                                         *((unsigned int *)v7 + 2),
                                         *((unsigned int *)v7 + 3),
                                         *((_QWORD *)v7 + 2));
            }
            goto LABEL_27;
          case 8u:
            if ( v6 < 0xC )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 12;
              v142 = v6 - 12;
              ExternalSharedResource = DirectComposition::CApplicationChannel::ActivateResourceTrigger(
                                         v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_DWORD *)v7 + 2));
            }
            goto LABEL_27;
          case 9u:
            if ( v6 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 16;
              v142 = v6 - 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
                                         v8,
                                         *((_DWORD *)v7 + 1),
                                         (void **)v7 + 1);
            }
            goto LABEL_27;
          case 0xAu:
            if ( v6 < 0xC )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_27;
            }
            v143 = v7 + 12;
            v142 = v6 - 12;
            v40 = *((_DWORD *)v7 + 2);
            v141[0] = 0;
            v41 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, *((_DWORD *)v7 + 1));
            v42 = (__int64)v41;
            if ( !v41 )
            {
              ExternalSharedResource = -1073741790;
              goto LABEL_27;
            }
            ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, _BYTE *))(*(_QWORD *)v41 + 296LL))(
                                       v41,
                                       v40,
                                       v141);
            if ( ExternalSharedResource < 0 )
              goto LABEL_27;
            if ( !v141[0] )
              goto LABEL_27;
            v43 = *(_DWORD *)(v42 + 16);
            if ( (v43 & 2) != 0 )
              goto LABEL_27;
            if ( (v43 & 1) == 0 )
              goto LABEL_89;
            for ( i = *(unsigned int *)(v42 + 36); (unsigned int)i < 0xA6; LODWORD(i) = dword_14027CC90[i] )
            {
              if ( (_DWORD)i == 133 )
                goto LABEL_150;
            }
            for ( j = *(unsigned int *)(v42 + 36); ; LODWORD(j) = dword_14027CC90[j] )
            {
              if ( (unsigned int)j >= 0xA6 )
                goto LABEL_87;
              if ( (_DWORD)j == 23 )
                break;
            }
            goto LABEL_151;
          case 0xCu:
            if ( v6 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 16;
              v142 = v6 - 16;
              v45 = *((_DWORD *)v7 + 2);
              v141[0] = 0;
              v46 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, *((_DWORD *)v7 + 1));
              v48 = v46;
              if ( v46 )
              {
                ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, _BYTE *))(*(_QWORD *)v46 + 240LL))(
                                           v46,
                                           v45,
                                           v47,
                                           v141);
                if ( ExternalSharedResource >= 0
                  && *((_QWORD *)v48 + 5)
                  && (unsigned __int8)DirectComposition::CApplicationChannel::UnbindAnimation(v8, v48, v45) )
                {
                  v49 = 1;
                  v141[0] = 1;
                }
                else
                {
                  v49 = v141[0];
                }
                if ( ExternalSharedResource >= 0 && v49 )
                  DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v8, v48);
              }
              else
              {
                ExternalSharedResource = -1073741790;
              }
            }
            goto LABEL_27;
          case 0xDu:
            if ( v6 < 0x18 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 24;
              v142 = v6 - 24;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                                         v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_DWORD *)v7 + 2),
                                         *((_QWORD *)v7 + 2));
            }
            goto LABEL_27;
          case 0xEu:
            v108 = (unsigned int *)v7;
            if ( v6 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v109 = v7 + 16;
              v143 = v109;
              v110 = v6 - 16;
              v142 = v110;
              v149 = 0LL;
              v111 = v108[3];
              this = 8 * v111;
              if ( is_mul_ok(v111, 8uLL) )
              {
                ExternalSharedResource = 0;
              }
              else
              {
                this = -1LL;
                ExternalSharedResource = -1073741675;
              }
              if ( ExternalSharedResource >= 0 )
              {
                if ( v110 < (unsigned __int64)this )
                {
                  ExternalSharedResource = -1073741811;
                }
                else
                {
                  v143 = &v109[this];
                  v142 = v110 - this;
                  ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
                                             v8,
                                             v108[1],
                                             v108[2],
                                             v109,
                                             v111);
                }
              }
            }
            goto LABEL_27;
          case 0x10u:
            if ( v6 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 16;
              v142 = v6 - 16;
              v14 = *((_DWORD *)v7 + 3);
              v15 = *((_DWORD *)v7 + 2);
              v16 = *((_DWORD *)v7 + 1);
              v17 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, v16);
              if ( v17 )
              {
                if ( v14 && !DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, v14) )
                  ExternalSharedResource = -1073741811;
                else
                  ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
                                             (__int64)v8,
                                             (__int64)v17);
              }
              else
              {
                ExternalSharedResource = -1073741790;
              }
              LOBYTE(v144) = BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x10;
              if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0
                && ExternalSharedResource >= 0
                && DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v17 + 9), 94) )
              {
                McTemplateK0qqqqq_EtwWriteTransfer(
                  this,
                  &DCompResourcePropertyUpdate,
                  v18,
                  *((_DWORD *)v8 + 7),
                  *((_DWORD *)v17 + 8),
                  v16,
                  v18,
                  v15);
              }
            }
            goto LABEL_27;
          case 0x11u:
            v81 = (unsigned int *)v7;
            if ( v6 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_27;
            }
            v82 = v7 + 16;
            v143 = v82;
            v83 = v6 - 16;
            v142 = v83;
            v84 = v81[3];
            Src = v84;
            this = 4 * v84;
            if ( v83 < 4 * v84 )
              goto LABEL_26;
            v151 = v82;
            v143 = &v82[this];
            v142 = v83 - this;
            v85 = v81[2];
            LODWORD(v146) = v85;
            v141[0] = 0;
            v86 = 0LL;
            v87 = 0LL;
            v148 = 0LL;
            v91 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, v81[1]);
            v149 = v91;
            ExternalSharedResource = -1073741790;
            if ( v91 )
              ExternalSharedResource = 0;
            if ( !v84 )
              goto LABEL_135;
            if ( v91 )
            {
              ExternalSharedResource = RtlULongLongMult(v84, 8uLL, &v148);
              v87 = v148;
            }
            if ( ExternalSharedResource >= 0 )
            {
              v86 = (char *)DirectComposition::Memory::Allocate_0(v87, 1717715780LL);
              if ( !v86 )
                ExternalSharedResource = -1073741801;
            }
            v132 = 0;
            if ( ExternalSharedResource < 0 )
              goto LABEL_137;
            v133 = v151;
            do
            {
              if ( v132 >= v84 )
                break;
              v134 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v152, *(_DWORD *)&v133[4 * v132]);
              *(_QWORD *)&v86[8 * v132] = v134;
              if ( !v134 )
                ExternalSharedResource = -1073741811;
              ++v132;
            }
            while ( ExternalSharedResource >= 0 );
            v85 = (unsigned int)v146;
            v13 = (unsigned int)v144;
            v91 = v149;
            v84 = Src;
LABEL_135:
            if ( ExternalSharedResource < 0
              || (ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, char *, unsigned __int64, _BYTE *))(*(_QWORD *)v91 + 288LL))(
                                             v91,
                                             v152,
                                             v85,
                                             v86,
                                             v84,
                                             v141),
                  ExternalSharedResource < 0) )
            {
LABEL_137:
              if ( !v86 )
                goto LABEL_58;
              GreDeleteFastMutex(v86, v88, v89, v90);
              v8 = v152;
              goto LABEL_27;
            }
            if ( !v141[0] )
              goto LABEL_58;
            v24 = v91;
            v8 = v152;
            goto LABEL_25;
          case 0x12u:
            if ( v6 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 16;
              v142 = v6 - 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
                                         v8,
                                         *((unsigned int *)v7 + 1),
                                         *((unsigned int *)v7 + 2),
                                         *((unsigned int *)v7 + 3));
            }
            goto LABEL_27;
          case 0x13u:
            if ( v6 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 16;
              v142 = v6 - 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                                         v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_QWORD *)v7 + 1));
            }
            goto LABEL_27;
          case 0x14u:
            v58 = (unsigned int *)v7;
            if ( v6 < 0x14 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_27;
            }
            v143 = v7 + 20;
            v142 = v6 - 20;
            v59 = *((_DWORD *)v7 + 4);
            v60 = v58[3];
            v61 = v58[2];
            v141[0] = 0;
            v62 = 0LL;
            v63 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, v58[1]);
            this = (__int64)v63;
            if ( !v63 )
            {
              ExternalSharedResource = -1073741790;
              goto LABEL_27;
            }
            v64 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v63 + 184LL))(v63);
            if ( !v64 )
              goto LABEL_238;
            v65 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, v61);
            if ( !v65 )
              goto LABEL_238;
            v66 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v65 + 184LL))(v65);
            if ( !v66 )
              goto LABEL_238;
            if ( !v59 )
              goto LABEL_101;
            v67 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, v59);
            if ( !v67 )
              goto LABEL_238;
            v62 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v67 + 184LL))(v67);
            if ( !v62 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
LABEL_101:
              ExternalSharedResource = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v64 + 328LL))(
                                         v64,
                                         v8,
                                         v66,
                                         v60,
                                         v62,
                                         v141);
              if ( ExternalSharedResource >= 0 )
              {
                if ( v141[0] )
                {
                  v68 = *(_DWORD *)(v64 + 16);
                  if ( (v68 & 2) == 0 )
                  {
                    if ( (v68 & 1) != 0 )
                    {
                      for ( k = *(unsigned int *)(v64 + 36); (unsigned int)k < 0xA6; LODWORD(k) = dword_14027CC90[k] )
                      {
                        if ( (_DWORD)k == 133 )
                        {
                          this = 456LL;
                          goto LABEL_148;
                        }
                      }
                      for ( m = *(unsigned int *)(v64 + 36); ; LODWORD(m) = dword_14027CC90[m] )
                      {
                        if ( (unsigned int)m >= 0xA6 )
                        {
                          this = 440LL;
                          goto LABEL_148;
                        }
                        if ( (_DWORD)m == 23 )
                          break;
                      }
                      this = 472LL;
LABEL_148:
                      v94 = v150;
                      *(_QWORD *)(v64 + 8) = *(_QWORD *)(v150 + this);
                      *(_QWORD *)(v94 + this) = v64;
                    }
                    *(_DWORD *)(v64 + 16) |= 2u;
                    *((_BYTE *)v8 + 264) |= 1u;
                    goto LABEL_27;
                  }
                }
              }
            }
            goto LABEL_27;
          case 0x15u:
            this = (__int64)v7;
            if ( v6 < 0x48 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_27;
            }
            v143 = v7 + 72;
            v142 = v6 - 72;
            v112 = *((_DWORD *)v7 + 5);
            v113 = *(_DWORD *)(this + 16);
            v114 = (const struct tagMsgRoutingInfo *)(this + 32);
            if ( !*(_DWORD *)(this + 24) )
              v114 = 0LL;
            v115 = *(HWND *)(this + 8);
            ExternalSharedResource = 0;
            v116 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, *(_DWORD *)(this + 4));
            if ( !v116 )
              goto LABEL_238;
            v117 = (DirectComposition::CVisualMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v116 + 184LL))(v116);
            if ( !v117 )
              goto LABEL_238;
            this = v113 | v112;
            if ( (this & 0xFFFF7EC0) != 0 )
            {
              ExternalSharedResource = -1073741811;
            }
            else if ( v113 )
            {
              ExternalSharedResource = DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(
                                         v117,
                                         v8,
                                         v115,
                                         v114,
                                         v113,
                                         v112);
            }
            goto LABEL_27;
          case 0x16u:
            if ( v6 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v143 = v7 + 16;
              v142 = v6 - 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetVisualInputSink(
                                         v8,
                                         *((_DWORD *)v7 + 1),
                                         *((void **)v7 + 1));
            }
            goto LABEL_27;
          case 0x17u:
            if ( v6 < 0xC )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_27;
            }
            v143 = v7 + 12;
            v142 = v6 - 12;
            v73 = *((_DWORD *)v7 + 2);
            v141[0] = 0;
            v74 = 0LL;
            v75 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, *((_DWORD *)v7 + 1));
            this = (__int64)v75;
            if ( v75 )
            {
              v42 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v75 + 184LL))(v75);
              if ( v42 )
              {
                if ( !v73 )
                  goto LABEL_120;
                v76 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, v73);
                if ( !v76 )
                {
LABEL_238:
                  ExternalSharedResource = -1073741811;
                  goto LABEL_27;
                }
                v74 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v76 + 184LL))(v76);
                if ( !v74 )
                {
                  ExternalSharedResource = -1073741811;
                }
                else
                {
LABEL_120:
                  v77 = *(_QWORD *)v42;
                  if ( v74 )
                    v78 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, _BYTE *))(v77 + 336))(
                            v42,
                            v8,
                            v74,
                            v141);
                  else
                    v78 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, _BYTE *))(v77 + 344))(
                            v42,
                            v8,
                            v141);
                  ExternalSharedResource = v78;
                  if ( v78 >= 0 )
                  {
                    if ( v141[0] )
                    {
                      v79 = *(_DWORD *)(v42 + 16);
                      if ( (v79 & 2) == 0 )
                      {
                        if ( (v79 & 1) != 0 )
                        {
                          for ( n = *(unsigned int *)(v42 + 36); (unsigned int)n < 0xA6; LODWORD(n) = dword_14027CC90[n] )
                          {
                            if ( (_DWORD)n == 133 )
                            {
LABEL_150:
                              this = 456LL;
                              goto LABEL_88;
                            }
                          }
                          for ( ii = *(unsigned int *)(v42 + 36); ; LODWORD(ii) = dword_14027CC90[ii] )
                          {
                            if ( (unsigned int)ii >= 0xA6 )
                            {
LABEL_87:
                              this = 440LL;
                              goto LABEL_88;
                            }
                            if ( (_DWORD)ii == 23 )
                              break;
                          }
LABEL_151:
                          this = 472LL;
LABEL_88:
                          v57 = v150;
                          *(_QWORD *)(v42 + 8) = *(_QWORD *)(v150 + this);
                          *(_QWORD *)(v57 + this) = v42;
                        }
LABEL_89:
                        *(_DWORD *)(v42 + 16) |= 2u;
                        *((_BYTE *)v8 + 264) |= 1u;
                        goto LABEL_27;
                      }
                    }
                  }
                }
              }
              else
              {
                ExternalSharedResource = -1073741811;
              }
            }
            else
            {
              ExternalSharedResource = -1073741790;
            }
            goto LABEL_27;
          default:
            goto LABEL_26;
        }
        goto LABEL_27;
      }
      v26 = (unsigned int *)v7;
      if ( v6 < 0x10 )
      {
        ExternalSharedResource = -1073741811;
        goto LABEL_27;
      }
      v27 = v7 + 16;
      v143 = v27;
      v28 = v6 - 16;
      v142 = v28;
      v29 = v26[3];
      this = ((_DWORD)v29 + 3) & 0xFFFFFFFC;
      if ( v28 >= (unsigned int)this && (unsigned int)this >= (unsigned int)v29 )
      {
        v143 = &v27[(unsigned int)this];
        v142 = v28 - this;
        v30 = v26[2];
        v31 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, v26[1]);
        if ( v31 )
          ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceBufferProperty(
                                     v8,
                                     v31,
                                     v30,
                                     v27,
                                     v29);
        else
          ExternalSharedResource = -1073741790;
        goto LABEL_27;
      }
    }
LABEL_26:
    ExternalSharedResource = -1073741811;
LABEL_27:
    v6 = v142;
    v7 = v143;
    v11 = 3221225485LL;
    v12 = 0x140000000uLL;
    v9 = 0LL;
    v5 = a4;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
    {
      McTemplateK0qp_EtwWriteTransfer(this, &DCompCommandType, 0LL, v13, ExternalSharedResource);
      v6 = v142;
      v9 = 0LL;
      v5 = a4;
      goto LABEL_2;
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
  {
    McTemplateK0x_EtwWriteTransfer(this, &DCompCommandsInBatch, 0LL, *a5);
    v6 = v142;
  }
  if ( ExternalSharedResource >= 0 && v6 )
    return (unsigned int)-1073741811;
  return (unsigned int)ExternalSharedResource;
}
