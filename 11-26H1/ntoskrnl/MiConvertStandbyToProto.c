/*
 * XREFs of MiConvertStandbyToProto @ 0x1402E8EE8
 * Callers:
 *     MiSharePages @ 0x1402E9008 (MiSharePages.c)
 * Callees:
 *     MiMapArbitraryPage @ 0x1402D4D00 (MiMapArbitraryPage.c)
 *     MiReleaseArbitraryPage @ 0x1402D4FA0 (MiReleaseArbitraryPage.c)
 *     MiCreateCombineAnchor @ 0x1402E9BD4 (MiCreateCombineAnchor.c)
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 *     MiDecrementCombinedPteEx @ 0x14036BF5C (MiDecrementCombinedPteEx.c)
 */

__int64 __fastcall MiConvertStandbyToProto(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rcx
  unsigned int v6; // r8d
  int v7; // r9d
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rbp
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 112);
  v4 = *(_QWORD *)a1;
  v12 = 0LL;
  v6 = *(_DWORD *)(a1 + 140);
  v7 = *(_DWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 80) = 48LL * *(_QWORD *)(a1 + 144) - 0x220000000000LL;
  *(_QWORD *)(a1 + 88) = ((*(_QWORD *)(a1 + 96) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiMapArbitraryPage(v4, (_QWORD *)(a1 + 16), v6, v7, 1) )
  {
    v8 = MiCreateCombineAnchor(a1, a2, &v12);
    v9 = v8;
    if ( v8 )
    {
      if ( v8 == -1073741302 )
      {
        v10 = v12;
        v9 = MiCombineWithStandbyExisting(a1, a2, v12);
        if ( v9 < 0 )
          MiDecrementCombinedPteEx(v2, v10 + 32, 0LL);
      }
    }
    else
    {
      v9 = MiCombineInitialInstance(a1, a2, 0LL);
    }
    MiReleaseArbitraryPage(a1 + 16);
  }
  else
  {
    return (unsigned int)-1073741800;
  }
  return (unsigned int)v9;
}
