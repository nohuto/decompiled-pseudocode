/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x180146A70
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1800BDDB0 (FindNodeOrParent.c)
 *     RealSuccessor @ 0x1800DA3D8 (RealSuccessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall RtlEnumerateGenericTableLikeADirectory(
        __int64 a1,
        __int64 (*a2)(),
        __int64 a3,
        int a4,
        _QWORD *a5,
        _DWORD *a6,
        __int64 a7)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rdi
  _QWORD *v12; // rbx
  _DWORD *v13; // r12
  __int64 (*v14)(); // r15
  int NodeOrParent; // eax
  _QWORD *i; // rcx
  int v17; // eax

  v7 = a5;
  v8 = 0LL;
  v12 = (_QWORD *)*a5;
  a5 = (_QWORD *)*a5;
  if ( !*(_DWORD *)(a1 + 44) )
  {
    *v7 = 0LL;
    return 0LL;
  }
  v13 = a6;
  v14 = WinSqmCheckEscalationSetString;
  if ( a2 )
    v14 = a2;
  if ( *a6 == *(_DWORD *)(a1 + 64) )
  {
    if ( v12 )
      goto LABEL_12;
  }
  else
  {
    a5 = 0LL;
  }
  NodeOrParent = FindNodeOrParent(a1, a7, &a5);
  if ( NodeOrParent == 1 )
  {
    v12 = a5;
LABEL_12:
    if ( !a4 )
      goto LABEL_15;
    goto LABEL_13;
  }
  if ( NodeOrParent != 3 )
  {
    v12 = a5;
    goto LABEL_15;
  }
  for ( i = a5; ; i = v12 )
  {
    v12 = RealSuccessor(i);
LABEL_15:
    if ( !v12 )
      break;
    v17 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v14)(a1, v12 + 4, a3);
    if ( v17 != -1073741198 )
    {
      *v7 = v12;
      if ( !v17 )
        v8 = v12 + 4;
      *v13 = *(_DWORD *)(a1 + 64);
      return v8;
    }
LABEL_13:
    ;
  }
  return 0LL;
}
