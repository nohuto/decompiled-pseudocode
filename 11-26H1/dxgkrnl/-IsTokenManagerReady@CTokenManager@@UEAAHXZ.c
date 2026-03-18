/*
 * XREFs of ?IsTokenManagerReady@CTokenManager@@UEAAHXZ @ 0x140046990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTokenManager::IsTokenManagerReady(CTokenManager *this)
{
  return *((_QWORD *)this + 3) != 0LL;
}
