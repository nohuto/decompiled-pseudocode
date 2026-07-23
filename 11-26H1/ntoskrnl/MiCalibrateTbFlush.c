/*
 * XREFs of MiCalibrateTbFlush @ 0x140712BB4
 * Callers:
 *     MiInitializeTbFlush @ 0x140D05A54 (MiInitializeTbFlush.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiCalibrateTbFlush(unsigned __int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v5; // rbp
  char *AnyMultiplexedVm; // rax
  unsigned __int64 j; // r8
  unsigned int i; // edi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned int k; // edx
  __int64 v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r11
  unsigned __int64 result; // rax
  signed __int32 v22[8]; // [rsp+0h] [rbp-1C8h] BYREF
  _BYTE v23[208]; // [rsp+30h] [rbp-198h] BYREF
  _OWORD Base[8]; // [rsp+100h] [rbp-C8h] BYREF

  v5 = a2;
  memset_0(v23, 0, 0xC8uLL);
  *a4 = 0LL;
  a4[1] = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  MiInitializeTbFlushList((__int64)v23, (__int64)AnyMultiplexedVm, 20, 8, 128);
  for ( i = 0; i < 8; ++i )
  {
    v11 = __rdtsc();
    _InterlockedOr(v22, 0);
    if ( (_DWORD)v5 )
    {
      MiInsertTbFlushEntry((__int64)v23, a1, v5, 0);
      MiFlushTbList((__int64)v23);
    }
    else
    {
      MiIssueFlushTbEntire(0LL, (volatile _KAFFINITY_EX *)2, j);
    }
    _InterlockedOr(v22, 0);
    v12 = __rdtsc() - v11;
    *a4 += v12;
    *(_QWORD *)&Base[i] = v12;
    v13 = __rdtsc();
    _InterlockedOr(v22, 0);
    for ( j = 0LL; (unsigned int)j < (unsigned int)(a3 - v5) >> 1; j = (unsigned int)(j + 1) )
      ;
    _InterlockedOr(v22, 0);
    v14 = __rdtsc();
    v15 = (((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) - v13;
    a4[1] += v15;
    *((_QWORD *)&Base[i] + 1) = v15;
    if ( i >= 2 )
    {
      qsort(Base, i, 0x10uLL, MiTbFlushCostSort);
      for ( j = 0LL; (unsigned int)j <= i - 2; j = (unsigned int)(j + 1) )
      {
        v16 = 0LL;
        for ( k = 0; k < 3; ++k )
        {
          v18 = (unsigned int)j + k;
          v16 += *(_QWORD *)&Base[v18] + *((_QWORD *)&Base[v18] + 1);
        }
        v19 = v16 / 3;
        v20 = *(_QWORD *)&Base[(unsigned int)j] + *((_QWORD *)&Base[(unsigned int)j] + 1);
        if ( v20 >= 9 * (v16 / 3) / 0xA )
        {
          result = 0xCCCCCCCCCCCCCCCFuLL * v19;
          if ( v20 <= 11 * v19 / 0xA )
          {
            *(_OWORD *)a4 = Base[(unsigned int)j];
            return result;
          }
        }
      }
    }
  }
  *a4 /= (unsigned __int64)i;
  result = a4[1] / (unsigned __int64)i;
  a4[1] = result;
  return result;
}
