/*
 * XREFs of HalpDmaIsThinDmaCapable @ 0x14058DAD8
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpDmaIsThinDmaCapable(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned __int64 v3; // rdx
  bool v4; // dl
  int v5; // ecx

  v2 = *(_DWORD *)(a1 + 448);
  if ( v2 < 0x40 )
    v3 = (1LL << v2) - 1;
  else
    v3 = -1LL;
  v4 = v3 >= HalpMaximumPhysicalMemoryAddress;
  return !HalpDmaCvmConfiguration
      && ((v5 = *(_DWORD *)(a1 + 520)) == 0 || v5 == 2)
      && *(_BYTE *)(a1 + 445)
      && *(_BYTE *)(a1 + 441)
      && *(_BYTE *)(a1 + 442)
      && v4;
}
