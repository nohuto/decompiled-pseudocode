/*
 * XREFs of RtlpLookupOrCreateLowBox @ 0x14045AE70
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x140974FB0 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x140A41880 (RtlpHashStringToAtom.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x14045AF90 (RtlpQueryLowBoxId.c)
 *     RtlpAllocateAtom @ 0x140AA4C00 (RtlpAllocateAtom.c)
 */

__int64 __fastcall RtlpLookupOrCreateLowBox(__int64 a1, __int64 a2, char a3)
{
  __int64 *v5; // rbx
  int LowBoxId; // esi
  __int64 result; // rax
  __int16 v8; // cx
  __int16 v9; // dx
  __int16 v10; // cx
  __int64 v11; // rcx
  __int16 v12; // cx

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return a2 + 16;
  v5 = (__int64 *)(a2 + 16);
  LowBoxId = RtlpQueryLowBoxId();
  if ( !LowBoxId )
    return (__int64)v5;
  for ( result = *v5; (__int64 *)result != v5; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 16) == LowBoxId )
    {
      if ( a3 )
      {
        v8 = *(_WORD *)(result + 22);
        if ( (v8 & 4) == 0 )
        {
          v9 = *(_WORD *)(result + 20);
          if ( v9 == -1 )
          {
            v10 = v8 | 5;
          }
          else
          {
            v10 = v8 | 4;
            *(_WORD *)(result + 20) = v9 + 1;
          }
          *(_WORD *)(result + 22) = v10;
        }
      }
      return result;
    }
  }
  result = RtlpAllocateAtom(24LL, 1282241601LL);
  if ( result )
  {
    v11 = *v5;
    if ( *(__int64 **)(*v5 + 8) != v5 )
      __fastfail(3u);
    *(_QWORD *)result = v11;
    *(_QWORD *)(result + 8) = v5;
    *(_QWORD *)(v11 + 8) = result;
    *v5 = result;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 16) = LowBoxId;
    if ( a3 )
    {
      *(_DWORD *)(result + 20) = 262145;
      v12 = *(_WORD *)(a2 + 36);
      if ( v12 == -1 )
        *(_WORD *)(a2 + 38) |= 1u;
      else
        *(_WORD *)(a2 + 36) = v12 + 1;
    }
  }
  return result;
}
