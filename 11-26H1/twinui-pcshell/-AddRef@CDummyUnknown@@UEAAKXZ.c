/*
 * XREFs of ?AddRef@CDummyUnknown@@UEAAKXZ @ 0x18055D920
 * Callers:
 *     ?AddRef@CDummyUnknown@@W7EAAKXZ @ 0x18055D930 (-AddRef@CDummyUnknown@@W7EAAKXZ.c)
 *     ?AddRef@CDummyUnknown@@WBA@EAAKXZ @ 0x18055D940 (-AddRef@CDummyUnknown@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyUnknown::AddRef(CDummyUnknown *this)
{
  return (unsigned int)++*((_DWORD *)this + 6);
}
