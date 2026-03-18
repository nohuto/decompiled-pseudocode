/*
 * XREFs of ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1400A3D68
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1400A3968 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x14009E5FC (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14009ED44 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z @ 0x14009EEE8 (-DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z.c)
 */

HLSURF __fastcall hlsurfCreateLogicalSurfaceObject(
        Gre::Base *a1,
        unsigned int a2,
        struct _CD_HLSURF_CREATIONCONTEXT *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // r15
  HLSURF *Object; // rax
  HLSURF v8; // rbx
  HLSURF *v9; // rdi
  HLSURF v10; // rdx
  _OWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  HLSURF *v13; // [rsp+50h] [rbp-28h]
  char v14; // [rsp+58h] [rbp-20h]

  v6 = Gre::Base::Globals(a1);
  Object = (HLSURF *)AllocateObject(v6, 0x130u, 0x12u);
  v8 = 0LL;
  v9 = Object;
  if ( Object
    && (unsigned int)SFMLOGICALSURFACE::Initialize(
                       (__int64)Object,
                       *(_QWORD *)a3,
                       *((_DWORD *)a3 + 2),
                       *((_DWORD *)a3 + 3),
                       *((_QWORD *)a3 + 2),
                       1) )
  {
    memset(v12, 0, sizeof(v12));
    PushThreadGuardedObject(
      v12,
      v12,
      UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
    v13 = 0LL;
    v14 = 0;
    if ( HmgInsertObjectInternal(v6, v9, 9u, 0x12u) )
    {
      v8 = *v9;
      v10 = *v9;
      v13 = v9;
      if ( (int)SpNotifyLSurface(a1, v10, 1, a2, a3) >= 0 )
        v9[3] = (HLSURF)a1;
      EtwLogicalSurfCreateEvent(v8, a2);
    }
    else
    {
      DestroyLogicalSurface((Gre::Base *)v9, 0);
    }
    if ( v13 && !v14 )
      _InterlockedDecrement16((volatile signed __int16 *)v13 + 6);
    PopThreadGuardedObject(v12);
  }
  return v8;
}
