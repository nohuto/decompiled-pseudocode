/*
 * XREFs of ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x14010183C
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140101384 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::dpNtmi(PFEOBJ *this)
{
  unsigned int v1; // ebx
  _DWORD *v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  int v6; // eax
  unsigned int v7; // edx

  v1 = 368;
  v2 = *(_DWORD **)(*(_QWORD *)this + 32LL);
  v3 = v2[12];
  if ( (v3 & 0x4000) != 0 )
  {
    v7 = v2[1];
    if ( v7 <= 0xC )
    {
      DbgPrint("Test it %d %Iu \n", v7, 12);
      return v1;
    }
    return (unsigned int)(4 * *(_DWORD *)((char *)v2 + v2[51] + 4) + 368);
  }
  if ( (v3 & 0x4000001) != 0 && v2[1] > 0xCu )
  {
    v4 = (unsigned int)v2[51];
    if ( (_DWORD)v4 )
    {
      if ( *(_DWORD *)((char *)v2 + v4 + 4) )
      {
        v6 = *(_DWORD *)((char *)v2 + v4);
        if ( v6 == 134248052 || v6 == 134248035 )
          return (unsigned int)(4 * *(_DWORD *)((char *)v2 + v2[51] + 4) + 368);
      }
    }
  }
  return v1;
}
