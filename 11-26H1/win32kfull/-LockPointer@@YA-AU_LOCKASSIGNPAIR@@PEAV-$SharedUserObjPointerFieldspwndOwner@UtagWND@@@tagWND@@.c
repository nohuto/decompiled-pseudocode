/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401F2064
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LockPointer(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *result; // rax

  v3 = 0LL;
  if ( a3 )
    v3 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(*(_QWORD *)(a2 - 80) + 64LL) = v3;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  return result;
}
