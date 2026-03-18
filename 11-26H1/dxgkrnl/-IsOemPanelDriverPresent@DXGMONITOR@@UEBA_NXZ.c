/*
 * XREFs of ?IsOemPanelDriverPresent@DXGMONITOR@@UEBA_NXZ @ 0x1401958F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsOemPanelDriverPresent(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 161) & 0x10) != 0;
}
