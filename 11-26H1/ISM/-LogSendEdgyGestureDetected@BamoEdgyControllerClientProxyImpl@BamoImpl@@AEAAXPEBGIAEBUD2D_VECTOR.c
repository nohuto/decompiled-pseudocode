/*
 * XREFs of ?LogSendEdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@AEAAXPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x180159F24
 * Callers:
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x1801598AC (-EdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEBGIAEBUD2D_VECTOR_2F@@_K.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U3@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@533@Z @ 0x180007D90 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U3@U1@U1@@-$_t.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoEdgyControllerClientProxyImpl::LogSendEdgyGestureDetected(
        BamoImpl::BamoEdgyControllerClientProxyImpl *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const struct D2D_VECTOR_2F *a4,
        unsigned __int64 a5,
        const struct D2D_VECTOR_2F *a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  const WCHAR *v12; // r11
  __int64 v13; // rax
  int v14; // ecx
  int v15; // [rsp+60h] [rbp-1h] BYREF
  int v16; // [rsp+64h] [rbp+3h] BYREF
  int v17; // [rsp+68h] [rbp+7h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp+Fh] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+17h] BYREF
  const WCHAR *v20; // [rsp+80h] [rbp+1Fh] BYREF
  const struct D2D_VECTOR_2F *v21; // [rsp+B8h] [rbp+57h] BYREF

  v21 = a4;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    LODWORD(v21) = a9;
    LODWORD(a6) = a8;
    v18 = a7;
    v19 = a5;
    v13 = *(_QWORD *)(v11 + 16);
    v15 = v9;
    v20 = v12;
    v14 = *(_DWORD *)(v13 + 36);
    v17 = *(_DWORD *)(v11 + 24);
    v16 = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (__int64)&unk_180224D66,
      v9,
      v10,
      (__int64)&v17,
      (__int64)&v16,
      &v20,
      (__int64)&v15,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&a6,
      (__int64)&v21);
  }
}
