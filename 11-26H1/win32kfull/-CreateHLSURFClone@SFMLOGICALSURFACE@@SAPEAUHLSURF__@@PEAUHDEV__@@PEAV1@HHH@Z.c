/*
 * XREFs of ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x14009E158
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140076840 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x14009C3D0 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 * Callees:
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x14009E12C (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x14009E5FC (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14009ED44 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z @ 0x14009EEE8 (-DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE::CreateHLSURFClone(HDEV a1, struct SFMLOGICALSURFACE *a2, int a3, int a4, int a5)
{
  HLSURF v8; // r14
  Gre::Base *v9; // rcx
  int v10; // ebx
  int v12; // r15d
  volatile signed __int16 *Object; // rax
  volatile signed __int16 *v14; // rdi
  BOOL v15; // ebx
  struct REGION *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  struct REGION *v19; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v21; // [rsp+48h] [rbp-31h] BYREF
  __int64 v22; // [rsp+50h] [rbp-29h] BYREF
  int v23; // [rsp+58h] [rbp-21h]
  int v24; // [rsp+5Ch] [rbp-1Dh]
  __int64 v25; // [rsp+60h] [rbp-19h]
  _OWORD v26[2]; // [rsp+68h] [rbp-11h] BYREF
  volatile signed __int16 *v27; // [rsp+88h] [rbp+Fh]
  char v28; // [rsp+90h] [rbp+17h]
  __int64 v30; // [rsp+E0h] [rbp+67h] BYREF
  int v31; // [rsp+F0h] [rbp+77h]

  v31 = a4;
  v20 = 0LL;
  v8 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v20, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
  v19 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
  v30 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v30, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
  v10 = *((_DWORD *)a2 + 63);
  v22 = *((_QWORD *)a2 + 33);
  v23 = *((_DWORD *)a2 + 68);
  v24 = *((_DWORD *)a2 + 69);
  v25 = *((_QWORD *)a2 + 25);
  if ( !v20 || !v19 || !v30 )
    goto LABEL_2;
  if ( a3 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v21 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)a2 + 16);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v21) )
        goto LABEL_38;
    }
    else
    {
      a3 = 0;
    }
  }
  else
  {
    v10 &= ~2u;
  }
  if ( a4 && *((_QWORD *)a2 + 10) )
  {
    v21 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)a2 + 10);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v19, (struct RGNOBJ *)&v21) )
    {
LABEL_2:
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v30);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v19);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
      return 0LL;
    }
  }
  else
  {
    v31 = 0;
  }
  v12 = a5;
  if ( a5 && *((_QWORD *)a2 + 11) )
  {
    v21 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)a2 + 11);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v30, (struct RGNOBJ *)&v21) )
      goto LABEL_38;
  }
  else
  {
    v12 = 0;
  }
  v21 = Gre::Base::Globals(v9);
  Object = (volatile signed __int16 *)AllocateObject(v21, 0x130u, 0x12u);
  v14 = Object;
  if ( !Object )
  {
LABEL_38:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
    return 0LL;
  }
  if ( (unsigned int)SFMLOGICALSURFACE::Initialize(
                       Object,
                       *((_QWORD *)a2 + 33),
                       *((unsigned int *)a2 + 68),
                       *((unsigned int *)a2 + 69),
                       *((_QWORD *)a2 + 25),
                       *((_DWORD *)a2 + 72)) )
  {
    *((_DWORD *)v14 + 63) = v10;
    *((_DWORD *)v14 + 53) = *((_DWORD *)a2 + 53);
    *((_DWORD *)v14 + 60) = *((_DWORD *)a2 + 60);
    memset(v26, 0, sizeof(v26));
    PushThreadGuardedObject(
      v26,
      v26,
      UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
    v27 = 0LL;
    v28 = 0;
    if ( HmgInsertObjectInternal(v21, (void *)v14, 9u, 0x12u) )
    {
      v8 = *(HLSURF *)v14;
      v27 = v14;
      v15 = (v10 & 0x10) != 0;
      if ( (int)SpNotifyLSurface(a1, v8, 1, v15 + 4, (struct _CD_HLSURF_CREATIONCONTEXT *)&v22) >= 0 )
        *((_QWORD *)v14 + 3) = a1;
      if ( a3 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
        v18 = v20;
        v20 = 0LL;
        *((_QWORD *)v14 + 16) = v18;
      }
      if ( v31 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v19);
        v16 = v19;
        v19 = 0LL;
        SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)v14, v16);
      }
      if ( v12 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v30);
        v17 = v30;
        v30 = 0LL;
        *((_QWORD *)v14 + 11) = v17;
      }
      EtwLogicalSurfCreateEvent(v8, (unsigned int)(v15 + 4));
    }
    else
    {
      DestroyLogicalSurface(v14, 0LL);
    }
    if ( v27 )
    {
      if ( !v28 )
        _InterlockedDecrement16(v27 + 6);
    }
    PopThreadGuardedObject(v26);
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v30);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v19);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  return v8;
}
