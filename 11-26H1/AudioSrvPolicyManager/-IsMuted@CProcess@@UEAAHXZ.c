/*
 * XREFs of ?IsMuted@CProcess@@UEAAHXZ @ 0x1800262F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsMuted(CProcess *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 28) + 216LL) == 0;
}
