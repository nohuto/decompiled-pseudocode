/*
 * XREFs of ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C3724
 * Callers:
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400C38C0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400C4ED4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 */

void __fastcall XEPALOBJ::vAddToList(XEPALOBJ *this, struct XDCOBJ *a2)
{
  HDC v4; // rdx
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( (unsigned int)XEPALOBJ::bIsPalDefault(this) )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 984LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
    *(_QWORD *)(*(_QWORD *)a2 + 984LL) = *(_QWORD *)(*(_QWORD *)this + 40LL);
    *(_QWORD *)(*(_QWORD *)this + 40LL) = **(_QWORD **)a2;
    *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
    v4 = *(HDC *)(*(_QWORD *)a2 + 984LL);
    if ( v4 )
    {
      DCOBJA::DCOBJA((DCOBJA *)v5, v4);
      if ( v5[0] )
        *(_QWORD *)(v5[0] + 992LL) = **(_QWORD **)a2;
      DCOBJA::~DCOBJA((DCOBJA *)v5);
    }
  }
}
