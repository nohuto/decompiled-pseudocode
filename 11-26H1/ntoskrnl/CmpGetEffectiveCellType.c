/*
 * XREFs of CmpGetEffectiveCellType @ 0x1408E6CCC
 * Callers:
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveCellType(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( a2 && *(_QWORD *)(a1 + 240) )
  {
    v4 = 0LL;
    v5 = a1 + 208;
    while ( 1 )
    {
      if ( !v4 )
        v4 = *(_QWORD *)(v5 + 8);
      v6 = v4;
      if ( v5 == v4 )
        break;
      v7 = v4 - 32;
      v4 = *(_QWORD *)(v4 + 8);
      if ( !v7 )
        break;
      if ( !*(_DWORD *)(v6 + 36) )
        return *(unsigned int *)(v6 + 40);
    }
  }
  return *(_DWORD *)(a1 + 40) >> 31;
}
