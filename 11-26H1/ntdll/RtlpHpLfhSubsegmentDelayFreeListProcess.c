/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x180063C80
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180063110 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1800633D0 (RtlpHpLfhOwnerRunMaintenance.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180063F20 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180064078 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180064260 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeListProcess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // rbx
  char v7; // r15
  int v8; // ebp
  unsigned __int64 v9; // r12
  int v10; // edx
  unsigned __int64 v11; // r12
  __int64 result; // rax
  unsigned __int16 v13; // bp
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // edi
  unsigned int v17; // eax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  int v25; // [rsp+88h] [rbp+10h]
  __int16 v26; // [rsp+98h] [rbp+20h]

  v4 = a2 >> 12;
  v6 = a3 >> 16;
  v7 = *(_BYTE *)(a2 + 51) & 1;
  v8 = *(unsigned __int16 *)(a2 + 34);
  v9 = (unsigned int)qword_1801C5EC8 ^ *(_DWORD *)(a2 + 40) ^ (unsigned int)(a2 >> 12);
  v10 = (unsigned __int16)(qword_1801C5EC8 ^ *(_WORD *)(a2 + 40) ^ (a2 >> 12));
  v11 = a2 + (v9 >> 16);
  result = WORD1(a3) + (unsigned int)*(unsigned __int16 *)(a2 + 32);
  v26 = v4;
  v25 = v10;
  v24 = a3 >> 16;
  if ( v8 != (_DWORD)result )
  {
    if ( *(_BYTE *)(a2 + 39) == 1 && !v7 )
    {
      result = (unsigned int)*(unsigned __int8 *)(a2 + 24) - 8;
      if ( WORD1(a3) > (unsigned int)result )
      {
        result = RtlpHpLfhSubsegmentDelayFreeListBatch(a1, a2, a3, v11, v10);
LABEL_15:
        *(_WORD *)(a2 + 32) += v6;
        return result;
      }
    }
LABEL_3:
    v13 = a3;
    if ( (_WORD)a3 )
    {
      do
      {
        v14 = v13 - 1;
        v15 = v10 * v14;
        v13 = *(_WORD *)(v15 + v11);
        v16 = v15 + v11;
        if ( *(_DWORD *)(v15 + v11 + 8) != (((int)v11 + (int)v15) ^ HIDWORD(*(_QWORD *)(a1 + 88)) ^ __ROL4__(*(_DWORD *)(v15 + v11) ^ *(_QWORD *)(a1 + 88), v13)) )
        {
          RtlpLogHeapFailure(23, a1, v16, a2, v14, 0LL);
          NT_ASSERT("0");
        }
        if ( !v7 && *(_BYTE *)(a2 + 39) > 1u )
        {
          v17 = RtlpHpLfhSubsegmentDecBlockCounts(
                  a1,
                  a2,
                  (unsigned int)(v16 - a2),
                  *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)qword_1801C5EC8 ^ (unsigned int)(unsigned __int16)v4);
          if ( v17 != -1 )
            RtlpHpLfhSubsegmentDecommitPages(a1, a2, v17, *(unsigned __int8 *)(a1 + 82), v22, v23, v24);
        }
        v18 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v14 & 0x1F);
        v19 = (unsigned __int64)v14 >> 5;
        if ( v7 )
        {
          v21 = *(_QWORD *)(a2 + 8 * v19 + 64);
          result = v18 & v21;
          *(_QWORD *)(a2 + 8 * v19 + 64) = v18 & v21;
          v20 = (unsigned int)v21;
        }
        else
        {
          _m_prefetchw((const void *)(a2 + 8 * v19 + 64));
          result = _InterlockedAnd64((volatile signed __int64 *)(a2 + 8 * v19 + 64), v18);
          v20 = (unsigned int)result;
        }
        if ( (~v18 & v20) == 0 )
        {
          RtlpLogHeapFailure(17, *(_QWORD *)a1, v16, a2, v14, 0LL);
          NT_ASSERT("0");
        }
        v10 = v25;
        LOWORD(v4) = v26;
      }
      while ( v13 );
      LOWORD(v6) = v24;
    }
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a2 + 39) != 1 )
    goto LABEL_3;
  memset_thunk_772440563353939046((void *)(a2 + 64), 0, 8LL * ((unsigned int)(v8 + 31) >> 5));
  *(_QWORD *)(a2 + 8LL * (((unsigned int)(v8 + 31) >> 5) - 1) + 64) = (unsigned int)~(0xFFFFFFFFuLL >> (-(char)v8 & 0x1F));
  result = v24;
  *(_WORD *)(a2 + 32) += v24;
  *(_BYTE *)(a2 + 36) = 0;
  return result;
}
