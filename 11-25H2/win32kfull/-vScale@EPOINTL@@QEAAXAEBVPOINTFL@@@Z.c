/*
 * XREFs of ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1403130F0
 * Callers:
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x14009DE84 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 * Callees:
 *     bFToL @ 0x1400A4410 (bFToL.c)
 */

void __fastcall EPOINTL::vScale(EPOINTL *this, const struct POINTFL *a2)
{
  int *v2; // rbx
  float v3; // xmm2_4
  int v4; // esi
  double v6; // xmm0_8
  unsigned int v7; // r8d
  double v8; // xmm0_8

  v2 = (int *)((char *)this + 4);
  v3 = *((float *)a2 + 1);
  v4 = *((_DWORD *)this + 1);
  *(_QWORD *)&v6 = COERCE_UNSIGNED_INT((float)*(int *)this);
  *(float *)&v6 = *(float *)&v6 * *(float *)a2;
  if ( !(unsigned int)bFToL(v6, (int *)this, 6u)
    || (*(_QWORD *)&v8 = COERCE_UNSIGNED_INT((float)v4),
        *(float *)&v8 = *(float *)&v8 * v3,
        !(unsigned int)bFToL(v8, v2, v7)) )
  {
    *v2 = 0;
    *(_DWORD *)this = 0;
  }
}
