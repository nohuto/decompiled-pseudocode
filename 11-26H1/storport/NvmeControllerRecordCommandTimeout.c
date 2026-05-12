/*
 * XREFs of NvmeControllerRecordCommandTimeout @ 0x14012BB54
 * Callers:
 *     NvmeControllerDetectCommandTimeout @ 0x14012B43C (NvmeControllerDetectCommandTimeout.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 */

int __fastcall NvmeControllerRecordCommandTimeout(__int64 a1, _OWORD *a2, __int16 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx

  v6 = 112LL * *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL) + 4LL);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL) + 8LL);
  *(_QWORD *)(v7 + v6) = MEMORY[0xFFFFF78000000014];
  *(_WORD *)(v7 + v6 + 96) = a3;
  *(_OWORD *)(v7 + v6 + 16) = *a2;
  *(_OWORD *)(v7 + v6 + 32) = a2[1];
  *(_OWORD *)(v7 + v6 + 48) = a2[2];
  *(_OWORD *)(v7 + v6 + 64) = a2[3];
  *(_QWORD *)(v7 + v6 + 80) = *(_QWORD *)(a4 + 24);
  *(_WORD *)(v7 + v6 + 100) = *(_WORD *)(a4 + 52);
  *(_WORD *)(v7 + v6 + 102) = *(_WORD *)(a4 + 58);
  *(_BYTE *)(v7 + v6 + 104) = *(_BYTE *)(a4 + 60);
  *(_QWORD *)(v7 + v6 + 8) = *(_QWORD *)(a4 + 64);
  *(_DWORD *)(v7 + v6 + 88) = *(_DWORD *)(a4 + 80);
  *(_WORD *)(v7 + v6 + 98) = *(_WORD *)(a4 + 56);
  *(_DWORD *)(v7 + v6 + 92) = *(_DWORD *)(a4 + 48);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL);
  ++*(_BYTE *)(v8 + 4);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL);
  if ( *(_BYTE *)(v9 + 4) >= *(_BYTE *)(v9 + 5) )
    *(_BYTE *)(v9 + 4) = 1;
  return StorEtwNvmeControllerEvent(
           a1,
           1,
           3LL,
           (__int64)L"Controller command timeout",
           L"QueueId",
           a3,
           L"NamespaceId",
           *(_DWORD *)(a4 + 80),
           L"CDW0",
           *(_DWORD *)a2,
           L"TransferSizeInBytes",
           *(_DWORD *)(a4 + 48),
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0);
}
