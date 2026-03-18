/*
 * XREFs of ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x14003A42C
 * Callers:
 *     GreDCSelectPen @ 0x140038F40 (GreDCSelectPen.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039390 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039640 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 * Callees:
 *     ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x140149598 (-bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 */

void __fastcall DC::vRealizeLineAttrs(DC *this, struct EXFORMOBJ *a2)
{
  __int64 v2; // rsi
  int v4; // r8d
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax

  v2 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v2 + 40) & 0x800) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 0x43) == 0x43 && *(int *)(v2 + 168) <= 1
      || (v4 = *(_DWORD *)(v2 + 168)) == 0
      || DC::bOldPenNominal(this, a2, v4) )
    {
      *((_DWORD *)this + 55) = 1;
      if ( *(_QWORD *)(v2 + 152) )
      {
        v9 = 8;
        *((_DWORD *)this + 57) = *(_DWORD *)(v2 + 180);
        v10 = *(_QWORD *)(v2 + 152);
      }
      else
      {
        v9 = 0;
        *((_DWORD *)this + 57) = 0;
        v10 = 0LL;
      }
      *((_QWORD *)this + 29) = v10;
      *((_DWORD *)this + 52) = v9;
    }
    else
    {
      *((_DWORD *)this + 52) = 1;
      *((_DWORD *)this + 55) = *(_DWORD *)(v2 + 172);
      *((_DWORD *)this + 57) = 0;
      *((_QWORD *)this + 29) = 0LL;
    }
    *((_DWORD *)this + 60) = 0;
  }
  else
  {
    v5 = *(_DWORD *)(v2 + 176);
    if ( (v5 & 0xF0000) != 0 )
    {
      v6 = 1;
      *((_DWORD *)this + 52) = 1;
      v7 = *(_DWORD *)(v2 + 172);
    }
    else
    {
      v6 = 0;
      if ( (v5 & 0xF) == 8 )
        v6 = 2;
      *((_DWORD *)this + 52) = v6;
      v7 = *(_DWORD *)(v2 + 168);
    }
    *((_DWORD *)this + 60) = 0;
    *((_DWORD *)this + 55) = v7;
    *((_DWORD *)this + 57) = *(_DWORD *)(v2 + 180);
    v8 = *(_QWORD *)(v2 + 152);
    *((_QWORD *)this + 29) = v8;
    if ( v8 )
      *((_DWORD *)this + 52) = v6 | 8;
  }
  *((_DWORD *)this + 53) = *(unsigned __int8 *)(v2 + 184);
  *((_DWORD *)this + 54) = *(unsigned __int8 *)(v2 + 185);
}
