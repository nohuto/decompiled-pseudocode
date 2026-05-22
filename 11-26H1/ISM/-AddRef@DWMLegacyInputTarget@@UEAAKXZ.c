/*
 * XREFs of ?AddRef@DWMLegacyInputTarget@@UEAAKXZ @ 0x18005F3D0
 * Callers:
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x1800A1BC0 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x1800A1BD0 (-AddRef@GameControllerRawInputProvider@@WBI@EAAKXZ.c)
 *     ?AddRef@OneCoreUAPInputHost@@WCA@EAAKXZ @ 0x1800A1BE0 (-AddRef@OneCoreUAPInputHost@@WCA@EAAKXZ.c)
 *     ?AddRef@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x1800CD500 (-AddRef@GameControllerRawInputProvider@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMLegacyInputTarget::AddRef(DWMLegacyInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
