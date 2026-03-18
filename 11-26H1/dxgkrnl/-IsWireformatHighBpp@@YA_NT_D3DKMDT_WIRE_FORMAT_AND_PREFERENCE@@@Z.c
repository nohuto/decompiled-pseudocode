/*
 * XREFs of ?IsWireformatHighBpp@@YA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x14005FEB0
 * Callers:
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1402DD148 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsWireformatHighBpp(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a1)
{
  return (*(_BYTE *)&a1.0 & 0x30) != 0
      || (*(_WORD *)&a1.0 & 0xC00) != 0
      || (a1.Value & 0x30000) != 0
      || (a1.Value & 0xC00000) != 0;
}
