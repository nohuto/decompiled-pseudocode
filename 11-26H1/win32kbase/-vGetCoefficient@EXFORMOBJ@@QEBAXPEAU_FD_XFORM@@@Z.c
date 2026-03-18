/*
 * XREFs of ?vGetCoefficient@EXFORMOBJ@@QEBAXPEAU_FD_XFORM@@@Z @ 0x14018D250
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EXFORMOBJ::vGetCoefficient(FLOATL **this, struct _FD_XFORM *a2)
{
  int v4; // eax
  FLOATL *v5; // rax
  int v6; // ecx
  float v7; // xmm0_4
  float v8[12]; // [rsp+20h] [rbp-30h]

  v4 = (_DWORD)(*this)[8] & 0x38;
  if ( v4 != 8 && ((v4 - 16) & 0xFFFFFFEF) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v5 = *this;
  v6 = *((_DWORD *)*this + 8);
  if ( (v6 & 8) != 0 )
  {
    v7 = FLOAT_0_0625;
LABEL_8:
    *(_OWORD *)v8 = *(_OWORD *)v5;
    a2->eXY = COERCE_FLOAT(HIDWORD(*(_QWORD *)v5)) * v7;
    a2->eYX = v8[2] * v7;
    a2->eYY = v8[3] * v7;
    a2->eXX = v8[0] * v7;
    return;
  }
  if ( (v6 & 0x10) != 0 )
  {
    v7 = FLOAT_16_0;
    goto LABEL_8;
  }
  a2->eXX = *v5;
  a2->eXY = (*this)[1];
  a2->eYX = (*this)[2];
  a2->eYY = (*this)[3];
}
