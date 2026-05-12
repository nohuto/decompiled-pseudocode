/*
 * XREFs of NvmeAdapterPrepareControllerQueueRequest @ 0x1400EC0F8
 * Callers:
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400EC344 (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 * Callees:
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 */

_QWORD *__fastcall NvmeAdapterPrepareControllerQueueRequest(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        int a9,
        unsigned __int16 a10,
        unsigned __int16 a11,
        __int64 a12,
        __int64 a13,
        _QWORD *a14)
{
  unsigned int v16; // r10d
  __int64 i; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // rdi
  int v23; // eax
  char v24; // al
  __int16 v25; // ax
  char v26; // cl
  __int64 v27; // r13
  __int64 v28; // rbp
  __int64 v29; // rax
  _QWORD *result; // rax
  signed __int32 v31[22]; // [rsp+0h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a4 + 2) == 40 )
  {
    v16 = *(_DWORD *)(a4 + 56);
    if ( v16 )
    {
      for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
      {
        v18 = *(unsigned int *)(a4 + 4 * i + 120);
        if ( (unsigned int)v18 >= 0x80 && (unsigned int)v18 < *(_DWORD *)(a4 + 16) )
        {
          v19 = a4 + v18;
          if ( *(_DWORD *)(a4 + v18) == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v19 = 0LL;
LABEL_10:
  v20 = v19 + 16;
  v21 = (unsigned __int64)a11 << 7;
  *(_WORD *)(v20 + 2) = a11;
  *(_QWORD *)(a3[3] + 16LL * a10) = v20;
  v22 = a3[4];
  *(_QWORD *)(v21 + v22 + 24) = a4;
  if ( a8 )
    v23 = *(_DWORD *)(a8 + 56);
  else
    v23 = -1;
  *(_DWORD *)(v21 + v22 + 80) = v23;
  *(_QWORD *)(v21 + v22 + 32) = a12;
  *(_QWORD *)(v21 + v22 + 40) = a13;
  *(_WORD *)(v21 + v22 + 56) = a10;
  *(_DWORD *)(v21 + v22 + 48) = *(_DWORD *)(a4 + 60);
  v24 = *(_BYTE *)(v21 + v22 + 60);
  if ( a5 )
  {
    *(_BYTE *)(v21 + v22 + 60) = v24 | 0x40;
  }
  else
  {
    *(_BYTE *)(v21 + v22 + 60) = v24 & 0xBF;
    if ( a8 )
      v25 = *(_WORD *)(a8 + 416);
    else
      v25 = *(_WORD *)(a1 + 1108);
    *(_WORD *)(v21 + v22 + 58) = v25;
    *(_QWORD *)(v21 + v22 + 64) = **(_QWORD **)(*(_QWORD *)(a3[11] + 1288LL) + 40LL);
  }
  if ( a6 || !a7 )
    v26 = 2;
  else
    v26 = 0;
  v27 = *(_QWORD *)(v21 + v22 + 16);
  *(_BYTE *)(v21 + v22 + 60) = v26 | *(_BYTE *)(v21 + v22 + 60) & 0xFD;
  v28 = v27 + 48;
  RaidZeroXrb(v27 + 48, v20, 0, 0LL);
  *(_BYTE *)(v27 + 64) = *(_BYTE *)(v27 + 64) & 0xE3 | 4;
  *(_QWORD *)(v27 + 232) = *(_QWORD *)(a4 + 64);
  *(_QWORD *)(v27 + 216) = a4;
  *(_QWORD *)(v27 + 208) = a7;
  if ( a7 )
    v29 = *(_QWORD *)(a7 + 8);
  else
    v29 = 0LL;
  *(_BYTE *)(v27 + 65) |= 0x20u;
  *(_QWORD *)(v27 + 152) = v29;
  *(_DWORD *)(v27 + 68) = a9;
  *(_QWORD *)(v27 + 832) = a2;
  *(_QWORD *)(v27 + 264) = a1;
  *(_WORD *)(v27 + 828) = a10;
  *(_WORD *)(v27 + 830) = a11;
  *(_DWORD *)(a4 + 24) |= 0x100u;
  *(_QWORD *)(a4 + 96) = v28;
  *(_DWORD *)(a4 + 40) = 10;
  RaSrbSetMiniportContext((int *)a1, a4, v27 + 1200);
  KeInitializeEvent((PRKEVENT)(v27 + 712), NotificationEvent, 0);
  *(_QWORD *)(v27 + 704) = NvmeAdapterCompleteControllerQueueRequest;
  _InterlockedOr(v31, 0);
  *(_BYTE *)(v21 + v22 + 60) |= 1u;
  result = a14;
  *a14 = v28;
  return result;
}
