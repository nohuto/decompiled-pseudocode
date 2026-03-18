/*
 * XREFs of ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x140295910
 * Callers:
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402958D0 (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x1400042F8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U3@U3@@-$_tlgWriteTe.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x140266170 (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1402FB920 (--_EInkDevice@@UEAAPEAXI@Z.c)
 *     ??0InkDevice@@QEAA@XZ @ 0x1402FDF0C (--0InkDevice@@QEAA@XZ.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FE680 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessor::OnDeviceAttached(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  int v4; // ebx
  InkDevice *v5; // rax
  InkDevice *v6; // rax
  InkDevice *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  InkProcessor **v10; // rdx
  InkProcessor *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  InkDevice *v16; // [rsp+50h] [rbp-38h] BYREF
  const char *v17; // [rsp+58h] [rbp-30h] BYREF
  int v18; // [rsp+90h] [rbp+8h] BYREF
  struct RawInputManagerDeviceObject *v19; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v20; // [rsp+A8h] [rbp+20h] BYREF

  W32AcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 8) )
  {
    v5 = (InkDevice *)Win32AllocPoolZInit(168LL, 1349217865LL);
    if ( v5 && (v6 = InkDevice::InkDevice(v5), (v7 = v6) != 0LL) )
    {
      v4 = InkDevice::Initialize(v6, a2);
      if ( v4 < 0 )
      {
        InkDevice::`vector deleting destructor'(v7, 1u);
      }
      else
      {
        v10 = (InkProcessor **)*((_QWORD *)this + 3);
        v11 = (InkDevice *)((char *)v7 + 88);
        if ( *v10 != (InkProcessor *)((char *)this + 16) )
          __fastfail(3u);
        *((_QWORD *)v7 + 12) = v10;
        *(_QWORD *)v11 = (char *)this + 16;
        *v10 = v11;
        *((_QWORD *)this + 3) = v11;
        InkFeedbackServer::AddInkFeedbackProvider(
          (InkProcessor *)((char *)this + 96),
          (InkDevice *)((char *)v7 + 32),
          v8,
          v9);
        if ( (unsigned int)dword_1403AAAD8 > 4 )
        {
          v19 = a2;
          v17 = "Ink device attached";
          v20 = (_QWORD *)((char *)v7 + 32);
          v16 = v7;
          v18 = v4;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v12,
            (__int64)&unk_1403792ED,
            v13,
            v14,
            (__int64)&v18,
            (void **)&v17,
            (__int64)&v16,
            (__int64)&v20,
            (__int64)&v19);
        }
      }
    }
    else
    {
      v4 = -1073741801;
    }
  }
  else
  {
    v4 = -1073741823;
  }
  W32ReleasePushLockExclusiveEx(this, 0LL);
  return (unsigned int)v4;
}
