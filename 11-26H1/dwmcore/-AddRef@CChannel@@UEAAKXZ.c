/*
 * XREFs of ?AddRef@CChannel@@UEAAKXZ @ 0x1801D02D0
 * Callers:
 *     ?AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x18023EFC0 (-AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ.c)
 *     ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x18023EFD0 (-AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChannel::AddRef(CChannel *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
