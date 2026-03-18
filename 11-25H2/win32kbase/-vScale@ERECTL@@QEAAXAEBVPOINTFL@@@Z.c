/*
 * XREFs of ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1400926F8
 * Callers:
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x140092140 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     bFToL @ 0x1400910A4 (bFToL.c)
 */

void __fastcall ERECTL::vScale(ERECTL *this, const struct POINTFL *a2)
{
  float v2; // xmm2_4
  int *v3; // r14
  int *v4; // rsi
  float v5; // xmm1_4
  int *v6; // rdi
  int v7; // r15d
  int v8; // r12d
  int v9; // ebp
  double v11; // xmm0_8
  unsigned int v12; // r8d
  double v13; // xmm0_8
  unsigned int v14; // r8d
  double v15; // xmm0_8
  unsigned int v16; // r8d
  double v17; // xmm0_8

  v2 = *(float *)a2;
  v3 = (int *)((char *)this + 4);
  v4 = (int *)((char *)this + 8);
  v5 = *((float *)a2 + 1);
  v6 = (int *)((char *)this + 12);
  v7 = *((_DWORD *)this + 1);
  v8 = *((_DWORD *)this + 2);
  v9 = *((_DWORD *)this + 3);
  *(_QWORD *)&v11 = COERCE_UNSIGNED_INT((float)*(int *)this);
  *(float *)&v11 = *(float *)&v11 * *(float *)a2;
  if ( !(unsigned int)bFToL(v11, (int *)this, 6u)
    || (*(_QWORD *)&v13 = COERCE_UNSIGNED_INT((float)v7),
        *(float *)&v13 = *(float *)&v13 * v5,
        !(unsigned int)bFToL(v13, v3, v12))
    || (*(_QWORD *)&v15 = COERCE_UNSIGNED_INT((float)v8),
        *(float *)&v15 = *(float *)&v15 * v2,
        !(unsigned int)bFToL(v15, v4, v14))
    || (*(_QWORD *)&v17 = COERCE_UNSIGNED_INT((float)v9),
        *(float *)&v17 = *(float *)&v17 * v5,
        !(unsigned int)bFToL(v17, v6, v16)) )
  {
    *v6 = 0;
    *v4 = 0;
    *v3 = 0;
    *(_DWORD *)this = 0;
  }
}
