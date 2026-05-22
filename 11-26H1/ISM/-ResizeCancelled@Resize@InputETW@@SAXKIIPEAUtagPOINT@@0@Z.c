/*
 * XREFs of ?ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x180154EC0
 * Callers:
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801559D0 (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333@Z @ 0x180007988 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800114D8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall InputETW::Resize::ResizeCancelled(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        struct tagPOINT *a4,
        struct tagPOINT *a5)
{
  __int64 v6; // rdi
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 y; // rcx
  __int64 v11; // [rsp+60h] [rbp+Fh] BYREF
  __int64 x; // [rsp+68h] [rbp+17h] BYREF
  __int64 v13; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+78h] [rbp+27h] BYREF
  __int64 v15; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+88h] [rbp+37h] BYREF
  __int64 v17; // [rsp+90h] [rbp+3Fh] BYREF

  v6 = a1;
  if ( InputETW::IsEnabled() )
  {
    v7 = InputETW::Provider();
    if ( *(_DWORD *)v7 > 5u && tlgKeywordOn((__int64)v7, 1LL) )
    {
      v15 = 0LL;
      v16 = 0LL;
      v17 = v6;
      y = a5->y;
      x = a5->x;
      v13 = a4->y;
      v14 = a4->x;
      v11 = y;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        (__int64)&unk_180224372,
        v8,
        v9,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&x,
        (__int64)&v11);
    }
  }
}
