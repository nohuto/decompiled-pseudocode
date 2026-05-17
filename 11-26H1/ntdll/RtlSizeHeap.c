/*
 * XREFs of RtlSizeHeap @ 0x18001A7D0
 * Callers:
 *     RtlDebugSizeHeap @ 0x180014CCC (RtlDebugSizeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocationSize @ 0x18009EFD8 (RtlpAllocationSize.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800C497C (RtlpScanHeapAllocBlocks.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180101878 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpDumpEntryInfo @ 0x1801210B8 (RtlpDumpEntryInfo.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180019070 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpVsChunkSize @ 0x1800190EC (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1800191C0 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18001A070 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpHpPgGetUserSize @ 0x1800B1C98 (RtlpHpPgGetUserSize.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlSizeHeap(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  int v7; // r14d
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r11
  unsigned __int64 v11; // r8
  char v12; // di
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  char v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 UserSize; // rdi
  int v21; // edi
  int v22; // ecx
  char v23; // al
  unsigned __int64 v24; // r9
  __int64 v25; // r8
  char v26; // dl
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  int v31; // edx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // eax
  struct _TEB *v35; // rbx

  v3 = 0LL;
  v4 = a3;
  if ( !a1 )
    RtlpLogHeapFailure(19, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v21 = *(_DWORD *)(a1 + 116) | a2;
    if ( (v21 & 0x61000000) != 0 && (v21 & 0x10000000) == 0 )
      return RtlDebugSizeHeap(a1, v21, v4);
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v4 = (unsigned __int64)RtlpProbeUserBufferSafe(a1, v4);
    }
    else
    {
      if ( (v4 & 0xF) != 0 )
      {
        v22 = 9;
        goto LABEL_29;
      }
      v4 -= 16LL;
      _m_prefetchw((const void *)v4);
      if ( *(_BYTE *)(v4 + 15) == 5 )
        v4 -= 16LL * *(unsigned __int8 *)(v4 + 14);
      if ( (*(_BYTE *)(v4 + 15) & 0x3F) == 0 )
      {
        v22 = 8;
LABEL_29:
        RtlpLogHeapFailure(v22, a1, v4, 0, 0LL, 0LL);
        v4 = 0LL;
      }
    }
    if ( !v4 )
    {
      v35 = NtCurrentTeb();
      v35->LastStatusValue = -1073741811;
      v35->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC000000D);
      return -1LL;
    }
    v23 = *(_BYTE *)(v4 + 15);
    if ( v23 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v34 = *(_DWORD *)(v4 + 8);
        if ( (v34 & *(_DWORD *)(a1 + 124)) != 0 )
          LOWORD(v34) = *(_WORD *)(a1 + 136) ^ v34;
      }
      else
      {
        LOWORD(v34) = *(_WORD *)(v4 + 8);
      }
      return *(_QWORD *)(v4 - 16) - (unsigned __int16)v34;
    }
    if ( v23 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        LODWORD(v25) = *(_DWORD *)(v4 + 8);
        if ( ((unsigned int)v25 & *(_DWORD *)(a1 + 124)) != 0 )
          LOWORD(v25) = *(_WORD *)(a1 + 136) ^ v25;
      }
      else
      {
        LOWORD(v25) = *(_WORD *)(v4 + 8);
      }
      v24 = v4 >> 4;
    }
    else
    {
      v24 = v4 >> 4;
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((v4 >> 4) ^ *(_WORD *)(v4 + 8) ^ a1) )
        v25 = 0LL;
      else
        v25 = *(_QWORD *)(v4
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)(v4 >> 4) ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)a1) >> 12));
      LOWORD(v25) = *(_WORD *)(v25 + 36);
    }
    v26 = *(_BYTE *)(v4 + 15);
    if ( v26 == 5 )
      return 16LL * (unsigned __int16)v25
           - (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v4 + 12));
    if ( (v26 & 0x40) != 0 )
      return 16LL * (unsigned __int16)v25 - *(unsigned __int16 *)(v4 + 16LL * (*(_BYTE *)(v4 + 15) & 0x3F) + 12);
    if ( (v26 & 0x3F) == 0x3F )
    {
      if ( v26 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v28 = *(_DWORD *)(v4 + 8);
          if ( (v28 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v27 = *(_QWORD *)(v4 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v28));
            return 16LL * (unsigned __int16)v25 - v27;
          }
        }
        else
        {
          LOWORD(v28) = *(_WORD *)(v4 + 8);
        }
      }
      else
      {
        if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v4 + 8) ^ v24 ^ a1)) )
          v3 = *(_QWORD *)(v4
                         - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)v24 ^ (unsigned int)a1) >> 12));
        LOWORD(v28) = *(_WORD *)(v3 + 36);
      }
      v27 = *(_QWORD *)(v4 + 16LL * (unsigned __int16)v28);
    }
    else
    {
      v27 = *(_BYTE *)(v4 + 15) & 0x3F;
    }
    return 16LL * (unsigned __int16)v25 - v27;
  }
  v7 = *(_DWORD *)(a1 + 20);
  if ( !v4 || (v4 & 0xF) != 0 )
  {
LABEL_55:
    UserSize = -1LL;
LABEL_56:
    RtlpLogHeapFailure(9, a1, v4, 0, 0LL, 0LL);
    return UserSize;
  }
  if ( (_WORD)v4 )
  {
    v8 = 0;
    goto LABEL_10;
  }
  v9 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801C78C0, 2 * ((v4 - qword_1801C78B8) >> 20));
  if ( v9 )
  {
    v8 = v9 - 1;
    if ( v8 != 2 )
    {
LABEL_10:
      v10 = a1 + 192LL * v8;
      v11 = v4 & *(_QWORD *)(v10 + 320);
      if ( !(RtlpHpHeapGlobals ^ v11 ^ *(_QWORD *)(v11 + 0x10) ^ (v10 + 320))
        && (v12 = *(_BYTE *)(v10 + 328),
            v13 = v11 + 32 * ((unsigned __int64)(unsigned int)(v4 - v11) >> v12),
            v14 = v13 - 32LL * *(unsigned __int8 *)(v13 + 26),
            v15 = v11 + ((unsigned int)((__int64)(v14 - v11) >> 5) << v12),
            v16 = *(_BYTE *)(v14 + 24),
            (v16 & 3) == 3)
        && (v15 == v4 || (v16 & 0x1Cu) >= 8) )
      {
        v17 = (v14 & *(_QWORD *)(v10 + 320))
            + ((unsigned int)((__int64)(v14 - (v14 & *(_QWORD *)(v10 + 320))) >> 5) << v12);
        if ( v4 <= v17 )
        {
          UserSize = (*(unsigned __int8 *)(v14 + 31) << v12) - (unsigned __int64)*(unsigned int *)(v14 + 4);
        }
        else
        {
          v18 = *(_BYTE *)(v14 + 24) & 0x1C;
          if ( (_DWORD)v18 == 8 )
          {
            UserSize = RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(v10 + 344), v17, v4, 0LL);
          }
          else if ( (_DWORD)v18 == 12 )
          {
            UserSize = RtlpHpVsChunkSize(*(_QWORD *)(v10 + 352), v4, v18, 0LL);
          }
          else
          {
            UserSize = RtlpHpPgGetUserSize(
                         *(_QWORD *)(v10 + 464),
                         v4,
                         (*(unsigned __int8 *)(v14 + 31) << v12) - (unsigned __int64)*(unsigned int *)(v14 + 4),
                         0LL);
          }
        }
      }
      else
      {
        UserSize = -1LL;
      }
      goto LABEL_18;
    }
  }
  RtlAcquireSRWLockShared(a1 + 64);
  v29 = *(_QWORD *)(a1 + 80);
  v30 = *(_QWORD *)(a1 + 72);
  if ( (v29 & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_78;
    v30 ^= a1 + 72;
  }
  v31 = v29 & 1;
  if ( !v30 )
    goto LABEL_78;
  do
  {
    v32 = *(_QWORD *)(v30 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v4 < v32 )
    {
      v33 = *(_QWORD *)v30;
      if ( v31 && v33 )
        goto LABEL_66;
    }
    else
    {
      if ( v4 <= v32 )
        break;
      v33 = *(_QWORD *)(v30 + 8);
      if ( v31 && v33 )
      {
LABEL_66:
        v30 ^= v33;
        continue;
      }
    }
    v30 = v33;
  }
  while ( v30 );
  if ( v30 )
  {
    UserSize = (*(_QWORD *)(v30 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v30 + 24);
    RtlReleaseSRWLockShared(a1 + 64);
    goto LABEL_18;
  }
LABEL_78:
  UserSize = -1LL;
  RtlReleaseSRWLockShared(a1 + 64);
LABEL_18:
  if ( UserSize == -1 )
    goto LABEL_56;
  if ( (v7 & 0x2000) != 0 && RtlCompareMemory((const void *)(UserSize + v4), &CheckHeapFillPattern, 0x10uLL) != 16 )
    goto LABEL_55;
  return UserSize;
}
