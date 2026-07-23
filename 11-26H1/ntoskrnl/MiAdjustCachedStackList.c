/*
 * XREFs of MiAdjustCachedStackList @ 0x1402A7A70
 * Callers:
 *     MiAdjustCachedStacks @ 0x1402A7914 (MiAdjustCachedStacks.c)
 * Callees:
 *     MiPruneCachedStackList @ 0x1402918B8 (MiPruneCachedStackList.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140704108 (MiRemoveNonIdealCachedStacks.c)
 */

__int64 __fastcall MiAdjustCachedStackList(_SLIST_HEADER *a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v7; // esi
  int v8; // ecx
  unsigned int *v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 v12; // r11
  __int64 result; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // ecx

  v4 = a4;
  if ( a3 >= 3 )
  {
    v7 = 1;
    if ( *(_BYTE *)(a2 + 48) )
    {
      MiRemoveNonIdealCachedStacks(a2);
      *(_BYTE *)(a2 + 48) = 0;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( *(_DWORD *)(a2 + 44) != (_DWORD)v4 && *(_QWORD *)(56320 * v4 + a1[1].Alignment + 13888) )
    *(_DWORD *)(a2 + 44) = v4;
  v8 = *(_DWORD *)(a2 + 32);
  v9 = (unsigned int *)(a2 + 16);
  v10 = 0LL;
  if ( v8 != 3 )
    v10 = (unsigned int)(v8 + 1);
  v11 = 0;
  v12 = 4LL;
  do
  {
    result = *v9;
    v14 = 0;
    ++v9;
    if ( (int)result >= 0 )
      v14 = result;
    if ( v11 < v14 )
      v11 = v14;
    --v12;
  }
  while ( v12 );
  v15 = 5;
  if ( v11 >= 5 )
  {
    result = 512LL;
    v15 = v11;
    if ( v11 > 0x200 )
      v15 = 512;
  }
  v16 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = v15;
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 32) = v10;
  *(_DWORD *)(a2 + 4 * v10 + 16) = 0;
  if ( v16 > v15 )
    return MiPruneCachedStackList(a1, (_SLIST_HEADER *)a2, v15, v7);
  return result;
}
