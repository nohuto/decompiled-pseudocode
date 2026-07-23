/*
 * XREFs of PipDeleteDependencyNode @ 0x140B33DCC
 * Callers:
 *     PipDereferenceDependencyNode @ 0x140B33D68 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x140B48FD4 (PipCreateDependencyNode.c)
 * Callees:
 *     PipFreeBindingId @ 0x140B33E60 (PipFreeBindingId.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PipDeleteDependencyNode(_QWORD *P)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  _QWORD **v7; // rdx
  PVOID *v8; // rax

  v2 = P + 7;
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v3 != v2 )
      goto LABEL_11;
    v4 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v4 != v3 )
      goto LABEL_11;
    v2[1] = v4;
    *v4 = v2;
    PipFreeBindingId(v3);
  }
  v5 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P
    || (v6 = (PVOID *)P[1], *v6 != P)
    || (*v6 = v5, v5[1] = v6, v7 = (_QWORD **)P[9], v7[1] != P + 9)
    || (v8 = (PVOID *)P[10], *v8 != P + 9) )
  {
LABEL_11:
    __fastfail(3u);
  }
  *v8 = v7;
  v7[1] = v8;
  ExFreePoolWithTag(P, 0x53706E50u);
}
