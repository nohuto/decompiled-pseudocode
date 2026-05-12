/*
 * XREFs of sub_1400FAEEC @ 0x1400FAEEC
 * Callers:
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1400F82EC @ 0x1400F82EC (sub_1400F82EC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400FAEEC(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  if ( a1 && *(_QWORD *)(a1 + 256) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)qword_140168E40 + 2); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * i + 24);
      if ( v3 )
      {
        v4 = *(void **)(v3 + 32);
        if ( v4 )
          ExFreePoolWithTag(v4, 0x4D4E6152u);
        v5 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * i + 24) + 56LL);
        if ( v5 )
          ExFreePoolWithTag(v5, 0x4D4E6152u);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 256) + 8 * i + 24), 0x4D4E6152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * i + 24) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 256), 0x4D4E6152u);
    *(_QWORD *)(a1 + 256) = 0LL;
  }
}
