/*
 * XREFs of ?ServerSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUtagRECT@@@Z @ 0x180139660
 * Callers:
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1801389E0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800068E8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplat.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::VirtualTouchpad::ServerSizeChanged(
        const void *a1,
        const struct Windows::UI::Internal::Input::VirtualTouchpadSize *a2,
        const struct tagRECT *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  LONG bottom; // ecx
  LONG right; // [rsp+68h] [rbp+27h] BYREF
  LONG top; // [rsp+6Ch] [rbp+2Bh] BYREF
  LONG left; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v13; // [rsp+78h] [rbp+37h] BYREF
  __int64 v14; // [rsp+80h] [rbp+3Fh] BYREF
  __int64 v15; // [rsp+88h] [rbp+47h] BYREF
  const void *v16; // [rsp+90h] [rbp+4Fh] BYREF
  LONG v17; // [rsp+C0h] [rbp+7Fh] BYREF

  v6 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 4u && tlgKeywordOn((__int64)v6, 512LL) )
  {
    bottom = a3->bottom;
    top = a3->top;
    left = a3->left;
    v13 = *((_QWORD *)a2 + 2);
    v14 = *((_QWORD *)a2 + 1);
    v15 = *(_QWORD *)a2;
    v17 = bottom;
    right = a3->right;
    v16 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (__int64)&unk_180220D9B,
      v7,
      v8,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&v17);
  }
}
