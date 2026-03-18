/*
 * XREFs of ??0ENUMUNCOVERED@@QEAA@PEAU_SPRITESTATE@@@Z @ 0x140186C30
 * Callers:
 *     ?bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z @ 0x140186B78 (-bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x140186748 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 */

ENUMUNCOVERED *__fastcall ENUMUNCOVERED::ENUMUNCOVERED(ENUMUNCOVERED *this, struct _SPRITESTATE *a2)
{
  __int64 v4; // r8
  ENUMUNCOVERED *result; // rax

  if ( !*((_DWORD *)a2 + 29) )
    vSpComputeSpriteRanges((__int64)a2);
  *(_DWORD *)this = *((_DWORD *)a2 + 13);
  v4 = *((_QWORD *)a2 + 18);
  *((_QWORD *)this + 1) = v4;
  *((_QWORD *)this + 3) = v4 + 8;
  result = this;
  *((_QWORD *)this + 2) = v4 + *(_QWORD *)(v4 + 8);
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 19) - *((_QWORD *)a2 + 18);
  return result;
}
