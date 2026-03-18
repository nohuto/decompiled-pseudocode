/*
 * XREFs of ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1403DA270
 * Callers:
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x14025B4E8 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?DmmCheckMonitorPowerState@@YAJPEAXI@Z @ 0x1402C49D8 (-DmmCheckMonitorPowerState@@YAJPEAXI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPN::IsPathFromSourcePoweredOff(DMMVIDPN *this, int a2)
{
  char *v2; // r9
  char *v3; // rcx
  char *v4; // r8
  char *v5; // rax

  v2 = (char *)this + 120;
  v3 = (char *)*((_QWORD *)this + 15);
  v4 = 0LL;
  if ( v3 != v2 )
    v4 = v3 - 8;
  while ( v4 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v4 + 11) + 24LL) == a2
      && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 12) + 96LL) + 120LL) == 2 )
    {
      return 1;
    }
    v5 = (char *)*((_QWORD *)v4 + 1);
    v4 = v5 - 8;
    if ( v5 == v2 )
      v4 = 0LL;
  }
  return 0;
}
