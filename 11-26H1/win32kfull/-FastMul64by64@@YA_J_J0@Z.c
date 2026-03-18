/*
 * XREFs of ?FastMul64by64@@YA_J_J0@Z @ 0x140196550
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1401950B8 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1401964D4 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AVCFixPred@0@AEBV-$Vector@VCFixPred@Prediction@@$0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FastMul64by64(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  int v5; // r10d
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 result; // rax

  v2 = (a2 ^ a1) >> 63;
  v3 = -a1;
  if ( a1 > 0 )
    v3 = a1;
  v4 = -a2;
  if ( a2 > 0 )
    v4 = a2;
  v5 = v3 * v4;
  v6 = HIDWORD(v4) * (unsigned int)v3;
  v7 = HIDWORD(v3);
  v8 = HIDWORD(v3) * (unsigned int)v4 + (((unsigned int)v3 * (unsigned __int64)(unsigned int)v4) >> 32);
  v9 = v2 ^ ((unsigned int)(v6 + v8) | ((HIDWORD(v8) << 32)
                                      + ((v6 + (unsigned int)v8) >> 32 << 32)
                                      + ((v7 * HIDWORD(v4)) << 32)));
  result = v9 - v2;
  if ( v5 )
    return v9;
  return result;
}
