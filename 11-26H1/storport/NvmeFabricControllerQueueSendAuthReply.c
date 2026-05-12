/*
 * XREFs of NvmeFabricControllerQueueSendAuthReply @ 0x1400FE2D4
 * Callers:
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     GenerateRandomBytes @ 0x14008DE9C (GenerateRandomBytes.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeControllerQueueIncrementProcessingCount @ 0x1400F9698 (NvmeControllerQueueIncrementProcessingCount.c)
 *     BuildNvmeAuthReplyMessage @ 0x140118BD4 (BuildNvmeAuthReplyMessage.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeFabricControllerQueueSendAuthReply(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  ULONG v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rdx
  int RandomBytes; // eax
  unsigned int v12; // r8d
  unsigned int i; // ecx
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rax
  int v19; // eax
  ULONG v21; // [rsp+D0h] [rbp+8h] BYREF
  int v22; // [rsp+E0h] [rbp+18h] BYREF

  LOWORD(v22) = a3;
  v4 = *(_QWORD *)(a1 + 88);
  v22 = 0;
  v6 = a2;
  if ( *(_QWORD *)(v4 + 1672) )
  {
    v21 = MEMORY[0xFFFFF78000000320];
    v8 = RtlRandomEx(&v21);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1684), v8, 0) )
    {
      v8 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 1684));
      if ( !v8 )
        v8 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 1684));
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 96) + 12LL) = v8;
    if ( *(_QWORD *)(v4 + 1672) )
      goto LABEL_7;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 2LL) )
  {
LABEL_7:
    v9 = *(_QWORD *)(a1 + 96);
    v10 = 0LL;
    switch ( *(_BYTE *)(v9 + 3) )
    {
      case 1:
        v10 = 32LL;
        break;
      case 2:
        v10 = 48LL;
        break;
      case 3:
        v10 = 64LL;
        break;
    }
    RandomBytes = GenerateRandomBytes(v10, v10, (void *)(v9 + 1320));
    a2 = (unsigned int)RandomBytes;
    if ( RandomBytes < 0 )
      return (unsigned int)a2;
    *(_BYTE *)(*(_QWORD *)(a1 + 96) + 5LL) |= 1u;
  }
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v12 = *(_DWORD *)(v6 + 56);
    if ( v12 )
    {
      for ( i = 0; i < v12; ++i )
      {
        a2 = *(unsigned int *)(v6 + 4LL * i + 120);
        if ( (unsigned int)a2 >= 0x80 && (unsigned int)a2 < *(_DWORD *)(v6 + 16) )
        {
          v14 = v6 + a2;
          if ( *(_DWORD *)(v6 + a2) == 67 )
            goto LABEL_24;
        }
      }
    }
  }
  v14 = 0LL;
LABEL_24:
  BuildNvmeAuthReplyMessage(a1, a2, a4, &v22);
  memset_0((void *)(v14 + 16), 0, 0x40uLL);
  v17 = v22;
  *(_DWORD *)(v14 + 60) = v22;
  *(_BYTE *)(v14 + 16) = 127;
  *(_BYTE *)(v14 + 20) = 5;
  *(_WORD *)(v14 + 57) = 257;
  *(_BYTE *)(v14 + 59) = -23;
  v18 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(v6 + 60) = v17;
  *(_QWORD *)(v6 + 64) = v18 + 1576;
  *(_DWORD *)(v6 + 24) = 128;
  *(_BYTE *)(v14 + 80) = 2;
  *(_WORD *)(v14 + 82) = 2;
  *(_WORD *)(v14 + 106) = *(_WORD *)(a1 + 136);
  if ( *(_WORD *)(a1 + 136) )
    NvmeControllerQueueIncrementProcessingCount(a1);
  v19 = NvmeAdapterProcessControllerQueueRequestSync(a1, v6, v15, v16, 1, 0LL, 0LL, 0);
  LODWORD(a2) = v19;
  if ( v19 < 0 || *(_BYTE *)(v6 + 3) != 1 || (*(_WORD *)(v14 + 86) & 0xFFE) != 0 )
  {
    StorEtwNvmeControllerEvent(
      v4,
      1,
      2LL,
      (__int64)L"Authentication send - reply failed",
      L"Status",
      v19,
      L"SrbStatus",
      *(_BYTE *)(v6 + 3),
      L"SCT",
      ((unsigned __int64)*(unsigned __int16 *)(v14 + 86) >> 9) & 7,
      L"SC",
      (unsigned __int64)*(unsigned __int16 *)(v14 + 86) >> 1,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    LODWORD(a2) = -1073741823;
  }
  return (unsigned int)a2;
}
