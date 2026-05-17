/*
 * XREFs of RtlpHpExtrasGet @ 0x1800192E0
 * Callers:
 *     RtlSetUserValueHeap @ 0x1800145D0 (RtlSetUserValueHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x180089330 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpTagAllocateHeap @ 0x180097930 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x1800B0E90 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpGetUserInfo @ 0x1800DC840 (RtlpHpGetUserInfo.c)
 *     RtlSetUserFlagsHeap @ 0x180108B90 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x1800190EC (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1800191C0 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18001A070 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpHpPgGetUserSize @ 0x1800B1C98 (RtlpHpPgGetUserSize.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasGet(__int64 a1, unsigned __int64 a2, __int16 a3, unsigned __int64 *a4)
{
  __int64 v4; // rsi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r11
  unsigned __int64 v12; // r8
  char v13; // di
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx
  char v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 UserSize; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned __int64 *v27; // rdi
  unsigned __int64 v28; // rcx
  int v29; // edx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  v32 = 0;
  if ( (_WORD)a2 )
  {
    v9 = 0;
    goto LABEL_5;
  }
  v10 = RtlCSparseBitmapBitmaskRead(&unk_1801C78C0, 2 * ((a2 - qword_1801C78B8) >> 20));
  if ( v10 )
  {
    v9 = v10 - 1;
    if ( v9 != 2 )
    {
LABEL_5:
      v11 = a1 + 192LL * v9;
      v12 = a2 & *(_QWORD *)(v11 + 320);
      if ( !(RtlpHpHeapGlobals ^ v12 ^ *(_QWORD *)(v12 + 0x10) ^ (v11 + 320))
        && (v13 = *(_BYTE *)(v11 + 328),
            v14 = v12 + 32 * ((unsigned __int64)(unsigned int)(a2 - v12) >> v13),
            v15 = v14 - 32LL * *(unsigned __int8 *)(v14 + 26),
            v16 = v12 + ((unsigned int)((__int64)(v15 - v12) >> 5) << v13),
            v17 = *(_BYTE *)(v15 + 24),
            (v17 & 3) == 3)
        && (v16 == a2 || (v17 & 0x1Cu) >= 8) )
      {
        v18 = (v15 & *(_QWORD *)(v11 + 320))
            + ((unsigned int)((__int64)(v15 - (v15 & *(_QWORD *)(v11 + 320))) >> 5) << v13);
        if ( a2 <= v18 )
        {
          v21 = (*(unsigned __int8 *)(v15 + 31) << v13) - (unsigned __int64)*(unsigned int *)(v15 + 4);
          LODWORD(v4) = *(_DWORD *)(v15 + 8) & 1;
        }
        else
        {
          v19 = *(_BYTE *)(v15 + 24) & 0x1C;
          if ( (_DWORD)v19 == 8 )
          {
            v20 = RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(v11 + 344), v18, a2, &v32);
            LODWORD(v4) = v32;
            v21 = v20;
          }
          else
          {
            if ( (_DWORD)v19 == 12 )
              UserSize = RtlpHpVsChunkSize(*(_QWORD *)(v11 + 352), a2, v19, &v32);
            else
              UserSize = RtlpHpPgGetUserSize(
                           *(_QWORD *)(v11 + 464),
                           a2,
                           (*(unsigned __int8 *)(v15 + 31) << v13) - (unsigned __int64)*(unsigned int *)(v15 + 4),
                           &v32);
            LODWORD(v4) = v32;
            v21 = UserSize;
          }
        }
      }
      else
      {
        v21 = -1LL;
      }
      goto LABEL_13;
    }
  }
  v25 = a1 + 64;
  RtlAcquireSRWLockShared(a1 + 64);
  v26 = *(_QWORD *)(a1 + 80);
  v27 = (unsigned __int64 *)(a1 + 72);
  v28 = *v27;
  if ( (v26 & 1) != 0 )
  {
    if ( !v28 )
      goto LABEL_38;
    v28 ^= (unsigned __int64)v27;
  }
  v29 = v26 & 1;
  if ( !v28 )
    goto LABEL_38;
  do
  {
    v30 = *(_QWORD *)(v28 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v30 )
    {
      v31 = *(_QWORD *)v28;
      if ( v29 && v31 )
        goto LABEL_30;
    }
    else
    {
      if ( a2 <= v30 )
        break;
      v31 = *(_QWORD *)(v28 + 8);
      if ( v29 && v31 )
      {
LABEL_30:
        v28 ^= v31;
        continue;
      }
    }
    v28 = v31;
  }
  while ( v28 );
  if ( v28 )
  {
    v4 = *(_QWORD *)(v28 + 32) & 1LL;
    v21 = (*(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v28 + 24);
    RtlReleaseSRWLockShared(v25);
    goto LABEL_13;
  }
LABEL_38:
  v21 = -1LL;
  RtlReleaseSRWLockShared(v25);
LABEL_13:
  if ( v21 == -1LL )
    return -1LL;
  if ( a4 )
    *a4 = v21;
  if ( !(_DWORD)v4 )
    return 0LL;
  v22 = v21 + a2 + 16;
  if ( (a3 & 0x2000) == 0 )
    v22 = v21 + a2;
  return (v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
}
