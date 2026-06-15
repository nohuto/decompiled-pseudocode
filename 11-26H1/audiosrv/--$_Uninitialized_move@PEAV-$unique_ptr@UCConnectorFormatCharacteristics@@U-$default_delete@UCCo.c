/*
 * XREFs of ??$_Uninitialized_move@PEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x18005E4E4
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18007CD1C (--$_Emplace_reallocate@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCConne.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x18005E6C8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::unique_ptr<CConnectorFormatCharacteristics> *,std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(a3, a3);
  return a3;
}
