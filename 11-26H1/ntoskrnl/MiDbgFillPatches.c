/*
 * XREFs of MiDbgFillPatches @ 0x140702BC0
 * Callers:
 *     MiDbgCopyMemoryInternal @ 0x1407025C0 (MiDbgCopyMemoryInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDbgFillPatches(__int64 a1, int a2, __int64 a3, int a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rbx
  unsigned int *v6; // r11
  __int64 result; // rax
  int i; // r10d
  unsigned __int64 v9; // rcx

  v4 = a1 & 0xFFF;
  v5 = 0LL;
  v6 = (unsigned int *)(a1 - (a1 & 3));
  result = (v4 + a2 - 1) >> 2;
  for ( i = (v4 >> 2) - result + 1; i; --i )
  {
    v9 = *(_QWORD *)(a3 + 8 * v5) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( a4 )
    {
      if ( v9 == *(_QWORD *)(a3 + 8 * v5) )
      {
        result = *v6;
        *(_DWORD *)(v9 + 12) = result;
      }
    }
    else
    {
      result = *v6;
      *(_DWORD *)(v9 + 16) = result;
    }
    ++v6;
    v5 = (unsigned int)(v5 + 1);
  }
  return result;
}
