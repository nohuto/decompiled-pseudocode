/*
 * XREFs of EtwpCompressBuffer @ 0x1406CB9B4
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x1406CBD3C (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpUpdateEventsLostCount @ 0x140258E50 (EtwpUpdateEventsLostCount.c)
 *     RtlCompressBuffer @ 0x140463C00 (RtlCompressBuffer.c)
 *     EtwpGetNextEventOffsetType @ 0x1404A2B38 (EtwpGetNextEventOffsetType.c)
 *     EtwpRotateCompressionTarget @ 0x1406CC34C (EtwpRotateCompressionTarget.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1406CC3C0 (EtwpRotateCompressionTargetIfNeeded.c)
 */

__int64 __fastcall EtwpCompressBuffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // eax
  unsigned int v6; // r15d
  ULONG v7; // ebx
  unsigned int v8; // esi
  __int64 CompressedBufferSize; // r8
  __int64 v10; // rdx
  __int64 v11; // r13
  UCHAR *v12; // r9
  __int64 v13; // r12
  NTSTATUS v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int NextEventOffsetType; // eax
  ULONG v18; // r10d
  unsigned int v19; // ecx
  unsigned int v20; // eax
  ULONG v21; // eax
  __int64 v22; // rdx
  ULONG v23; // eax
  int v25; // [rsp+40h] [rbp-10h]
  int v26; // [rsp+44h] [rbp-Ch]
  ULONG FinalCompressedSize; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+58h]

  v2 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 8);
  FinalCompressedSize = 0;
  v28 = 0;
  if ( v4 <= v2 )
    v6 = *(_DWORD *)(a2 + 8);
  else
    v6 = *(_DWORD *)(a2 + 4);
  v7 = v6 - 72;
  v8 = 72;
  if ( v6 == 72 )
  {
LABEL_5:
    LODWORD(CompressedBufferSize) = 0;
    return (unsigned int)CompressedBufferSize;
  }
  EtwpRotateCompressionTargetIfNeeded();
LABEL_7:
  v11 = *(_QWORD *)(a1 + 1416);
  if ( !v11 )
  {
    ++*(_DWORD *)(a1 + 252);
    return 3221225495LL;
  }
  v12 = (UCHAR *)(*(unsigned int *)(v11 + 8) + v11 + 72);
  v13 = *(unsigned int *)(v11 + 8);
  CompressedBufferSize = (unsigned int)(*(_DWORD *)(a1 + 4) - *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) - 72);
  v26 = *(_DWORD *)(a1 + 4) - *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) - 72;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) == 72 || v7 < *(_DWORD *)(a1 + 1436) * (int)CompressedBufferSize )
  {
    v14 = RtlCompressBuffer(
            3u,
            (PUCHAR)(a2 + v8),
            v7,
            v12,
            CompressedBufferSize,
            0,
            &FinalCompressedSize,
            *(PVOID *)(a1 + 1424));
    CompressedBufferSize = (unsigned int)v14;
    if ( v14 >= 0 )
    {
      *(_OWORD *)(v13 + v11) = *(_OWORD *)a2;
      *(_OWORD *)(v13 + v11 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v13 + v11 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v13 + v11 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(v13 + v11 + 64) = *(_QWORD *)(a2 + 64);
      v23 = FinalCompressedSize;
      *(_QWORD *)(v13 + v11 + 24) = 0LL;
      *(_DWORD *)(v13 + v11) = v23 + 72;
      *(_DWORD *)(v13 + v11 + 8) = v7 + 72;
      *(_DWORD *)(v13 + v11 + 4) = v7 + 72;
      *(_DWORD *)(v13 + v11 + 12) = 0;
      *(_DWORD *)(v13 + v11 + 44) = 3;
      *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) += 72;
      *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) += FinalCompressedSize;
      return (unsigned int)CompressedBufferSize;
    }
  }
  v15 = 1;
LABEL_12:
  v29 = v15;
  while ( 1 )
  {
    if ( v15 > *(_DWORD *)(a1 + 1440) )
    {
LABEL_29:
      EtwpRotateCompressionTarget(a1, v10, CompressedBufferSize, v12);
LABEL_30:
      v7 = v6 - v8;
      goto LABEL_7;
    }
    v25 = 0;
    v16 = v8 + (v7 >> v15);
    NextEventOffsetType = EtwpGetNextEventOffsetType((unsigned int *)a2, v8, &v28);
    CompressedBufferSize = NextEventOffsetType;
    if ( NextEventOffsetType )
    {
      v19 = v8;
      while ( 1 )
      {
        v10 = v28;
        if ( v28 + v19 > v16 )
          break;
        v25 = v28 + v18;
        v20 = EtwpGetNextEventOffsetType((unsigned int *)a2, v28 + v18 + v8, &v28);
        v19 = v18 + v8;
        CompressedBufferSize = v20;
        if ( !v20 )
        {
          v10 = v28;
          break;
        }
      }
      if ( v18 )
      {
        if ( RtlCompressBuffer(
               3u,
               (PUCHAR)(a2 + v8),
               v18,
               (PUCHAR)(v13 + v11 + 72),
               v26,
               0,
               &FinalCompressedSize,
               *(PVOID *)(a1 + 1424)) < 0 )
        {
          v15 = v29 + 1;
          v7 = v6 - v8;
          goto LABEL_12;
        }
        *(_OWORD *)(v13 + v11) = *(_OWORD *)a2;
        *(_OWORD *)(v13 + v11 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v13 + v11 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v13 + v11 + 48) = *(_OWORD *)(a2 + 48);
        *(_QWORD *)(v13 + v11 + 64) = *(_QWORD *)(a2 + 64);
        v21 = FinalCompressedSize;
        *(_QWORD *)(v13 + v11 + 24) = 0LL;
        *(_DWORD *)(v13 + v11) = v21 + 72;
        *(_DWORD *)(v13 + v11 + 8) = v25 + 72;
        *(_DWORD *)(v13 + v11 + 4) = v25 + 72;
        *(_DWORD *)(v13 + v11 + 12) = 0;
        *(_DWORD *)(v13 + v11 + 44) = 3;
        *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) += 72;
        v22 = FinalCompressedSize + *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) = v22;
        EtwpRotateCompressionTarget(a1, v22, CompressedBufferSize, v12);
        v8 += v25;
        goto LABEL_30;
      }
    }
    else
    {
      v10 = v28;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) != 72 )
      goto LABEL_29;
    if ( !(_DWORD)CompressedBufferSize )
      break;
    EtwpUpdateEventsLostCount(a1);
    v8 += v10;
    if ( v8 == v6 )
      goto LABEL_5;
    if ( v8 > v6 )
      goto LABEL_32;
    v15 = v29;
    v7 = v6 - v8;
  }
  ++*(_DWORD *)(a1 + 252);
LABEL_32:
  LODWORD(CompressedBufferSize) = -1073741566;
  return (unsigned int)CompressedBufferSize;
}
