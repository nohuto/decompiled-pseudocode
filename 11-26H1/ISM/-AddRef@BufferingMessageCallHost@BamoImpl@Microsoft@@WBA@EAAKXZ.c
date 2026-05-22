/*
 * XREFs of ?AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x1800ABA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::AddRef(__int64 a1)
{
  return EdgyConnection::AddRef((EdgyConnection *)(a1 - 16));
}
