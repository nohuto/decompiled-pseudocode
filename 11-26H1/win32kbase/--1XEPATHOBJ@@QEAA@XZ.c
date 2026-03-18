/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x140034C24
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400347AC (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x140034A80 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x1401F0A88 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(XEPATHOBJ *); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 24) + 2016LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v4 = *(void (__fastcall **)(XEPATHOBJ *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24) + 2024LL);
      if ( v4 )
        v4(this);
    }
  }
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
