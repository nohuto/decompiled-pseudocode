/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x18000DFB4
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000D730 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@455@Z @ 0x1800056FC (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U2@U3@U3@.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x18000EA4C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetDVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800FE694 (-GetDVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800FEBC0 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800FEE38 (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetWIDOfTarget@ISMTracing@@SA_KPEAUIInputTarget@@@Z @ 0x1800FEEB8 (-GetWIDOfTarget@ISMTracing@@SA_KPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        char a3,
        struct IMPCInputPostProcessor *a4)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int VIDOfTarget; // [rsp+68h] [rbp+17h] BYREF
  unsigned int DVIDOfTarget; // [rsp+6Ch] [rbp+1Bh] BYREF
  unsigned int PIDOfTarget; // [rsp+70h] [rbp+1Fh] BYREF
  unsigned __int64 WIDOfTarget; // [rsp+78h] [rbp+27h] BYREF
  struct IMPCInputPostProcessor *v15; // [rsp+80h] [rbp+2Fh] BYREF
  struct IInputTarget *v16; // [rsp+88h] [rbp+37h] BYREF
  ISMTracing *v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = this;
  if ( ISMTracing::IsEnabled() )
  {
    v7 = ISMTracing::Provider();
    v8 = (__int64)v7;
    if ( *(_DWORD *)v7 > 4u && (*((_BYTE *)v7 + 16) & 1) != 0 && (*((_QWORD *)v7 + 3) & 1LL) == *((_QWORD *)v7 + 3) )
    {
      VIDOfTarget = ISMTracing::GetVIDOfTarget(a2);
      DVIDOfTarget = ISMTracing::GetDVIDOfTarget(a2);
      WIDOfTarget = ISMTracing::GetWIDOfTarget(a2);
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
      v15 = a4;
      v16 = a2;
      LOBYTE(v17) = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (__int64)&unk_18021823F,
        v9,
        v10,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&PIDOfTarget,
        (__int64)&WIDOfTarget,
        (__int64)&DVIDOfTarget,
        (__int64)&VIDOfTarget);
    }
  }
}
