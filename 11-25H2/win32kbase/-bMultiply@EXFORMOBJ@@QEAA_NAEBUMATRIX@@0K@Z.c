/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAA_NAEBUMATRIX@@0K@Z @ 0x140092270
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bFToL @ 0x1400910A4 (bFToL.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1400983B0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 */

char __fastcall EXFORMOBJ::bMultiply(
        const struct MATRIX **this,
        const struct MATRIX *a2,
        const struct MATRIX *a3,
        char a4)
{
  const struct MATRIX *v4; // rbx
  double v10; // xmm6_8
  unsigned int v11; // r8d

  v4 = *this;
  if ( *this == a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *this == a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((float *)a2 + 1) == 0.0 && *((float *)a2 + 2) == 0.0 && *((float *)a3 + 1) == 0.0 && *((float *)a3 + 2) == 0.0 )
  {
    *(float *)v4 = *(float *)a3 * *(float *)a2;
    *((float *)v4 + 3) = *((float *)a3 + 3) * *((float *)a2 + 3);
    *((_DWORD *)v4 + 1) = 0;
    *((_DWORD *)v4 + 2) = 0;
  }
  else
  {
    *(float *)v4 = (float)(*((float *)a3 + 2) * *((float *)a2 + 1)) + (float)(*(float *)a3 * *(float *)a2);
    *((float *)v4 + 1) = (float)(*((float *)a3 + 3) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 1) * *(float *)a2);
    *((float *)v4 + 2) = (float)(*((float *)a3 + 2) * *((float *)a2 + 3)) + (float)(*(float *)a3 * *((float *)a2 + 2));
    *((float *)v4 + 3) = (float)(*((float *)a3 + 3) * *((float *)a2 + 3))
                       + (float)(*((float *)a3 + 1) * *((float *)a2 + 2));
  }
  if ( *((float *)a2 + 4) == 0.0 && *((float *)a2 + 5) == 0.0 )
  {
    *((_DWORD *)v4 + 4) = *((_DWORD *)a3 + 4);
    *((_DWORD *)v4 + 5) = *((_DWORD *)a3 + 5);
    *((_DWORD *)v4 + 6) = *((_DWORD *)a3 + 6);
    *((_DWORD *)v4 + 7) = *((_DWORD *)a3 + 7);
  }
  else
  {
    *(_QWORD *)&v10 = *((unsigned int *)a3 + 2);
    *(float *)&v10 = (float)((float)(*(float *)&v10 * *((float *)a2 + 5)) + *((float *)a3 + 4))
                   + (float)(*(float *)a3 * *((float *)a2 + 4));
    *((_DWORD *)v4 + 4) = LODWORD(v10);
    *((float *)v4 + 5) = (float)((float)(*((float *)a3 + 3) * *((float *)a2 + 5)) + *((float *)a3 + 5))
                       + (float)(*((float *)a3 + 1) * *((float *)a2 + 4));
    if ( !(unsigned int)bFToL(v10, (int *)v4 + 6, 6u)
      || !(unsigned int)bFToL(COERCE_DOUBLE((unsigned __int64)*((_DWORD *)v4 + 5)), (int *)v4 + 7, v11) )
    {
      return 0;
    }
  }
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)this, a4 & 0x38);
  return 1;
}
