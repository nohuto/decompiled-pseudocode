/*
 * XREFs of RtlpHpSizeHeap @ 0x1800051D0
 * Callers:
 *     RtlValidateHeap @ 0x180060DF0 (RtlValidateHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x180080730 (RtlpHpFreeHeapSlow.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x1800041CC (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1800042A0 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpHpPgGetUserSize @ 0x180081808 (RtlpHpPgGetUserSize.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlpHpSizeHeap(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // esi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // r8
  char v10; // di
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  char v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 UserSize; // rdi
  _RTL_SRWLOCK *v19; // rbp
  __int64 v20; // rax
  unsigned __int64 *v21; // rdi
  unsigned __int64 v22; // rcx
  int v23; // edx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax

  v4 = *(_DWORD *)(a1 + 20) | a3;
  if ( !a2 || (a2 & 0xF) != 0 )
    return -1LL;
  if ( (_WORD)a2 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  v7 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801C6908) >> 20));
  if ( !v7 || (v6 = v7 - 1, v6 == 2) )
  {
    v19 = (_RTL_SRWLOCK *)(a1 + 64);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
    v20 = *(_QWORD *)(a1 + 80);
    v21 = (unsigned __int64 *)(a1 + 72);
    v22 = *v21;
    if ( (v20 & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_37;
      v22 ^= (unsigned __int64)v21;
    }
    v23 = v20 & 1;
    if ( !v22 )
    {
LABEL_37:
      UserSize = -1LL;
      RtlReleaseSRWLockShared(v19);
      goto LABEL_15;
    }
    while ( 1 )
    {
      v24 = *(_QWORD *)(v22 + 24) & 0xFFFFFFFFFFFF0000uLL;
      if ( a2 < v24 )
      {
        v25 = *(_QWORD *)v22;
        if ( !v23 || !v25 )
          goto LABEL_31;
      }
      else
      {
        if ( a2 <= v24 )
          goto LABEL_33;
        v25 = *(_QWORD *)(v22 + 8);
        if ( !v23 || !v25 )
        {
LABEL_31:
          v22 = v25;
          goto LABEL_32;
        }
      }
      v22 ^= v25;
LABEL_32:
      if ( !v22 )
      {
LABEL_33:
        if ( v22 )
        {
          UserSize = (*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v22 + 24);
          RtlReleaseSRWLockShared(v19);
          goto LABEL_15;
        }
        goto LABEL_37;
      }
    }
  }
LABEL_7:
  v8 = a1 + 192LL * v6;
  v9 = a2 & *(_QWORD *)(v8 + 320);
  if ( !(RtlpHpHeapGlobals ^ v9 ^ *(_QWORD *)(v9 + 0x10) ^ (v8 + 320))
    && (v10 = *(_BYTE *)(v8 + 328),
        v11 = v9 + 32 * ((unsigned __int64)(unsigned int)(a2 - v9) >> v10),
        v12 = v11 - 32LL * *(unsigned __int8 *)(v11 + 26),
        v13 = v9 + ((unsigned int)((__int64)(v12 - v9) >> 5) << v10),
        v14 = *(_BYTE *)(v12 + 24),
        (v14 & 3) == 3)
    && (v13 == a2 || (v14 & 0x1Cu) >= 8) )
  {
    v15 = (v12 & *(_QWORD *)(v8 + 320)) + ((unsigned int)((__int64)(v12 - (v12 & *(_QWORD *)(v8 + 320))) >> 5) << v10);
    if ( a2 <= v15 )
    {
      UserSize = (*(unsigned __int8 *)(v12 + 31) << v10) - (unsigned __int64)*(unsigned int *)(v12 + 4);
    }
    else
    {
      v16 = *(_BYTE *)(v12 + 24) & 0x1C;
      if ( (_DWORD)v16 == 8 )
      {
        UserSize = RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(v8 + 344), v15, a2, 0LL);
      }
      else if ( (_DWORD)v16 == 12 )
      {
        UserSize = RtlpHpVsChunkSize(*(_QWORD *)(v8 + 352), a2, v16, 0LL);
      }
      else
      {
        UserSize = RtlpHpPgGetUserSize(
                     *(_QWORD *)(v8 + 464),
                     a2,
                     (*(unsigned __int8 *)(v12 + 31) << v10) - (unsigned __int64)*(unsigned int *)(v12 + 4),
                     0LL);
      }
    }
  }
  else
  {
    UserSize = -1LL;
  }
LABEL_15:
  if ( UserSize == -1
    || (v4 & 0x2000) == 0
    || RtlCompareMemory((const void *)(UserSize + a2), &CheckHeapFillPattern, 0x10uLL) == 16 )
  {
    return UserSize;
  }
  return -1LL;
}
