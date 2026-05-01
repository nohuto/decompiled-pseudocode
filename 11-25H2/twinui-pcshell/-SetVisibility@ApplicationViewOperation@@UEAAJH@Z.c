/*
 * XREFs of ?SetVisibility@ApplicationViewOperation@@UEAAJH@Z @ 0x180324D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetVisibility(ApplicationViewOperation *this, int a2)
{
  *((_BYTE *)this + 104) = 1;
  *((_BYTE *)this + 105) = a2 != 0;
  return 0LL;
}
