/*
 * XREFs of ??$Add@VDMMVIDPNSOURCE@@@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCE@@@Z @ 0x14004A364
 * Callers:
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1403450A8 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x14004A3D4 (-Add@-$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 */

__int64 __fastcall IndexedSet<DMMVIDPNSOURCE>::Add<DMMVIDPNSOURCE>(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v6; // rax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  if ( v3 != a1 + 24 )
    v4 = v3 - 8;
  if ( !v4 )
    return (unsigned __int8)Set<DMMVIDPNSOURCE>::Add(a1) != 0 ? 3 : 1;
  while ( *(_DWORD *)(v4 + 24) != *(_DWORD *)(a2 + 24) )
  {
    v6 = *(_QWORD *)(v4 + 8);
    v4 = v6 - 8;
    if ( v6 == a1 + 24 )
      v4 = 0LL;
    if ( !v4 )
      return (unsigned __int8)Set<DMMVIDPNSOURCE>::Add(a1) != 0 ? 3 : 1;
  }
  LOBYTE(v2) = v4 != a2;
  return (unsigned int)(v2 + 1);
}
