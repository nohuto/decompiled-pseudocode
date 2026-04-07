/*
 * XREFs of ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006B90
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006834 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@345@Z @ 0x180002468 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U3@@-$_tlgWrit.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x1800070F0 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180008418 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180058324 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800770D8 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert(
        CDWMDisplaySet *a1,
        CDWMDisplaySet *a2,
        _QWORD *a3)
{
  struct CDWMDisplay *v4; // rbx
  CDWMDisplay *v5; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  void *v11; // r11
  CDWMDisplay *v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  void *v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  void *v16; // [rsp+70h] [rbp-10h] BYREF
  int v17; // [rsp+A8h] [rbp+28h] BYREF
  int v18; // [rsp+B0h] [rbp+30h] BYREF
  struct CDWMDisplay *v19; // [rsp+B8h] [rbp+38h] BYREF

  if ( *a3 != a3[1] )
    a3[1] = *a3;
  if ( *((_DWORD *)a2 + 16) != 1 )
    return 0LL;
  v19 = 0LL;
  v12 = 0LL;
  if ( (int)CDWMDisplaySet::GetPrimaryDisplay(a1, &v12) < 0
    || (v19 = 0LL, (int)CDWMDisplaySet::GetPrimaryDisplay(a2, &v19) < 0)
    || (v4 = v19, !*((_BYTE *)v19 + 288)) )
  {
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v12);
    return 0LL;
  }
  v5 = v12;
  if ( CDWMDisplay::IsSamePhysicalDisplay(v12, v19) )
  {
    CDWMDisplay::Release(v4);
    if ( v5 )
      CDWMDisplay::Release(v5);
    return 0LL;
  }
  if ( (unsigned int)dword_1801140F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801140F8, 2LL) )
  {
    v13 = v10;
    v17 = *((_DWORD *)v4 + 47);
    v14 = (char *)v4 + 96;
    v15 = v9;
    v18 = *((_DWORD *)v5 + 47);
    v16 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v7,
      (int)&unk_18010069E,
      v8,
      v9,
      &v16,
      (__int64)&v18,
      (__int64)&v15,
      &v14,
      (__int64)&v17,
      (__int64)&v13);
  }
  wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v12);
  return 10LL;
}
