/*
 * XREFs of ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1400A8B34
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006BCA0 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140071D98 (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400A8E68 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9094 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A9808 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB3D8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB8B4 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRenderingWorker(HDC *a1, HSURF *a2, HSURF *a3, const unsigned int *a4)
{
  __int64 v8; // rbx
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r8
  Gre::Base *v19; // rcx
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  Gre::Base *v21; // rcx
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  __int64 v23; // rdx
  Gre::Base *v24; // rcx
  struct Gre::Base::SESSION_GLOBALS *v25; // rbx
  char v26; // si
  __int64 v27; // rax
  __int64 v28; // rdx
  Gre::Base *v29; // rcx
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  Gre::Base *v31; // rcx
  struct Gre::Base::SESSION_GLOBALS *v32; // rax
  __int64 v33; // rax
  _OWORD v34[2]; // [rsp+38h] [rbp-59h] BYREF
  __int64 *v35; // [rsp+58h] [rbp-39h]
  _OWORD v36[2]; // [rsp+60h] [rbp-31h] BYREF
  struct SURFACE *v37; // [rsp+80h] [rbp-11h]
  DC *v38[8]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+100h] [rbp+6Fh] BYREF

  if ( *a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v38, *a1);
    memset(v34, 0, sizeof(v34));
    PushThreadGuardedObject(
      v34,
      v34,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v35 = 0LL;
    memset(v36, 0, sizeof(v36));
    PushThreadGuardedObject(
      v36,
      v36,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v8 = (__int64)*a3;
    v37 = 0LL;
    v10 = Gre::Base::Globals(v9);
    LOBYTE(v11) = 5;
    v12 = HmgShareLock(v10, v8, v11, 1LL);
    v13 = (__int64)*a2;
    v35 = (__int64 *)v12;
    v15 = Gre::Base::Globals(v14);
    LOBYTE(v16) = 5;
    v37 = (struct SURFACE *)HmgShareLock(v15, v13, v16, 1LL);
    v17 = *v35;
    DC::pSurface(v38[0], v37, v18);
    v20 = Gre::Base::Globals(v19);
    DEC_SHARE_REF_CNT(v20, v35);
    v35 = 0LL;
    v22 = Gre::Base::Globals(v21);
    DEC_SHARE_REF_CNT(v22, v37);
    v37 = 0LL;
    LOBYTE(v23) = 5;
    GreDereferenceObject(v17, v23, 1LL);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
    {
      v24 = v38[0];
      *((_DWORD *)v38[0] + 9) |= *a4;
    }
    v25 = Gre::Base::Globals(v24);
    if ( (*((_DWORD *)v38[0] + 9) & 0x200) != 0 )
    {
      v26 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !(unsigned __int8)GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>(v25) )
      {
        GreAcquireSemaphoreShared<2,>(v25);
        v26 = 1;
      }
      SEMOBJSHARED<3>::SEMOBJSHARED<3>((Gre::Base *)&v39);
      v27 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, 5);
      if ( v27 )
        SURFACE::bDeleteSurface(v27, v25, 0LL, 1LL);
      *((_QWORD *)v38[0] + 63) = 0LL;
      DC::vClearRendering(v38[0]);
      v28 = v39;
      *a2 = 0LL;
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v28);
      if ( v26 )
        GreReleaseSemaphoreShared<2,>(v25);
    }
    else
    {
      v33 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, 5);
      if ( v33 )
        SURFACE::bDeleteSurface(v33, v25, 0LL, 1LL);
      *((_QWORD *)v38[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    GreReleaseSemaphoreShared<1,>(v25);
    if ( v37 )
    {
      v30 = Gre::Base::Globals(v29);
      DEC_SHARE_REF_CNT(v30, v37);
    }
    PopThreadGuardedObject(v36);
    if ( v35 )
    {
      v32 = Gre::Base::Globals(v31);
      DEC_SHARE_REF_CNT(v32, v35);
    }
    PopThreadGuardedObject(v34);
    DCOBJ::~DCOBJ((DCOBJ *)v38);
  }
}
