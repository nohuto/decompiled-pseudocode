/*
 * XREFs of ?Release@CDwmAppHost@@UEAAKXZ @ 0x14000CBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDwmAppHost::Release(CDwmAppHost *this)
{
  return (unsigned int)--*((_DWORD *)this + 2);
}
