/*
 * XREFs of ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x140007D00
 * Callers:
 *     vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x140007CE0 (vCleanupOwnedRedirectionDeviceBitmapsWrap.c)
 * Callees:
 *     ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140008F6C (--$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077DA8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140089AE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140094608 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400D79B4 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400D7AB4 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmaps(struct PDEVOBJ *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // r14
  Gre::Base *v3; // rcx
  char v4; // bp
  struct Gre::Base::SESSION_GLOBALS *v5; // rdi
  __int64 v6; // rcx
  SURFACE *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // esi
  HSURF v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _BYTE v13[32]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]
  SURFACE *v15; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF

  v2 = Gre::Base::Globals(a1);
  if ( (unsigned __int8)GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(v2) )
  {
    v4 = 0;
    v5 = Gre::Base::Globals(v3);
  }
  else
  {
    v4 = 1;
    v5 = Gre::Base::Globals(v3);
    GreAcquireSemaphoreShared<1,>(v5);
  }
  LOBYTE(v6) = 5;
  HmgPrefetchAllObjt(v6, 952LL);
  SEMOBJ<20>::SEMOBJ<20>(&v16);
  v8 = 0LL;
  v15 = 0LL;
  while ( 1 )
  {
    LOBYTE(v7) = 5;
    v9 = HmgSafeNextObjt(v8, v7, &v15);
    if ( !v9 )
      break;
    v7 = v15;
    if ( *((_QWORD *)v15 + 6) == *(_QWORD *)a1 && (*((_DWORD *)v15 + 29) & 1) != 0 )
    {
      if ( *((_DWORD *)v15 + 2) )
      {
        SURFACE::vDeleteDriverRealization(v15);
      }
      else
      {
        v10 = *(HSURF *)v15;
        GreMarkDeletableBitmap(*(_QWORD *)v15);
        SURFREF::SURFREF((SURFREF *)v13, v10, v2);
        v11 = SURFACE::bDeleteSurface(v14, 0LL, 0LL);
        v12 = v14;
        if ( v11 )
          v12 = 0LL;
        v14 = v12;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13);
      }
    }
    v8 = v9;
  }
  if ( v16 )
    GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
  if ( v4 )
    GreReleaseSemaphoreShared<1,>(v5);
}
