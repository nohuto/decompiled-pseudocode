/*
 * XREFs of RtlpHpLfhContextStart @ 0x1801142B8
 * Callers:
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhContextStart(__int64 a1)
{
  size_t v1; // rdi
  void *v2; // rax
  unsigned int v3; // ebx

  v1 = (unsigned __int64)*(unsigned __int8 *)(a1 + 72) << 8;
  v2 = (void *)((__int64 (__fastcall *)(_QWORD, size_t))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
                 *(_QWORD *)a1,
                 v1);
  v3 = 0;
  if ( v2 )
    memset_thunk_772440563353939046(v2, 0, v1);
  else
    return (unsigned int)-1073741670;
  return v3;
}
