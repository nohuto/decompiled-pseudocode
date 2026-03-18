/*
 * XREFs of ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x14000A0F4
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140009538 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DF7B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIgnoreMirrorUpdate(struct SPRITE *a1)
{
  __int64 v1; // rax

  v1 = **((_QWORD **)a1 + 2);
  if ( v1 && (*(_DWORD *)(v1 + 1808) & 0x8000000) != 0 && (*(_DWORD *)(v1 + 2112) & 0x800) != 0 )
    return (*(_DWORD *)a1 >> 8) & 1;
  else
    return 0LL;
}
