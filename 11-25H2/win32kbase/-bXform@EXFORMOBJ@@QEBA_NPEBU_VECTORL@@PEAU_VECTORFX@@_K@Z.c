/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x140092EA0
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bCvtVts @ 0x140092F90 (bCvtVts.c)
 */

bool __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, const struct _VECTORL *a2, struct _VECTORFX *a3, __int64 a4)
{
  const struct _VECTORL *v8; // r8
  __int64 v9; // rdi
  int v10; // ecx
  int v12; // ebx

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 2) != 0 )
  {
    v8 = (const struct _VECTORL *)((char *)a2 + 8 * a4);
    v9 = a3 - a2;
    while ( 1 )
    {
      if ( a2 >= v8 )
        return 1;
      v10 = *((_DWORD *)a2 + 1);
      if ( (unsigned int)(*(_DWORD *)a2 + 134217726) > 0xFFFFFFC || (unsigned int)(v10 + 134217726) > 0xFFFFFFC )
        break;
      *(_DWORD *)((char *)a2 + v9) = 16 * *(_DWORD *)a2;
      *(_DWORD *)((char *)a2 + v9 + 4) = 16 * v10;
      a2 = (const struct _VECTORL *)((char *)a2 + 8);
    }
    EngSetLastError(0x216u);
    return 0;
  }
  else
  {
    v12 = bCvtVts(*(_QWORD *)this, a2, a3, a4);
    if ( !v12 )
      EngSetLastError(0x216u);
    return v12 != 0;
  }
}
