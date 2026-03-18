/*
 * XREFs of ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1400F4A1C
 * Callers:
 *     NtGdiEngAssociateSurface @ 0x14032CA10 (NtGdiEngAssociateSurface.c)
 *     NtGdiGetDhpdev @ 0x14032F820 (NtGdiGetDhpdev.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x1400F6488 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 */

__int64 *__fastcall ValidUmpdHdev(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // r14
  HSEMAPHORE v4; // rbx
  __int64 *i; // rdi
  struct _GRETHREAD *v6; // rax
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  v3 = Gre::Base::Globals(a1);
  v4 = *(HSEMAPHORE *)v3;
  GreAcquireSemaphoreInternal(*(HSEMAPHORE *)v3);
  GrepAcquireLockValidate<19>();
  for ( i = (__int64 *)*((_QWORD *)v3 + 494); i; i = (__int64 *)*i )
  {
    v8 = i;
    if ( (i[5] & 0x8000) != 0 && (Gre::Base *)i[2] == a1 )
    {
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v8, v3);
      break;
    }
  }
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v4);
    v6 = GreGetCurrentThreadCrossSessionCheck();
    if ( v6 )
    {
      if ( (*((_BYTE *)v6 + 27))-- == 1 )
        *(_QWORD *)v6 &= ~0x80000uLL;
      if ( !*(_QWORD *)v6 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v4);
  }
  return i;
}
