/*
 * XREFs of ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x180061A88
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 */

__int64 __fastcall std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx

  v3 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a2);
  v5 = v4[3];
  v6 = 2 * (v4[6] & v3);
  v7 = *(_QWORD *)(v5 + 16 * (v4[6] & v3) + 8);
  if ( v7 != v4[1] )
  {
    v8 = *(_QWORD *)(v5 + 8 * v6);
    while ( 1 )
    {
      if ( *(_DWORD *)a2 == *(_DWORD *)(v7 + 16) )
        goto LABEL_6;
      if ( v7 == v8 )
        break;
      v7 = *(_QWORD *)(v7 + 8);
    }
  }
  do
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
LABEL_6:
    ;
  }
  while ( !v7 );
  return v7 + 24;
}
