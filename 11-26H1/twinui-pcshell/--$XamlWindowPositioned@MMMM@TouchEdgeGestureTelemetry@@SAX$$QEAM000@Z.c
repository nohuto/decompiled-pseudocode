/*
 * XREFs of ??$XamlWindowPositioned@MMMM@TouchEdgeGestureTelemetry@@SAX$$QEAM000@Z @ 0x180597400
 * Callers:
 *     ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x18059A798 (-PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180099B30 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B5DC4 (-Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall TouchEdgeGestureTelemetry::XamlWindowPositioned<float,float,float,float>(
        int *a1,
        int *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  int v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // xmm1_4
  int v14; // [rsp+40h] [rbp-18h] BYREF
  int v15; // [rsp+44h] [rbp-14h] BYREF
  int v16; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v17[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  v8 = TouchGestureLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    v10 = *a3;
    v14 = *a4;
    v11 = *a2;
    v15 = v10;
    v12 = *a1;
    v16 = v11;
    v17[0] = v12;
    LODWORD(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v8,
                    byte_180821492,
                    0LL,
                    v9,
                    (__int64)v17,
                    (__int64)&v16,
                    (__int64)&v15,
                    (__int64)&v14);
  }
  return (int)v8;
}
