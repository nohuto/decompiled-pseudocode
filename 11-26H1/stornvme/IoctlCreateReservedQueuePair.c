/*
 * XREFs of IoctlCreateReservedQueuePair @ 0x14001AF84
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     NVMeIoSubmissionQueueDelete @ 0x14000C3B0 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIoCompletionQueueDelete @ 0x14000CAE0 (NVMeIoCompletionQueueDelete.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     GetFreeReservedQueueIndex @ 0x14001AECC (GetFreeReservedQueueIndex.c)
 *     NVMeReservedCompletionQueueCreate @ 0x140029A20 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x140029EA4 (NVMeReservedSubmissionQueueCreate.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall IoctlCreateReservedQueuePair(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r11
  __int64 v4; // r15
  unsigned int v5; // esi
  unsigned __int16 v6; // ax
  char v7; // r10
  unsigned __int16 *v8; // rbx
  __int64 SrbDataBuffer; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int16 FreeReservedQueueIndex; // ax
  __int64 v13; // r13
  int v14; // eax
  unsigned __int16 v15; // r12
  __int16 v16; // ax
  unsigned __int16 v17; // cx
  __int64 v18; // rax
  unsigned __int16 v19; // dx
  __int16 v20; // ax
  unsigned __int16 v21; // bp
  unsigned __int64 v22; // r13
  __int64 v23; // rax
  _OWORD *v24; // rax
  int v26; // [rsp+20h] [rbp-108h]
  __int64 v27; // [rsp+D0h] [rbp-58h]
  void *v28; // [rsp+D8h] [rbp-50h]
  unsigned int *v30; // [rsp+140h] [rbp+18h] BYREF
  __int64 v31; // [rsp+148h] [rbp+20h]

  LOBYTE(v2) = 0;
  v30 = 0LL;
  v4 = a2;
  v5 = 0;
  v6 = *(_WORD *)(a1 + 982);
  v7 = 4;
  if ( !v6 || *(_WORD *)(a1 + 954) >= v6 || (v8 = (unsigned __int16 *)(a1 + 952), *(_WORD *)(a1 + 952) >= v6) )
  {
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_38;
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v30);
  v31 = SrbDataBuffer;
  v10 = *v30;
  if ( (unsigned int)v10 < 0xD4 )
  {
    v5 = -1056964602;
LABEL_6:
    *(_BYTE *)(v4 + 3) = 18;
LABEL_39:
    if ( *(_BYTE *)(v4 + 3) == (_BYTE)v2 )
      *(_BYTE *)(v4 + 3) = v7;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return v5;
  }
  v11 = *(unsigned __int16 *)(SrbDataBuffer + 72);
  v28 = (void *)(SrbDataBuffer + *(unsigned int *)(SrbDataBuffer + 36) + 28LL);
  if ( v10 < 80 * v11 + 132 )
  {
    v5 = -1056964604;
    goto LABEL_6;
  }
  if ( *(unsigned int *)(SrbDataBuffer + 40) < (unsigned __int64)((v11 << 6) + 56) )
  {
    v5 = -1056964604;
    goto LABEL_39;
  }
  FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
  v13 = FreeReservedQueueIndex;
  if ( FreeReservedQueueIndex == 0xFFFF
    || (v14 = *(unsigned __int16 *)(a1 + 332),
        v15 = v14 + v13 + 1,
        v15 > v14 + (unsigned int)*(unsigned __int16 *)(a1 + 982)) )
  {
    v7 = 4;
LABEL_38:
    v5 = -1056964601;
    goto LABEL_39;
  }
  v16 = NVMeReservedCompletionQueueCreate(a1, v15, v4);
  LOBYTE(v2) = 0;
  v17 = 0;
  if ( v16 )
  {
    *(_DWORD *)(a1 + 28) = 18;
    v5 = -1056964607;
LABEL_16:
    v7 = 4;
    goto LABEL_39;
  }
  v18 = v31;
  LOWORD(v30) = 0;
  v19 = *(_WORD *)(a1 + 330) + v13 + 1;
  v27 = *(_QWORD *)(a1 + 968) + 48 * v13;
  while ( 1 )
  {
    if ( v17 >= *(_WORD *)(v18 + 72) )
    {
      *(_BYTE *)(v4 + 3) = 1;
      return v5;
    }
    LOWORD(v26) = v13;
    v20 = NVMeReservedSubmissionQueueCreate(a1, v4, v19, v15, v26, v17);
    v2 = 0;
    if ( v20 )
      break;
    LOWORD(v30) = (_WORD)v30 + 1;
    v17 = (unsigned __int16)v30;
    ++*(_WORD *)(v27 + 34);
    v18 = v31;
    if ( v17 < *(_WORD *)(v31 + 72) )
    {
      LOWORD(v13) = GetFreeReservedQueueIndex(a1);
      if ( (_WORD)v13 == 0xFFFF )
        goto LABEL_26;
      v18 = v31;
      v17 = (unsigned __int16)v30;
    }
    v19 = *(_WORD *)(a1 + 330) + v13 + 1;
  }
  *(_DWORD *)(a1 + 28) = 18;
  v5 = -1056964607;
LABEL_26:
  if ( v15 )
  {
    if ( v2 < *v8 )
    {
      v21 = v2;
      do
      {
        v22 = (unsigned __int64)v21 << 6;
        if ( *(_WORD *)(*(_QWORD *)(a1 + 960) + v22 + 46) == v15 )
        {
          NVMeIoSubmissionQueueDelete(a1, *(_WORD *)(a1 + 330) + v21 + 1);
          v23 = *(_QWORD *)(a1 + 960);
          *(_OWORD *)(v23 + ((unsigned __int64)v21 << 6)) = 0LL;
          *(_OWORD *)(v23 + v22 + 16) = 0LL;
          *(_OWORD *)(v23 + v22 + 32) = 0LL;
          *(_OWORD *)(v23 + v22 + 48) = 0LL;
        }
        ++v21;
      }
      while ( v21 < *v8 );
      v4 = a2;
    }
    NVMeIoCompletionQueueDelete(a1, v15);
    v24 = (_OWORD *)(*(_QWORD *)(a1 + 968) + 48 * (v15 - (unsigned __int64)*(unsigned __int16 *)(a1 + 332) - 1));
    *v24 = 0LL;
    v24[1] = 0LL;
    v24[2] = 0LL;
    memset(v28, 0, 0x78uLL);
    LOBYTE(v2) = 0;
  }
  if ( v5 )
    goto LABEL_16;
  return v5;
}
