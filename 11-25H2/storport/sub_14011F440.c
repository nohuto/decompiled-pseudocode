/*
 * XREFs of sub_14011F440 @ 0x14011F440
 * Callers:
 *     sub_14011DA00 @ 0x14011DA00 (sub_14011DA00.c)
 *     sub_14011F570 @ 0x14011F570 (sub_14011F570.c)
 *     sub_140122F10 @ 0x140122F10 (sub_140122F10.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14011F440(_QWORD *SystemArgument2, __int64 a2, ULONG ProcessorIndexFromNumber)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  PRKDPC *v8; // rdx
  _BYTE ProcNumber[6]; // [rsp+30h] [rbp+8h] BYREF

  v4 = SystemArgument2[108] + ((unsigned __int64)*(unsigned __int16 *)(a2 + 138) << 7);
  *(_DWORD *)ProcNumber = 0;
  if ( *(_BYTE *)(v4 - 48) && !*(_DWORD *)SystemArgument2[159] )
  {
    if ( *(_DWORD *)(SystemArgument2[131] + 36LL)
      && (v5 = *(_QWORD *)(8LL * ProcessorIndexFromNumber + *(_QWORD *)(v4 - 40)), *(_QWORD *)(v5 + 16)) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)v5, 1, 0) )
        ExSetTimer(
          *(_QWORD *)(*(_QWORD *)(8LL * ProcessorIndexFromNumber + *(_QWORD *)(v4 - 40)) + 16LL),
          *(int *)(v4 - 44),
          0LL,
          0LL);
    }
    else
    {
      if ( (*(_DWORD *)(SystemArgument2[217] + 12LL) & 0x10) != 0 )
      {
        v6 = *((_QWORD *)qword_140168E40 + 4) + 56LL * ProcessorIndexFromNumber;
        if ( *(_QWORD *)(v6 + 8) )
        {
          *(_WORD *)ProcNumber = *(_WORD *)(v6 + 16);
          _BitScanForward64(&v7, *(_QWORD *)(v6 + 8));
          *(_DWORD *)&ProcNumber[2] = v7;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ProcNumber);
        }
      }
      v8 = *(PRKDPC **)(*(_QWORD *)(v4 - 40) + 8LL * ProcessorIndexFromNumber);
      KeInsertQueueDpc(v8[3], v8, SystemArgument2);
    }
  }
}
