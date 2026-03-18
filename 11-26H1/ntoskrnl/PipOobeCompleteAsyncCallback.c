/*
 * XREFs of PipOobeCompleteAsyncCallback @ 0x14079BB80
 * Callers:
 *     <none>
 * Callees:
 *     VhdiAutoAttachOneVhd @ 0x1408A614C (VhdiAutoAttachOneVhd.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PipOobeCompleteAsyncCallback(PVOID P)
{
  char *v2; // rbx
  __int64 v3; // rax
  _WORD *v4; // rcx
  __int64 v5; // rdx

  while ( 1 )
  {
    v2 = (char *)qword_140E65000;
    if ( qword_140E65000 == &qword_140E65000 )
      break;
    if ( *((PVOID **)qword_140E65000 + 1) != &qword_140E65000
      || (v3 = *(_QWORD *)qword_140E65000, *(PVOID *)(*(_QWORD *)qword_140E65000 + 8LL) != qword_140E65000) )
    {
      __fastfail(3u);
    }
    qword_140E65000 = *(PVOID *)qword_140E65000;
    v4 = v2 + 36;
    *(_QWORD *)(v3 + 8) = &qword_140E65000;
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
    VhdiAutoAttachOneVhd(v4, (unsigned int)(2 * v5));
    ExFreePoolWithTag(v2, 0);
  }
  ExFreePoolWithTag(P, 0);
}
