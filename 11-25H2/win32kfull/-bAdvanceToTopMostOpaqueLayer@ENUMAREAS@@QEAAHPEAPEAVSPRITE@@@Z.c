/*
 * XREFs of ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1400077AC
 * Callers:
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1400078A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032EA5C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14009BB1C (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 */

__int64 __fastcall ENUMAREAS::bAdvanceToTopMostOpaqueLayer(ENUMAREAS *this, struct SPRITE **a2)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  _DWORD *v9; // rbx
  __int64 result; // rax

  v2 = 0;
  v3 = *((_QWORD *)this + 9);
  v6 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + *((_QWORD *)this + 8) - 16LL;
  if ( *(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 96) + 4824LL) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v3 + 8);
      if ( (*(_DWORD *)v8 & 8) != 0 )
      {
        v9 = *(_DWORD **)(v8 + 184);
        if ( !v9
          || REGION_CORE::get_sizeScan((REGION_CORE *)(v9 + 6)) <= 0x38
          && v9[13] <= *(_DWORD *)v3
          && v9[15] >= *(_DWORD *)(v3 + 4)
          && v9[14] <= *((_DWORD *)this + 9)
          && v9[16] >= *((_DWORD *)this + 10) )
        {
          v6 = v3;
        }
      }
      if ( v3 >= v7 || *(_DWORD *)(v3 + 16) != *(_DWORD *)v3 )
        break;
      v3 += 16LL;
    }
  }
  if ( v6 && *a2 != *(struct SPRITE **)(v6 + 8) )
  {
    *((_QWORD *)this + 9) = v6;
    v2 = 1;
  }
  result = v2;
  *a2 = *(struct SPRITE **)(*((_QWORD *)this + 9) + 8LL);
  return result;
}
