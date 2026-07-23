/*
 * XREFs of MiBackgroundZeroComplete @ 0x14049EACC
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReplenishUltraPageTables @ 0x1402D64DC (MiReplenishUltraPageTables.c)
 *     MiLogZeroPageDecision @ 0x14048B1AC (MiLogZeroPageDecision.c)
 *     MiReduceZeroingThreads @ 0x1405211AC (MiReduceZeroingThreads.c)
 *     MiAddZeroingThread @ 0x140521E94 (MiAddZeroingThread.c)
 */

void __fastcall MiBackgroundZeroComplete(_QWORD *a1)
{
  LARGE_INTEGER *v1; // rdi
  unsigned __int64 v3; // r8
  LARGE_INTEGER v4; // r13
  ULONG LowPart; // ebp
  __int64 v6; // rbx
  KIRQL v7; // r12
  __int64 v8; // rcx
  LARGE_INTEGER v9; // rcx
  unsigned int HighPart; // r14d
  LARGE_INTEGER v11; // rax
  __int64 v12; // rbx
  volatile LONG *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rbp
  LONG *p_HighPart; // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  volatile LONG *v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-58h]
  ULONG v26; // [rsp+90h] [rbp+8h] BYREF
  ULONG v27; // [rsp+98h] [rbp+10h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v29; // [rsp+A8h] [rbp+20h]

  v1 = (LARGE_INTEGER *)a1[10];
  v3 = a1[55] + _InterlockedExchangeAdd64((volatile signed __int64 *)&v1[20], a1[55]);
  _InterlockedAdd64((volatile signed __int64 *)&v1[19], a1[54]);
  a1[54] = 0LL;
  a1[55] = 0LL;
  if ( v3 >= 0x7D0 )
  {
    v4 = v1[17];
    LowPart = v1->LowPart;
    v27 = v1->LowPart;
    v6 = *(unsigned int *)(v4.QuadPart + 56);
    if ( byte_140E2D89A )
      MiReplenishUltraPageTables(v1[8].LowPart, 0);
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1[23].QuadPart + 14200));
    if ( v1[20].QuadPart < 0x7D0uLL )
      goto LABEL_32;
    v26 = LowPart;
    v8 = _InterlockedExchange64((volatile __int64 *)&v1[19], 0LL);
    v29 = v8;
    v25 = _InterlockedExchange64((volatile __int64 *)&v1[20], 0LL);
    v1[18].QuadPart += v8;
    v9.QuadPart = v25 + v1[6].QuadPart;
    PerformanceFrequency.QuadPart = 0LL;
    v1[6] = v9;
    HighPart = v1[1].HighPart;
    if ( !HighPart )
      HighPart = 1;
    v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( PerformanceFrequency.QuadPart != 10000000 )
      v11.QuadPart = 10000000 * v11.QuadPart / PerformanceFrequency.QuadPart;
    v1[7] = v11;
    v12 = *(_QWORD *)(384 * v6 + qword_140E2D838 + 376);
    v13 = (volatile LONG *)(v12 + 64);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
    v14 = 168LL * (int)v27;
    v15 = *(_QWORD *)(v14 + v12 + 176);
    if ( v15 )
      v16 = (*(_QWORD *)(v15 + 16LL * (HighPart - 1) + 8) << 21) / *(_QWORD *)(v14 + v12 + 136);
    else
      v16 = 1216LL;
    ExReleaseSpinLockSharedFromDpcLevel(v13);
    v17 = (v25 * HighPart) << 9;
    if ( v16 )
      v17 /= v16;
    v18 = v17 - (v17 >> 3) - ((v17 - (v17 >> 3)) >> 3);
    if ( HighPart <= v1[1].LowPart )
    {
      if ( v29 >= v18 )
      {
        ++v1[38].HighPart;
        *(_WORD *)(v4.QuadPart + 152) = 0;
        if ( v1[5].LowPart )
          v1[5].QuadPart = 0LL;
        p_HighPart = &v1[5].HighPart;
        if ( ++v1[5].HighPart == 3 )
        {
          v21 = v27;
          ++v1[34].LowPart;
          v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MiAddZeroingThread)(
                  (LARGE_INTEGER)v4.QuadPart,
                  v21,
                  1LL,
                  &v26);
          *p_HighPart = 0;
          if ( v20 == 6 )
            goto LABEL_16;
        }
        else
        {
          LOBYTE(v20) = 1;
        }
LABEL_29:
        MiLogZeroPageDecision((__int64)v1, v26, v29, v18, HighPart, v20);
        if ( v1[1].HighPart != HighPart )
          *p_HighPart = 0;
        v22 = _InterlockedExchange64((volatile __int64 *)&v1[19], 0LL);
        v23 = _InterlockedExchange64((volatile __int64 *)&v1[20], 0LL);
        v1[18].QuadPart += v22;
        v1[6].QuadPart += v23;
LABEL_32:
        v24 = (volatile LONG *)(v1[23].QuadPart + 14200);
        if ( v7 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v24);
        else
          ExReleaseSpinLockExclusive(v24, v7);
        return;
      }
    }
    else
    {
      v1[5].QuadPart = 1LL;
    }
LABEL_16:
    ++v1[39].LowPart;
    if ( v1[5].LowPart != 1 )
      v1[5].QuadPart = 1LL;
    p_HighPart = &v1[5].HighPart;
    if ( ++v1[5].HighPart == 1 || HighPart > v1[1].LowPart )
    {
      ++v1[34].HighPart;
      LOBYTE(v20) = MiReduceZeroingThreads(v1, a1, &v26);
      *p_HighPart = 0;
    }
    else
    {
      LOBYTE(v20) = 7;
    }
    goto LABEL_29;
  }
}
