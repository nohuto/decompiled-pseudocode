/*
 * XREFs of ?ResetTdrTimer@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAXXZ @ 0x140284510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE_HW_VSYNC_SOURCE::ResetTdrTimer(BLTQUEUE_HW_VSYNC_SOURCE *this)
{
  KeSetTimerEx((PKTIMER)((char *)this + 16), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_140168ACC), 0, 0LL);
}
