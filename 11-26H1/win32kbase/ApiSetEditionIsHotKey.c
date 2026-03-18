/*
 * XREFs of ApiSetEditionIsHotKey @ 0x14022781C
 * Callers:
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x140174824 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsHotKey(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(_QWORD, _QWORD); // rax

  v3 = a1;
  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5424LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 5432LL);
      if ( v7 )
        return v7(v3, a2);
    }
  }
  return v4;
}
