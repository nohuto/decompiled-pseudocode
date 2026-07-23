/*
 * XREFs of KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x1407BE798
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     KiDpcRuntimeHistoryHashTableAllocate @ 0x1404E0090 (KiDpcRuntimeHistoryHashTableAllocate.c)
 */

__int64 __fastcall KiInitializeSingleDpcRuntimeHistoryHashTable(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  char *v6; // rax
  char *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // r15
  _QWORD *v11; // r11
  __int64 v12; // rcx
  struct _PRIVILEGE_SET *v13; // rcx
  int v14; // eax
  __int64 v16; // [rsp+48h] [rbp+10h]

  v2 = KiDpcRuntimeHistoryHashTableAllocate();
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
    v5 = v2 | 1;
    v6 = (char *)KiDpcRuntimeHistoryHashTableAllocate();
    v7 = v6;
    if ( v6 )
    {
      if ( (v6 + 512 >= v6 ? 0x40 : 0) != 0 )
        memset64(v6, v5, v6 + 512 >= v6 ? 0x40 : 0);
      v8 = 0;
      v9 = -1LL << (*(_BYTE *)(v4 + 4) & 0x1F);
      if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v10 = *(_QWORD *)(v4 + 8);
          while ( 1 )
          {
            v11 = *(_QWORD **)(v10 + 8LL * v8);
            if ( ((unsigned __int8)v11 & 1) != 0 )
              break;
            *(_QWORD *)(v10 + 8LL * v8) = *v11;
            v16 = v9 & v11[1];
            v12 = (29 * BYTE4(v16)
                 + 25 * BYTE5(v16)
                 + -27 * BYTE6(v16)
                 - 15 * (29 * (_BYTE)v16 + 25 * BYTE1(v16) - 27 * BYTE2(v16) + BYTE3(v16) - 1)
                 + HIBYTE(v16)) & 0x3F;
            *v11 = *(_QWORD *)&v6[8 * v12];
            *(_QWORD *)&v6[8 * v12] = v11;
          }
          ++v8;
        }
        while ( v8 < *(_DWORD *)(v4 + 4) >> 5 );
      }
      v13 = *(struct _PRIVILEGE_SET **)(v4 + 8);
      v14 = *(_DWORD *)(v4 + 4) & 0x1F;
      *(_QWORD *)(v4 + 8) = v7;
      *(_DWORD *)(v4 + 4) = v14 | 0x800;
      if ( v13 )
        CmSiFreeMemory(v13);
    }
    else if ( *(_DWORD *)(v4 + 4) < 0x20u )
    {
      v3 = -1073741801;
      CmSiFreeMemory((PPRIVILEGE_SET)v4);
      return v3;
    }
    *(_QWORD *)(a1 + 14352) = v4;
    *(_QWORD *)(a1 + 14360) = 0LL;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
