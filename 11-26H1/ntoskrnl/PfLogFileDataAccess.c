/*
 * XREFs of PfLogFileDataAccess @ 0x140383550
 * Callers:
 *     MiLogRelocationRva @ 0x14099D6F8 (MiLogRelocationRva.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     PfLogEvent @ 0x140384750 (PfLogEvent.c)
 */

__int64 __fastcall PfLogFileDataAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v5; // rdi
  __int64 v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned int PagePriorityThread; // eax
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r10d
  unsigned int v18; // edx
  __int64 v19; // rcx
  size_t Size; // [rsp+20h] [rbp-48h]
  int v21[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v22; // [rsp+40h] [rbp-28h]
  unsigned __int64 v23; // [rsp+50h] [rbp-18h]

  v5 = *(_QWORD **)(a2 + 544);
  v23 = 0LL;
  *(_OWORD *)v21 = 0LL;
  v7 = v5[235];
  v22 = 0LL;
  _m_prefetchw((const void *)(v7 + 40));
  v8 = *(_QWORD *)(v7 + 40);
  do
  {
    if ( (unsigned __int64)(v8 + 1) <= 1 )
    {
      if ( v8 )
        __fastfail(0xEu);
      v11 = 0LL;
      goto LABEL_6;
    }
    v9 = v8;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 40), v8 + 1, v8);
  }
  while ( v9 != v8 );
  v10 = *(_QWORD *)(v7 + 32);
  v11 = v7;
  if ( v7 && v10 && *(_DWORD *)(v10 + 608) < *(_DWORD *)(v10 + 612) )
  {
    PagePriorityThread = PsGetPagePriorityThread(a2);
    if ( PagePriorityThread < v18 )
    {
      v12 = 0;
    }
    else
    {
      v19 = v5[58];
      *(_QWORD *)&v22 = v16 & 0x7FFFFFFFFFFFFFFFLL | ((__int64)a5 << 63);
      *(_QWORD *)&v21[2] = v15 >> 12;
      *((_QWORD *)&v22 + 1) = (v5[63] ^ v19) & 0x1FFFFFFFFFFFFFFFLL;
      v23 = __PAIR64__(v19, xmmword_140F13528);
      *(_QWORD *)v21 = a1;
      LODWORD(Size) = 40;
      v12 = PfLogEvent(
              v17,
              10,
              HIDWORD(stru_140E66D40.WriteOperationCount)
            + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
              (int)v21,
              Size);
    }
    v11 = v7;
    goto LABEL_7;
  }
LABEL_6:
  v12 = -1073741637;
  if ( !v11 )
    return v12;
LABEL_7:
  PsDereferencePartition(v11, 1951426128LL);
  return v12;
}
