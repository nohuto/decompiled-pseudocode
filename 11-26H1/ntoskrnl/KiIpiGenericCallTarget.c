/*
 * XREFs of KiIpiGenericCallTarget @ 0x14047B5E0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIpiGenericCallTarget(__int64 a1, ULONG_PTR QuadPart, __int64 a3, volatile signed __int32 *a4)
{
  unsigned int v4; // ebx
  LARGE_INTEGER v7; // rax
  ULONG_PTR v8; // r9
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  _InterlockedDecrement(a4);
  while ( *a4 )
  {
    if ( !KiBarrierWait && (HvlEnlightenments & 0x20) == 0 )
    {
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
      _InterlockedOr(v10, 0);
      QuadPart = PerformanceFrequency.QuadPart;
      v8 = MEMORY[0xFFFFF78000000350];
      if ( v7.QuadPart > (unsigned __int64)(MEMORY[0xFFFFF78000000350] + 300 * PerformanceFrequency.QuadPart) )
      {
        _InterlockedOr(v10, 0);
        if ( *a4 )
          KeBugCheckEx(0x1DBu, QuadPart, v7.QuadPart, v8, 0LL);
      }
    }
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v4);
    }
    else
    {
      _mm_pause();
    }
  }
  return guard_dispatch_icall_no_overrides(a3, QuadPart);
}
