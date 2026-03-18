/*
 * XREFs of ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x140095E98
 * Callers:
 *     GreHintSpriteShape @ 0x1400922F0 (GreHintSpriteShape.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140097B7C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x14021F160 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x14005C938 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14008F82C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14008FAA0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x140095554 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x140095660 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x14009582C (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE::CreateHLSURFClone(
        _QWORD *a1,
        struct SFMLOGICALSURFACE *a2,
        int a3,
        int a4,
        int a5)
{
  HLSURF v5; // r14
  int v9; // ebx
  int v11; // r15d
  __int64 Object; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  BOOL v18; // ebx
  struct REGION *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  struct REGION *v22; // [rsp+38h] [rbp-41h] BYREF
  __int64 v23; // [rsp+40h] [rbp-39h] BYREF
  __int64 v24; // [rsp+48h] [rbp-31h] BYREF
  __int64 v25; // [rsp+50h] [rbp-29h] BYREF
  int v26; // [rsp+58h] [rbp-21h]
  int v27; // [rsp+5Ch] [rbp-1Dh]
  __int64 v28; // [rsp+60h] [rbp-19h]
  _BYTE v29[32]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+88h] [rbp+Fh]
  __int64 v32; // [rsp+E0h] [rbp+67h] BYREF
  int v33; // [rsp+F0h] [rbp+77h]

  v33 = a4;
  v5 = 0LL;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v23);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v23, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v23);
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v22);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v22, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v22);
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v32);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v32, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v32);
  v9 = *((_DWORD *)a2 + 63);
  v25 = *((_QWORD *)a2 + 33);
  v26 = *((_DWORD *)a2 + 68);
  v27 = *((_DWORD *)a2 + 69);
  v28 = *((_QWORD *)a2 + 25);
  if ( !v23 || !v22 || !v32 )
    goto LABEL_2;
  if ( a3 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v24 = *((_QWORD *)a2 + 16);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v23, (struct RGNOBJ *)&v24) )
      {
LABEL_36:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v32);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v22);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v23);
        return 0LL;
      }
    }
    else
    {
      a3 = 0;
    }
  }
  else
  {
    v9 &= ~2u;
  }
  if ( a4 && *((_QWORD *)a2 + 10) )
  {
    v24 = *((_QWORD *)a2 + 10);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v22, (struct RGNOBJ *)&v24) )
      goto LABEL_36;
  }
  else
  {
    v33 = 0;
  }
  v11 = a5;
  if ( a5 && *((_QWORD *)a2 + 11) )
  {
    v24 = *((_QWORD *)a2 + 11);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v32, (struct RGNOBJ *)&v24) )
      goto LABEL_36;
  }
  else
  {
    v11 = 0;
  }
  Object = AllocateObject(304LL, 18LL);
  v13 = Object;
  if ( !Object )
  {
LABEL_2:
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v32);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v32);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v22);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v23);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
    return 0LL;
  }
  if ( (unsigned int)SFMLOGICALSURFACE::Initialize(
                       Object,
                       *((_QWORD *)a2 + 33),
                       *((_DWORD *)a2 + 68),
                       *((_DWORD *)a2 + 69),
                       *((_QWORD *)a2 + 25),
                       *((_DWORD *)a2 + 72)) )
  {
    *(_DWORD *)(v13 + 252) = v9;
    *(_DWORD *)(v13 + 212) = *((_DWORD *)a2 + 53);
    *(_DWORD *)(v13 + 240) = *((_DWORD *)a2 + 60);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v29, v14, v15, v16);
    if ( v30 || (LOBYTE(v17) = 18, !HmgInsertObjectInternal(v13, 9LL, v17)) )
    {
      bhLSurfDestroyLogicalSurfaceObject((HLSURF *)v13, 0);
    }
    else
    {
      v5 = *(HLSURF *)v13;
      v30 = v13;
      v18 = (v9 & 0x10) != 0;
      if ( (int)SpNotifyLSurface(a1, v5, 1, v18 + 4, (struct _CD_HLSURF_CREATIONCONTEXT *)&v25) >= 0 )
        *(_QWORD *)(v13 + 24) = a1;
      if ( a3 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v23);
        v21 = v23;
        v23 = 0LL;
        *(_QWORD *)(v13 + 128) = v21;
      }
      if ( v33 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v22);
        v19 = v22;
        v22 = 0LL;
        SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)v13, v19);
      }
      if ( v11 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v32);
        v20 = v32;
        v32 = 0LL;
        *(_QWORD *)(v13 + 88) = v20;
      }
      EtwLogicalSurfCreateEvent(v5, (unsigned int)(v18 + 4));
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v29);
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v32);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v32);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v22);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v23);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
  return v5;
}
