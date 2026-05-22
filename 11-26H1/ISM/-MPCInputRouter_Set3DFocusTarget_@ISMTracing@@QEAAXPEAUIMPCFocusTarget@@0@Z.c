/*
 * XREFs of ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800FFAD0
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180100408 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@345@Z @ 0x180005948 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U2@U3@@-$_tlgWrit.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x18000C1F0 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x18000C234 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x18000EA4C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Set3DFocusTarget_(
        ISMTracing *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  const WCHAR *TypeOfTarget; // [rsp+50h] [rbp-20h] BYREF
  struct IMPCFocusTarget *v10; // [rsp+58h] [rbp-18h] BYREF
  const WCHAR *v11; // [rsp+60h] [rbp-10h] BYREF
  struct IMPCFocusTarget *v12; // [rsp+68h] [rbp-8h] BYREF
  ISMTracing *v13; // [rsp+90h] [rbp+20h] BYREF
  int PIDOfMPCTarget; // [rsp+A8h] [rbp+38h] BYREF

  v13 = this;
  if ( ISMTracing::IsEnabled() )
  {
    v5 = ISMTracing::Provider();
    v6 = (__int64)v5;
    if ( *(_DWORD *)v5 > 4u && tlgKeywordOn((__int64)v5, 1LL) )
    {
      TypeOfTarget = ISMTracing::GetTypeOfTarget(a3);
      LODWORD(v13) = ISMTracing::GetPIDOfMPCTarget(a3);
      v10 = a3;
      v11 = ISMTracing::GetTypeOfTarget(a2);
      PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
      v12 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (__int64)&unk_1802181AE,
        v7,
        v8,
        (__int64)&v12,
        (__int64)&PIDOfMPCTarget,
        &v11,
        (__int64)&v10,
        (__int64)&v13,
        &TypeOfTarget);
    }
  }
}
