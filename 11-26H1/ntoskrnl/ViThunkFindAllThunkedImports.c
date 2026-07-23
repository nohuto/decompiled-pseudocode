/*
 * XREFs of ViThunkFindAllThunkedImports @ 0x140C3B86C
 * Callers:
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140C3B5F0 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     ViThunkGetWdmThunk @ 0x140C3BA9C (ViThunkGetWdmThunk.c)
 */

__int64 __fastcall ViThunkFindAllThunkedImports(__int64 a1, __int64 a2, unsigned int *a3)
{
  void *v3; // rcx
  _DWORD *v4; // rsi
  _QWORD *v6; // r11
  __int64 v7; // r8
  __int64 i; // r9
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 WdmThunk; // r10
  __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = a2;
  v3 = *(void **)(a1 + 48);
  v4 = ViWdmThunksWithIatIndex;
  LODWORD(v16) = 0;
  v6 = RtlImageDirectoryEntryToData(v3, 1u, 0xCu, (PULONG)&v16);
  if ( !v6 || !(_DWORD)v16 )
    return 0LL;
  v7 = (unsigned int)v16 >> 3;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v7; v6 = (_QWORD *)(v12 + 8) )
  {
    v9 = *v6;
    WdmThunk = ViThunkGetWdmThunk(*v6, &VfPoolThunks, v7, i);
    if ( WdmThunk
      || (WdmThunk = ViThunkGetWdmThunk(v9, &VfRegularThunks, v7, v10)) != 0
      || (WdmThunk = ViThunkGetWdmThunk(v9, &VfDifThunks, v7, v10)) != 0 )
    {
      v13 = *a3;
      v14 = 3 * v13;
      v4[2 * v14] = v10;
      *(_QWORD *)&v4[2 * v14 + 2] = WdmThunk;
      *a3 = v13 + 1;
    }
    i = (unsigned int)(v10 + 1);
  }
  return *a3;
}
