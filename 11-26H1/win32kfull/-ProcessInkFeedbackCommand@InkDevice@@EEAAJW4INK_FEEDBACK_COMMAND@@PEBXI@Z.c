/*
 * XREFs of ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402FEB90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U1@U4@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@6666363333333333333@Z @ 0x140001CE4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapper.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x140229454 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1402457E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x140296E5C (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ??_GActiveCommand@InkFeedbackProviderBase@@QEAAPEAXI@Z @ 0x1402FDCF4 (--_GActiveCommand@InkFeedbackProviderBase@@QEAAPEAXI@Z.c)
 *     ?IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1402FDDFC (-IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1402FDEB8 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1402FE238 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1402FE48C (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 */

__int64 __fastcall InkDevice::ProcessInkFeedbackCommand(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  InkDevice *v4; // r14
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rax
  InkFeedbackProviderBase::ActiveCommand *v11; // rsi
  __int64 v12; // r8
  int v13; // r9d
  char v15; // [rsp+F8h] [rbp-80h] BYREF
  char v16; // [rsp+F9h] [rbp-7Fh] BYREF
  char v17; // [rsp+FAh] [rbp-7Eh] BYREF
  char v18; // [rsp+FBh] [rbp-7Dh] BYREF
  char v19; // [rsp+FCh] [rbp-7Ch] BYREF
  _BYTE v20[3]; // [rsp+FDh] [rbp-7Bh] BYREF
  int v21; // [rsp+100h] [rbp-78h] BYREF
  int v22; // [rsp+104h] [rbp-74h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+108h] [rbp-70h] BYREF
  int v24; // [rsp+110h] [rbp-68h] BYREF
  int v25; // [rsp+114h] [rbp-64h] BYREF
  int v26; // [rsp+118h] [rbp-60h] BYREF
  int v27; // [rsp+11Ch] [rbp-5Ch] BYREF
  int v28; // [rsp+120h] [rbp-58h] BYREF
  int v29; // [rsp+124h] [rbp-54h] BYREF
  int v30; // [rsp+128h] [rbp-50h] BYREF
  int v31; // [rsp+12Ch] [rbp-4Ch] BYREF
  int v32; // [rsp+130h] [rbp-48h] BYREF
  int v33; // [rsp+134h] [rbp-44h] BYREF
  int v34; // [rsp+138h] [rbp-40h] BYREF
  const char *v35; // [rsp+140h] [rbp-38h] BYREF
  void *v36; // [rsp+148h] [rbp-30h] BYREF
  __int64 v37; // [rsp+150h] [rbp-28h] BYREF
  void *v38; // [rsp+158h] [rbp-20h] BYREF
  const char *v39; // [rsp+160h] [rbp-18h] BYREF

  v4 = (InkDevice *)(a1 - 32);
  if ( !*(_BYTE *)(a1 - 32 + 12) )
    return (unsigned int)-1073741823;
  v8 = a2 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return (unsigned int)-1073741637;
    if ( (_DWORD)a4 == 4 )
    {
      if ( (unsigned int)dword_1403AAAD8 > 4 )
      {
        v21 = *(_DWORD *)a3;
        v22 = 0;
        v36 = *(void **)(a1 + 48);
        v35 = "Processing ink feedback command: IFC_SUPERWET_INK_STOP...";
        ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)(a1 & -(__int64)(a1 != 32));
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (__int64)ActiveCommandByTargetPointerId,
          byte_140379C44,
          a3,
          a4,
          (__int64)&v22,
          (void **)&v35,
          &v36,
          (__int64)&ActiveCommandByTargetPointerId,
          (__int64)&v21);
      }
      ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                          a1,
                                                                                          1,
                                                                                          *(_DWORD *)a3);
      if ( ActiveCommandByTargetPointerId )
      {
        v7 = InkDevice::DoSuperWetInkStop((__int64)v4, (const struct IFC_SUPERWET_INK_STOP_DATA *)a3);
        InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
          (InkFeedbackProviderBase *)a1,
          &ActiveCommandByTargetPointerId);
        return (unsigned int)v7;
      }
      return (unsigned int)-1073741823;
    }
    return (unsigned int)-1073741811;
  }
  if ( (_DWORD)a4 != 64 )
    return (unsigned int)-1073741811;
  if ( (unsigned int)dword_1403AAAD8 > 4 )
  {
    v9 = *(_DWORD *)(a3 + 60);
    LODWORD(ActiveCommandByTargetPointerId) = 0;
    v22 = -__CFSHR__(v9, 3);
    v21 = -__CFSHR__(v9, 2);
    v25 = *(_DWORD *)(a3 + 56);
    v26 = *(_DWORD *)(a3 + 52);
    v27 = *(_DWORD *)(a3 + 48);
    v28 = *(_DWORD *)(a3 + 44);
    v29 = *(_DWORD *)(a3 + 40);
    v30 = *(_DWORD *)(a3 + 36);
    v31 = *(_DWORD *)(a3 + 32);
    v32 = *(_DWORD *)(a3 + 28);
    v33 = *(_DWORD *)(a3 + 24);
    v34 = *(_DWORD *)(a3 + 20);
    v15 = *(_BYTE *)(a3 + 16);
    LODWORD(v35) = *(_DWORD *)(a3 + 12);
    v16 = *(_BYTE *)(a3 + 11);
    v17 = *(_BYTE *)(a3 + 10);
    v18 = *(_BYTE *)(a3 + 9);
    v19 = *(_BYTE *)(a3 + 8);
    v20[0] = *(_BYTE *)(a3 + 4);
    LODWORD(v36) = *(_DWORD *)a3;
    v24 = -(v9 & 1);
    v38 = *(void **)(a1 + 48);
    v39 = "Processing ink feedback command: IFC_SUPERWET_INK_START...";
    v37 = a1 & -(__int64)(v4 != 0LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v37,
      (__int64)&unk_140379B12,
      a3,
      a4,
      (__int64)&ActiveCommandByTargetPointerId,
      (void **)&v39,
      &v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v35,
      (__int64)&v15,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v21,
      (__int64)&v22);
  }
  if ( *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 108)
    || InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(a1, 1, *(_DWORD *)a3) )
  {
    return (unsigned int)-1073741823;
  }
  if ( !IsSuperWetInkStartDataSupported(*(_DWORD *)(a1 + 116), a3) )
    return (unsigned int)-1073741637;
  v10 = Win32AllocPoolZInit(32LL, 1349217865LL);
  v11 = (InkFeedbackProviderBase::ActiveCommand *)v10;
  if ( v10 )
  {
    *(_QWORD *)(v10 + 16) = 1LL;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)v10 = 0LL;
    *(_DWORD *)(v10 + 20) = *(_DWORD *)a3;
    *(_QWORD *)(v10 + 24) = KeGetCurrentThread();
    v7 = InkDevice::DoSuperWetInkStart(v4, (const struct IFC_SUPERWET_INK_START_DATA *)a3);
    if ( v7 < 0 )
      InkFeedbackProviderBase::ActiveCommand::`scalar deleting destructor'(v11);
    else
      InkFeedbackProviderBase::AddActiveCommand((InkFeedbackProviderBase *)a1, v11, v12, v13);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
