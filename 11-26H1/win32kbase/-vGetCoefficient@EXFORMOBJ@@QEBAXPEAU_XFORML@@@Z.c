/*
 * XREFs of ?vGetCoefficient@EXFORMOBJ@@QEBAXPEAU_XFORML@@@Z @ 0x1401430A0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EXFORMOBJ::vGetCoefficient(__int128 **this, struct _XFORML *a2)
{
  int v4; // eax
  __int128 *v5; // rax
  int v6; // ecx
  unsigned __int128 v7; // xmm4
  __m128i v8; // xmm5
  float v9; // xmm3_4
  FLOATL v10; // xmm1_4
  unsigned __int128 v11; // [rsp+20h] [rbp-40h]
  float v12[8]; // [rsp+30h] [rbp-30h]

  v4 = (*this)[2] & 0x38;
  if ( v4 != 8 && ((v4 - 16) & 0xFFFFFFEF) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v5 = *this;
  v6 = *((_DWORD *)*this + 8);
  if ( (v6 & 8) != 0 )
  {
    v11 = *v5;
    *(_OWORD *)v12 = v5[1];
    a2->eM12 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v5)) * 0.0625;
    a2->eM21 = *((float *)&v11 + 2) * 0.0625;
    a2->eM22 = *((float *)&v11 + 3) * 0.0625;
    a2->eDy = v12[1] * 0.0625;
    a2->eM11 = *(float *)&v11 * 0.0625;
    a2->eDx = v12[0] * 0.0625;
  }
  else if ( (v6 & 0x10) != 0 )
  {
    v8 = (__m128i)v5[1];
    v7 = *v5;
    LODWORD(v9) = HIDWORD(*v5);
    v10 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v5)) * 16.0;
    LODWORD(a2->eDy) = v8.m128i_i32[1];
    a2->eM12 = v10;
    a2->eM21 = *((float *)&v7 + 2) * 16.0;
    a2->eM22 = v9 * 16.0;
    a2->eM11 = *(float *)&v7 * 16.0;
    LODWORD(a2->eDx) = _mm_cvtsi128_si32(v8);
  }
  else
  {
    a2->eM11 = *(FLOATL *)v5;
    a2->eM12 = *((FLOATL *)*this + 1);
    a2->eM21 = *((FLOATL *)*this + 2);
    a2->eM22 = *((FLOATL *)*this + 3);
    a2->eDx = *((FLOATL *)*this + 4);
    a2->eDy = *((FLOATL *)*this + 5);
  }
}
