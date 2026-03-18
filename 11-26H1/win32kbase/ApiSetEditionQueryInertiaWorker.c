/*
 * XREFs of ApiSetEditionQueryInertiaWorker @ 0x140126384
 * Callers:
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x140125F18 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x140126220 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionQueryInertiaWorker(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int (*v5)(void); // rax
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(__int64, __int64); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6712LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 6720LL);
      if ( v7 )
        return v7(a1, a2);
    }
  }
  return v4;
}
