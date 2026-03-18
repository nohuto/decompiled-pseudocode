/*
 * XREFs of ?RemoveRange@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHHH@Z @ 0x180154598
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800A7AF0 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180152D28 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801555A0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::RemoveRange(
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
      (void *)(*(_QWORD *)(a1 + 8) + 4 * v2),
      (const void *)(*(_QWORD *)(a1 + 8) + 4 * (v2 + 1)),
      4LL * (*v4 - (int)v2 - 1));
    v6 = (_DWORD *)(a1 + 16);
  }
  v7 = DefaultHeap::Realloc(*(void **)a1, 4LL * (*v4 - 1));
  v8 = v4;
  if ( v7 )
  {
    *(_QWORD *)a1 = v7;
    v8 = v6;
  }
  v9 = DefaultHeap::Realloc(*(void **)(a1 + 8), 4LL * (*v4 - 1));
  if ( v9 )
    *(_QWORD *)(a1 + 8) = v9;
  --*v8;
  return 1LL;
}
