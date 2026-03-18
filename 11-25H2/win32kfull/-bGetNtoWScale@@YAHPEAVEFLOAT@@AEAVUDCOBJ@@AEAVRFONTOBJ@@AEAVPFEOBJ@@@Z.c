/*
 * XREFs of ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1401789B4
 * Callers:
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140178748 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z @ 0x140178F6C (-vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoWScale(struct EFLOAT *a1, struct UDCOBJ *a2, float **a3, struct PFEOBJ *a4)
{
  float *v7; // rax
  __int64 result; // rax
  int v9; // eax
  float v10; // [rsp+30h] [rbp-49h] BYREF
  float v11; // [rsp+34h] [rbp-45h]
  float v12; // [rsp+38h] [rbp-41h] BYREF
  const struct MATRIX *v13; // [rsp+40h] [rbp-39h] BYREF
  _OWORD *v14; // [rsp+48h] [rbp-31h] BYREF
  const struct MATRIX *v15; // [rsp+50h] [rbp-29h] BYREF
  __int64 v16; // [rsp+58h] [rbp-21h]
  _OWORD v17[2]; // [rsp+60h] [rbp-19h] BYREF
  int v18; // [rsp+80h] [rbp+7h]
  _OWORD v19[2]; // [rsp+88h] [rbp+Fh] BYREF
  int v20; // [rsp+A8h] [rbp+2Fh]

  v18 = 0;
  v20 = 0;
  memset(v17, 0, sizeof(v17));
  v14 = v17;
  v13 = (const struct MATRIX *)v19;
  v7 = *a3;
  memset(v19, 0, sizeof(v19));
  EXFORMOBJ::vSetElementsLToFx((EXFORMOBJ *)&v13, v7[34], v7[35], v7[36], v7[34]);
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v13);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v13, 8u);
  DC::QuickInitXform(*(_QWORD *)a2, &v15, 1026LL);
  if ( !v15 || !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v14, v13, v15, 0) )
    return 0LL;
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v14, 8u);
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 32LL) + 120LL);
  v9 = v16;
  if ( !v16 )
    v9 = 1;
  v12 = 0.0;
  v10 = (float)v9;
  v11 = (float)SHIDWORD(v16);
  EFLOAT::eqLength(&v12, &v15, &v10);
  v10 = v10 / v12;
  v11 = v11 / v12;
  if ( (v14[2] & 2) == 0
    && !EXFORMOBJ::bXform((EXFORMOBJ *)&v14, (const struct VECTORFL *)&v10, (struct VECTORFL *)&v10, 1uLL) )
  {
    return 0LL;
  }
  EFLOAT::eqLength(a1, &v15, &v10);
  result = 1LL;
  *(float *)a1 = *(float *)a1 * 16.0;
  return result;
}
