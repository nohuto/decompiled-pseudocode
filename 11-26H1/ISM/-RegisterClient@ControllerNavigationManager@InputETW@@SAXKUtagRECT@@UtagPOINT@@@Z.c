/*
 * XREFs of ?RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18017A0A4
 * Callers:
 *     ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x180179F80 (-RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVB.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333@Z @ 0x180007988 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800114D8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall InputETW::ControllerNavigationManager::RegisterClient(
        unsigned int a1,
        struct tagRECT *a2,
        struct tagPOINT a3)
{
  LONG x; // ebx
  __int64 v4; // rsi
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+60h] [rbp+17h] BYREF
  __int64 right; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 bottom; // [rsp+70h] [rbp+27h] BYREF
  __int64 left; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 top; // [rsp+80h] [rbp+37h] BYREF
  _QWORD v14[3]; // [rsp+88h] [rbp+3Fh] BYREF
  LONG y; // [rsp+C4h] [rbp+7Bh]
  __int64 v16; // [rsp+C8h] [rbp+7Fh] BYREF

  y = a3.y;
  x = a3.x;
  v4 = a1;
  if ( InputETW::IsEnabled() )
  {
    v6 = InputETW::Provider();
    if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 1LL) )
    {
      right = a2->right;
      bottom = a2->bottom;
      left = a2->left;
      top = a2->top;
      v16 = y;
      v9 = x;
      v14[0] = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v7,
        (__int64)&unk_1802265F8,
        v7,
        v8,
        (__int64)v14,
        (__int64)&top,
        (__int64)&left,
        (__int64)&bottom,
        (__int64)&right,
        (__int64)&v9,
        (__int64)&v16);
    }
  }
}
