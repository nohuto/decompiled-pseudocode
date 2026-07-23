/*
 * XREFs of EmonReleaseProfileResourcesInternal @ 0x140598774
 * Callers:
 *     EmonAllocateResources @ 0x1405976C4 (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x1405986E0 (EmonReleaseProfileResources.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140582B18 (HalpPmuReservedResourcesProcessorCallback.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall EmonReleaseProfileResourcesInternal(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // r14d
  unsigned int v4; // edi
  _BYTE *v5; // rsi
  unsigned __int16 i; // cx
  __int64 v8; // [rsp+20h] [rbp-138h] BYREF
  _QWORD v9[33]; // [rsp+28h] [rbp-130h] BYREF

  memset_0(v9, 0, 0x100uLL);
  v2 = 0;
  v8 = 2097153LL;
  memset_0(v9, 0, 0x100uLL);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  if ( ActiveProcessorCount )
  {
    v5 = (_BYTE *)(a1 + 40);
    do
    {
      if ( *v5 )
        KeAddProcessorAffinityEx((unsigned __int16 *)&v8, v4);
      ++v4;
      v5 += 80;
    }
    while ( v4 < ActiveProcessorCount );
  }
  for ( i = 0; i < (unsigned __int16)v8; ++i )
  {
    if ( v9[i] )
      return (unsigned int)HalpPmuReservedResourcesProcessorCallback(
                             (__int64)&v8,
                             (__int64)EmonReleaseReservedCounters,
                             a1,
                             a1);
  }
  return v2;
}
