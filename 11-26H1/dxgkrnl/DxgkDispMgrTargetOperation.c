/*
 * XREFs of DxgkDispMgrTargetOperation @ 0x1401D1110
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14005D4C4 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     DpiPanelBufferingSetAutomaticPolicy @ 0x1400921EC (DpiPanelBufferingSetAutomaticPolicy.c)
 *     DpiPanelBufferingSetOverrideState @ 0x1400923DC (DpiPanelBufferingSetOverrideState.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1401D07E0 (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 *     ?GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIFORMAT@@@Z @ 0x1401D0AB8 (-GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIF.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1401D0D28 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401D0EB8 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403BDA5C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403CD620 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 */

__int64 __fastcall DxgkDispMgrTargetOperation(void *Src)
{
  int OwnedSourceAndPixelFormatFromTarget; // ebx
  DXGDISPLAYMANAGEROBJECT *v3; // r10
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  PVOID *v7; // rcx
  int v9; // eax
  PVOID v10[2]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+60h] [rbp-58h] BYREF
  HANDLE Handle[2]; // [rsp+78h] [rbp-40h] BYREF
  __int128 v13; // [rsp+88h] [rbp-30h] BYREF
  __int128 v14; // [rsp+98h] [rbp-20h]
  HANDLE v15; // [rsp+A8h] [rbp-10h] BYREF
  PVOID v16; // [rsp+C8h] [rbp+10h] BYREF
  enum _D3DDDIFORMAT v17; // [rsp+D0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  *(_OWORD *)Handle = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  RtlCopyFromUser(Handle, Src, 0x38uLL);
  Object = 0LL;
  OwnedSourceAndPixelFormatFromTarget = ObReferenceObjectByHandleWithTag(
                                          Handle[1],
                                          0x20000u,
                                          g_pDxgkDisplayManagerObjectType,
                                          1,
                                          0x4B677844u,
                                          &Object,
                                          0LL);
  if ( OwnedSourceAndPixelFormatFromTarget >= 0 )
  {
    v3 = *(DXGDISPLAYMANAGEROBJECT **)Object;
    if ( !*(_QWORD *)Object )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 978;
LABEL_41:
      OwnedSourceAndPixelFormatFromTarget = -1073741811;
      goto LABEL_42;
    }
    if ( LODWORD(Handle[0]) == 1 )
    {
      v9 = DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership(v3, v13, DWORD2(v13));
    }
    else
    {
      if ( LODWORD(Handle[0]) != 2 )
      {
        if ( LODWORD(Handle[0]) == 3 )
        {
          v16 = 0LL;
          OwnedSourceAndPixelFormatFromTarget = ObReferenceObjectByHandleWithTag(
                                                  (HANDLE)v14,
                                                  0x20000u,
                                                  g_pDxgkDisplayManagerObjectType,
                                                  1,
                                                  0x4B677844u,
                                                  &v16,
                                                  0LL);
          if ( OwnedSourceAndPixelFormatFromTarget >= 0 )
          {
            if ( !*(_QWORD *)v16 )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 1001;
              NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v16);
              goto LABEL_41;
            }
            OwnedSourceAndPixelFormatFromTarget = DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
                                                    *(DXGDISPLAYMANAGEROBJECT **)Object,
                                                    (struct _LUID)v13,
                                                    DWORD2(v13),
                                                    *(struct DXGDISPLAYMANAGEROBJECT **)v16);
          }
          else
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 996;
          }
          v7 = &v16;
        }
        else
        {
          if ( LODWORD(Handle[0]) != 4 )
          {
            if ( LODWORD(Handle[0]) != 5
              || !(unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
            {
              goto LABEL_41;
            }
            if ( (v14 & 1) != 0 )
              goto LABEL_15;
            if ( (v14 & 8) == 0 )
            {
              WdLogSingleEntry0(3 - (unsigned int)(v14 & 1));
              WdLogGlobalForLineNumber = 1060;
              goto LABEL_41;
            }
            if ( (v14 & 1) != 0 )
            {
LABEL_15:
              if ( (v14 & 8) != 0 )
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 1068;
                goto LABEL_41;
              }
            }
            v10[0] = 0LL;
            if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v10, (const struct _LUID *)&v13) )
            {
              v4 = v10[0];
              DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                (DXGADAPTERSTOPRESETLOCKSHARED *)v11,
                (struct DXGADAPTER *)v10[0],
                1);
              v5 = v4[27];
              if ( v5 )
              {
                if ( (v14 & 1) != 0 )
                {
                  v6 = DpiPanelBufferingSetOverrideState(v5, DWORD2(v13), -__CFSHR__(v14, 2), -__CFSHR__(v14, 3));
                }
                else
                {
                  if ( (v14 & 8) == 0 )
                  {
                    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
                    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v10, 0LL);
                    goto LABEL_41;
                  }
                  v6 = DpiPanelBufferingSetAutomaticPolicy(v5, DWORD2(v13), DWORD1(v14));
                }
                OwnedSourceAndPixelFormatFromTarget = v6;
              }
              else
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 1086;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Adapter 0x%I64x had no FDO",
                  (__int64)v4,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                OwnedSourceAndPixelFormatFromTarget = -1073741275;
              }
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
            }
            else
            {
              OwnedSourceAndPixelFormatFromTarget = -1073741811;
              WdLogSingleEntry3(3LL, (unsigned int)v13, SDWORD1(v13), -1073741811LL);
              WdLogGlobalForLineNumber = 1076;
            }
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v10, 0LL);
            goto LABEL_42;
          }
          LODWORD(v16) = -1;
          v17 = D3DDDIFMT_A8R8G8B8;
          OwnedSourceAndPixelFormatFromTarget = DXGDISPLAYMANAGEROBJECT::GetOwnedSourceAndPixelFormatFromTarget(
                                                  v3,
                                                  (struct _LUID)v13,
                                                  DWORD2(v13),
                                                  (unsigned int *)&v16,
                                                  &v17);
          if ( OwnedSourceAndPixelFormatFromTarget < 0 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1015;
            goto LABEL_42;
          }
          OwnedSourceAndPixelFormatFromTarget = DXGDISPLAYMANAGEROBJECT::CreateSourceObject(
                                                  *(DXGDISPLAYMANAGEROBJECT **)Object,
                                                  (struct _LUID)v13,
                                                  (int)v16,
                                                  (struct _OBJECT_ATTRIBUTES *)v14,
                                                  DWORD2(v14),
                                                  &v15);
          LODWORD(v16) = OwnedSourceAndPixelFormatFromTarget;
          if ( OwnedSourceAndPixelFormatFromTarget < 0 )
            goto LABEL_42;
          v10[0] = 0LL;
          if ( ObReferenceObjectByHandleWithTag(
                 v15,
                 0x20000u,
                 g_pDxgkDisplayManagerObjectType,
                 1,
                 0x4B677844u,
                 v10,
                 0LL) >= 0 )
            *(_DWORD *)(*((_QWORD *)v10[0] + 1) + 60LL) = v17;
          RtlWriteULong64ToUser((_QWORD *)Src + 6, (__int64)v15);
          v7 = v10;
        }
        NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(v7);
        goto LABEL_42;
      }
      v9 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(
             *(DXGDISPLAYMANAGEROBJECT **)Object,
             (struct _LUID)v13,
             DWORD2(v13));
    }
    OwnedSourceAndPixelFormatFromTarget = v9;
    goto LABEL_42;
  }
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 972;
LABEL_42:
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
  return (unsigned int)OwnedSourceAndPixelFormatFromTarget;
}
