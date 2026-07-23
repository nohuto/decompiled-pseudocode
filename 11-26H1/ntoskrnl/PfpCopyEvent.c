/*
 * XREFs of PfpCopyEvent @ 0x1409F1E30
 * Callers:
 *     PfpFlushEventBuffers @ 0x1409F12C0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1409F13D0 (PfpFlushBuffers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     PfpLogPageAccess @ 0x1409F1770 (PfpLogPageAccess.c)
 *     PfTReplaceCurrentBuffer @ 0x1409F2068 (PfTReplaceCurrentBuffer.c)
 */

__int64 __fastcall PfpCopyEvent(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbx
  int v4; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  PEPROCESS v17; // rcx
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v19; // r8
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  PEPROCESS Process; // [rsp+70h] [rbp+18h] BYREF

  v2 = *a2;
  v4 = *a2;
  Process = 0LL;
  if ( (v4 & 0x1F000) == 0xA000LL )
  {
    v10 = a2[4];
    v11 = *((unsigned int *)a2 + 12);
    v12 = -1;
    v13 = 2LL;
    v20 = 0LL;
    if ( (v10 & 0x7FFFFFFFFFFFFFFFuLL) < 0xFF )
      v12 = v10;
    if ( v10 >= 0 )
      v13 = 4098LL;
    DWORD2(v20) = v12 | ((_DWORD)v11 << 8);
    v21 = a2[3] << 12;
    *(_QWORD *)&v20 = v13 & 0xFFFFFFFF00FFFFFFuLL | v11 & 0xFFFFFFFFFF000000uLL;
    v14 = a2[5];
    LODWORD(v21) = v21 | 1;
    v15 = PfpLogPageAccess(a1, v14, &v21, &v20, (__int64)(a2 + 3), 1);
    if ( v15 )
    {
      v16 = ((*(_QWORD *)(a1 + 152) + 47LL) & 0xFFFFFFFFFFFFFFF8uLL)
          + 40LL * (*(unsigned __int16 *)(v15 + 10) - (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 152) + 36LL));
      if ( (*(_BYTE *)(v16 + 8) & 4) != 0
        && PsLookupProcessByProcessId((HANDLE)*((unsigned int *)a2 + 13), &Process) >= 0 )
      {
        v17 = Process;
        Flink = Process[1].Header.WaitListHead.Flink;
        if ( (((unsigned __int64)Flink ^ (unsigned __int64)Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL) == a2[5]
          && Flink )
        {
          if ( Process[1].ThreadListHead.Flink )
          {
            v19 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
            *(_QWORD *)(v16 + 8) = v19;
            *(_QWORD *)(v16 + 8) = v19 & 7 | (8
                                            * ((__int64)v17[1].Header.WaitListHead.Flink ^ (__int64)v17[1].ThreadListHead.Flink));
            *(_DWORD *)(v16 + 20) = HIDWORD(v17[1].CpuPartitionList.Blink);
            *(_DWORD *)(v16 + 16) = v17[1].Header.WaitListHead.Flink;
          }
        }
        ObfDereferenceObjectWithTag(v17, 0x746C6644u);
      }
      return 0LL;
    }
    else
    {
      return 3221225864LL;
    }
  }
  else
  {
    v6 = (v2 >> 2) & 0x3FF;
    do
    {
      v7 = *(_QWORD *)(a1 + 112);
      v8 = *(_DWORD *)(v7 + 16);
      if ( v8 + (unsigned int)v6 <= *(_DWORD *)(v7 + 20) )
      {
        *(_DWORD *)(v7 + 16) = v8 + v6;
        memmove((void *)(16LL * v8 + ((v7 + 31) & 0xFFFFFFFFFFFFFFF8uLL)), a2, (unsigned int)(16 * v6));
        return 0LL;
      }
    }
    while ( (unsigned int)PfTReplaceCurrentBuffer(a1, a1 + 88) != -1073741823 );
    return 3221225626LL;
  }
}
