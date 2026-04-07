/*
 * XREFs of ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800665D0
 * Callers:
 *     ?IsNewConnectVariant@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180065E98 (-IsNewConnectVariant@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet.c)
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18006601C (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18006837C (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AF1B8 (-CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV-$vector@V-.c)
 * Callees:
 *     ?GetMonitorInternalInfo@CDWMDisplay@@QEBAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x180068250 (-GetMonitorInternalInfo@CDWMDisplay@@QEBAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800683E4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

char __fastcall CDWMDisplay::IsSamePhysicalDisplay(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  struct _LUID v2; // rbx
  unsigned int v4; // edi
  CDWMDisplay *v5; // rcx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  char *v9; // [rsp+30h] [rbp-3D8h] BYREF
  _BYTE v10[20]; // [rsp+40h] [rbp-3C8h] BYREF
  char v11; // [rsp+54h] [rbp-3B4h] BYREF

  v2 = (struct _LUID)*((_QWORD *)this + 22);
  if ( v2 != *((_QWORD *)a2 + 22) )
    return 0;
  v4 = *((_DWORD *)this + 48);
  if ( v4 != *((_DWORD *)a2 + 48) )
    return 0;
  memset_0(v10, 0, 0x3ACuLL);
  if ( (unsigned int)CDWMDisplay::GetMonitorInternalInfo(
                       v5,
                       v2,
                       v4,
                       (struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *)v10) )
    return 0;
  if ( (unsigned int)dword_180118130 > 5 && (byte_180118140 & 2) != 0 && (qword_180118148 & 2) == qword_180118148 )
  {
    v9 = &v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v6,
      (unsigned int)&unk_180104968,
      v7,
      v8,
      (__int64)&v9);
  }
  return 1;
}
