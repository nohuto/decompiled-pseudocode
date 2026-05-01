/*
 * XREFs of ??1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ @ 0x1804289B4
 * Callers:
 *     ??1LegacyWindowWrapper@@UEAA@XZ @ 0x1804210EC (--1LegacyWindowWrapper@@UEAA@XZ.c)
 *     ??1LegacyUwpWindowWrapper@@UEAA@XZ @ 0x180427140 (--1LegacyUwpWindowWrapper@@UEAA@XZ.c)
 *     _LegacyWindowWrapper::LegacyWindowWrapper_::_1_::dtor$2 @ 0x1806C32C6 (_LegacyWindowWrapper--LegacyWindowWrapper_--_1_--dtor$2.c)
 *     _LegacyUwpWindowWrapper::LegacyUwpWindowWrapper_::_1_::dtor$2 @ 0x1806C363F (_LegacyUwpWindowWrapper--LegacyUwpWindowWrapper_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyUwpWindowWrapper::NavigationLevelHelper::~NavigationLevelHelper(
        LegacyUwpWindowWrapper::NavigationLevelHelper *this)
{
  struct _TP_TIMER *v2; // rcx

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 1), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 1));
  }
}
