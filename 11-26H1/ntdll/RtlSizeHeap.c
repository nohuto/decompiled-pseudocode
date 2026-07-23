/*
 * XREFs of RtlSizeHeap @ 0x1800058B0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlDebugSizeHeap @ 0x1800603FC (RtlDebugSizeHeap.c)
 *     RtlpAllocationSize @ 0x18009E108 (RtlpAllocationSize.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800C213C (RtlpScanHeapAllocBlocks.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180100FC8 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpDumpEntryInfo @ 0x180120E68 (RtlpDumpEntryInfo.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180004150 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpVsChunkSize @ 0x1800041CC (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1800042A0 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpHpPgGetUserSize @ 0x180081808 (RtlpHpPgGetUserSize.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 */

SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  int v7; // r14d
  int v8; // eax
  __int64 v9; // rax
  char *v10; // r11
  unsigned __int64 v11; // r8
  char v12; // di
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  char v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  SIZE_T UserSize; // rdi
  int v21; // ecx
  char v22; // al
  unsigned __int64 v23; // r9
  __int64 v24; // r8
  char v25; // dl
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  int v30; // edx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // eax
  struct _TEB *v34; // rbx

  v3 = 0LL;
  v4 = (unsigned __int64)BaseAddress;
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    if ( ((*((_DWORD *)HeapHandle + 29) | Flags) & 0x61000000) != 0
      && ((*((_DWORD *)HeapHandle + 29) | Flags) & 0x10000000) == 0 )
    {
      return RtlDebugSizeHeap((int)HeapHandle);
    }
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v4 = (unsigned __int64)RtlpProbeUserBufferSafe((int)HeapHandle, v4);
    }
    else
    {
      if ( (v4 & 0xF) != 0 )
      {
        v21 = 9;
        goto LABEL_29;
      }
      v4 -= 16LL;
      _m_prefetchw((const void *)v4);
      if ( *(_BYTE *)(v4 + 15) == 5 )
        v4 -= 16LL * *(unsigned __int8 *)(v4 + 14);
      if ( (*(_BYTE *)(v4 + 15) & 0x3F) == 0 )
      {
        v21 = 8;
LABEL_29:
        RtlpLogHeapFailure(v21, (_DWORD)HeapHandle, v4, 0, 0LL, 0LL);
        v4 = 0LL;
      }
    }
    if ( !v4 )
    {
      v34 = NtCurrentTeb();
      v34->LastStatusValue = -1073741811;
      v34->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
      return -1LL;
    }
    v22 = *(_BYTE *)(v4 + 15);
    if ( v22 == 4 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v33 = *(_DWORD *)(v4 + 8);
        if ( (v33 & *((_DWORD *)HeapHandle + 31)) != 0 )
          LOWORD(v33) = *((_WORD *)HeapHandle + 68) ^ v33;
      }
      else
      {
        LOWORD(v33) = *(_WORD *)(v4 + 8);
      }
      return *(_QWORD *)(v4 - 16) - (unsigned __int16)v33;
    }
    if ( v22 >= 0 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        LODWORD(v24) = *(_DWORD *)(v4 + 8);
        if ( ((unsigned int)v24 & *((_DWORD *)HeapHandle + 31)) != 0 )
          LOWORD(v24) = *((_WORD *)HeapHandle + 68) ^ v24;
      }
      else
      {
        LOWORD(v24) = *(_WORD *)(v4 + 8);
      }
      v23 = v4 >> 4;
    }
    else
    {
      v23 = v4 >> 4;
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((v4 >> 4) ^ *(_WORD *)(v4 + 8) ^ (unsigned __int16)HeapHandle) )
        v24 = 0LL;
      else
        v24 = *(_QWORD *)(v4
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)(v4 >> 4) ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)HeapHandle) >> 12));
      LOWORD(v24) = *(_WORD *)(v24 + 36);
    }
    v25 = *(_BYTE *)(v4 + 15);
    if ( v25 == 5 )
      return 16LL * (unsigned __int16)v24
           - (*((unsigned __int16 *)HeapHandle + 70) ^ (unsigned __int64)*(unsigned __int16 *)(v4 + 12));
    if ( (v25 & 0x40) != 0 )
      return 16LL * (unsigned __int16)v24 - *(unsigned __int16 *)(v4 + 16LL * (*(_BYTE *)(v4 + 15) & 0x3F) + 12);
    if ( (v25 & 0x3F) == 0x3F )
    {
      if ( v25 >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v27 = *(_DWORD *)(v4 + 8);
          if ( (v27 & *((_DWORD *)HeapHandle + 31)) != 0 )
          {
            v26 = *(_QWORD *)(v4 + 16LL * (unsigned __int16)(*((_WORD *)HeapHandle + 68) ^ v27));
            return 16LL * (unsigned __int16)v24 - v26;
          }
        }
        else
        {
          LOWORD(v27) = *(_WORD *)(v4 + 8);
        }
      }
      else
      {
        if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v23 ^ *(_WORD *)(v4 + 8) ^ (unsigned __int16)HeapHandle)) )
          v3 = *(_QWORD *)(v4
                         - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)v23 ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)HeapHandle) >> 12));
        LOWORD(v27) = *(_WORD *)(v3 + 36);
      }
      v26 = *(_QWORD *)(v4 + 16LL * (unsigned __int16)v27);
    }
    else
    {
      v26 = *(_BYTE *)(v4 + 15) & 0x3F;
    }
    return 16LL * (unsigned __int16)v24 - v26;
  }
  v7 = *((_DWORD *)HeapHandle + 5);
  if ( !v4 || (v4 & 0xF) != 0 )
  {
LABEL_55:
    UserSize = -1LL;
LABEL_56:
    RtlpLogHeapFailure(9, (_DWORD)HeapHandle, v4, 0, 0LL, 0LL);
    return UserSize;
  }
  if ( (_WORD)v4 )
  {
    v8 = 0;
    goto LABEL_10;
  }
  v9 = RtlCSparseBitmapBitmaskRead((__int64)&::BaseAddress, 2 * ((v4 - qword_1801C6908) >> 20));
  if ( v9 )
  {
    v8 = v9 - 1;
    if ( v8 != 2 )
    {
LABEL_10:
      v10 = (char *)HeapHandle + 192 * v8;
      v11 = v4 & *((_QWORD *)v10 + 40);
      if ( !(RtlpHpHeapGlobals ^ v11 ^ *(_QWORD *)(v11 + 0x10) ^ (unsigned __int64)(v10 + 320))
        && (v12 = v10[328],
            v13 = v11 + 32 * ((unsigned __int64)(unsigned int)(v4 - v11) >> v12),
            v14 = v13 - 32LL * *(unsigned __int8 *)(v13 + 26),
            v15 = v11 + ((unsigned int)((__int64)(v14 - v11) >> 5) << v12),
            v16 = *(_BYTE *)(v14 + 24),
            (v16 & 3) == 3)
        && (v15 == v4 || (v16 & 0x1Cu) >= 8) )
      {
        v17 = (v14 & *((_QWORD *)v10 + 40))
            + ((unsigned int)((__int64)(v14 - (v14 & *((_QWORD *)v10 + 40))) >> 5) << v12);
        if ( v4 <= v17 )
        {
          UserSize = (*(unsigned __int8 *)(v14 + 31) << v12) - (unsigned __int64)*(unsigned int *)(v14 + 4);
        }
        else
        {
          v18 = *(_BYTE *)(v14 + 24) & 0x1C;
          if ( (_DWORD)v18 == 8 )
          {
            UserSize = RtlpHpLfhSubsegmentSizeBlock(*((_QWORD *)v10 + 43), v17, v4, 0LL);
          }
          else if ( (_DWORD)v18 == 12 )
          {
            UserSize = RtlpHpVsChunkSize(*((_QWORD *)v10 + 44), v4, v18, 0LL);
          }
          else
          {
            UserSize = RtlpHpPgGetUserSize(
                         *((_QWORD *)v10 + 58),
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
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)HeapHandle + 8);
  v28 = *((_QWORD *)HeapHandle + 10);
  v29 = *((_QWORD *)HeapHandle + 9);
  if ( (v28 & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_78;
    v29 ^= (unsigned __int64)HeapHandle + 72;
  }
  v30 = v28 & 1;
  if ( !v29 )
    goto LABEL_78;
  do
  {
    v31 = *(_QWORD *)(v29 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v4 < v31 )
    {
      v32 = *(_QWORD *)v29;
      if ( v30 && v32 )
        goto LABEL_66;
    }
    else
    {
      if ( v4 <= v31 )
        break;
      v32 = *(_QWORD *)(v29 + 8);
      if ( v30 && v32 )
      {
LABEL_66:
        v29 ^= v32;
        continue;
      }
    }
    v29 = v32;
  }
  while ( v29 );
  if ( v29 )
  {
    UserSize = (*(_QWORD *)(v29 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v29 + 24);
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)HeapHandle + 8);
    goto LABEL_18;
  }
LABEL_78:
  UserSize = -1LL;
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)HeapHandle + 8);
LABEL_18:
  if ( UserSize == -1LL )
    goto LABEL_56;
  if ( (v7 & 0x2000) != 0 && RtlCompareMemory((const void *)(UserSize + v4), &CheckHeapFillPattern, 0x10uLL) != 16 )
    goto LABEL_55;
  return UserSize;
}
