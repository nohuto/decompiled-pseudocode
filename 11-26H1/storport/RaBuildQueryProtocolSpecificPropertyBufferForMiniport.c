/*
 * XREFs of RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1400095B0
 * Callers:
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1400088DC (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x14006C8EC (RaidGetStorageAdapterProtocolSpecificProperty.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildQueryProtocolSpecificPropertyBufferForMiniport(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int *a4)
{
  __int64 v4; // r14
  int v5; // edi
  _DWORD *v6; // r11
  __int64 v7; // r10
  unsigned int v8; // esi
  __int64 v9; // r13
  char v10; // bp
  _DWORD *v11; // r15
  unsigned int v12; // r8d
  int v13; // r12d
  unsigned int v14; // edx
  unsigned int v15; // ebx
  __int64 Pool; // rax
  int v17; // eax
  unsigned int v19; // eax
  int v20; // [rsp+60h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_DWORD **)(a2 + 24);
  v7 = 0LL;
  v8 = 0;
  if ( *(_DWORD *)v4 == 1431193940 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  if ( *v6 == 49 || *v6 == 50 )
  {
    v10 = 0;
  }
  else
  {
    if ( (unsigned int)(*v6 - 67) >= 2 )
    {
      v15 = -1073741585;
      goto LABEL_20;
    }
    v10 = 1;
  }
  v11 = v6 + 2;
  if ( !v10 )
    v11 = *(_DWORD **)(a2 + 24);
  v12 = v10 != 0 ? 104 : 80;
  v13 = v11[6];
  v20 = v11[7];
  v14 = v12 + v20;
  if ( !v13 )
  {
    v8 = v12 + v20;
    if ( v14 >= v12 )
      goto LABEL_12;
    goto LABEL_22;
  }
  v19 = v13 - (v10 != 0 ? 64 : 40);
  if ( v14 < v12 )
    goto LABEL_23;
  v8 = v14 + v19;
  if ( v14 + v19 < v19 )
  {
LABEL_22:
    v8 = -1;
LABEL_23:
    v15 = -1073741675;
    goto LABEL_20;
  }
LABEL_12:
  v15 = 0;
  Pool = RaidAllocatePool(64LL, v8, 1918067026LL, a1);
  v7 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 28;
    *(_DWORD *)(Pool + 16) = 2954240;
    *(_QWORD *)(Pool + 4) = 0x4C4F434F544F5250LL;
    if ( v4 )
      v17 = *(_DWORD *)(v4 + 1392);
    else
      v17 = *(_DWORD *)(v9 + 4188);
    *(_DWORD *)(v7 + 12) = v17;
    *(_DWORD *)(v7 + 24) = v8 - 28;
    *(_DWORD *)(v7 + 28) = v10 != 0 ? 1 : 48;
    *(_DWORD *)(v7 + 32) = v10 != 0 ? 72 : 48;
    *(_DWORD *)(v7 + 36) = v11[2];
    *(_DWORD *)(v7 + 40) = v11[3];
    *(_DWORD *)(v7 + 44) = v11[4];
    *(_DWORD *)(v7 + 48) = v11[5];
    *(_DWORD *)(v7 + 64) = v11[9];
    *(_DWORD *)(v7 + 68) = v11[10];
    *(_DWORD *)(v7 + 72) = v11[11];
    if ( v10 )
    {
      *(_DWORD *)(v7 + 76) = v11[12];
      *(_DWORD *)(v7 + 80) = v11[13];
      *(_OWORD *)(v7 + 84) = 0LL;
    }
    if ( v13 )
      v5 = v10 != 0 ? 68 : 44;
    *(_DWORD *)(v7 + 52) = v5;
    *(_DWORD *)(v7 + 56) = v20;
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_20:
  *a3 = v7;
  *a4 = v8;
  return v15;
}
