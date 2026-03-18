/*
 * XREFs of ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x140037118
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14003700C (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z @ 0x1400A1584 (-FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A161C (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 *     ?IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x1400A1784 (-IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSIT.c)
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_KAEBU_LUID@@@Z @ 0x1400A1848 (-IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_.c)
 * Callees:
 *     DxgkGetDeviceStateInternal @ 0x14036A470 (DxgkGetDeviceStateInternal.c)
 */

char __fastcall CAdapter::IsDeviceActive(CAdapter *this)
{
  int v1; // eax
  char v2; // bl
  _DWORD Src[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 Src_8; // [rsp+28h] [rbp-40h]
  __int128 v6; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v1 = *((_DWORD *)this + 11);
  v2 = 1;
  if ( v1 )
  {
    v8 = 0LL;
    Src[0] = v1;
    v6 = 0LL;
    Src[1] = 1;
    v7 = 0LL;
    Src_8 = 1LL;
    if ( (int)DxgkGetDeviceStateInternal(Src) < 0 || (_DWORD)Src_8 != 1 )
      return 0;
  }
  return v2;
}
