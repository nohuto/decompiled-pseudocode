/*
 * XREFs of ?InitializeCpuQuery@Cpu@@QEAAJXZ @ 0x18035D530
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_G_COUNTER_BUFFER@@QEAAPEAXI@Z @ 0x18035D380 (--_G_COUNTER_BUFFER@@QEAAPEAXI@Z.c)
 *     ?TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z @ 0x18035D738 (-TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z.c)
 */

__int64 __fastcall Cpu::InitializeCpuQuery(Cpu *this)
{
  void **v1; // rsi
  __int64 result; // rax
  __int64 v4; // r8
  const struct std::nothrow_t *v5; // rdx
  Cpu **v6; // rbx
  void **v7; // rcx
  void **v8; // rcx
  Cpu *v9; // rax
  _OWORD *v10; // rax
  Cpu *v11; // rcx
  int v12; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING v13; // [rsp+48h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-20h] BYREF

  v1 = (void **)((char *)this + 8);
  v12 = 0;
  DestinationString = 0LL;
  v13 = 0LL;
  result = (unsigned int)PcwCreateQuery((char *)this + 8, 0LL) | 0x10000000;
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Processor Information");
    RtlInitUnicodeString(&v13, L"*");
    LOBYTE(v4) = 1;
    result = (unsigned int)PcwAddQueryItem(&v12, *v1, v4, &DestinationString, &v13, -1, 201392128LL, 0LL) | 0x10000000;
    if ( (int)result >= 0 )
    {
      v6 = (Cpu **)((char *)this + 16);
      v7 = (void **)*((_QWORD *)this + 2);
      if ( v7 )
        _COUNTER_BUFFER::`scalar deleting destructor'(v7, v5);
      v8 = (void **)*((_QWORD *)this + 3);
      if ( v8 )
        _COUNTER_BUFFER::`scalar deleting destructor'(v8, v5);
      v9 = (Cpu *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9 )
      {
        *(_OWORD *)v9 = 0LL;
        *((_OWORD *)v9 + 1) = 0LL;
      }
      *v6 = v9;
      v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v10 )
      {
        *v10 = 0LL;
        v10[1] = 0LL;
      }
      v11 = *v6;
      *((_QWORD *)this + 3) = v10;
      if ( v11 && v10 )
      {
        *(_QWORD *)v11 = 0LL;
        **((_QWORD **)this + 3) = 0LL;
        return Cpu::TmQueryPcwCounter(
                 v11,
                 (struct _COUNTER_BUFFER **)this + 2,
                 (struct _COUNTER_BUFFER **)this + 3,
                 *v1);
      }
      else
      {
        return 2147942414LL;
      }
    }
  }
  return result;
}
