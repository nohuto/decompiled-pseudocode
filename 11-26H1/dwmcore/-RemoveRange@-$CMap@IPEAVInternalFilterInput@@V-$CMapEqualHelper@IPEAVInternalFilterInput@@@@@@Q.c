/*
 * XREFs of ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x18026799C
 * Callers:
 *     ?ProcessUpdateInputs@CFilterEffect@@AEAAJAEBV?$unordered_map@IUInput@CFilterEffect@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@@std@@@Z @ 0x1802677E0 (-ProcessUpdateInputs@CFilterEffect@@AEAAJAEBV-$unordered_map@IUInput@CFilterEffect@@U-$hash@I@st.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801555A0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbp
  _DWORD *v4; // rsi
  int v5; // ecx
  _DWORD *v6; // rbp
  void *v7; // rax
  _DWORD *v8; // rbx
  void *v9; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v4 = (_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 16);
  if ( a2 + 1 > v5 )
    return 0LL;
  if ( a2 + 1 == v5 )
  {
    v6 = v4;
  }
  else
  {
    memmove_0((void *)(*(_QWORD *)a1 + 4LL * a2), (const void *)(*(_QWORD *)a1 + 4 * (a2 + 1LL)), 4LL * (v5 - a2 - 1));
    memmove_0(
      (void *)(*(_QWORD *)(a1 + 8) + 8 * v2),
      (const void *)(*(_QWORD *)(a1 + 8) + 8 * (v2 + 1)),
      8LL * (*v4 - (int)v2 - 1));
    v6 = (_DWORD *)(a1 + 16);
  }
  v7 = DefaultHeap::Realloc(*(void **)a1, 4LL * (*v4 - 1));
  v8 = v4;
  if ( v7 )
  {
    *(_QWORD *)a1 = v7;
    v8 = v6;
  }
  v9 = DefaultHeap::Realloc(*(void **)(a1 + 8), 8LL * (*v4 - 1));
  if ( v9 )
    *(_QWORD *)(a1 + 8) = v9;
  --*v8;
  return 1LL;
}
