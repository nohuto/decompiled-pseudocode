/*
 * XREFs of MiUpdateCacheAttributeListsForPage @ 0x1402A12B8
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x1406F32E0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 * Callees:
 *     MiPfnBestZeroAttribute @ 0x1402A0DFC (MiPfnBestZeroAttribute.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402A13B0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiMakeLinkedListPte @ 0x1403675E4 (MiMakeLinkedListPte.c)
 */

__int64 __fastcall MiUpdateCacheAttributeListsForPage(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // r10d
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // r8

  v5 = 8 * (a4 & 2);
  v8 = a4 & 1;
  v9 = (unsigned __int128)((a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v10 = ((unsigned __int64)v9 >> 63) + (v9 >> 3);
  if ( a3 == 3 && (a4 & 1) != 0 )
  {
    v12 = MiPageAttributeBatchChangeNeeded(a2, 1LL, v5);
    result = MiMakeLinkedListPte(*(__int64 *)((char *)a1 + (-(__int64)(v12 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 72));
    *(_QWORD *)(a2 + 16) = result;
    *(__int64 *)((char *)a1 + v13 + 72) = v10;
  }
  else
  {
    result = MiPageAttributeBatchChangeNeeded(a2, a3, v5);
    if ( (_DWORD)result )
    {
      if ( v8 )
      {
        if ( (unsigned int)MiPfnBestZeroAttribute(a2, a3) != a3 )
          a1 += 3;
      }
      result = MiMakeLinkedListPte(*a1);
      *(_QWORD *)(a2 + 16) = result;
      *a1 = v10;
    }
  }
  return result;
}
