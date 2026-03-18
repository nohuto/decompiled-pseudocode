/*
 * XREFs of ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x140168108
 * Callers:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x14010EB20 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___ @ 0x1401FC098 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_0557cbb2832d1680ca92e9237d4136.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1401FC310 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 *     ?QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z @ 0x1401FCF08 (-QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
        NSInstrumentation::CLeakTrackingAllocator *this,
        int a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  _DWORD *v6; // rcx

  if ( (a2 & *((_DWORD *)this + 20)) == a2 )
  {
    v4 = *((unsigned int *)this + 21);
    v5 = 0LL;
    v6 = (_DWORD *)((char *)this + 48);
    while ( v5 < v4 )
    {
      if ( *v6 == a2 )
      {
        *a3 = v5;
        return 1;
      }
      ++v5;
      ++v6;
    }
  }
  return 0;
}
