/*
 * XREFs of MiUpdateNonPagedPoolNoSteal @ 0x14024FD1C
 * Callers:
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegSetNotifyOnEmpty @ 0x14025021C (RtlpHpSegSetNotifyOnEmpty.c)
 *     MiLogNoStealNonPagedPool @ 0x140250E98 (MiLogNoStealNonPagedPool.c)
 */

__int64 __fastcall MiUpdateNonPagedPoolNoSteal(unsigned __int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // r9
  unsigned __int64 i; // r8
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (volatile signed __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = *v3; ; i = result )
  {
    result = (i >> 9) & 1;
    if ( (_DWORD)result == (a2 == 1) )
      break;
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    result = _InterlockedCompareExchange64(
               v3,
               ((unsigned __int64)a2 << 9) ^ (i ^ ((unsigned __int64)a2 << 9)) & 0xFFFFFFFFFFFFFDFFuLL | 0x20,
               i);
    if ( i == result )
    {
      if ( !a2 )
      {
        _InterlockedDecrement64(&qword_140E2C8C0);
        return result;
      }
      _InterlockedIncrement64(&qword_140E2C8C0);
      result = RtlCSparseBitmapBitmaskRead(&ExpUuidLock.CycleTime, 2 * ((a1 - ExpUuidLock.ThreadLock) >> 20));
      if ( result )
      {
        result = (unsigned int)(result - 1);
        if ( (_DWORD)result != 2 )
        {
          v12 = 0x100000000100000LL;
          v6 = *((unsigned int *)&v12 + (int)result);
          result = 192LL * (int)result;
          v7 = (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)((a1 & -v6) + 0x10) ^ a1 & -v6) - result;
          v8 = v7 - 320;
          if ( v7 != 320 )
          {
            v12 = 0LL;
            result = RtlCSparseBitmapBitmaskRead(&ExpUuidLock.CycleTime, 2 * ((a1 - ExpUuidLock.ThreadLock) >> 20));
            if ( result )
            {
              result = (unsigned int)(result - 1);
              if ( (_DWORD)result != 2 )
              {
                result = RtlpHpSegSetNotifyOnEmpty(v8 + 192LL * (int)result + 320, a1, &v12);
                v9 = v12;
                if ( result && (result & 0xFFF) != 0 )
                  v10 = *(unsigned int *)(result + 4);
                else
LABEL_16:
                  v10 = 0LL;
                if ( stru_140E366D8.FirstArgument
                  && *(_DWORD *)stru_140E366D8.FirstArgument
                  && (*((_QWORD *)stru_140E366D8.FirstArgument + 2) & 0x400000008000LL) != 0 )
                {
                  v11 = *((_QWORD *)stru_140E366D8.FirstArgument + 3);
                  result = v11 & 0x400000008000LL;
                  if ( (v11 & 0x400000008000LL) == v11 )
                    return MiLogNoStealNonPagedPool(v11, a1, v10, v9);
                }
                return result;
              }
            }
          }
        }
      }
      v9 = 0LL;
      goto LABEL_16;
    }
  }
  return result;
}
