/*
 * XREFs of ?OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x14018D00C
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1403F22B4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x14003189C (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x14018D0F4 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x140202490 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::OnMonitorConnectionChanged(
        DXGADAPTER **this,
        unsigned int a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a3)
{
  struct _LUID *v5; // rdx
  DXGADAPTER *v6; // rcx
  struct DXGGLOBAL *Global; // rax
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = (unsigned int)a3;
  ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache((ADAPTER_DISPLAY *)this, a2, a3);
  if ( a2 != -1 )
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(this, a2, 1);
  v6 = this[2];
  v11 = 0;
  if ( (*((_DWORD *)v6 + 111) & 0x100) != 0 && DXGADAPTER::IsAdapterSessionized(v6, v5, &v11, 0LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v8 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 123), v11);
    if ( v8 < 0 )
    {
      v9 = v11;
      v10 = v8;
      WdLogSingleEntry2(2LL, v11, v8);
      WdLogGlobalForLineNumber = 3203;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to purge the cached IDD display config request for session 0x%I64x, (Status = 0x%I64x).",
        v9,
        v10,
        0LL,
        0LL,
        0LL);
    }
  }
}
