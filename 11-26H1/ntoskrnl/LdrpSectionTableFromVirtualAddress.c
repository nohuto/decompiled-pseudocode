/*
 * XREFs of LdrpSectionTableFromVirtualAddress @ 0x14077EC74
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x140A9807C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x140AABB84 (LdrpResGetResourceDirectory.c)
 * Callees:
 *     LdrpGetSectionSize @ 0x14050D6C4 (LdrpGetSectionSize.c)
 */

__int64 __fastcall LdrpSectionTableFromVirtualAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v9; // rcx
  int v10; // r11d
  int i; // r9d
  unsigned __int64 v12; // r8
  int SectionSize; // eax
  __int64 v14; // rcx
  int v15; // r10d

  if ( a3 )
  {
    v9 = a3 + *(unsigned __int16 *)(a3 + 20) + 24LL;
    if ( v9 )
    {
      v10 = *(unsigned __int16 *)(a3 + 6);
      for ( i = 0; i < v10; ++i )
      {
        v12 = v9 + 40;
        if ( a6 )
        {
          if ( v12 > a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
            break;
        }
        if ( a5 >= *(_DWORD *)(v9 + 12) )
        {
          SectionSize = LdrpGetSectionSize(v9, a7);
          if ( a5 < v15 + SectionSize )
            return v14;
        }
        v9 = v12;
      }
    }
  }
  return 0LL;
}
