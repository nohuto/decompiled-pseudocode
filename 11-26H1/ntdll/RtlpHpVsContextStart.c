/*
 * XREFs of RtlpHpVsContextStart @ 0x1800962A8
 * Callers:
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpVsSlotCreate @ 0x1800966D0 (RtlpHpVsSlotCreate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpVsContextStart(__int64 a1)
{
  __int64 v2; // rbp
  _WORD *v3; // rax
  unsigned int v4; // edi
  _WORD *v5; // rbx
  __int64 v6; // rax
  _WORD *v7; // rdx

  v2 = (unsigned int)*(unsigned __int8 *)(a1 + 2) + 1;
  v3 = (_WORD *)((__int64 (__fastcall *)(__int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 48)))(*(_QWORD *)(a1 + 8) ^ a1);
  v4 = 0;
  v5 = v3;
  if ( v3
    && (memset_thunk_772440563353939046(v3, 0, 4 * (_DWORD)v2 - ((4 * (_BYTE)v2 - 1) & 0x3Fu) + 63),
        *(_WORD *)a1 = ((unsigned __int64)v5 - a1) >> 6,
        (v6 = RtlpHpVsSlotCreate(a1)) != 0) )
  {
    v7 = &v5[2 * v2];
    while ( v5 < v7 )
    {
      *v5 = (unsigned __int64)(v6 - a1) >> 6;
      v5 += 2;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
