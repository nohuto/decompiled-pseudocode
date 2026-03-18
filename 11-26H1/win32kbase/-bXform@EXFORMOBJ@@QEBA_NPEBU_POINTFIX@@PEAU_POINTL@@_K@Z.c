/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1400C0B10
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bCvtPts @ 0x1400C25C8 (bCvtPts.c)
 */

bool __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, const struct _POINTFIX *a2, struct _POINTL *a3, __int64 a4)
{
  const struct _POINTFIX *v8; // rdx
  signed __int64 v9; // rdi
  int v11; // ebx

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 0x10) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_BYTE *)(*(_QWORD *)this + 32LL) & 0x43) == 0x43 )
  {
    v8 = &a2[a4];
    if ( a2 < v8 )
    {
      v9 = (char *)a3 - (char *)a2;
      do
      {
        *(FIX *)((char *)&a2->x + v9) = ((a2->x >> 3) + 1) >> 1;
        *(FIX *)((char *)&a2->y + v9) = ((a2->y >> 3) + 1) >> 1;
        ++a2;
      }
      while ( a2 < v8 );
    }
    return 1;
  }
  else
  {
    v11 = bCvtPts(*(_QWORD *)this, a2, a3, a4);
    if ( !v11 )
      EngSetLastError(0x216u);
    return v11 != 0;
  }
}
