/*
 * XREFs of ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1401041C8
 * Callers:
 *     cjCopyFontDataW @ 0x140102FD8 (cjCopyFontDataW.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140108460 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::dpNtmi(PFEOBJ *this)
{
  unsigned int v1; // ebx
  _DWORD *v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  _DWORD *v6; // rdx
  int v7; // edx

  v1 = 368;
  v2 = *(_DWORD **)(*(_QWORD *)this + 32LL);
  v3 = v2[12];
  if ( (v3 & 0x4000) != 0 )
  {
    v6 = v2;
    if ( v2[1] <= 0xCu )
    {
      DbgPrint("Test it %d %Iu \n", v2[1], 12);
      return v1;
    }
    return (unsigned int)(4 * *(_DWORD *)((char *)v2 + v6[51] + 4) + 368);
  }
  if ( (v3 & 0x4000001) != 0 && v2[1] > 0xCu )
  {
    v4 = (unsigned int)v2[51];
    if ( (_DWORD)v4 )
    {
      if ( *(_DWORD *)((char *)v2 + v4 + 4) )
      {
        v7 = *(_DWORD *)((char *)v2 + v4);
        if ( v7 == 134248052 || v7 == 134248035 )
        {
          v6 = v2;
          return (unsigned int)(4 * *(_DWORD *)((char *)v2 + v6[51] + 4) + 368);
        }
      }
    }
  }
  return v1;
}
