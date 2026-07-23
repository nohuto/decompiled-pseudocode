/*
 * XREFs of LdrpCreateLangFallbackList @ 0x1800236A0
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180023010 (RtlGetUserPreferredUILanguages.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18004D21C (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18004E220 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall LdrpCreateLangFallbackList(_QWORD *a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rax
  __int16 v8; // si
  __int64 result; // rax
  unsigned int v10; // edi
  _DWORD *Heap_0; // rax
  _DWORD *v12; // rdx

  if ( !a2 || !a1 )
    return 3221225485LL;
  v7 = 4LL;
  if ( a3 >= 1 )
    v7 = (unsigned int)a3;
  v8 = v7;
  if ( (unsigned __int64)(6 * v7) <= 0xFFFFFFFF
    && (v10 = 6 * v7 + 64, v10 >= 0x40)
    && (Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v10), (v12 = Heap_0) != 0LL) )
  {
    *Heap_0 = v10;
    result = 0LL;
    *((_WORD *)v12 + 3) = v8;
    *((_WORD *)v12 + 2) = 0;
    v12[10] = 0;
    *((_BYTE *)v12 + 8) = a4;
    *((_QWORD *)v12 + 3) = v12 + 16;
    *((_QWORD *)v12 + 2) = a2;
    *a1 = v12;
  }
  else
  {
    *a1 = 0LL;
    return 3221225495LL;
  }
  return result;
}
