/*
 * XREFs of sub_14006F670 @ 0x14006F670
 * Callers:
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 * Callees:
 *     <none>
 */

void sub_14006F670()
{
  PVOID *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = (PVOID *)qword_140169490;
    if ( qword_140169490 == &qword_140169490 )
      break;
    if ( *((PVOID **)qword_140169490 + 1) != &qword_140169490
      || (v1 = *(_QWORD *)qword_140169490, *(PVOID *)(*(_QWORD *)qword_140169490 + 8LL) != qword_140169490) )
    {
      __fastfail(3u);
    }
    qword_140169490 = *(PVOID *)qword_140169490;
    *(_QWORD *)(v1 + 8) = &qword_140169490;
    ExFreePoolWithTag(v0[2], 0x48536152u);
    ExFreePoolWithTag(v0, 0x48536152u);
  }
}
