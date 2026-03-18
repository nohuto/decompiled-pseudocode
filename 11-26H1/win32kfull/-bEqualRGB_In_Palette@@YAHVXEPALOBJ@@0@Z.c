/*
 * XREFs of ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1401CFCF0
 * Callers:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1400702E0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bEqualRGB_In_Palette(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // r9
  int v5; // eax
  __int64 v6; // r10
  int v7; // eax

  LODWORD(v2) = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(a1 + 28) != (_DWORD)v2 )
    return 0LL;
  LODWORD(v3) = 256;
  if ( (_DWORD)v2 != 256 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 24) & 0x100) == 0 )
    goto LABEL_5;
  v6 = *(_QWORD *)(a2 + 72);
  if ( !v6 )
    return 0LL;
  while ( 1 )
  {
    v7 = v3;
    v3 = (unsigned int)(v3 - 1);
    if ( !v7 )
      break;
    if ( *(unsigned __int8 *)(v3 + v6 + 4) != (_DWORD)v3 )
      return 0LL;
  }
LABEL_5:
  while ( 1 )
  {
    v5 = v2;
    v2 = (unsigned int)(v2 - 1);
    if ( !v5 )
      break;
    if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 112) + 4 * v2) ^ *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4 * v2)) & 0xFFFFFF) != 0 )
      return 0LL;
  }
  return 1LL;
}
