/*
 * XREFs of ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402FBB14
 * Callers:
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402CF6A4 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x1400042F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U3@U3@@-$_tlgWriteTe.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x14026B5F4 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1402FB964 (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1402FBBEC (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::OnDeviceRemoved(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  struct _LIST_ENTRY *InkDeviceByRimDeviceObject; // rax
  InkFeedbackServer *v5; // rcx
  InkProcessor *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rcx
  struct InkDevice *v10; // [rsp+50h] [rbp-10h] BYREF
  const char *v11; // [rsp+58h] [rbp-8h] BYREF
  struct InkDevice *v12; // [rsp+80h] [rbp+20h] BYREF
  struct RawInputManagerDeviceObject *v13; // [rsp+90h] [rbp+30h] BYREF
  char *v14; // [rsp+98h] [rbp+38h] BYREF

  W32AcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = (struct _LIST_ENTRY *)InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v12 = (struct InkDevice *)InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      InkFeedbackServer::RemoveInkFeedbackProvider(v5, InkDeviceByRimDeviceObject + 2);
      InkProcessor::UnlinkAndReleaseInkDevice(v6, &v12);
      if ( (unsigned int)dword_1403AAAD8 > 4 )
      {
        v13 = a2;
        if ( v12 )
          v9 = (char *)v12 + 32;
        else
          v9 = 0LL;
        v10 = v12;
        v14 = v9;
        v11 = "Ink device removed";
        LODWORD(v12) = 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (__int64)v9,
          (__int64)&unk_14037927E,
          v7,
          v8,
          (__int64)&v12,
          (void **)&v11,
          (__int64)&v10,
          (__int64)&v14,
          (__int64)&v13);
      }
    }
  }
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
