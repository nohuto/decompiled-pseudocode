/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x14013E8A0
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bCvtPts @ 0x14009A62C (bCvtPts.c)
 */

bool __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, const struct _POINTL *a2, struct _POINTFIX *a3, __int64 a4)
{
  int v8; // ebx
  const struct _POINTL *v10; // rcx
  signed __int64 v11; // rdi

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_BYTE *)(*(_QWORD *)this + 32LL) & 0x43) == 0x43 )
  {
    v10 = &a2[a4];
    if ( a2 < v10 )
    {
      v11 = (char *)a3 - (char *)a2;
      do
      {
        *(LONG *)((char *)&a2->x + v11) = 16 * a2->x;
        *(LONG *)((char *)&a2->y + v11) = 16 * a2->y;
        ++a2;
      }
      while ( a2 < v10 );
    }
    return 1;
  }
  else
  {
    v8 = bCvtPts(*(_QWORD *)this, (__int64)a2, (__int64)a3, a4);
    if ( !v8 )
      EngSetLastError(0x216u);
    return v8 != 0;
  }
}
