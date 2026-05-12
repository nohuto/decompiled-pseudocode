/*
 * XREFs of sub_1401A7310 @ 0x1401A7310
 * Callers:
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1401A7310(__int64 a1)
{
  __int64 i; // rdi
  void *v3; // rcx

  *(_BYTE *)(a1 + 111) &= ~4u;
  if ( *(_QWORD *)(a1 + 6168) )
  {
    for ( i = 0LL; (unsigned int)i < dword_1401688B0; i = (unsigned int)(i + 1) )
    {
      v3 = *(void **)(*(_QWORD *)(a1 + 6168) + 8 * i);
      if ( v3 )
      {
        ExFreePoolWithTag(v3, 0x4D546152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 6168) + 8 * i) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 6168), 0x4D546152u);
    *(_QWORD *)(a1 + 6168) = 0LL;
  }
}
