/*
 * XREFs of ?SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x140221414
 * Callers:
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x140221E14 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400633FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 */

void __fastcall InputTraceLogging::Pointer::SendFrameToContainer(
        struct RIMDEV *const a1,
        const struct CPointerInputFrame *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rdx
  __int64 v9; // [rsp+50h] [rbp-10h] BYREF
  __int64 v10; // [rsp+58h] [rbp-8h] BYREF
  int v11; // [rsp+70h] [rbp+10h] BYREF
  int v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  if ( !(unsigned int)RIMIsTouchPointerDevice(*((_QWORD *)a1 + 57)) )
  {
    if ( (unsigned int)RIMIsPenPointerDevice(v2) )
    {
      if ( (unsigned int)dword_1402A9E40 <= 4 || !tlgKeywordOn((__int64)&dword_1402A9E40, 32LL) )
        return;
      v8 = &unk_14028BF9A;
    }
    else if ( *(_DWORD *)(v5 + 24) == 7 )
    {
      if ( (unsigned int)dword_1402A9E40 <= 4 || !tlgKeywordOn((__int64)&dword_1402A9E40, 32LL) )
        return;
      v8 = &unk_14028BF36;
    }
    else
    {
      if ( (unsigned int)dword_1402A9E40 <= 4 || !tlgKeywordOn((__int64)&dword_1402A9E40, 32LL) )
        return;
      v8 = &unk_14028BECE;
    }
    v11 = *(_DWORD *)(v6 + 48);
    v12 = *(_DWORD *)(v6 + 40);
    v13 = *(_QWORD *)(v6 + 72);
    v10 = *(_QWORD *)(v6 + 216);
    v9 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1402A9E40,
      (__int64)v8,
      v6,
      v7,
      (__int64)&v9,
      (__int64)&v10,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
    return;
  }
  if ( (unsigned int)dword_1402A9E40 > 4 && tlgKeywordOn((__int64)&dword_1402A9E40, 32LL) )
  {
    v11 = *(_DWORD *)(v3 + 48);
    v12 = *(_DWORD *)(v3 + 40);
    v13 = *(_QWORD *)(v3 + 72);
    v9 = *(_QWORD *)(v3 + 216);
    v10 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1402A9E40,
      (__int64)&unk_14028BFFE,
      v3,
      v4,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
}
