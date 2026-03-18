/*
 * XREFs of DXGADAPTER_ValidateMockDriverState @ 0x140074F50
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x14007F5D4 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 */

__int64 __fastcall DXGADAPTER_ValidateMockDriverState(__int64 a1)
{
  return MOCKDRIVERSTATE::ValidateMockDriverState(*(_QWORD *)(a1 + 5016));
}
