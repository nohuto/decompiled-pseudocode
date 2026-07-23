/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x180010880
 * Callers:
 *     RtlpCollectFreeBlocks @ 0x180002140 (RtlpCollectFreeBlocks.c)
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateNTHeapInternal @ 0x1800078E0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180010020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x180012A40 (RtlpFindAndCommitPages.c)
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlSetUserValueHeap @ 0x18005FD00 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180060070 (RtlDebugAllocateHeap.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpPopulateListIndex @ 0x18006C8A8 (RtlpPopulateListIndex.c)
 *     RtlpSetupExtendedBlock @ 0x1800C7A00 (RtlpSetupExtendedBlock.c)
 *     RtlGetUserInfoHeap @ 0x1800D9310 (RtlGetUserInfoHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 *     RtlpCoalesceHeap @ 0x180103CD4 (RtlpCoalesceHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108530 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x180146460 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpAnalyzeHeapFailure(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  int v4; // r8d
  int v5; // ecx
  __int64 v6; // rax
  char v7; // r11
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // rcx
  __int64 v14; // r11
  __int64 v15; // r9
  int v16; // ecx

  v3 = 0LL;
  v4 = 0;
  if ( byte_1801CA908 )
    return;
  v5 = *(_DWORD *)(a2 + 8);
  if ( (v5 & *(_DWORD *)(a1 + 124)) == 0 )
  {
    v4 = 10;
    if ( (*(_DWORD *)(a1 + 112) & 0x4000000) != 0 || HIBYTE(v5) == (BYTE1(v5) ^ (unsigned __int8)(v5 ^ BYTE2(v5))) )
    {
      v4 = 1;
      v6 = *(unsigned __int8 *)(a2 + 14);
      v3 = (_BYTE)v6 ? (a2 & 0xFFFFFFFFFFFF0000uLL) - (v6 << 16) + 0x10000 : a1;
      if ( *(_DWORD *)(v3 + 16) == -1114130 )
      {
        v7 = *(_BYTE *)(a2 + 15);
        if ( v7 == 4 || (v4 = 2, a2 >= *(_QWORD *)(v3 + 48)) && a2 < *(_QWORD *)(v3 + 72) && *(_QWORD *)(v3 + 40) == a1 )
        {
          v4 = 3;
          if ( v7 == 3 )
          {
            v8 = a2 + 16;
            v9 = *(_QWORD *)(a2 + 48);
            if ( (v9 & 0xFFF) == 0 && v9 >= *(_QWORD *)(v3 + 48) && *(_QWORD *)(a2 + 56) + v9 <= *(_QWORD *)(v3 + 72) )
            {
              v4 = 4;
              v10 = **(_QWORD **)(a2 + 24);
              if ( v10 == *(_QWORD *)(*(_QWORD *)v8 + 8LL) && v10 == v8 )
              {
                v4 = 5;
                v11 = **(_QWORD **)(a2 + 40);
                if ( v11 == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) && v11 == a2 + 32 )
                  goto LABEL_19;
              }
            }
          }
          else
          {
            v4 = 6;
            if ( (*(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 16LL * (unsigned __int16)v5 + 12)) == (_WORD)v5 )
            {
LABEL_19:
              v4 = 7;
              v12 = *(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140);
              if ( !v12 )
                goto LABEL_24;
              v13 = a2 - 16LL * v12;
              if ( *(_DWORD *)(a1 + 124) )
              {
                LODWORD(v13) = *(_DWORD *)(v13 + 8);
                if ( ((unsigned int)v13 & *(_DWORD *)(a1 + 124)) != 0 )
                  LODWORD(v13) = *(_DWORD *)(a1 + 136) ^ v13;
              }
              else
              {
                LOWORD(v13) = *(_WORD *)(v13 + 8);
              }
              if ( (_WORD)v13 == (*(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140)) )
              {
LABEL_24:
                v4 = 8;
                if ( (*(_BYTE *)(a2 + 10) & 1) != 0
                  || (v14 = **(_QWORD **)(a2 + 24), v14 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v14 == a2 + 16 )
                {
                  v4 = 9;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  switch ( v4 )
  {
    case 10:
LABEL_40:
      v16 = 3;
LABEL_41:
      LODWORD(v15) = v4;
      break;
    case 2:
      v15 = *(_QWORD *)(v3 + 40);
      v16 = 12;
      break;
    case 3:
      LODWORD(v15) = 3;
      v16 = 0;
      break;
    default:
      switch ( v4 )
      {
        case 0:
        case 1:
        case 6:
        case 7:
          goto LABEL_40;
        case 4:
        case 5:
          v16 = 14;
          goto LABEL_41;
        case 8:
          LODWORD(v15) = 8;
          v16 = 13;
          break;
        default:
          v16 = 2;
          goto LABEL_41;
      }
      break;
  }
  RtlpLogHeapFailure(v16, a1, a2, v15, 0LL, 0LL);
}
