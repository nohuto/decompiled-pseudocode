/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x140096C94
 * Callers:
 *     ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x140096B88 (-Add@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x140096DB0 (-RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<DMMVIDEOPRESENTTARGET>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  if ( v3 != v2 )
    v4 = v3 - 8;
  while ( v4 && v4 != a2 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    v4 = v5 - 8;
    if ( v5 == v2 )
      v4 = 0LL;
  }
  return v4;
}
