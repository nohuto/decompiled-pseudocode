/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z @ 0x1401F1680
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bCvtVts @ 0x14013C958 (bCvtVts.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

bool __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, const struct _VECTORL *a2, struct _VECTORL *a3, __int64 a4)
{
  int v9; // edi
  bool v10; // zf

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 2) == 0 || a3 == a2 )
  {
    **(float **)this = **(float **)this * 0.0625;
    *(float *)(*(_QWORD *)this + 4LL) = *(float *)(*(_QWORD *)this + 4LL) * 0.0625;
    *(float *)(*(_QWORD *)this + 8LL) = *(float *)(*(_QWORD *)this + 8LL) * 0.0625;
    *(float *)(*(_QWORD *)this + 12LL) = *(float *)(*(_QWORD *)this + 12LL) * 0.0625;
    v9 = bCvtVts(*(_QWORD *)this, (int *)a2, (int *)a3, a4, 0);
    **(float **)this = **(float **)this * 16.0;
    *(float *)(*(_QWORD *)this + 4LL) = *(float *)(*(_QWORD *)this + 4LL) * 16.0;
    *(float *)(*(_QWORD *)this + 8LL) = *(float *)(*(_QWORD *)this + 8LL) * 16.0;
    *(float *)(*(_QWORD *)this + 12LL) = *(float *)(*(_QWORD *)this + 12LL) * 16.0;
    v10 = v9 == 0;
    if ( !v9 )
    {
      EngSetLastError(0x216u);
      v10 = 1;
    }
    return !v10;
  }
  else
  {
    memmove(a3, a2, 8 * a4);
    return 1;
  }
}
