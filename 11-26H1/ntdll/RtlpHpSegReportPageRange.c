/*
 * XREFs of RtlpHpSegReportPageRange @ 0x18011D164
 * Callers:
 *     RtlpHpSegWalk @ 0x180094C1C (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x1800041CC (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1800042A0 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlpHpPgGetUserSize @ 0x180081808 (RtlpHpPgGetUserSize.c)
 *     RtlpHpSegReportBusyBlock @ 0x1800E0BDC (RtlpHpSegReportBusyBlock.c)
 */

__int64 __fastcall RtlpHpSegReportPageRange(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  char v7; // cl
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 UserSize; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = *a2 & *(_QWORD *)a1;
  v6 = (unsigned __int64)((unsigned int)*a2 - (unsigned int)v5) >> *(_BYTE *)(a1 + 8);
  v7 = *(_BYTE *)(a1 + 8);
  v8 = v5 + 32 * v6;
  v16 = 0;
  v9 = ((unsigned int)((__int64)(v8 - (*(_QWORD *)a1 & v8)) >> 5) << v7) + (*(_QWORD *)a1 & v8);
  if ( *a2 <= v9 )
  {
    v13 = (*(unsigned __int8 *)(v8 + 31) << v7) - (unsigned __int64)*(unsigned int *)(v8 + 4);
    v14 = *(_DWORD *)(v8 + 8) & 1;
  }
  else
  {
    v10 = *(_BYTE *)(v8 + 24) & 0x1C;
    if ( v10 == 8 )
    {
      UserSize = RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(a1 + 24), v9, *a2, &v16);
    }
    else
    {
      v12 = *a2;
      if ( v10 == 12 )
        UserSize = RtlpHpVsChunkSize(*(_QWORD *)(a1 + 32), v12, a3, &v16);
      else
        UserSize = RtlpHpPgGetUserSize(
                     *(_QWORD *)(a1 + 144),
                     v12,
                     (*(unsigned __int8 *)(v8 + 31) << v7) - (unsigned __int64)*(unsigned int *)(v8 + 4),
                     &v16);
    }
    v13 = UserSize;
    v14 = v16;
  }
  return RtlpHpSegReportBusyBlock(a1, a2, v13, *(unsigned int *)(v8 + 4), v14);
}
