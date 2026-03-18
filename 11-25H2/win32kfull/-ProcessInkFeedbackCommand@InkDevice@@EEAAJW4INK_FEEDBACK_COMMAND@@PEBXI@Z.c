/*
 * XREFs of ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402EF4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U1@U4@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@6666363333333333333@Z @ 0x14000661C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapper.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1401F0C3C (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x14020A078 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x14026F2D8 (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ??_GActiveCommand@InkFeedbackProviderBase@@QEAAPEAXI@Z @ 0x1402EE5E8 (--_GActiveCommand@InkFeedbackProviderBase@@QEAAPEAXI@Z.c)
 *     ?IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1402EE6F8 (-IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1402EE7B4 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1402EEB38 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1402EED88 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 */

__int64 __fastcall InkDevice::ProcessInkFeedbackCommand(__int64 a1, int a2, int *a3, __int64 a4)
{
  int v6; // ebx
  int v7; // edx
  __int64 v8; // rsi
  int v9; // ecx
  __int64 v10; // rax
  InkFeedbackProviderBase::ActiveCommand *v11; // rsi
  __int64 v12; // r8
  int v13; // r9d
  int v15; // [rsp+100h] [rbp-78h] BYREF
  int v16; // [rsp+104h] [rbp-74h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+108h] [rbp-70h] BYREF
  int v18; // [rsp+110h] [rbp-68h]
  int v19; // [rsp+114h] [rbp-64h]
  int v20; // [rsp+118h] [rbp-60h]
  int v21; // [rsp+11Ch] [rbp-5Ch]
  int v22; // [rsp+120h] [rbp-58h]
  int v23; // [rsp+124h] [rbp-54h]
  int v24; // [rsp+128h] [rbp-50h]
  int v25; // [rsp+12Ch] [rbp-4Ch]
  int v26; // [rsp+130h] [rbp-48h]
  int v27; // [rsp+134h] [rbp-44h]
  int v28; // [rsp+138h] [rbp-40h]
  const char *v29; // [rsp+140h] [rbp-38h] BYREF
  void *v30; // [rsp+148h] [rbp-30h] BYREF
  __int64 v31; // [rsp+150h] [rbp-28h]
  __int64 v32; // [rsp+158h] [rbp-20h] BYREF
  const char *v33; // [rsp+160h] [rbp-18h] BYREF

  if ( !*(_BYTE *)(a1 - 20) )
    return (unsigned int)-1073741823;
  v7 = a2 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return (unsigned int)-1073741637;
    if ( (_DWORD)a4 == 4 )
    {
      v8 = a1 - 32;
      if ( (unsigned int)dword_14039BC68 > 4 )
      {
        v15 = *a3;
        v30 = *(void **)(a1 + 48);
        v16 = 0;
        v29 = "Processing ink feedback command: IFC_SUPERWET_INK_STOP...";
        ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)(a1 & -(__int64)(a1 != 32));
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (__int64)ActiveCommandByTargetPointerId,
          byte_14036B6CD,
          (__int64)a3,
          a4,
          (__int64)&v16,
          (void **)&v29,
          &v30,
          (__int64)&ActiveCommandByTargetPointerId,
          (__int64)&v15);
      }
      ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                          a1,
                                                                                          1,
                                                                                          *a3);
      if ( ActiveCommandByTargetPointerId )
      {
        v6 = InkDevice::DoSuperWetInkStop(v8, (const struct IFC_SUPERWET_INK_STOP_DATA *)a3);
        InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
          (InkFeedbackProviderBase *)a1,
          &ActiveCommandByTargetPointerId);
        return (unsigned int)v6;
      }
      return (unsigned int)-1073741823;
    }
    return (unsigned int)-1073741811;
  }
  if ( (_DWORD)a4 != 64 )
    return (unsigned int)-1073741811;
  if ( (unsigned int)dword_14039BC68 > 4 )
  {
    v9 = a3[15];
    v16 = -__CFSHR__(v9, 3);
    v15 = -__CFSHR__(v9, 2);
    v19 = a3[14];
    v20 = a3[13];
    v21 = a3[12];
    v22 = a3[11];
    v23 = a3[10];
    v24 = a3[9];
    v25 = a3[8];
    v26 = a3[7];
    v27 = a3[6];
    v28 = a3[5];
    LODWORD(v29) = a3[3];
    LODWORD(v30) = *a3;
    v18 = -(v9 & 1);
    v32 = *(_QWORD *)(a1 + 48);
    LODWORD(ActiveCommandByTargetPointerId) = 0;
    v33 = "Processing ink feedback command: IFC_SUPERWET_INK_START...";
    v31 = a1 & -(__int64)(a1 != 32);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v31,
      (__int64)&unk_14036B94D,
      (__int64)a3,
      a4,
      (__int64)&ActiveCommandByTargetPointerId,
      &v33,
      &v32);
  }
  if ( *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 108)
    || InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(a1, 1, *a3) )
  {
    return (unsigned int)-1073741823;
  }
  if ( !IsSuperWetInkStartDataSupported(*(_DWORD *)(a1 + 116), (__int64)a3) )
    return (unsigned int)-1073741637;
  v10 = Win32AllocPoolZInit(32LL, 1349217865LL);
  v11 = (InkFeedbackProviderBase::ActiveCommand *)v10;
  if ( v10 )
  {
    *(_DWORD *)(v10 + 16) = 0;
    *(_DWORD *)(v10 + 20) = 0;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)v10 = 0LL;
    *(_DWORD *)(v10 + 16) = 1;
    *(_DWORD *)(v10 + 20) = *a3;
    *(_QWORD *)(v10 + 24) = KeGetCurrentThread();
    v6 = InkDevice::DoSuperWetInkStart((InkDevice *)(a1 - 32), (const struct IFC_SUPERWET_INK_START_DATA *)a3);
    if ( v6 < 0 )
      InkFeedbackProviderBase::ActiveCommand::`scalar deleting destructor'(v11);
    else
      InkFeedbackProviderBase::AddActiveCommand((InkFeedbackProviderBase *)a1, v11, v12, v13);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
