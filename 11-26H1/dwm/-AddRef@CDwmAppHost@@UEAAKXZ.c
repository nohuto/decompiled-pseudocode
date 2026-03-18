/*
 * XREFs of ?AddRef@CDwmAppHost@@UEAAKXZ @ 0x140004280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDwmAppHost::AddRef(CDwmAppHost *this)
{
  return (unsigned int)++*((_DWORD *)this + 2);
}
