/*
 * XREFs of GreNotifyCleanupLogonProcess @ 0x14000849C
 * Callers:
 *     CleanupLogonProcess @ 0x1401D96E0 (CleanupLogonProcess.c)
 * Callees:
 *     ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x140008500 (-IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall GreNotifyCleanupLogonProcess(Gre::Base *a1)
{
  __int64 (*v1)(void); // rax

  LOBYTE(v1) = Gre::Base::IsSessionGlobalsAreaAllocated(a1);
  if ( (_BYTE)v1 )
  {
    v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1392LL);
    if ( v1 )
    {
      LODWORD(v1) = v1();
      if ( (int)v1 >= 0 )
      {
        v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1400LL);
        if ( v1 )
          LOBYTE(v1) = v1();
      }
    }
  }
  return (char)v1;
}
