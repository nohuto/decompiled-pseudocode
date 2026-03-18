/*
 * XREFs of NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140B65300
 * Callers:
 *     DifNtConvertBetweenAuxiliaryCounterAndPerformanceCounterWrapper @ 0x14066F880 (DifNtConvertBetweenAuxiliaryCounterAndPerformanceCounterWrapper.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 */

__int64 __fastcall NtConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // rsi
  int v8; // ecx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    ProbeForRead(a2, 8uLL, 4u);
    v7 = *a2;
    v12 = v7;
    ProbeForWrite(a3, 8uLL, 4u);
    if ( a4 )
      ProbeForWrite(a4, 8uLL, 4u);
    v8 = guard_dispatch_icall_no_overrides(v7, (__int64)&v10);
    if ( v8 >= 0 )
    {
      *a3 = v10;
      if ( a4 )
        *a4 = v11;
    }
  }
  else
  {
    return (unsigned int)guard_dispatch_icall_no_overrides(*a2, (__int64)a3);
  }
  return (unsigned int)v8;
}
