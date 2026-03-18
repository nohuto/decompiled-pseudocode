/*
 * XREFs of GreGetDCOrgEx @ 0x14008A850
 * Callers:
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 * Callees:
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14008A5F0 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14008B5C0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14008B640 (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDCOrgEx(HDC a1, struct _POINTL *a2, _OWORD *a3)
{
  unsigned int DCPoint; // ebx
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v8, a1);
  if ( v8[0] )
  {
    *a3 = *(_OWORD *)(v8[0] + 1032LL);
    DCPoint = GreGetDCPoint(a1, 32, a2);
  }
  else
  {
    DCPoint = 0;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v8);
  return DCPoint;
}
