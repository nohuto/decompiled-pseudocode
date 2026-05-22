/*
 * XREFs of ?CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z @ 0x180064828
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HidLampRangeUpdateReportBuilder::CanIncludeInNextUpdate(
        HidLampRangeUpdateReportBuilder *this,
        struct LampUpdateState *a2)
{
  int v2; // eax
  char v3; // r11
  char v4; // r10
  char v5; // r9
  char v6; // r8
  char v7; // cl

  if ( !*((_BYTE *)this + 16) )
    return 1;
  v2 = *((_DWORD *)this + 7);
  v3 = *((_BYTE *)this + 32);
  v4 = *((_BYTE *)this + 33);
  v5 = *((_BYTE *)this + 34);
  v6 = *((_BYTE *)this + 35);
  v7 = 1;
  if ( *(_DWORD *)a2 != v2 + 1
    || *((_BYTE *)a2 + 4) != v3
    || *((_BYTE *)a2 + 5) != v4
    || *((_BYTE *)a2 + 6) != v5
    || *((_BYTE *)a2 + 7) != v6 )
  {
    return 0;
  }
  return v7;
}
