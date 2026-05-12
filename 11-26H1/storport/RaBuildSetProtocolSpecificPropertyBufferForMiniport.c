/*
 * XREFs of RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1400917FC
 * Callers:
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x14006DCFC (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1400A5538 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall RaBuildSetProtocolSpecificPropertyBufferForMiniport(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  __int64 v6; // r14
  _DWORD *v8; // r10
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // r12
  unsigned int v12; // ebx
  char v13; // bp
  _DWORD *v14; // r15
  _DWORD *v15; // r15
  __int64 v16; // r13
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 Pool; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int Size; // [rsp+60h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 64);
  v8 = *(_DWORD **)(a2 + 24);
  v9 = 0LL;
  v10 = 0;
  *a5 = 0;
  *a6 = 0;
  if ( *(_DWORD *)v6 == 1431193940 )
    v11 = *(_QWORD *)(v6 + 24);
  else
    v11 = v6;
  if ( *(_DWORD *)v6 != 1431193940 )
    v6 = 0LL;
  if ( *v8 == 49 || *v8 == 50 )
  {
    v13 = 0;
  }
  else
  {
    if ( (unsigned int)(*v8 - 67) >= 2 )
    {
      v12 = -1073741585;
      goto LABEL_19;
    }
    v13 = 1;
  }
  v14 = v8 + 2;
  if ( !v13 )
    v14 = v8;
  v15 = v14 + 2;
  v16 = (unsigned int)v15[4];
  Size = v15[5];
  v17 = Size + 104;
  if ( (_DWORD)v16 )
  {
    v18 = v16 - 64;
    if ( v17 < 0x68 )
    {
LABEL_18:
      v12 = -1073741675;
      goto LABEL_19;
    }
    v10 = v17 + v18;
    if ( v17 + v18 < v18 )
    {
LABEL_17:
      v10 = -1;
      goto LABEL_18;
    }
  }
  else
  {
    if ( v17 < 0x68 )
      goto LABEL_17;
    v10 = Size + 104;
  }
  v12 = 0;
  Pool = RaidAllocatePool(64LL, v10, 1918067026LL, a1);
  v9 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 28;
    *(_DWORD *)(Pool + 16) = 2987004;
    *(_QWORD *)(Pool + 4) = 0x4F544F5250544553LL;
    if ( v6 )
      v21 = *(_DWORD *)(v6 + 1392);
    else
      v21 = *(_DWORD *)(v11 + 4188);
    *(_DWORD *)(v9 + 12) = v21;
    *(_DWORD *)(v9 + 24) = v10 - 28;
    *(_DWORD *)(v9 + 32) = 72;
    *(_DWORD *)(v9 + 28) = v13 != 0 ? 1 : 72;
    *(_DWORD *)(v9 + 36) = *v15;
    *(_DWORD *)(v9 + 40) = v15[1];
    *(_DWORD *)(v9 + 44) = v15[2];
    *(_DWORD *)(v9 + 48) = v15[3];
    *(_DWORD *)(v9 + 64) = v15[7];
    *(_DWORD *)(v9 + 68) = v15[8];
    *(_DWORD *)(v9 + 72) = v15[9];
    *(_DWORD *)(v9 + 76) = v15[10];
    *(_DWORD *)(v9 + 80) = v15[11];
    v22 = (_DWORD)v16 != 0 ? 0x44 : 0;
    *(_OWORD *)(v9 + 84) = 0LL;
    *(_DWORD *)(v9 + 52) = v22;
    *(_DWORD *)(v9 + 56) = Size;
    memmove((void *)(v9 + v22 + 36), (char *)v15 + v16, Size);
    if ( *(_DWORD *)(v9 + 36) == 3 )
    {
      v23 = *(_DWORD *)(v9 + 40);
      if ( (v23 == 3 || v23 == 5) && (unsigned __int8)*(_DWORD *)(v9 + 44) >= 0xC0u )
      {
        *a5 = 1;
        *a6 = 1;
      }
    }
  }
  else
  {
    v12 = -1073741670;
    v10 = 0;
  }
LABEL_19:
  *a3 = v9;
  *a4 = v10;
  return v12;
}
