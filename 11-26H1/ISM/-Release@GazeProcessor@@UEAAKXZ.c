/*
 * XREFs of ?Release@GazeProcessor@@UEAAKXZ @ 0x180098F20
 * Callers:
 *     ?Release@GazeProcessor@@W7EAAKXZ @ 0x18019C5A0 (-Release@GazeProcessor@@W7EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBA@EAAKXZ @ 0x18019C5B0 (-Release@GazeProcessor@@WBA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBI@EAAKXZ @ 0x18019C5C0 (-Release@MouseProcessor@@WBI@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCA@EAAKXZ @ 0x18019C5D0 (-Release@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WCI@EAAKXZ @ 0x18019C5E0 (-Release@MouseProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::Release(GazeProcessor *this)
{
  return InputContext::Release((GazeProcessor *)((char *)this + 40));
}
