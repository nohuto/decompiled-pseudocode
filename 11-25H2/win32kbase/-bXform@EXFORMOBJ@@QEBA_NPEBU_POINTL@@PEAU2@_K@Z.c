/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z @ 0x1401075A0
 * Callers:
 *     GreIntersectClipRect @ 0x140043770 (GreIntersectClipRect.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x14008F050 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x14008F280 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     bCvtPts1 @ 0x140042D44 (bCvtPts1.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

bool __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, const struct _POINTL *a2, struct _POINTL *a3, __int64 a4)
{
  int v8; // r10d
  int v9; // ebx

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v8 = *(_DWORD *)(*(_QWORD *)this + 32LL) & 0x38;
  if ( ((v8 - 8) & 0xFFFFFFE7) != 0 || v8 == 24 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( a2 != a3 )
    memmove(a3, a2, 8 * a4);
  if ( (*(_BYTE *)(*(_QWORD *)this + 32LL) & 0x43) == 0x43 )
    return 1;
  v9 = bCvtPts1(*(_QWORD *)this, (__int64)a3, a4);
  if ( !v9 )
    EngSetLastError(0x216u);
  return v9 != 0;
}
