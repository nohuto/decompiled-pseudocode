/*
 * XREFs of MiUnmapZeroedPage @ 0x140521B08
 * Callers:
 *     MiBackgroundZeroPage @ 0x140456DB4 (MiBackgroundZeroPage.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14029F2C0 (MiZeroPageWorkMapping.c)
 */

__int64 __fastcall MiUnmapZeroedPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a2 + 56);
  v4 = *(unsigned int *)(a2 + 4);
  result = *(_QWORD *)(a2 + 48);
  v6 = *(_QWORD *)(v2 + 24);
  if ( (v6 & 0x20) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 80);
      result = (unsigned int)(*(_DWORD *)(v7 + 4 * v4 + 460) + 1);
      *(_DWORD *)(v7 + 4 * v4 + 460) = result;
    }
    else if ( !result || (++*(_DWORD *)(result + 320), *(_DWORD *)(result + 320) == 512) )
    {
      MiZeroPageWorkMapping(v4, *(_QWORD *)(v2 + 32), 0);
      *(_QWORD *)(v2 + 24) = v6 | 0x40;
      v8 = *(_QWORD *)(a1 + 80);
      result = (unsigned int)(*(_DWORD *)(v8 + 4 * v4 + 444) + 1);
      *(_DWORD *)(v8 + 4 * v4 + 444) = result;
    }
  }
  return result;
}
