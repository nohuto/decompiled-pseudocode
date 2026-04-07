/*
 * XREFs of ??1CTrackingTooltip@@QEAA@XZ @ 0x1800CDD4C
 * Callers:
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800A85BC (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTrackingTooltip::~CTrackingTooltip(CTrackingTooltip *this)
{
  HWND v1; // rcx

  v1 = (HWND)*((_QWORD *)this + 1);
  if ( v1 )
    DestroyWindow(v1);
}
