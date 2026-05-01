/*
 * XREFs of ?GetVisibility@ApplicationViewOperation@@UEAAJPEAH@Z @ 0x18021E890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetVisibility(ApplicationViewOperation *this, int *a2)
{
  *a2 = *((unsigned __int8 *)this + 105);
  return *((_BYTE *)this + 104) == 0 ? 0x80070490 : 0;
}
