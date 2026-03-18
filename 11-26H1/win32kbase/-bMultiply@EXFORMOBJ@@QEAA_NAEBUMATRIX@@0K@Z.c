/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAA_NAEBUMATRIX@@0K@Z @ 0x140037E10
 * Callers:
 *     <none>
 * Callees:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x140011570 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     bFToL @ 0x140038EBC (bFToL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall EXFORMOBJ::bMultiply(float **this, const struct MATRIX *a2, const struct MATRIX *a3, char a4)
{
  float *v4; // rsi
  float *v9; // rcx
  __m128i v11; // xmm4
  int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax

  v4 = *this;
  if ( *this == (float *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *this == (float *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((float *)a2 + 1) == 0.0 && *((float *)a2 + 2) == 0.0 && *((float *)a3 + 1) == 0.0 && *((float *)a3 + 2) == 0.0 )
  {
    *v4 = *(float *)a3 * *(float *)a2;
    v4[3] = *((float *)a3 + 3) * *((float *)a2 + 3);
    *(_QWORD *)(v4 + 1) = 0LL;
  }
  else
  {
    *v4 = (float)(*((float *)a3 + 2) * *((float *)a2 + 1)) + (float)(*(float *)a3 * *(float *)a2);
    v4[1] = (float)(*((float *)a3 + 3) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 1) * *(float *)a2);
    v4[2] = (float)(*((float *)a3 + 2) * *((float *)a2 + 3)) + (float)(*(float *)a3 * *((float *)a2 + 2));
    v4[3] = (float)(*((float *)a3 + 3) * *((float *)a2 + 3)) + (float)(*((float *)a3 + 1) * *((float *)a2 + 2));
  }
  v9 = (float *)((char *)a2 + 16);
  if ( *((float *)a2 + 4) == 0.0 && *((float *)a2 + 5) == 0.0 )
  {
    v4[4] = *((float *)a3 + 4);
    v4[5] = *((float *)a3 + 5);
    v4[6] = *((float *)a3 + 6);
    v4[7] = *((float *)a3 + 7);
  }
  else
  {
    v11 = (__m128i)*((unsigned int *)a3 + 2);
    *(float *)v11.m128i_i32 = (float)((float)(*(float *)v11.m128i_i32 * *((float *)a2 + 5)) + *((float *)a3 + 4))
                            + (float)(*(float *)a3 * *v9);
    v4[4] = *(float *)v11.m128i_i32;
    v12 = _mm_cvtsi128_si32(v11);
    v13 = (unsigned __int8)(v12 >> 23);
    v4[5] = (float)((float)(*((float *)a3 + 3) * *((float *)a2 + 5)) + *((float *)a3 + 5))
          + (float)(*((float *)a3 + 1) * *v9);
    if ( v13 > 0x9E )
      return 0;
    v14 = v12 & 0x7FFFFF | 0x800000LL;
    if ( v13 < 0x76 )
      v15 = v14 >> (118 - (unsigned __int8)v13);
    else
      v15 = v14 << ((unsigned __int8)v13 - 118);
    v16 = (v15 + 0x80000000LL) >> 32;
    v17 = -((unsigned __int64)(v15 + 0x80000000LL) >> 32);
    if ( v12 >= 0 )
      v17 = v16;
    *((_DWORD *)v4 + 6) = v17;
    if ( !(unsigned int)bFToL(v16, v4 + 7, 6LL) )
      return 0;
  }
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags(this, a4 & 0x38);
  return 1;
}
