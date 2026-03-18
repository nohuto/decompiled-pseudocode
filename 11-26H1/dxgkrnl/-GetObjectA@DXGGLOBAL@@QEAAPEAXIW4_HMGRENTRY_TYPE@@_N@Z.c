/*
 * XREFs of ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1400464C4
 * Callers:
 *     DxgkCheckSharedResourceAccess @ 0x1401BB270 (DxgkCheckSharedResourceAccess.c)
 *     DxgkGetSharedResourceAdapterLuid @ 0x1401BB580 (DxgkGetSharedResourceAdapterLuid.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205EE8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x140310614 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140311A60 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1403527B8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1403555B8 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403CDBFC (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1403D0708 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetObjectA(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  int v8; // r8d
  __int64 v9; // rcx
  int v11; // edx
  int v12; // r8d

  v6 = 0LL;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(a1 + 296)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1689;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ShareMutex.IsOwner()", 1689LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = (a2 >> 6) & 0xFFFFFF;
  if ( v7 < *(_DWORD *)(a1 + 360) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 16LL * v7 + 8);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(a1 + 344) + 16LL * v7 + 8) & 0x60)
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 344);
      if ( a3 == (*(_DWORD *)(v9 + 16LL * v7 + 8) & 0x1F) )
      {
        return *(_QWORD *)(v9 + 16LL * v7);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            318,
            v11,
            v12,
            0LL,
            0,
            -1,
            (__int64)L"Handle type mismatch",
            318LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  return v6;
}
