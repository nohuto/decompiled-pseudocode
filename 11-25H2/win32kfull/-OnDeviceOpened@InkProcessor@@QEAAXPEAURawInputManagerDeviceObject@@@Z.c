/*
 * XREFs of ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EBF90
 * Callers:
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4BD0 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x1400060E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U3@@-$_tlgWriteTempl.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1402EBEB4 (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 *     ?OnDeviceOpened@RimBackedDeviceBase@@UEAAXXZ @ 0x1402EF250 (-OnDeviceOpened@RimBackedDeviceBase@@UEAAXXZ.c)
 */

void __fastcall InkProcessor::OnDeviceOpened(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  RimBackedDeviceBase *InkDeviceByRimDeviceObject; // rax
  RimBackedDeviceBase *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+70h] [rbp+8h] BYREF
  struct RawInputManagerDeviceObject *v11; // [rsp+80h] [rbp+18h]
  RimBackedDeviceBase *v12; // [rsp+88h] [rbp+20h]

  W32AcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v5 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      RimBackedDeviceBase::OnDeviceOpened(InkDeviceByRimDeviceObject);
      if ( (unsigned int)dword_14039BC68 > 4 )
      {
        v10 = 0;
        v9 = "Ink device opened";
        v11 = a2;
        v12 = v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v6,
          (__int64)&unk_14036B40C,
          v7,
          v8,
          (__int64)&v10,
          &v9);
      }
    }
  }
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
