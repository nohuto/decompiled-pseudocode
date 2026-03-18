/*
 * XREFs of ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1401B5208
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14018890C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1402931A8 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 */

void __fastcall XLATE::vCheckForICM(XLATE *this, void *a2, int a3)
{
  int v4; // eax
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 8) = 0LL;
  if ( (a3 & 7) != 0 )
  {
    if ( (a3 & 3) != 0 )
    {
      *((_DWORD *)this + 18) = a3;
      *((_QWORD *)this + 8) = a2;
      if ( (a3 & 2) != 0 )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v5, a2);
        if ( v6 )
          *((_DWORD *)this + 1) |= 0x10u;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
      }
      else if ( (a3 & 1) != 0 )
      {
        v4 = *((_DWORD *)this + 1) | 0x20;
        *((_DWORD *)this + 1) = v4;
        if ( (a3 & 0x10000000) != 0 )
        {
          if ( a2 )
            *((_DWORD *)this + 1) = v4 | 8;
        }
      }
    }
    else if ( (a3 & 4) != 0 )
    {
      *((_DWORD *)this + 1) |= 0x20u;
      *((_DWORD *)this + 18) = a3;
    }
  }
}
