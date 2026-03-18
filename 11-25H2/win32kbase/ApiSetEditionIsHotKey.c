/*
 * XREFs of ApiSetEditionIsHotKey @ 0x140225938
 * Callers:
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x140217850 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsHotKey(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int (__fastcall *v8)(_QWORD, _QWORD); // rax

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5864LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v8 = *(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 5872LL);
      if ( v8 )
        return v8(v3, v2);
    }
  }
  return v4;
}
