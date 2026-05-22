/*
 * XREFs of ?GetProcessId@MPCFocusTarget@@UEAAKXZ @ 0x180081CA0
 * Callers:
 *     ?GetProcessId@MPCFocusTarget@@WFA@EAAKXZ @ 0x1801012C0 (-GetProcessId@MPCFocusTarget@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::GetProcessId(MPCFocusTarget *this)
{
  return *((unsigned int *)this + 14);
}
