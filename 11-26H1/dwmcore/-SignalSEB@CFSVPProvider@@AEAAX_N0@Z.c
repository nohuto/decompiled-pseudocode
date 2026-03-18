/*
 * XREFs of ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x180196B78
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800EE104 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 * Callees:
 *     ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x1801C8C04 (-SignalSEBWorker@CFSVPProvider@@AEAAXXZ.c)
 *     ?RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ @ 0x180252D10 (-RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ.c)
 */

void __fastcall CFSVPProvider::SignalSEB(CFSVPProvider *this, char a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_BYTE *)this + 73) = a2;
  *((_BYTE *)this + 74) = a3;
  if ( (a2 != *((_BYTE *)this + 75) || a3 != *((_BYTE *)this + 76))
    && (int)CFSVPProvider::RequestThreadpoolWork(this) < 0 )
  {
    CFSVPProvider::SignalSEBWorker(this);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
