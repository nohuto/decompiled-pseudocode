/*
 * XREFs of ?GetTsSessionId@CProcess@@UEAAKXZ @ 0x180024970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetTsSessionId(CProcess *this)
{
  return *((unsigned int *)this + 41);
}
