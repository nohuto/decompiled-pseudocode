/*
 * XREFs of ?IsNewConnectVariant@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800069FC
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006834 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x1800070F0 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003FECC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180058214 (-GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV-$vector@PEBVCDWM.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x1800582BC (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180058324 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800770D8 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayModeChangeHelper::IsNewConnectVariant(CDWMDisplaySet *this, CDWMDisplaySet *a2, _QWORD *a3)
{
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // ebx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
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
        v7 = a3[1] - *a3;
        if ( v7 == 8 )
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
        if ( (unsigned __int64)(v7 >> 3) > 1 )
        {
          if ( (unsigned int)dword_1801140F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801140F8, 2LL) )
          {
            v14 = v12;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
              v10,
              (unsigned int)&unk_180100995,
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
