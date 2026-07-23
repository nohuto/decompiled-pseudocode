/*
 * XREFs of IopLiveDumpBufferDumpData @ 0x1405D0720
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1404A0758 (IopLiveDumpProcessCorralStateChange.c)
 * Callees:
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     IopLiveDumpShouldCheckChunkCRC @ 0x1403460B4 (IopLiveDumpShouldCheckChunkCRC.c)
 *     RtlpComputeCrcInternal @ 0x140481430 (RtlpComputeCrcInternal.c)
 *     IopLiveDumpGetCapturePages @ 0x1405D20F0 (IopLiveDumpGetCapturePages.c)
 *     IopLiveDumpIsChunkInIOSpace @ 0x1405D29BC (IopLiveDumpIsChunkInIOSpace.c)
 *     IopLiveDumpIsChunkInIOSpaceBuffer @ 0x1405D29F8 (IopLiveDumpIsChunkInIOSpaceBuffer.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405DA220 (IopLiveDumpTraceEventGeneric.c)
 *     MmMapMemoryDumpMdlEx @ 0x1406FB890 (MmMapMemoryDumpMdlEx.c)
 */

__int64 __fastcall IopLiveDumpBufferDumpData(__int64 *a1, unsigned int *a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r12d
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // r13
  _QWORD *v18; // r14
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rbx
  _DWORD *v23; // rdi
  _DWORD *v24; // r8
  unsigned __int64 v25; // rcx
  _DWORD *v26; // rsi
  __int64 v27; // r15
  int v28; // ecx
  int IsChunkInIOSpace; // eax
  struct _MDL *v30; // rsi
  struct _MDL *Next; // rdi
  __int64 v32; // [rsp+40h] [rbp-29h] BYREF
  _DWORD *v33; // [rsp+48h] [rbp-21h]
  __int64 v34; // [rsp+50h] [rbp-19h]
  __int64 v35; // [rsp+58h] [rbp-11h]
  __int64 v36; // [rsp+60h] [rbp-9h]
  __int64 v37; // [rsp+68h] [rbp-1h]
  _QWORD *v38; // [rsp+70h] [rbp+7h]
  const wchar_t *v39; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int *v40; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v41; // [rsp+E0h] [rbp+77h] BYREF
  const wchar_t *v42; // [rsp+E8h] [rbp+7Fh] BYREF

  v40 = a2;
  v4 = *a1;
  v32 = 0LL;
  LODWORD(v39) = 0;
  v36 = v4;
  v6 = (_QWORD *)(v4 + 680);
  if ( (*(_DWORD *)(v4 + 80) & 0x20000) != 0 )
  {
    v7 = *a2;
    v42 = L"ProcessorNumber";
    v41 = v7;
    IopLiveDumpTraceEventGeneric(L"IopLiveDumpBufferDumpDataEntry", 1LL, &v42, &v41);
  }
  result = *a2;
  if ( (unsigned int)result < *(_DWORD *)(v4 + 888) && (unsigned int)result < *(_DWORD *)(v4 + 1112) )
  {
    v9 = (unsigned int)result;
    v10 = *(_QWORD **)(*(_QWORD *)(v4 + 1120) + 8LL * (unsigned int)result);
    v11 = *(_QWORD *)(v4 + 896);
    v38 = v10;
    v34 = 16 * v9;
    v35 = v11;
    v12 = *(_QWORD *)(16 * v9 + v11 + 8) + 48LL;
    v42 = (const wchar_t *)v12;
LABEL_29:
    v28 = v4 + 544;
    while ( 1 )
    {
      IopLiveDumpGetCapturePages(
        v28,
        (_DWORD)v6,
        (_DWORD)v10,
        a4,
        (__int64)&v39,
        (__int64)&v32,
        (*(_DWORD *)(v4 + 80) & 0x20000) != 0);
      v13 = (unsigned int)v39;
      if ( !(_DWORD)v39 )
        break;
      v14 = 0;
      v15 = v6[9];
      v16 = 0;
      v17 = v34;
      v18 = v10;
      v37 = v32;
      LODWORD(v41) = 0;
      v19 = v35;
      v33 = *(_DWORD **)(v15 + 8 * v32);
      do
      {
        v20 = v16++;
        *(_QWORD *)(v12 + 8 * v20) = *v18;
        if ( v16 == 16 || v14 == v13 - 1 )
        {
          v21 = *(_QWORD *)(v19 + v17 + 8);
          v22 = v16 << 12;
          *(_QWORD *)v21 = 0LL;
          *(_WORD *)(v21 + 10) = 0;
          *(_QWORD *)(v21 + 32) = 0LL;
          *(_QWORD *)(v21 + 40) = (unsigned int)v22;
          *(_WORD *)(v21 + 8) = 8 * (v16 + 6);
          MmMapMemoryDumpMdlEx(*(_QWORD *)(v19 + v17), v16, *(_QWORD *)(v19 + v17 + 8));
          v14 = v41;
          v23 = v33;
          v24 = (_DWORD *)((char *)v33 + v22);
          v25 = (unsigned __int64)(unsigned int)v22 >> 2;
          v26 = *(_DWORD **)(*(_QWORD *)(v19 + v17 + 8) + 24LL);
          while ( v25 )
          {
            *v23++ = *v26++;
            --v25;
          }
          v12 = (__int64)v42;
          v33 = v24;
          v16 = 0;
        }
        ++v14;
        ++v18;
        LODWORD(v41) = v14;
      }
      while ( v14 < v13 );
      v4 = v36;
      v27 = v37;
      v10 = v38;
      v6 = (_QWORD *)(v36 + 680);
      if ( IopLiveDumpShouldCheckChunkCRC(v36 + 680) )
        *(_QWORD *)(v6[25] + 8 * v27) = RtlpComputeCrcInternal(*(_QWORD *)(v6[9] + 8 * v27), v13 << 12, 0LL);
      v28 = v4 + 544;
      if ( (*(_DWORD *)(v4 + 80) & 0x80000) != 0 )
      {
        IsChunkInIOSpace = IopLiveDumpIsChunkInIOSpace(v6, v27);
        v28 = v4 + 544;
        if ( IsChunkInIOSpace )
        {
          if ( (unsigned int)IopLiveDumpIsChunkInIOSpaceBuffer(v6 + 20) )
          {
            v30 = (struct _MDL *)v6[22];
          }
          else
          {
            if ( !(unsigned int)IopLiveDumpIsChunkInIOSpaceBuffer(v6 + 15) )
              NT_ASSERT("Unknown IOSpace Type!");
            v30 = (struct _MDL *)v6[17];
          }
          v28 = v4 + 544;
          if ( v30 )
          {
            for ( ; v27; --v27 )
              v30 = v30->Next;
            Next = v30->Next;
            v30->Next = 0LL;
            MmProtectMdlSystemAddress(v30, 2u);
            v30->Next = Next;
            v12 = (__int64)v42;
            goto LABEL_29;
          }
          v12 = (__int64)v42;
        }
      }
    }
    if ( (*(_DWORD *)(v4 + 80) & 0x20000) != 0 )
    {
      v39 = L"ProcessorNumber";
      v40 = (unsigned int *)*v40;
      IopLiveDumpTraceEventGeneric(L"IopLiveDumpBufferDumpDataExit", 1LL, &v39, &v40);
    }
    return MmMapMemoryDumpMdlEx(*(_QWORD *)(v34 + v35), 16LL, *(_QWORD *)(v34 + v35 + 8));
  }
  return result;
}
