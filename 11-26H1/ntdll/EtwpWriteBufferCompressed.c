/*
 * XREFs of EtwpWriteBufferCompressed @ 0x1800787C8
 * Callers:
 *     EtwpFlushBuffer @ 0x180078550 (EtwpFlushBuffer.c)
 * Callees:
 *     RtlCompressBufferXpressLz @ 0x1800B8E60 (RtlCompressBufferXpressLz.c)
 *     NtWriteFile @ 0x18015F040 (NtWriteFile.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, _OWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v5; // rdx
  int v6; // edi
  unsigned int v7; // r10d
  unsigned int v8; // eax
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // ebp
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // r14d
  unsigned int v20; // eax
  int v21; // edx
  int v22; // r8d
  int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // eax
  char *v27; // rcx
  size_t v28; // r8
  char *v29; // rdx
  __int64 v30; // [rsp+38h] [rbp-50h]
  __int128 v31; // [rsp+50h] [rbp-38h] BYREF
  int v32; // [rsp+90h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a1 + 436);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 192);
  v8 = *(_DWORD *)(a1 + 432) - v5 - 72;
  *a4 = 0;
  *a3 = 0;
  v32 = 0;
  if ( v8 < v7 )
    v7 = v8;
  v30 = *(_QWORD *)(a1 + 416);
  v12 = v5 + 72 + *(_QWORD *)(a1 + 424);
  v13 = (unsigned int)(*((_DWORD *)a2 + 12) - 72);
  v31 = 0LL;
  v14 = RtlCompressBufferXpressLz(0LL, (char *)a2 + 72, v13, v12, v7, 0, &v32, v30);
  v15 = v14;
  if ( v14 == -1073741789 )
  {
    v19 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 424) + *(unsigned int *)(a1 + 436)), a2, v19);
    v15 = 0;
  }
  else
  {
    if ( v14 < 0 )
    {
      *a4 = 1;
      return v15;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v17 = *(unsigned int *)(a1 + 436);
    v18 = *(_QWORD *)(a1 + 424);
    *(_OWORD *)(v17 + v18) = *a2;
    *(_OWORD *)(v17 + v18 + 16) = a2[1];
    *(_OWORD *)(v17 + v18 + 32) = a2[2];
    *(_OWORD *)(v17 + v18 + 48) = a2[3];
    *(_QWORD *)(v17 + v18 + 64) = *((_QWORD *)a2 + 8);
    v19 = v32 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 436) + *(_QWORD *)(a1 + 424)) = v19;
  ++*(_DWORD *)(a1 + 440);
  *(_DWORD *)(a1 + 436) += v19;
  v20 = *(_DWORD *)(a1 + 192);
  if ( *(_DWORD *)(a1 + 436) >= v20 )
  {
    v15 = NtWriteFile(*(_QWORD *)(a1 + 128), 0LL, 0LL, 0LL, &v31, *(_QWORD *)(a1 + 424), v20, a1 + 344, 0LL);
    if ( (v15 & 0x80000000) == 0 )
    {
      v24 = *(unsigned int *)(a1 + 192);
      *(_QWORD *)(a1 + 344) += v24;
      v25 = *(_DWORD *)(a1 + 436) - v24;
      v26 = *(_DWORD *)(a1 + 440);
      *(_DWORD *)(a1 + 436) = v25;
      *(_DWORD *)(a1 + 444) = v25;
      if ( v25 )
      {
        v27 = *(char **)(a1 + 424);
        v28 = v25;
        *(_DWORD *)(a1 + 440) = 1;
        v29 = &v27[*(unsigned int *)(a1 + 192)];
        *a3 = v26 - 1;
        memmove(v27, v29, v28);
        return v15;
      }
      *a3 = v26;
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 440);
      v22 = *(_DWORD *)(a1 + 444);
      *(_DWORD *)(a1 + 436) = v22;
      LOBYTE(v6) = v22 != 0;
      v23 = v21 - 1;
      if ( !v22 )
        v23 = v21;
      *a4 = v23;
    }
    *(_DWORD *)(a1 + 440) = v6;
  }
  return v15;
}
