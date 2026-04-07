/*
 * XREFs of ?IsNewConnectVariant@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180065E98
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180065CCC (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004FE44 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x180066578 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800665D0 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800666C0 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800682D4 (-GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV-$vector@PEBVCDWM.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18006837C (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     _tlgKeywordOn @ 0x18007C780 (_tlgKeywordOn.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayModeChangeHelper::IsNewConnectVariant(CDWMDisplaySet *this, CDWMDisplaySet *a2, _QWORD *a3)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // r9
  unsigned int v8; // ebx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+50h] [rbp+8h] BYREF
  struct CDWMDisplay *v15; // [rsp+60h] [rbp+18h] BYREF
  CDWMDisplay *v16; // [rsp+68h] [rbp+20h] BYREF

  if ( *a3 != a3[1] )
    a3[1] = *a3;
  v6 = *((_DWORD *)this + 16);
  if ( v6 && *((_DWORD *)a2 + 16) > v6 )
  {
    v15 = 0LL;
    v16 = 0LL;
    if ( (int)CDWMDisplaySet::GetPrimaryDisplay(this, &v16) >= 0 )
    {
      v15 = 0LL;
      if ( (int)CDWMDisplaySet::GetPrimaryDisplay(a2, &v15) >= 0 )
      {
        CDisplayModeChangeHelper::GetNewConnectedDisplays(this, a2);
        v7 = (__int64)(a3[1] - *a3) >> 3;
        if ( v7 == 1 )
        {
          if ( CDWMDisplay::IsSamePhysicalDisplay(v16, v15) )
          {
            if ( *(_BYTE *)(*(_QWORD *)(a3[1] - 8LL) + 288LL) )
              v8 = 2;
            else
              v8 = 6;
            goto LABEL_24;
          }
          if ( *((_DWORD *)this + 16) == 1 && *(_BYTE *)(*(_QWORD *)(a3[1] - 8LL) + 288LL) )
          {
            MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(a2, v16);
            if ( MatchedPhysicalDisplayNoRef )
            {
              if ( *((_BYTE *)MatchedPhysicalDisplayNoRef + 288) )
                v8 = 11;
              else
                v8 = 12;
              goto LABEL_24;
            }
            goto LABEL_23;
          }
LABEL_22:
          v8 = 14;
LABEL_24:
          wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v15);
          wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v16);
          return v8;
        }
        if ( v7 > 1 )
        {
          if ( (unsigned int)dword_180118130 > 5 && (unsigned __int8)tlgKeywordOn(&dword_180118130, 2LL) )
          {
            v14 = v12;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
              v10,
              byte_1801047F5,
              v11,
              v12,
              (__int64)&v14);
          }
          goto LABEL_22;
        }
      }
    }
LABEL_23:
    v8 = 0;
    goto LABEL_24;
  }
  return 0LL;
}
