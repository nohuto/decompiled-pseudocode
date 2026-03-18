/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x140109B20
 * Callers:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x140075390 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x140093688 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall PDEVOBJ::sizl(PDEVOBJ *this, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x20000) != 0 )
    v3 = *(_QWORD *)(v2 + 1700);
  else
    v3 = *(_QWORD *)(v2 + 2136);
  *a2 = v3;
  return (struct tagSIZE)a2;
}
