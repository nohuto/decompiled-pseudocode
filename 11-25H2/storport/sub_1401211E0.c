/*
 * XREFs of sub_1401211E0 @ 0x1401211E0
 * Callers:
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 *     sub_140121320 @ 0x140121320 (sub_140121320.c)
 * Callees:
 *     <none>
 */

void sub_1401211E0()
{
  void *v0; // rcx
  PVOID *v1; // rcx
  __int64 v2; // rax
  void *v3; // rcx

  if ( qword_140168E40 )
  {
    v0 = (void *)*((_QWORD *)qword_140168E40 + 2);
    if ( v0 )
      ExFreePoolWithTag(v0, 0x49536152u);
    v1 = (PVOID *)qword_140168E40;
    v2 = *((_QWORD *)qword_140168E40 + 3);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 72) )
      {
        ExFreePoolWithTag(*(PVOID *)(v2 + 72), 0x49536152u);
        v1 = (PVOID *)qword_140168E40;
        *(_QWORD *)(*((_QWORD *)qword_140168E40 + 3) + 72LL) = 0LL;
      }
      ExFreePoolWithTag(v1[3], 0x49536152u);
    }
    v3 = (void *)*((_QWORD *)qword_140168E40 + 4);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x49536152u);
    ExFreePoolWithTag(qword_140168E40, 0x49536152u);
    qword_140168E40 = 0LL;
  }
}
