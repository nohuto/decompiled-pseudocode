/*
 * XREFs of ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402FB99C
 * Callers:
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402CF62C (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x140002520 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U3@@-$_tlgWriteTempl.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1402FB964 (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 *     ?OnDeviceClosed@RimBackedDeviceBase@@UEAAXXZ @ 0x1402FE900 (-OnDeviceClosed@RimBackedDeviceBase@@UEAAXXZ.c)
 */

void __fastcall InkProcessor::OnDeviceClosed(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  RimBackedDeviceBase *InkDeviceByRimDeviceObject; // rax
  RimBackedDeviceBase *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+70h] [rbp+8h] BYREF
  struct RawInputManagerDeviceObject *v11; // [rsp+80h] [rbp+18h] BYREF
  RimBackedDeviceBase *v12; // [rsp+88h] [rbp+20h] BYREF

  W32AcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v5 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      RimBackedDeviceBase::OnDeviceClosed(InkDeviceByRimDeviceObject);
      if ( (unsigned int)dword_1403AAAD8 > 4 )
      {
        v11 = a2;
        v9 = "Ink device closed";
        v12 = v5;
        v10 = 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v6,
          (__int64)&unk_140379224,
          v7,
          v8,
          (__int64)&v10,
          (void **)&v9,
          (__int64)&v12,
          (__int64)&v11);
      }
    }
  }
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
