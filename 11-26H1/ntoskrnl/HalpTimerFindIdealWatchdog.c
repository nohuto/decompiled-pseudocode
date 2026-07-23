/*
 * XREFs of HalpTimerFindIdealWatchdog @ 0x140579950
 * Callers:
 *     HalpTimerSelectRoles @ 0x14057A3A8 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerGetClockRates @ 0x1405838F8 (HalpTimerGetClockRates.c)
 *     HalpFindTimer @ 0x140583D54 (HalpFindTimer.c)
 */

__int64 HalpTimerFindIdealWatchdog()
{
  int v0; // edi
  __int64 Timer; // rax
  __int64 v2; // rbx
  ULONG_PTR *v3; // rcx
  ULONG_PTR *v4; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v0 = 11;
  while ( 1 )
  {
    while ( 1 )
    {
      Timer = HalpFindTimer(v0, 163872, 0, 0, 4);
      v2 = Timer;
      if ( Timer )
        break;
      if ( !v0 )
        goto LABEL_10;
      v0 = 0;
    }
    if ( *(_QWORD *)(Timer + 192) )
    {
      HalpTimerGetClockRates(Timer, &v7, &v6);
      if ( v7 >= 0x11E1A300
        && (v7 >= 0xB2D05E00 || *(_DWORD *)(v2 + 228) != 8 && (*(_DWORD *)(v2 + 224) & 0x80000) != 0) )
      {
        break;
      }
    }
  }
LABEL_10:
  v3 = (ULONG_PTR *)HalpRegisteredTimers;
  while ( v3 != &HalpRegisteredTimers )
  {
    v4 = v3;
    v3 = (ULONG_PTR *)*v3;
    *((_DWORD *)v4 + 46) &= ~0x100u;
  }
  return v2;
}
