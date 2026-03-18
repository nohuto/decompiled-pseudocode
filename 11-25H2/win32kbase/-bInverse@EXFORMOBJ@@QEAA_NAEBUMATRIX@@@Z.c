/*
 * XREFs of ?bInverse@EXFORMOBJ@@QEAA_NAEBUMATRIX@@@Z @ 0x14008FDF0
 * Callers:
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x14008F050 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x14008F280 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bFToL @ 0x1400910A4 (bFToL.c)
 */

bool __fastcall EXFORMOBJ::bInverse(const struct MATRIX **this, const struct MATRIX *a2)
{
  const struct MATRIX *v2; // rbx
  int v4; // eax
  float v5; // xmm3_4
  int v7; // xmm0_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  int v10; // eax
  float v11; // xmm4_4
  float v12; // xmm2_4
  __int64 v13; // rcx
  __int64 v14; // r8

  v2 = *this;
  if ( a2 == *this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*((_DWORD *)a2 + 8) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *((_DWORD *)v2 + 8) = *((_DWORD *)a2 + 8) & 0xFFFFFFE7 | 0x10;
  v4 = *((_DWORD *)a2 + 8);
  if ( (v4 & 2) != 0 )
  {
    *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 2) = 0;
    *(_DWORD *)v2 = 1031798784;
    *((_DWORD *)v2 + 3) = 1031798784;
    *((_DWORD *)v2 + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)v2 + 5) = *((_DWORD *)a2 + 5);
    v5 = COERCE_FLOAT(*((_DWORD *)v2 + 5) ^ _xmm) * 0.0625;
    *((float *)v2 + 4) = COERCE_FLOAT(*((_DWORD *)v2 + 4) ^ _xmm) * 0.0625;
    *((float *)v2 + 5) = v5;
    *((_DWORD *)v2 + 6) = -(*((int *)a2 + 6) >> 4);
    *((_DWORD *)v2 + 7) = -(*((int *)a2 + 7) >> 4);
    return 1;
  }
  v7 = 0;
  v8 = *((float *)a2 + 1);
  v9 = (float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 2) * v8);
  if ( v9 == 0.0 )
    return 0;
  if ( (v4 & 1) != 0 )
  {
    *((_DWORD *)v2 + 1) = 0;
  }
  else
  {
    *((_DWORD *)v2 + 1) = COERCE_UNSIGNED_INT(v8 / v9) ^ _xmm;
    v7 = COERCE_UNSIGNED_INT(*((float *)a2 + 2) / v9) ^ _xmm;
  }
  *((_DWORD *)v2 + 2) = v7;
  *(float *)v2 = *((float *)a2 + 3) / v9;
  *((float *)v2 + 3) = *(float *)a2 / v9;
  v10 = *((_DWORD *)a2 + 8);
  if ( (v10 & 0x40) != 0 )
  {
    *((_DWORD *)v2 + 4) = 0;
    *((_DWORD *)v2 + 5) = 0;
    *((_DWORD *)v2 + 6) = 0;
    *((_DWORD *)v2 + 7) = 0;
    return 1;
  }
  if ( (v10 & 1) != 0 )
  {
    v11 = *(float *)v2 * *((float *)a2 + 4);
    *((float *)v2 + 4) = v11;
    v12 = *((float *)v2 + 3) * *((float *)a2 + 5);
  }
  else
  {
    v11 = (float)(*((float *)v2 + 2) * *((float *)a2 + 5)) + (float)(*(float *)v2 * *((float *)a2 + 4));
    *((float *)v2 + 4) = v11;
    v12 = (float)(*((float *)v2 + 3) * *((float *)a2 + 5)) + (float)(*((float *)v2 + 1) * *((float *)a2 + 4));
  }
  *((_DWORD *)v2 + 4) = LODWORD(v11) ^ _xmm;
  *((_DWORD *)v2 + 5) = LODWORD(v12) ^ _xmm;
  return (unsigned int)bFToL(this, (char *)v2 + 24, 6LL) && (unsigned int)bFToL(v13, (char *)v2 + 28, v14) != 0;
}
