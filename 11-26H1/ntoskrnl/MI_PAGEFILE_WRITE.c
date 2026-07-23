/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x140401D2C
 * Callers:
 *     MiModwriterIssueWrite @ 0x140401A18 (MiModwriterIssueWrite.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_PAGEFILE_WRITE(__int64 a1, __int64 a2, char a3, int a4, int a5)
{
  __int64 v5; // r10
  __int64 v7; // rbx
  unsigned __int64 v8; // r11
  char Priority; // cl
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(v5 + 224);
  v8 = (unsigned __int64)(((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 23568), 1u) + 1) & 0x1F) << 7;
  *(_DWORD *)(v8 + v7 + 23576) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v8 + v7 + 23583) = a4 != 0;
  *(_BYTE *)(v8 + v7 + 23581) = Priority;
  *(_BYTE *)(v8 + v7 + 23582) = a3;
  *(_QWORD *)(v8 + v7 + 23584) = a2;
  *(_BYTE *)(v8 + v7 + 23580) = *(_BYTE *)(v5 + 172) & 0xF;
  *(_QWORD *)(v8 + v7 + 23592) = *(_QWORD *)(v7 + 22464);
  *(_QWORD *)(v8 + v7 + 23600) = *(_QWORD *)(v7 + 23248);
  *(_QWORD *)(v8 + v7 + 23608) = *(_QWORD *)(v7 + 23456);
  *(_QWORD *)(v8 + v7 + 23616) = *(_QWORD *)(v7 + 23376);
  *(_QWORD *)(v8 + v7 + 23640) = *(_QWORD *)(88LL * (*(_WORD *)(v5 + 172) & 0xF) + v7 + 4624);
  *(_QWORD *)(v8 + v7 + 23624) = *(_QWORD *)(v7 + 4368);
  result = *(_QWORD *)(v7 + 4496);
  *(_QWORD *)(v8 + v7 + 23632) = result;
  *(_OWORD *)(v8 + v7 + 23648) = *(_OWORD *)(a1 + 104);
  *(_OWORD *)(v8 + v7 + 23664) = *(_OWORD *)(a1 + 120);
  *(_OWORD *)(v8 + v7 + 23680) = *(_OWORD *)(a1 + 136);
  *(_QWORD *)(v8 + v7 + 23696) = *(_QWORD *)(a1 + 152);
  return result;
}
