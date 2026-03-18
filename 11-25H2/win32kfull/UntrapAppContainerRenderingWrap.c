/*
 * XREFs of UntrapAppContainerRenderingWrap @ 0x140143FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077DA8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140078278 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A1C4 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A358 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreDereferenceObject @ 0x14007BF50 (GreDereferenceObject.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082AC4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x14008B2C8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x14008BD68 (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140095468 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14009A8F4 (--0SURFREF@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140144234 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

void __fastcall UntrapAppContainerRenderingWrap(HDC *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  HSURF v16; // rbx
  Gre::Base *v17; // rcx
  struct Gre::Base::SESSION_GLOBALS *v18; // rbx
  __int64 v19; // rax
  char v20; // si
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // [rsp+28h] [rbp-69h]
  char v24; // [rsp+28h] [rbp-69h]
  _BYTE v25[32]; // [rsp+38h] [rbp-59h] BYREF
  HSURF *v26; // [rsp+58h] [rbp-39h]
  _BYTE v27[32]; // [rsp+60h] [rbp-31h] BYREF
  struct SURFACE *v28; // [rsp+80h] [rbp-11h]
  DC *v29[10]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v30; // [rsp+100h] [rbp+6Fh] BYREF

  if ( *a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v29, *a1);
    SURFREF::SURFREF((SURFREF *)v25);
    SURFREF::SURFREF((SURFREF *)v27);
    LOBYTE(v8) = 5;
    v11 = HmgShareLock(*a3, v8, v9, v10);
    v12 = *a2;
    LOBYTE(v13) = 5;
    v26 = (HSURF *)v11;
    v28 = (struct SURFACE *)HmgShareLock(v12, v13, v14, v15);
    v16 = *v26;
    DC::pSurface(v29[0], v28);
    DEC_SHARE_REF_CNT(v26);
    v26 = 0LL;
    DEC_SHARE_REF_CNT(v28);
    v28 = 0LL;
    GreDereferenceObject(v16, 1u);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
    {
      v17 = v29[0];
      *((_DWORD *)v29[0] + 9) |= *a4;
    }
    v18 = Gre::Base::Globals(v17);
    if ( (*((_DWORD *)v29[0] + 9) & 0x200) != 0 )
    {
      v20 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>((struct _ERESOURCE **)v18) )
      {
        GreAcquireSemaphoreShared<2,>(v18);
        v20 = 1;
      }
      SEMOBJSHARED<3>::SEMOBJSHARED<3>((Gre::Base *)&v30);
      v24 = 5;
      v21 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v24);
      if ( v21 )
        SURFACE::bDeleteSurface(v21, 0LL, 1LL);
      *((_QWORD *)v29[0] + 63) = 0LL;
      DC::vClearRendering(v29[0]);
      v22 = v30;
      *a2 = 0LL;
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v22);
      if ( v20 )
        GreReleaseSemaphoreShared<2,>((__int64 *)v18);
    }
    else
    {
      v23 = 5;
      v19 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v23);
      if ( v19 )
        SURFACE::bDeleteSurface(v19, 0LL, 1LL);
      *((_QWORD *)v29[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    GreReleaseSemaphoreShared<1,>((__int64 *)v18);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v27);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v25);
    DCOBJ::~DCOBJ((DCOBJ *)v29);
  }
}
