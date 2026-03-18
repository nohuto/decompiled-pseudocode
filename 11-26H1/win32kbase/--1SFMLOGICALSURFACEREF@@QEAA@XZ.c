/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x14003029C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(SFMLOGICALSURFACEREF *); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 24) + 752LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v4 = *(void (__fastcall **)(SFMLOGICALSURFACEREF *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24) + 760LL);
      if ( v4 )
        v4(this);
    }
  }
  PopThreadGuardedObject(this);
}
