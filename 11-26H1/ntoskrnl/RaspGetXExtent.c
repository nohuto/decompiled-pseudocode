/*
 * XREFs of RaspGetXExtent @ 0x14071DB24
 * Callers:
 *     BcpGetCharacterMaxResourceProfile @ 0x14071C5B4 (BcpGetCharacterMaxResourceProfile.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x14071D654 (BgpRasGetGlyphAdvanceWidth.c)
 * Callees:
 *     RaspAllocateMemory @ 0x140357710 (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x140357B8C (RaspFreeMemory.c)
 *     RaspRasterize @ 0x1404A6E94 (RaspRasterize.c)
 *     RaspGetCacheEntry @ 0x140534BE4 (RaspGetCacheEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RaspAddCacheEntry @ 0x140C5820C (RaspAddCacheEntry.c)
 */

__int64 RaspGetXExtent(unsigned __int16 a1, __int64 a2, _DWORD *a3, __int64 a4, ...)
{
  __int64 *v4; // r14
  __int64 v8; // r15
  int v9; // ecx
  int v10; // esi
  __int64 v11; // rdi
  int v12; // r8d
  __int64 v13; // r8
  int v14; // r9d
  _BYTE *Memory; // rbx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  __int128 v22; // [rsp+50h] [rbp-69h] BYREF
  __int64 v23; // [rsp+60h] [rbp-59h]
  _BYTE v24[144]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v25; // [rsp+110h] [rbp+57h] BYREF
  __int64 v26; // [rsp+118h] [rbp+5Fh]
  __int64 v27; // [rsp+120h] [rbp+67h]
  __int64 v28; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+130h] [rbp+77h] BYREF
  va_list va; // [rsp+130h] [rbp+77h]
  __int64 *v31; // [rsp+138h] [rbp+7Fh] BYREF
  va_list va1; // [rsp+138h] [rbp+7Fh]
  va_list va2; // [rsp+140h] [rbp+87h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v29 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, __int64 *);
  v28 = a4;
  v26 = a2;
  v4 = v31;
  memset_0(v24, 0, 0x46uLL);
  v8 = *v4;
  v9 = 0;
  v25 = 0;
  v10 = 0;
  LODWORD(v29) = 0;
  v11 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  if ( a1 < 0x20u )
  {
LABEL_11:
    *a3 = v9;
    if ( !v8 && v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_13;
  }
  v12 = *(_DWORD *)(a2 + 16);
  v27 = *(_QWORD *)(a2 + 8);
  RaspGetCacheEntry(
    (__int64 **)&gLoadedDiffHivesLock.StateSaveArea,
    a1,
    v12,
    *(_DWORD *)(v27 + 40),
    v27,
    (__int64 **)va1);
  Memory = v31;
  if ( v31 )
  {
LABEL_10:
    v9 = *((_DWORD *)Memory + 11);
    v4[2] = *(_QWORD *)(Memory + 62);
    goto LABEL_11;
  }
  v16 = v26;
  v10 = RaspRasterize(v26, a1, v13, v14, 0, &v28, (__int64 *)va, &v25, v4);
  if ( v10 < 0 )
  {
    v11 = v28;
    v9 = v29;
    goto LABEL_11;
  }
  if ( v8 )
  {
    Memory = v24;
LABEL_8:
    v17 = *(_DWORD *)(v16 + 16);
    v18 = v4[2];
    v19 = v27;
    v11 = v28;
    v20 = *(_DWORD *)(v27 + 40);
    *((_DWORD *)Memory + 10) = v17;
    *((_DWORD *)Memory + 11) = v29;
    *((_DWORD *)Memory + 12) = v25;
    *((_DWORD *)Memory + 13) = 4;
    *((_DWORD *)Memory + 14) = 4;
    *((_WORD *)Memory + 30) = a1;
    *((_DWORD *)Memory + 9) = v20;
    *((_QWORD *)Memory + 3) = v19;
    *((_QWORD *)Memory + 2) = v11;
    *(_QWORD *)(Memory + 62) = v18;
    if ( !v8 )
      RaspAddCacheEntry(&gLoadedDiffHivesLock.StateSaveArea, Memory);
    goto LABEL_10;
  }
  Memory = (_BYTE *)RaspAllocateMemory(0x46uLL, (__int64 *)&v22);
  if ( Memory )
    goto LABEL_8;
  v10 = -1073741801;
  v11 = v28;
  *a3 = v29;
LABEL_13:
  if ( v11 )
    RaspFreeMemory(v11, v4);
  return (unsigned int)v10;
}
