/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1400C6308
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C5FB8 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1400C6250 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x140178FFC (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this, __int64 a2)
{
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall *v6)(XEPATHOBJ *); // rax

  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this, a2) + 24) + 2040LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v6 = *(void (__fastcall **)(XEPATHOBJ *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24) + 2048LL);
      if ( v6 )
        v6(this);
    }
  }
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
