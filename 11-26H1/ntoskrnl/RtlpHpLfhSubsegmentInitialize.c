/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x14034D570
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1405194B4 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x14034D510 (RtlpHpInitializeLock.c)
 *     RtlpHpLfhSubsegmentComputeCommitUnit @ 0x14034D52C (RtlpHpLfhSubsegmentComputeCommitUnit.c)
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x14034D8E4 (RtlpHpLfhSubsegmentPrefetchRange.c)
 *     RtlpHpLfhSubsegmentSetWitheldBlocks @ 0x14034DB48 (RtlpHpLfhSubsegmentSetWitheldBlocks.c)
 *     RtlpHpLfhBlockBitmapInitialize @ 0x14034DBD8 (RtlpHpLfhBlockBitmapInitialize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall RtlpHpLfhSubsegmentInitialize(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int8 *a5,
        __int64 a6,
        int a7)
{
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  unsigned int v11; // edi
  int v12; // r9d
  __int64 v13; // r10
  int v14; // r11d
  unsigned __int64 v15; // r8
  int v16; // edi
  __int64 v17; // rax
  unsigned int v18; // esi
  __int64 v19; // r9
  char v20; // r12
  __int64 v21; // r8
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  _WORD *v25; // rdx
  char *v26; // r8
  char *v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // al
  char v31; // al
  unsigned int v32; // edx
  unsigned __int8 *v33; // rsi
  __int16 v34; // ax
  int v35; // eax
  __int64 v36; // rax
  __int16 v37; // cx
  bool v38; // zf
  char *v39; // rdi
  int v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+38h] [rbp-50h]
  int v43; // [rsp+90h] [rbp+8h]
  int v44; // [rsp+98h] [rbp+10h]
  __int16 v46; // [rsp+A0h] [rbp+18h]
  int v48; // [rsp+C0h] [rbp+38h]

  v9 = a3;
  v42 = (*a5 >> 1) + 1;
  v10 = (unsigned __int16)RtlpBucketBlockSizes[v42];
  v11 = 2 * (a2 / (unsigned int)RtlpHpLfhSubsegmentComputeCommitUnit(a2, v10));
  v15 = (8 * (a2 - v11) - 512) / (v13 + (unsigned __int64)(8 * v10));
  v16 = (v11 + 8 * (((unsigned __int64)(unsigned int)v15 + 63) >> 6) + 79) & 0xFFFFFFF0;
  v17 = (a2 - v16) / v10;
  v41 = v16;
  if ( (unsigned int)v15 < (unsigned int)v17 )
    v17 = (unsigned int)v15;
  v18 = v17;
  v43 = 8 * ((unsigned __int64)(v17 + 63) >> 6);
  if ( v12 )
  {
    v38 = v12 == (_DWORD)v13;
    v9 = a2;
    v19 = (unsigned int)v13;
    if ( v38 && a2 >= 0x10000 )
      v9 = 0x10000;
  }
  else
  {
    v19 = (unsigned int)(v14 + 3);
  }
  v48 = v13 & a7;
  if ( v48 )
    v19 = 2LL;
  RtlpHpLfhSubsegmentPrefetchRange(a1, 0LL, v9, v19);
  v20 = 64;
  memset_0((void *)a1, 0, 0x40uLL);
  RtlpHpInitializeLock((_QWORD *)(a1 + 56), *(unsigned __int8 *)(a6 + 73));
  HIWORD(v44) = v16;
  LOWORD(v44) = v10;
  *(_DWORD *)(a1 + 40) = v44 ^ LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ (a1 >> 12);
  *(_WORD *)(a1 + 32) = v18;
  *(_WORD *)(a1 + 44) = (unsigned __int64)&a5[-v21] >> 6;
  _BitScanForward(&v22, a3 >> 12);
  *(_WORD *)(a1 + 34) = v18;
  LOBYTE(v46) = v22;
  HIBYTE(v46) = a2 >> 12 >> v22;
  *(_BYTE *)(a1 + 22) = 3;
  *(_WORD *)(a1 + 46) = 0;
  *(_WORD *)(a1 + 38) = v46;
  v23 = (unsigned __int8)((unsigned int)(v43 + 64) >> 3);
  v24 = *(unsigned __int8 *)(a1 + 39);
  *(_BYTE *)(a1 + 24) = v23;
  v25 = (_WORD *)(a1 + 8 * v23);
  v26 = (char *)&v25[v24];
  *v25 = 1;
  v27 = (char *)(v25 + 1);
  v28 = (unsigned __int64)(v26 - v27 + 1) >> 1;
  if ( v27 > v26 )
    v28 = 0LL;
  if ( v28 )
  {
    v39 = v27;
    while ( v28 )
    {
      *(_WORD *)v39 = -1;
      v39 += 2;
      --v28;
    }
    v16 = v41;
  }
  v29 = *((_BYTE *)RtlpSearchWidth + v42);
  v30 = 64;
  if ( v29 < 0x40u )
    v30 = *((_BYTE *)RtlpSearchWidth + v42);
  if ( v30 < v18 )
  {
    if ( v29 < 0x40u )
      v20 = *((_BYTE *)RtlpSearchWidth + v42);
    v31 = v20;
  }
  else
  {
    v31 = v18;
  }
  *(_BYTE *)(a1 + 50) = v31;
  RtlpHpLfhBlockBitmapInitialize(a1 + 64, v18);
  v32 = v10 - 1;
  if ( ((v10 - 1) & v10) == 0 )
  {
    v35 = (unsigned __int16)v16 - (v32 & ((unsigned __int16)v16 + v10 - 1)) + v10 - 1;
    v16 = v35;
    if ( v35 + v10 * v18 != a2 )
      NT_ASSERT("FirstBlockOffset + BlockSize * BlockCount == SubsegmentSize");
    HIWORD(v44) = v35;
    *(_DWORD *)(a1 + 40) = v44 ^ LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ (a1 >> 12);
    goto LABEL_20;
  }
  if ( a2 <= 0x1000 )
  {
LABEL_20:
    v33 = a5;
    goto LABEL_21;
  }
  v33 = a5;
  if ( (*(_BYTE *)(a6 + 78) & 1) != 0 )
  {
    v34 = RtlpHpLfhSubsegmentSetWitheldBlocks((int)a1 + 64, v32, (_DWORD)a5, v44, a2);
    *(_WORD *)(a1 + 32) -= v34;
    *(_WORD *)(a1 + 34) -= v34;
    *(_BYTE *)(a1 + 37) += v34;
  }
LABEL_21:
  LOWORD(v36) = *(_WORD *)(a1 + 34);
  v37 = v36 + *(unsigned __int8 *)(a1 + 37);
  if ( !v48 && a4 == 1 )
  {
    v36 = *((unsigned int *)v33 + 18);
    v37 = ((v36 * (unsigned __int64)(v9 - v16)) >> 32) - 1;
  }
  *(_WORD *)(a1 + 48) = v37;
  if ( a4 == 2 )
  {
    LOBYTE(v36) = *(_BYTE *)(a1 + 51) | 1;
    *(_BYTE *)(a1 + 51) = v36;
  }
  return v36;
}
