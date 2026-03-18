/*
 * XREFs of VhdDeferredAutoAttachVirtualDisks @ 0x140696550
 * Callers:
 *     PipOobeCompleteAsyncCallback @ 0x14070E190 (PipOobeCompleteAsyncCallback.c)
 * Callees:
 *     VhdiAutoAttachOneVhd @ 0x14081A06C (VhdiAutoAttachOneVhd.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void VhdDeferredAutoAttachVirtualDisks()
{
  char *v0; // rbx
  __int64 v1; // rax
  _WORD *v2; // rcx
  __int64 v3; // rdx

  while ( 1 )
  {
    v0 = (char *)qword_140E64E08;
    if ( qword_140E64E08 == &qword_140E64E08 )
      break;
    if ( *((PVOID **)qword_140E64E08 + 1) != &qword_140E64E08
      || (v1 = *(_QWORD *)qword_140E64E08, *(PVOID *)(*(_QWORD *)qword_140E64E08 + 8LL) != qword_140E64E08) )
    {
      __fastfail(3u);
    }
    qword_140E64E08 = *(PVOID *)qword_140E64E08;
    v2 = v0 + 36;
    *(_QWORD *)(v1 + 8) = &qword_140E64E08;
    v3 = -1LL;
    do
      ++v3;
    while ( v2[v3] );
    VhdiAutoAttachOneVhd(v2, (unsigned int)(2 * v3));
    ExFreePoolWithTag(v0, 0);
  }
}
