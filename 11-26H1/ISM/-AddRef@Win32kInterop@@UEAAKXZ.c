/*
 * XREFs of ?AddRef@Win32kInterop@@UEAAKXZ @ 0x18007B260
 * Callers:
 *     ?AddRef@EdgyProcessorTarget@@W7EAAKXZ @ 0x1800F12A0 (-AddRef@EdgyProcessorTarget@@W7EAAKXZ.c)
 *     ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x1800F12B0 (-AddRef@InputRedirectionTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@ControllerProcessor@@WEI@EAAKXZ @ 0x18017CCE0 (-AddRef@ControllerProcessor@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::AddRef(Win32kInterop *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
