/*
 * XREFs of ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x140038360
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400392A4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x140149274 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

__int64 __fastcall DC::bMakeInfoDC(DC *this, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // rax
  struct SURFACE *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 1) == 0 )
  {
    if ( a2 )
    {
      if ( (v2 & 0x200800) == 0 && !*((_DWORD *)this + 8) )
      {
        *((_DWORD *)this + 8) = 2;
        *((_DWORD *)this + 9) = v2 | 0x800;
        *((_QWORD *)this + 265) = *((_QWORD *)this + 62);
        DC::pSurface(this, 0LL);
        v5 = *((_QWORD *)this + 6);
        v6 = *((_QWORD *)this + 64);
        v11 = v5;
        if ( *(_DWORD *)((-(__int64)((*(_DWORD *)(v5 + 40) & 0x20000) != 0) & 0xFFFFFFFFFFFFFE4CuLL) + v5 + 2136) == (_DWORD)v6 )
        {
          v7 = (_QWORD *)(v5 + 1700);
          if ( (*(_DWORD *)(v5 + 40) & 0x20000) == 0 )
            v7 = (_QWORD *)(v5 + 2136);
          if ( HIDWORD(*v7) == HIDWORD(v6) )
            return 1;
        }
        *((_QWORD *)this + 64) = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v11);
        goto LABEL_16;
      }
    }
    else if ( (v2 & 0x800) != 0 && *((_DWORD *)this + 8) == 2 )
    {
      v9 = (struct SURFACE *)*((_QWORD *)this + 265);
      *((_DWORD *)this + 9) = v2 & 0xFFFFF7FF;
      *((_DWORD *)this + 8) = 0;
      DC::pSurface(this, v9);
      v10 = *((_QWORD *)this + 62);
      *((_QWORD *)this + 265) = 0LL;
      if ( !v10 || *(_QWORD *)(v10 + 56) == *((_QWORD *)this + 64) )
        return 1;
      *((_QWORD *)this + 64) = *(_QWORD *)(v10 + 56);
LABEL_16:
      DC::bSetDefaultRegion(this);
      return 1;
    }
  }
  return v3;
}
