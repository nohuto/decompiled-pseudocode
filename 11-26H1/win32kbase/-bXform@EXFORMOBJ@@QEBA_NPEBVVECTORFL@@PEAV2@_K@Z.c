/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBVVECTORFL@@PEAV2@_K@Z @ 0x1400C07F0
 * Callers:
 *     ?bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1401F1450 (-bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bCvtVts_FlToFl @ 0x1400C09A8 (bCvtVts_FlToFl.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall EXFORMOBJ::bXform(float **this, const struct VECTORFL *a2, struct VECTORFL *a3, __int64 a4)
{
  float *v8; // rcx
  int v9; // eax
  float v10; // xmm0_4
  int v11; // eax
  float v12; // xmm1_4
  bool v13; // zf
  bool v14; // bl

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v8 = *this;
  v9 = *((_DWORD *)*this + 8);
  if ( (v9 & 2) != 0 )
  {
    if ( a3 != a2 )
      memmove(a3, a2, 8 * a4);
    return 1;
  }
  else
  {
    if ( (v9 & 0x20) != 0 )
    {
      v13 = (unsigned int)bCvtVts_FlToFl(v8, a2, a3, a4) == 0;
    }
    else
    {
      v10 = *v8;
      if ( (v9 & 8) != 0 )
      {
        *v8 = v10 * 0.0625;
        (*this)[1] = (*this)[1] * 0.0625;
        (*this)[2] = (*this)[2] * 0.0625;
        (*this)[3] = (*this)[3] * 0.0625;
        v11 = bCvtVts_FlToFl(*this, a2, a3, a4);
        v12 = FLOAT_16_0;
      }
      else
      {
        *v8 = v10 * 16.0;
        (*this)[1] = (*this)[1] * 16.0;
        (*this)[2] = (*this)[2] * 16.0;
        (*this)[3] = (*this)[3] * 16.0;
        v11 = bCvtVts_FlToFl(*this, a2, a3, a4);
        v12 = FLOAT_0_0625;
      }
      v13 = v11 == 0;
      **this = **this * v12;
      (*this)[1] = (*this)[1] * v12;
      (*this)[2] = (*this)[2] * v12;
      (*this)[3] = (*this)[3] * v12;
    }
    v14 = !v13;
    if ( v13 )
      EngSetLastError(0x216u);
    return v14;
  }
}
