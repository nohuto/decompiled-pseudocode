/*
 * XREFs of ?ValidateAndReferencePDEV@@YA_NPEAUHDEV__@@@Z @ 0x1400F5F54
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x1400F6488 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 */

char __fastcall ValidateAndReferencePDEV(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  HSEMAPHORE v3; // rbx
  HDEV i; // rdx
  struct _GRETHREAD *v5; // rax
  bool v6; // zf
  struct _GRETHREAD *v8; // rax
  HDEV v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = Gre::Base::Globals(a1);
  v3 = *(HSEMAPHORE *)v2;
  GreAcquireSemaphoreInternal(*(HSEMAPHORE *)v2);
  GrepAcquireLockValidate<19>();
  for ( i = (HDEV)*((_QWORD *)v2 + 494); i; i = *(HDEV *)i )
  {
    v9 = i;
    if ( i == (HDEV)a1 )
    {
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v9, v2);
      if ( v3 )
      {
        EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v3);
        v5 = GreGetCurrentThreadCrossSessionCheck();
        if ( v5 )
        {
          v6 = (*((_BYTE *)v5 + 27))-- == 1;
          if ( v6 )
            *(_QWORD *)v5 &= ~0x80000uLL;
          if ( !*(_QWORD *)v5 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v3);
      }
      return 1;
    }
  }
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v3);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      v6 = (*((_BYTE *)v8 + 27))-- == 1;
      if ( v6 )
        *(_QWORD *)v8 &= ~0x80000uLL;
      if ( !*(_QWORD *)v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v3);
  }
  return 0;
}
