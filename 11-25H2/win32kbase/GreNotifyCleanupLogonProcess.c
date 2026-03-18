/*
 * XREFs of GreNotifyCleanupLogonProcess @ 0x1401A1CDC
 * Callers:
 *     CleanupLogonProcess @ 0x14016BCA0 (CleanupLogonProcess.c)
 * Callees:
 *     ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x14006DB80 (-IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

char __fastcall GreNotifyCleanupLogonProcess(Gre::Base *a1)
{
  __int64 (*v1)(void); // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  LOBYTE(v1) = Gre::Base::IsSessionGlobalsAreaAllocated(a1);
  if ( (_BYTE)v1 )
  {
    v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3, v2) + 24) + 1432LL);
    if ( v1 )
    {
      LODWORD(v1) = v1();
      if ( (int)v1 >= 0 )
      {
        v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24) + 1440LL);
        if ( v1 )
          LOBYTE(v1) = v1();
      }
    }
  }
  return (char)v1;
}
