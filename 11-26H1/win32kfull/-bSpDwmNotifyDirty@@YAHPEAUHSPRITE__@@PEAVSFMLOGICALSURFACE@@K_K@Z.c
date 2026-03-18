/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400A153C
 * Callers:
 *     GreNotifyDirtySprite @ 0x140041694 (GreNotifyDirtySprite.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x14009FF5C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1400A211C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1400A16AC (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1400A16FC (GreAddLogicalSurfaceToDirtyQueue.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // ebp
  int v6; // r15d
  unsigned int v10; // ebx
  BOOL v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // esi
  void *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+20h] [rbp-68h] BYREF
  __int16 v20; // [rsp+24h] [rbp-64h]
  int v21; // [rsp+48h] [rbp-40h]
  unsigned int v22; // [rsp+4Ch] [rbp-3Ch]
  HSPRITE v23; // [rsp+50h] [rbp-38h]
  __int64 v24; // [rsp+58h] [rbp-30h]

  v4 = *((_QWORD *)a2 + 23);
  v5 = 0;
  v6 = 0;
  v10 = 1;
  v11 = v4 && (*(_DWORD *)(v4 + 92) & 1) != 0;
  v12 = a3 & 0xFFFFFFFE;
  if ( !v11 )
    v12 = a3;
  v13 = v12;
  if ( (v12 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)a2 + 63)) )
  {
    v6 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)a2, 1LL, a4);
    v13 = v12 & 0xFFFFFFFE;
  }
  if ( v13 )
  {
    v14 = (void *)UserReferenceDwmApiPort(a1);
    v5 = -1073741823;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(W32GetSessionState(v16, v15, v17) + 96) + 4648LL), 1uLL);
    if ( v14 )
    {
      memset_0(&v19, 0, 0x40uLL);
      v19 = 4194328;
      v20 = 0x8000;
      v21 = 1073741828;
      v23 = a1;
      v22 = v13;
      v24 = a4;
      EtwUpdateEvent(a1);
      v5 = LpcRequestPort(v14, &v19);
      ObfDereferenceObject(v14);
    }
  }
  if ( v6 < 0 || v5 < 0 )
    return 0;
  return v10;
}
