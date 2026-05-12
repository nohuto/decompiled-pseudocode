/*
 * XREFs of RaidGetTcgConfigInformation @ 0x1400946E8
 * Callers:
 *     RaidAdapterStorageTcgQueryCapability @ 0x140085584 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x140089E3C (RaidUnitStorageTcgQueryCapability.c)
 * Callees:
 *     RaidGetTcgLockingObjects @ 0x140094CAC (RaidGetTcgLockingObjects.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidGetTcgConfigInformation(_DWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rsi
  int TcgProperties; // r14d
  __int64 v8; // r8
  __int64 v9; // rbx
  int TcgLockingObjects; // eax
  int v11; // ecx
  _DWORD *v12; // r8
  int v13; // r9d
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // edx
  int *v17; // rax
  unsigned int v18; // edx
  int v19; // ecx
  int *v20; // rdx
  unsigned int v21; // ecx
  int v22; // eax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v4 = 0LL;
  TcgProperties = RaidGetTcgProperties(a1, a3);
  if ( TcgProperties >= 0 )
  {
    v8 = 900LL;
    if ( *a1 != 1431193940 )
      v8 = 1532LL;
    v9 = *(_QWORD *)&a1[v8];
    if ( !*(_BYTE *)(v9 + 53)
      || (TcgLockingObjects = RaidGetTcgLockingObjects(a1, &P, a3),
          v4 = P,
          TcgProperties = TcgLockingObjects,
          TcgLockingObjects >= 0) )
    {
      *(_QWORD *)(a2 + 4) = 52LL;
      *(_WORD *)a2 = 1;
      if ( !*(_BYTE *)(v9 + 152) || (v11 = 1, !*(_BYTE *)(v9 + 153)) )
        v11 = 0;
      v12 = (_DWORD *)(a2 + 16);
      v13 = 2;
      v14 = v11 | *(_DWORD *)(a2 + 12) & 0xFFFFFFFE;
      *(_DWORD *)(a2 + 12) = v14;
      v15 = v14 ^ (v14 ^ (2 * *(unsigned __int8 *)(v9 + 148))) & 2;
      *(_DWORD *)(a2 + 12) = v15;
      *(_DWORD *)(a2 + 12) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(4 * *(_BYTE *)(v9 + 97))) & 4;
      v16 = *(_DWORD *)(a2 + 16) ^ (*(_DWORD *)(a2 + 16) ^ *(unsigned __int8 *)(v9 + 149)) & 1;
      v17 = (int *)(a2 + 16);
      *(_DWORD *)(a2 + 16) = v16;
      if ( !*(_BYTE *)(v9 + 149) )
      {
        if ( *(_BYTE *)(v9 + 150) )
          v13 = 0;
        else
          v17 = (int *)(a2 + 16);
      }
      v18 = v13 | v16 & 0xFFFFFFFD;
      *v12 = v18;
      v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(4 * *(_BYTE *)(v9 + 53))) & 4;
      v20 = v17;
      *v12 = v19;
      if ( *(_BYTE *)(v9 + 53) )
      {
        v19 |= 8u;
        v20 = (int *)(a2 + 16);
        *v12 = v19;
        if ( *(_BYTE *)(v9 + 152) )
        {
          v20 = v17;
          if ( *(_BYTE *)(v9 + 153) )
          {
            if ( *(_BYTE *)(v9 + 134) )
            {
              v19 &= ~8u;
              *(_DWORD *)(a2 + 16) = v19;
            }
          }
        }
      }
      *v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(16 * *(_BYTE *)(v9 + 134))) & 0x10;
      if ( *(_BYTE *)(v9 + 53) )
      {
        v21 = 1;
        for ( *(_DWORD *)(a2 + 20) = *(_DWORD *)(v9 + 128) - 1; v21 < *(_DWORD *)(v9 + 128); ++v21 )
        {
          if ( !v4[20 * v21 + 18] && !*(_QWORD *)&v4[20 * v21 + 14] )
            ++*(_DWORD *)(a2 + 24);
        }
        *(_DWORD *)(a2 + 28) = *(_DWORD *)(v9 + 140) / (unsigned int)*(unsigned __int16 *)(v9 + 136);
        *(_DWORD *)(a2 + 32) = *(_DWORD *)(v9 + 72) - 1;
      }
      *(_DWORD *)(a2 + 36) = *(_DWORD *)(v9 + 100) * *(_DWORD *)(v9 + 104);
      v22 = *(_DWORD *)(v9 + 100) * *(_DWORD *)(v9 + 112);
      *(_DWORD *)(a2 + 44) = 0;
      *(_DWORD *)(a2 + 48) = 32;
      *(_DWORD *)(a2 + 40) = v22;
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0x43546152u);
  }
  return (unsigned int)TcgProperties;
}
