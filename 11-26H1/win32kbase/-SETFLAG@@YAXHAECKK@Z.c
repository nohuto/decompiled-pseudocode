/*
 * XREFs of ?SETFLAG@@YAXHAECKK@Z @ 0x140030748
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SETFLAG(int a1, volatile unsigned int *a2, int a3)
{
  signed __int32 v3; // eax
  signed __int32 v4; // r9d

  do
  {
    v3 = *a2;
    if ( a1 )
      v4 = a3 | v3;
    else
      v4 = v3 & ~a3;
  }
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)a2, v4, v3) );
}
