/*
 * XREFs of ?Release@OneCoreUAPInputHost@@UEAAKXZ @ 0x180098F10
 * Callers:
 *     ?Release@OneCoreUAPInputHost@@W7EAAKXZ @ 0x1800A1F30 (-Release@OneCoreUAPInputHost@@W7EAAKXZ.c)
 *     ?Release@OneCoreUAPInputHost@@WBI@EAAKXZ @ 0x1800A1F40 (-Release@OneCoreUAPInputHost@@WBI@EAAKXZ.c)
 *     ?Release@OneCoreUAPInputHost@@WCA@EAAKXZ @ 0x1800A1F50 (-Release@OneCoreUAPInputHost@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OneCoreUAPInputHost::Release(OneCoreUAPInputHost *this)
{
  return InputContext::Release((OneCoreUAPInputHost *)((char *)this + 32));
}
