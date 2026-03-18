/*
 * XREFs of IoctlDeleteReservedQueuePair @ 0x14001B478
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     NVMeIoSubmissionQueueDelete @ 0x14000C3B0 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIoCompletionQueueDelete @ 0x14000CAE0 (NVMeIoCompletionQueueDelete.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 */

__int64 __fastcall IoctlDeleteReservedQueuePair(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  unsigned int v5; // ebp
  unsigned __int16 *v6; // rsi
  __int64 SrbDataBuffer; // rdx
  __int64 v8; // r10
  int v9; // edx
  __int16 *v10; // r12
  __int64 v11; // r8
  unsigned int v12; // ecx
  __int16 v13; // dx
  unsigned __int16 i; // r15
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r10
  unsigned __int16 j; // cx
  __int64 v26; // r9
  __int64 v27; // rdx
  _DWORD *v29; // [rsp+110h] [rbp+8h] BYREF
  __int64 v30; // [rsp+120h] [rbp+18h] BYREF

  v2 = 0;
  v5 = 0;
  v29 = 0LL;
  if ( !*(_WORD *)(a1 + 982) || (v6 = (unsigned __int16 *)(a1 + 954), !*(_WORD *)(a1 + 954)) )
  {
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_39;
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v29);
  if ( *v29 < 0x28u )
  {
    v5 = -1056964602;
LABEL_40:
    if ( !*(_BYTE *)(a2 + 3) )
      *(_BYTE *)(a2 + 3) = 4;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return v5;
  }
  v8 = SrbDataBuffer + 28;
  v9 = *(unsigned __int16 *)(a1 + 332);
  v10 = (__int16 *)(v8 + 8);
  v11 = *(unsigned __int16 *)(v8 + 8);
  v12 = v9 + *(unsigned __int16 *)(a1 + 982);
  v29 = (_DWORD *)v8;
  if ( (unsigned int)v11 > v12 || (unsigned __int16)v11 <= (unsigned __int16)v9 )
  {
LABEL_39:
    v5 = -1056964601;
    goto LABEL_40;
  }
  v13 = *(_WORD *)(a1 + 952);
  for ( i = 0; i < *(_WORD *)(a1 + 982) && v13; ++i )
  {
    v15 = *(_QWORD *)(a1 + 960);
    v16 = (unsigned __int64)i << 6;
    if ( *(_WORD *)(v16 + v15 + 46) == *v10 )
    {
      v17 = *(_QWORD *)(v16 + v15);
      if ( v17 && (*(_DWORD *)(a1 + 128) & 1) != 0 )
      {
        v18 = *(unsigned __int16 *)(v16 + v15 + 44);
        v30 = *(_QWORD *)(v16 + v15 + 8);
        NVMeFreeDmaBuffer(a1, v18 << 6, &v30, v17);
      }
      v19 = *(_QWORD *)(v16 + *(_QWORD *)(a1 + 960) + 24);
      if ( v19 )
        NVMeFreePool(a1, v19, v11, v17);
      v20 = *(_QWORD *)(v16 + *(_QWORD *)(a1 + 960) + 32);
      if ( v20 )
        NVMeFreePool(a1, *(_QWORD *)(v20 + 24), v11, v17);
      v21 = *(_QWORD *)(v16 + *(_QWORD *)(a1 + 960) + 32);
      if ( v21 )
        NVMeFreePool(a1, v21, v11, v17);
      if ( !NVMeIoSubmissionQueueDelete(a1, *(_WORD *)(a1 + 330) + i + 1) )
      {
        *(_DWORD *)(a1 + 28) = 19;
        v5 = -1056964607;
        StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
        goto LABEL_40;
      }
      v22 = *(_QWORD *)(a1 + 960);
      *(_OWORD *)(v16 + v22) = 0LL;
      *(_OWORD *)(v16 + v22 + 16) = 0LL;
      *(_OWORD *)(v16 + v22 + 32) = 0LL;
      *(_OWORD *)(v16 + v22 + 48) = 0LL;
      v13 = --*(_WORD *)(a1 + 952);
    }
  }
  if ( (*(_DWORD *)(a1 + 128) & 1) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 968);
    v24 = *(unsigned __int16 *)(v23 + 48LL * i + 26);
    for ( j = 0; j < *v6; ++j )
    {
      if ( *(_WORD *)(v23 + 48LL * j + 24) == *v10 )
      {
        v26 = *(_QWORD *)(v23 + 48LL * j);
        v30 = *(_QWORD *)(v23 + 48LL * j + 8);
        NVMeFreeDmaBuffer(a1, v24 << 6, &v30, v26);
        break;
      }
    }
  }
  if ( !NVMeIoCompletionQueueDelete(a1, *v10) )
  {
    *(_DWORD *)(a1 + 28) = 20;
    v5 = -1056964607;
    StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
    goto LABEL_40;
  }
  while ( v2 < *v6 )
  {
    v27 = *(_QWORD *)(a1 + 968);
    if ( *(_WORD *)(v27 + 48LL * v2 + 24) == *v10 )
    {
      *(_OWORD *)(v27 + 48LL * v2) = 0LL;
      *(_OWORD *)(v27 + 48LL * v2 + 16) = 0LL;
      *(_OWORD *)(v27 + 48LL * v2 + 32) = 0LL;
    }
    ++v2;
  }
  --*v6;
  *(_BYTE *)(a2 + 3) = 1;
  return v5;
}
