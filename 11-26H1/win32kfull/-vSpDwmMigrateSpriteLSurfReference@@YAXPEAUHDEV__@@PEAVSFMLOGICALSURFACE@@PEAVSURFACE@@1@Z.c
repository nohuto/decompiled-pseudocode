/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x14009D340
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x14009CAD0 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x14009C7A0 (DwmAsyncUpdateSprite.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14009EA74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1400A3ED4 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x140289F18 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(HDEV a1, struct SFMLOGICALSURFACE *a2, struct SURFACE *a3, int **a4)
{
  __int64 v4; // rdi
  int v9; // r12d
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  Gre::Base *v12; // rcx
  __int64 v13; // r8
  HDEV v14; // rdx
  DWMSPRITE *v15; // r13
  HDEV v16; // rdx
  Gre::Base *v17; // rcx
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  int v19; // r9d
  int *v20; // rcx
  int v21; // ecx
  __int64 v22; // rsi
  int v23; // r14d
  int v24; // eax
  int v25; // edi
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // r14d
  void *v29; // rax
  DWMSPRITE *v30; // rax
  __int64 v31; // [rsp+60h] [rbp-9h]
  _OWORD v32[2]; // [rsp+68h] [rbp-1h] BYREF
  DWMSPRITE *v33; // [rsp+88h] [rbp+1Fh]
  int *v34; // [rsp+D8h] [rbp+6Fh] BYREF
  int v35; // [rsp+E0h] [rbp+77h]

  v4 = *((_QWORD *)a2 + 37);
  v31 = v4;
  memset(v32, 0, sizeof(v32));
  v9 = 0;
  PushThreadGuardedObject(
    v32,
    v32,
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
  v33 = 0LL;
  v11 = Gre::Base::Globals(v10);
  if ( v4 )
  {
    LOBYTE(v13) = 15;
    v33 = (DWMSPRITE *)HmgLock(v11, v4, v13, 0LL);
  }
  Gre::Base::Globals(v12);
  v15 = v33;
  if ( v33 )
  {
    DWMSPRITE::SetLogicalSurface(v33, v14, 0LL);
    DWMSPRITE::SetLogicalSurface(v15, v16, (struct SFMLOGICALSURFACE *)a4);
    SFMLOGICALSURFACE::SetShape(a2, a1, 0LL);
    SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)a4, a1, (struct _SURFOBJ *)((char *)a3 + 24));
    if ( a4[16] )
    {
      v34 = a4[16];
      RGNOBJ::vSet((RGNOBJ *)&v34);
      *((_DWORD *)a4 + 63) &= ~2u;
    }
    *((_DWORD *)a4 + 63) |= 8u;
    v18 = Gre::Base::Globals(v17);
    SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)a4, a1, *((struct SfmState **)v18 + 543), v19);
    v20 = a4[23];
    if ( v20 )
    {
      v35 = v20[8];
      LODWORD(v34) = v20[9];
      if ( (v20[23] & 1) != 0 )
      {
        v9 = 2;
      }
      else if ( (v20[22] & 0x800) != 0 )
      {
        v9 = 1;
      }
    }
    else
    {
      v35 = 0;
      LODWORD(v34) = 0;
    }
    v21 = *((_DWORD *)v15 + 34);
    v22 = *((_QWORD *)v15 + 13);
    v23 = 4 * (v21 & 0xE);
    v24 = v21 & 0x40;
    *((_QWORD *)v15 + 13) = 0LL;
    v25 = *((_DWORD *)v15 + 29);
    v26 = (__int64)*a4;
    v27 = v21 & 1;
    v28 = *((_DWORD *)a4 + 63) & 0xC | v27 | (2 * (*((_DWORD *)a4 + 63) & 1 | v24 | v23));
    v29 = (void *)UserReferenceDwmApiPort(v27);
    DwmAsyncUpdateSprite(v29, v31, v26, v28, (__int64)v15 + 72, 0LL, v9, v35, (int)v34, v25 >= 1, v22);
    v30 = v33;
    *((_DWORD *)a4 + 63) &= ~8u;
    if ( v30 )
      _InterlockedDecrement16((volatile signed __int16 *)v30 + 6);
  }
  v33 = 0LL;
  PopThreadGuardedObject(v32);
}
