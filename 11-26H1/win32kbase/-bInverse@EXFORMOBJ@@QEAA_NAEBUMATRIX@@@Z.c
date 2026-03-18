/*
 * XREFs of ?bInverse@EXFORMOBJ@@QEAA_NAEBUMATRIX@@@Z @ 0x14003A5C0
 * Callers:
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039390 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039640 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     bFToL @ 0x140038EBC (bFToL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall EXFORMOBJ::bInverse(const struct MATRIX **this, const struct MATRIX *a2, __int64 a3)
{
  const struct MATRIX *v3; // rbx
  int v5; // eax
  float v6; // xmm0_4
  int v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  int v11; // eax
  __int64 v12; // xmm4_8
  float v13; // xmm3_4
  double v14; // xmm4_8
  unsigned int v15; // r8d

  v3 = *this;
  if ( a2 == *this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (*((_DWORD *)a2 + 8) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  *((_DWORD *)v3 + 8) = *((_DWORD *)a2 + 8) & 0xFFFFFFE7 | 0x10;
  v5 = *((_DWORD *)a2 + 8);
  if ( (v5 & 2) != 0 )
  {
    *((_DWORD *)v3 + 2) = 0;
    *(_QWORD *)v3 = 1031798784LL;
    *((_DWORD *)v3 + 3) = 1031798784;
    *((_DWORD *)v3 + 4) = *((_DWORD *)a2 + 4);
    v6 = COERCE_FLOAT(*((_DWORD *)v3 + 4) ^ _xmm) * 0.0625;
    *((_DWORD *)v3 + 5) = *((_DWORD *)a2 + 5);
    *((float *)v3 + 4) = v6;
    *((float *)v3 + 5) = COERCE_FLOAT(*((_DWORD *)v3 + 5) ^ _xmm) * 0.0625;
    *((_DWORD *)v3 + 6) = -(*((int *)a2 + 6) >> 4);
    *((_DWORD *)v3 + 7) = -(*((int *)a2 + 7) >> 4);
    return 1;
  }
  v8 = 0;
  v9 = *((float *)a2 + 1);
  v10 = (float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 2) * v9);
  if ( v10 == 0.0 )
    return 0;
  if ( (v5 & 1) != 0 )
  {
    *((_DWORD *)v3 + 1) = 0;
  }
  else
  {
    *((_DWORD *)v3 + 1) = COERCE_UNSIGNED_INT(v9 / v10) ^ _xmm;
    v8 = COERCE_UNSIGNED_INT(*((float *)a2 + 2) / v10) ^ _xmm;
  }
  *((_DWORD *)v3 + 2) = v8;
  *(float *)v3 = *((float *)a2 + 3) / v10;
  *((float *)v3 + 3) = *(float *)a2 / v10;
  v11 = *((_DWORD *)a2 + 8);
  if ( (v11 & 0x40) != 0 )
  {
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    return 1;
  }
  if ( (v11 & 1) != 0 )
  {
    v12 = *(unsigned int *)v3;
    *(float *)&v12 = *(float *)&v12 * *((float *)a2 + 4);
    *((_DWORD *)v3 + 4) = v12;
    v13 = *((float *)v3 + 3) * *((float *)a2 + 5);
  }
  else
  {
    v12 = *((unsigned int *)v3 + 2);
    *(float *)&v12 = (float)(*(float *)&v12 * *((float *)a2 + 5)) + (float)(*(float *)v3 * *((float *)a2 + 4));
    *((_DWORD *)v3 + 4) = v12;
    v13 = (float)(*((float *)v3 + 3) * *((float *)a2 + 5)) + (float)(*((float *)v3 + 1) * *((float *)a2 + 4));
  }
  *(_QWORD *)&v14 = v12 ^ (unsigned int)_xmm;
  *((_DWORD *)v3 + 4) = LODWORD(v14);
  *((_DWORD *)v3 + 5) = LODWORD(v13) ^ _xmm;
  return (unsigned int)bFToL(v14, (int *)v3 + 6, 6u)
      && (unsigned int)bFToL(COERCE_DOUBLE((unsigned __int64)*((_DWORD *)v3 + 5)), (int *)v3 + 7, v15) != 0;
}
