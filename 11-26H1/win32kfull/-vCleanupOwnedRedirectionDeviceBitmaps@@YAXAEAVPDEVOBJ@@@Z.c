/*
 * XREFs of ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x1401D7B20
 * Callers:
 *     vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x1401D7B00 (vCleanupOwnedRedirectionDeviceBitmapsWrap.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAF8 (--$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB3D8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401D7CF0 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmaps(struct PDEVOBJ *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // r15
  Gre::Base *v3; // rcx
  char v4; // bp
  __int64 v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rsi
  Gre::Base *v7; // rcx
  HSEMAPHORE v8; // rdi
  SURFACE *v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r14d
  HSURF v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  _BYTE v15[32]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  SURFACE *v17; // [rsp+88h] [rbp+10h] BYREF

  v2 = Gre::Base::Globals(a1);
  if ( GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(v2) )
  {
    v4 = 0;
    v6 = Gre::Base::Globals(v3);
  }
  else
  {
    v4 = 1;
    v6 = Gre::Base::Globals(v3);
    GreAcquireSemaphoreShared<1,>(v6);
  }
  LOBYTE(v5) = 5;
  HmgPrefetchAllObjt(v5, 952LL);
  v8 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v7) + 1512LL);
  GreAcquireSemaphoreInternal(v8);
  GrepAcquireLockValidate<20>();
  v10 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    LOBYTE(v9) = 5;
    v11 = HmgSafeNextObjt(v10, v9, &v17);
    if ( !v11 )
      break;
    v9 = v17;
    if ( *((_QWORD *)v17 + 6) == *(_QWORD *)a1 && (*((_DWORD *)v17 + 29) & 1) != 0 )
    {
      if ( *((_DWORD *)v17 + 2) )
      {
        SURFACE::vDeleteDriverRealization(v17);
      }
      else
      {
        v12 = *(HSURF *)v17;
        GreMarkDeletableBitmap(*(_QWORD *)v17);
        SURFREF::SURFREF((SURFREF *)v15, v12, v2);
        v13 = SURFACE::bDeleteSurface(v16, v2, 0LL, 0LL);
        v14 = v16;
        if ( v13 )
          v14 = 0LL;
        v16 = v14;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
      }
    }
    v10 = v11;
  }
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v8);
    GrepReleaseLockValidate<20>();
    GreReleaseSemaphoreExclusiveInternal(v8);
  }
  if ( v4 )
    GreReleaseSemaphoreShared<1,>((__int64 *)v6);
}
