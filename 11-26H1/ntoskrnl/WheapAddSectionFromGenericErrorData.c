/*
 * XREFs of WheapAddSectionFromGenericErrorData @ 0x1406DA768
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x1406DA99C (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall WheapAddSectionFromGenericErrorData(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        size_t Size,
        char a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  __int64 v11; // rdx
  unsigned int v12; // r10d
  size_t v13; // r8
  const GUID *v14; // rcx
  __int64 v15; // r11

  v6 = *(_DWORD *)(a1 + 24);
  v7 = 0;
  v8 = *(unsigned __int16 *)(a2 + 10);
  if ( v8 >= v6 )
  {
    if ( (*(_BYTE *)(a4 + 23) & 1) == 0 || !(_WORD)v8 )
      return (unsigned int)-1073741789;
    LOWORD(v8) = v8 - 1;
    *(_WORD *)(a2 + 10) = v8;
  }
  v11 = a2 + 128;
  if ( (_WORD)v8 )
  {
    v11 += 72LL * (unsigned __int16)v8;
    v12 = *(_DWORD *)(v11 - 72) + *(_DWORD *)(v11 - 68);
  }
  else
  {
    v12 = 72 * v6 + 128;
  }
  if ( a6 )
  {
    v13 = *(unsigned int *)(a4 + 24);
    v14 = (const GUID *)a4;
    v15 = 72LL;
    if ( *(_WORD *)(a4 + 20) != 768 )
      v15 = 64LL;
  }
  else
  {
    v13 = (unsigned int)Size;
    v14 = &GENERIC_SECTION_GUID;
    v15 = 0LL;
  }
  if ( a3 - v12 >= (unsigned int)v13 )
  {
    *(_DWORD *)v11 = v12;
    *(_DWORD *)(v11 + 4) = v13;
    *(_WORD *)(v11 + 8) = 768;
    *(_BYTE *)(v11 + 10) = *(_BYTE *)(a4 + 22);
    *(_DWORD *)(v11 + 12) = *(unsigned __int8 *)(a4 + 23);
    *(GUID *)(v11 + 16) = *v14;
    *(_OWORD *)(v11 + 32) = *(_OWORD *)(a4 + 28);
    *(_DWORD *)(v11 + 48) = *(_DWORD *)(a4 + 16);
    *(_OWORD *)(v11 + 52) = *(_OWORD *)(a4 + 44);
    *(_DWORD *)(v11 + 68) = *(_DWORD *)(a4 + 60);
    memmove((void *)(a2 + v12), (const void *)(v15 + a4), v13);
    ++*(_WORD *)(a2 + 10);
    return v7;
  }
  return (unsigned int)-1073741789;
}
