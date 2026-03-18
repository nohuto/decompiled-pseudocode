/*
 * XREFs of ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C37DC
 * Callers:
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400C38C0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400C4ED4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 */

void __fastcall XEPALOBJ::vRemoveFromList(XEPALOBJ *this, struct XDCOBJ *a2)
{
  HDC v4; // rdx
  HDC v5; // rdx
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( !(unsigned int)XEPALOBJ::bIsPalDefault(this) )
  {
    v4 = *(HDC *)(*(_QWORD *)a2 + 984LL);
    if ( v4 )
    {
      DCOBJA::DCOBJA((DCOBJA *)v6, v4);
      if ( v6[0] )
        *(_QWORD *)(v6[0] + 992LL) = *(_QWORD *)(*(_QWORD *)a2 + 992LL);
      DCOBJA::~DCOBJA((DCOBJA *)v6);
    }
    v5 = *(HDC *)(*(_QWORD *)a2 + 992LL);
    if ( v5 )
    {
      DCOBJA::DCOBJA((DCOBJA *)v6, v5);
      if ( v6[0] )
        *(_QWORD *)(v6[0] + 984LL) = *(_QWORD *)(*(_QWORD *)a2 + 984LL);
      DCOBJA::~DCOBJA((DCOBJA *)v6);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)a2 + 984LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
  }
  *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 984LL) = 0LL;
}
