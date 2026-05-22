/*
 * XREFs of _lambda_b21163f7d194c0dea6581f41f33f3522_::operator()_unsigned_long_ @ 0x18008A91C
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 */

__int64 __fastcall lambda_b21163f7d194c0dea6581f41f33f3522_::operator()_unsigned_long_(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 184LL) + 4LL * a2);
  v10 = v2;
  v3 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v10);
  v5 = v4[29];
  v6 = 2 * (v4[32] & v3);
  v7 = *(_QWORD *)(v5 + 16 * (v4[32] & v3) + 8);
  if ( v7 == v4[27] )
    goto LABEL_8;
  v8 = *(_QWORD *)(v5 + 8 * v6);
  while ( v2 != *(_DWORD *)(v7 + 16) )
  {
    if ( v7 == v8 )
      goto LABEL_8;
    v7 = *(_QWORD *)(v7 + 8);
  }
  if ( !v7 )
  {
LABEL_8:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x18008A999LL);
  }
  return v7 + 24;
}
