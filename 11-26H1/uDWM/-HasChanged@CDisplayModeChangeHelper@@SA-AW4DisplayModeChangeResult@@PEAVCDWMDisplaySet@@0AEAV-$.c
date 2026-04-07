/*
 * XREFs of ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006834
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsNewConnectVariant@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800069FC (-IsNewConnectVariant@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet.c)
 *     ?IsDisconnect@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0@Z @ 0x180006B7C (-IsDisconnect@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0@Z.c)
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006B90 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006D24 (-IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180078A10 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CDisplayModeChangeHelper::HasChanged(CDWMDisplaySet *this, CDWMDisplaySet *a2, __int64 a3, int a4)
{
  unsigned int IsNewConnectVariant; // ebx
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v10[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  void *v12; // [rsp+48h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  void *v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  char *v17; // [rsp+68h] [rbp-18h]
  __int64 v18; // [rsp+70h] [rbp-10h]

  if ( (unsigned int)dword_1801140F8 > 5 && (byte_180114108 & 2) != 0 && (qword_180114110 & 2) == qword_180114110 )
  {
    LODWORD(v9) = *((_DWORD *)a2 + 16);
    HIDWORD(v9) = *((_DWORD *)this + 16);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)this,
      (unsigned int)&unk_1801009EA,
      a3,
      a4,
      (__int64)&v9 + 4,
      (__int64)&v9);
  }
  IsNewConnectVariant = CDisplayModeChangeHelper::IsNewConnectVariant(this, a2);
  if ( !IsNewConnectVariant )
  {
    IsNewConnectVariant = CDisplayModeChangeHelper::IsModeChangeBetweenDuplicateAndExtend(this, a2);
    if ( !IsNewConnectVariant )
    {
      IsNewConnectVariant = CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert(this, a2, a3);
      if ( !IsNewConnectVariant )
        IsNewConnectVariant = CDisplayModeChangeHelper::IsDisconnect(this, a2);
    }
  }
  if ( (unsigned int)dword_1801140F8 > 5 && (byte_180114108 & 2) != 0 && (qword_180114110 & 2) == qword_180114110 )
  {
    HIDWORD(v9) = IsNewConnectVariant;
    v17 = (char *)&v9 + 4;
    v10[1] = 5;
    v12 = off_180114100;
    v18 = 4LL;
    v10[0] = 184549376;
    v11 = 2LL;
    v13 = *(unsigned __int16 *)off_180114100;
    v15 = &unk_18010094C;
    v14 = 2;
    v16 = 0x100000048LL;
    LODWORD(v9) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    ((void (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, int, void **, __int64))EtwEventWriteTransfer)(
      qword_180114118,
      v10,
      0LL,
      0LL,
      3,
      &v12,
      v9);
  }
  return IsNewConnectVariant;
}
