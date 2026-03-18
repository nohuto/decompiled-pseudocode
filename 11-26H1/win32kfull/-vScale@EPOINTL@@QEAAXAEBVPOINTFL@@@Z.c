/*
 * XREFs of ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x140336C18
 * Callers:
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400790D0 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 * Callees:
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

void __fastcall EPOINTL::vScale(EPOINTL *this, const struct POINTFL *a2)
{
  double v2; // xmm0_8
  double v4; // xmm2_8
  unsigned int v5; // r8d
  int *v6; // r11

  *(_QWORD *)&v2 = COERCE_UNSIGNED_INT((float)*(int *)this);
  *(_QWORD *)&v4 = COERCE_UNSIGNED_INT((float)*((int *)this + 1));
  *(float *)&v2 = *(float *)&v2 * *(float *)a2;
  *(float *)&v4 = *(float *)&v4 * *((float *)a2 + 1);
  if ( !(unsigned int)bFToL(v2, (int *)this, 6u) || !(unsigned int)bFToL(v4, v6, v5) )
  {
    *v6 = 0;
    *(_DWORD *)this = 0;
  }
}
