/*
 * XREFs of ?SetInteractionObject@DWMInputTarget@@UEAAJI@Z @ 0x180076B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::SetInteractionObject(DWMInputTarget *this, int a2)
{
  *((_DWORD *)this + 16) = a2;
  return 0LL;
}
