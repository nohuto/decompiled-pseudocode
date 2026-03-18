/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400979BC
 * Callers:
 *     GreNotifyDirtySprite @ 0x140057C3C (GreNotifyDirtySprite.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x140097F10 (GreAddBitmapD3DDirtyRgn.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x140173F98 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1401E6C88 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 * Callees:
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x140095E48 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1400977D0 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, unsigned int a3, UINT_PTR a4)
{
  __int64 v4; // rax
  int v5; // ebp
  int v6; // r15d
  unsigned int v10; // ebx
  BOOL v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // esi
  void *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+20h] [rbp-68h] BYREF
  __int16 v20; // [rsp+24h] [rbp-64h]
  int v21; // [rsp+48h] [rbp-40h]
  unsigned int v22; // [rsp+4Ch] [rbp-3Ch]
  HSPRITE v23; // [rsp+50h] [rbp-38h]
  UINT_PTR v24; // [rsp+58h] [rbp-30h]

  v4 = *((_QWORD *)a2 + 23);
  v5 = 0;
  v6 = 0;
  v10 = 1;
  v11 = v4 && (*(_DWORD *)(v4 + 92) & 1) != 0;
  v12 = a3 & 0xFFFFFFFE;
  if ( !v11 )
    v12 = a3;
  v13 = v12;
  if ( (v12 & 1) != 0 && bShouldUseSfmTokenArray(*((_DWORD *)a2 + 63)) )
  {
    v6 = GreAddLogicalSurfaceToDirtyQueue(*(Gre::Base **)a2, 1u, a4);
    v13 = v12 & 0xFFFFFFFE;
  }
  if ( v13 )
  {
    v15 = (void *)UserReferenceDwmApiPort(a1);
    v5 = -1073741823;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(W32GetSessionState(v17, v16, v18) + 96) + 4648LL), 1uLL);
    if ( v15 )
    {
      memset_0(&v19, 0, 0x40uLL);
      v19 = 4194328;
      v20 = 0x8000;
      v21 = 1073741828;
      v23 = a1;
      v22 = v13;
      v24 = a4;
      EtwUpdateEvent(a1, 1073741828LL);
      v5 = LpcRequestPort(v15, &v19);
      ObfDereferenceObject(v15);
    }
  }
  if ( v6 < 0 || v5 < 0 )
    return 0;
  return v10;
}
