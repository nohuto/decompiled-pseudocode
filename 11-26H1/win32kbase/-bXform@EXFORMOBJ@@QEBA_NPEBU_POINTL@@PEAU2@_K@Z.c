/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z @ 0x1400384E0
 * Callers:
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039390 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039640 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     bCvtPts1 @ 0x140038594 (bCvtPts1.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

bool __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, const struct _POINTL *a2, struct _POINTL *a3, __int64 a4)
{
  int v8; // eax
  int v9; // ebx

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v8 = *(_DWORD *)(*(_QWORD *)this + 32LL) & 0x38;
  if ( v8 != 8 && ((v8 - 16) & 0xFFFFFFEF) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( a2 != a3 )
    memmove(a3, a2, 8 * a4);
  if ( (*(_BYTE *)(*(_QWORD *)this + 32LL) & 0x43) == 0x43 )
    return 1;
  v9 = bCvtPts1(*(_QWORD *)this, a3, a4);
  if ( !v9 )
    EngSetLastError(0x216u);
  return v9 != 0;
}
