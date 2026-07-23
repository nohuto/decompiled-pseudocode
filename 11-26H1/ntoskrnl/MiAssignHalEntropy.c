/*
 * XREFs of MiAssignHalEntropy @ 0x140CFF258
 * Callers:
 *     MiInitializeSystemVa @ 0x140D10EF8 (MiInitializeSystemVa.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

struct _LIST_ENTRY *__fastcall MiAssignHalEntropy(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r10d
  _QWORD *v4; // r9
  unsigned __int64 v5; // r11
  __int16 v6; // ax
  ULONG ClearBitsAndSet; // eax
  struct _LIST_ENTRY *result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v10[64]; // [rsp+30h] [rbp-58h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset_0(v10, 0, sizeof(v10));
  BitMapHeader.Buffer = (unsigned int *)v10;
  if ( (MEMORY[0xFFFFF6FB7DBEDF78] & 1) != 0 )
  {
    v3 = 0;
    v4 = (_QWORD *)0xFFFFF6FB7DBEF000LL;
    v5 = 0LL;
    do
    {
      if ( *v4 )
      {
        v2 = (unsigned int)(char)v10[v5 >> 3];
        LODWORD(v2) = v2 | (1 << (v3 & 7));
        v10[v5 >> 3] = v2;
      }
      ++v4;
      ++v3;
      ++v5;
    }
    while ( v3 < 0x200 );
  }
  v6 = ExGenRandom(1, v2);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 3u, v6 & 0x1FF);
  stru_140E2DAB0.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)0x80000000LL;
  stru_140E2DAB0.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((ClearBitsAndSet - 8704LL) << 30);
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2960LL) = stru_140E2DAB0.SuspendEvent.Header.WaitListHead.Flink;
  result = stru_140E2DAB0.SuspendEvent.Header.WaitListHead.Blink;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2968LL) = stru_140E2DAB0.SuspendEvent.Header.WaitListHead.Blink;
  return result;
}
