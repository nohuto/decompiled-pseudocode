/*
 * XREFs of ?AddRef@MouseProcessor@@UEAAKXZ @ 0x1800654F0
 * Callers:
 *     ?AddRef@GazeProcessor@@W7EAAKXZ @ 0x18019BB60 (-AddRef@GazeProcessor@@W7EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WBA@EAAKXZ @ 0x18019BB70 (-AddRef@GazeProcessor@@WBA@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WBI@EAAKXZ @ 0x18019BB80 (-AddRef@GazeProcessor@@WBI@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WCA@EAAKXZ @ 0x18019BB90 (-AddRef@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WCI@EAAKXZ @ 0x18019BBA0 (-AddRef@GazeProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(MouseProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 12);
}
